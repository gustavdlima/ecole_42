<p align ="center">
	<img src="images/../../images/fase1/gnl.png">
</p>

<p>
	<h1> Get_Next_Line </h1>
</p>

<p>
	Get Next Line é um projeto que pede a criação de uma função semelhante à getline do CPP e fgets do C. Esta função permite que um arquivo seja lido linha após linha se chamado em um loop.
</p>

<p>
	<h2> Pontuação </h2>
</p>
<p>
	<img src="images/../../images/100.jpg">
</p>

<p>
	<h2> Como usar a função: </h2>
</p>

<p>
	<h3> Para usar a biblioteca nas suas funções, inclua o header: </h3>

```c
#include "get_next_line.h"
```
</p>

```bash
# Clone o projeto e acesse a pasta
git clone git@github.com:gustavdlima/ecole_42.git && cd gnl

# Crie um arquivo main
touch main.c

# Compile
gcc -Wall -Wextra -Werror -D BUFFER_SIZE=x <arquivos>.c.
```

<p>
	<h2>  Tabela de referência  </h2>
</p>

<table>
    <thead>
        <tr>
            <th>GNL</th>
            <th>Descrição</th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td><a href=get_next_line.c>*get_next_line</a></td>
            <td>Imprime a linha do file descriptor.</td>
        </tr>
        <tr>
            <td><a href=get_next_line.c>*line_reader</a></td>
            <td>Lê e retorna a linha.</td>
        </tr>
        <tr>
            <td><a href=get_next_line.c>get_line</a></td>
            <td>Lê o arquivo do File Descriptor e armazena as informações.</td>
        </tr>
        <tr>
            <td><a href=get_next_line.c>*line_adjustment</a></td>
            <td>Ajusta a variável estática e retorna a linha.</td>
        </tr>
        <tr>
            <td><a href=get_next_line.c>free_ptr</a></td>
            <td>Libera a memória e seta o espaço como nulo.</td>
        </tr>
        </tr>
    </tbody>

<table>
    <thead>
        <tr>
            <th>Libft</th>
            <th>Descrição</th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td><a href=get_next_line_utils.c>ft_strchr</a></td>
            <td>Procura pela primeira ocorrência do caractere c na string.</td>
        </tr>
        <tr>
            <td><a href=get_next_line_utils.c>ft_strdup</a></td>
            <td>Retorna um ponteiro a uma string de bytes nulo, que é um duplicado da string.</td>
        </tr>
        <tr>
            <td><a href=get_next_line_utils.c>ft_strlen</td>
            <td>Computa o tamanho da string, mas não inclui caracteres NULL.</td>
        </tr>
        <tr>
            <td><a href=get_next_line_utils.c>ft_strjoin</a></td>
            <td>Devolve uma nova string, que é o resultado da concatenação de 's1' e 's2'.</td>
        </tr>
        <tr>
            <td><a href=get_next_line_utils.c>ft_substr</a></td>
            <td>Devolve uma substring da string 's'. A substring começa no índice 'start' e é de tamanho máximo 'len'.</td>
        </tr>
        </tr>
    </tbody>
