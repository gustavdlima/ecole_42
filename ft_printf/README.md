<p align ="center">
	<img src="images/../../images/fase1/ft_printf.png">
</p>

<p>
	<h1> ft_printf </h1>
</p>

<p>
Nesse projeto recriamos algumas funções e comportamento da printf, função que faz parte da biblioteca padrão de funções de entrada e saída (stdio.h) do C.
</p>

<p>
	<h2> Pontuação </h2>
</p>
<p>
	<img src="images/../../images/125.jpg">
</p>

<p>
	<h2> Como usar a função:
</p>

<p>
	<h3> Para usar a biblioteca nas suas funções, inclua o header: </h3>

```c
#include "ft_printf.h"
```
</p>

```bash
# Clone o projeto e acesse a pasta
git clone git@github.com:gustavdlima/ecole_42.git && cd ft_printf

# Crie um arquivo main
touch main.c

# Compile a biblioteca
make

# Compile o main com a biblioteca
clang libftprintf.a main.c

# Fim!
```

<p>
	<h2> Formatos </h2>
</p>

<table>
  <tr>
            <th>Formato</th>
            <th>Descrição</th>
        </tr>
    </thead>
    <tbody>
	</thead>
        <tr>
            <td align="center">c</td>
            <td>Imprime o caractere que tem o código ASCII correspondente ao valor dado.</td>
        </tr>
        <tr>
            <td align="center">s</td>
            <td>Imprime uma sequência de caracteres (string).</td>
        </tr>
        <tr>
            <td align="center">p</td>
            <td>Exibe o endereço de memória do ponteiro em notação hexadecimal.</td>
        </tr>
        <tr>
            <td align="center">d</td>
            <td>Imprime número decimal inteiro (int).</td>
        </tr>
        <tr>
            <td align="center">u</td>
            <td>Imprime número decimal natural (unsigned int).</td>
        </tr>
        <tr>
            <td align="center">x</td>
            <td>Imprime Número inteiro representado na base hexadecimal. Exemplo: 42f7 (corresponde ao decimal 17143). Se usarmos %X, as letras serão maiúsculas: 42F7.</td>
        </tr>
		<tr>
            <td align="center">%</td>
            <td> Imprime %.</td>
        </tr>
    </tbody>
</table>
