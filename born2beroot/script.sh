#!/bin/bash

arch=$(hostnamectl | sed -n '7,10p' | sed 's/^[ \t]*//')
cpu=$(lscpu | sed -n '5p' | sed -r 's/: */:/g')

r_cpu=$(lscpu | sed -n '5p' | awk '{print $2}')
thread=$(lscpu | grep 'Thread(s) per core:' | awk '{print $4}')
core=$(lscpu | egrep 'Core\(s\)|Socket' | tr '\n' ' ' | awk '{core=$4 * $6} {print core}')
v_cpu=$((core * thread * r_cpu))

ram=$(free -m | grep Mem | awk '{print "Memory Usage: "$3"/"$2"MB","("$3/$2 * 100"%)"}')
mem=$(df -BG | awk '{total=total+$2} {in_use=in_use+$3} {perc=perc+$5} END{print "Disk Usage: "in_use"/"total"GB("perc"%)"}')
p_cpu=$(mpstat | grep "all" | awk -F " " '{print "CPU Load: "(100 - $12)"%"}')
last_reboot=$(who -b | awk '{print "Last Reboot: " $4, $5, $6}'| sed 's/^[ \t]*//')

lvm=$(
if grep -qs 'LVM' /proc/mounts;
then
        echo "LVM Use: Yes"
else
        echo "LVM Use: No"
fi
)

connections=$(ss -tn src :4242 | grep -i "estab" | wc -l | awk '{print "Connections TCP: "$1}')
howmuchon=$(w -h | awk 'END{print "User Log: "NR}' | tr -d '\n')
address=$(ip route list | grep default | awk '{print "Network: " $3}' | tr -d '\n'; ip link show | grep ether | awk '{print " ("$2")"}')
howmuchsudo=$(sudo journalctl _COMM=sudo | grep COMMAND | awk 'END{print"Sudo: " NR " cmd"}')

wall <<-BASH
$arch
$cpu
vCPU:$v_cpu
$ram
$mem
$p_cpu
$last_reboot
$lvm
$connections ESTABLISHED
$howmuchon
$address
$howmuchsudo
BASH
