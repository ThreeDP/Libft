<div align="center" >
  <img src="/imgs/Libft.svg" alt="Libft" width="175" height="175">
  <h1>Biblioteca de funções em C</h1>
</div>

# Sobre
> O projeto Libft é uma biblioteca que contém algumas das funções base para o desenvolvimento de projetos na linguagem C. O objetivo do projeto é introduzir alguns dos conceitos do desenvolvimento de software como ponteiros, alocação e manipulação de memória dinámica, manipulação de strings, converções de tipo e listas encadeadas.

# Para começar
### 1. Clone do Projeto:
> Para utilizar a biblioteca basta realizar o clone do projeto utilizando o comando abaixo.

```bash
git clone git@github.com:ThreeDP/Libft.git
```

### 2. Criando a biblioteca:
> Para criar a biblioteca sem a parte de manipulação de lista encadeada execute comando abaixo

```bash
make
```

> Para criar a biblioteca com a parte de manipulação de lista encadeada execute o comando abaixo

```bash
make bonus
```

### 3. Compilando projeto com a biblioteca
> Para compilar seu projeto com a biblioteca, inclua o caminho do arquivo header da pasta Libft e execute o seguinte comando indicando o caminho da biblioteca e dos seus arquivos.

    #include "./Libft/libft.h

```bash
gcc -Wall -Werror -Wextra <files>.c -I ./Libft -L ./Libft -lft
```

### 4. Outros Comandos:
> Comandos necessários para a manutenção da biblioteca.

Excluir arquivos binários
> Para excluir arquivos binários gerados execute os seguinte comando.


```bash
make clean
```

Excluir arquivos binários e biblioteca
> Para excluir os arquivos binários e a biblioteca execute o seguinte comando.


```bash
make fclean
```

Excluir arquivos e re-compilar
> Para excluir os aquivos binários e a biblioteca e depois re-compilar a biblioteca execute.


```bash
make re
```

# TDD
> Durante parte do projeto algumas das funções foram desenvolvidas utilizado a técnica de desenvolvimento TDD, esse projeto ainda se encontra e desenvolvimento e em breve outros testes serão inseridos, e podem ser encontrados na pasta [tests](https://github.com/ThreeDP/Libft/tests). Toda as informações para execução estão descritas por lá e a ferramenta para o desenvolvimento dos teste foi a [minunit](https://github.com/siu/minunit)

# Agradecimentos
