<div align="center" >
  <img src="/imgs/Libft.svg" alt="Libft" width="175" height="175">
  <h3>Funções extremamente uteis para a linguagem C</h3>
</div>

# Status
[![norminette](https://github.com/ThreeDP/Libft/actions/workflows/norminette.yml/badge.svg)](https://github.com/ThreeDP/Libft/actions/workflows/norminette.yml)
[![mandatory](https://github.com/ThreeDP/Libft/actions/workflows/mandatory-test.yml/badge.svg)](https://github.com/ThreeDP/Libft/actions/workflows/mandatory-test.yml)
[![bonus](https://github.com/ThreeDP/Libft/actions/workflows/bonus-test.yml/badge.svg)](https://github.com/ThreeDP/Libft/actions/workflows/bonus-test.yml)
[![extra](https://github.com/ThreeDP/Libft/actions/workflows/extra-test.yml/badge.svg)](https://github.com/ThreeDP/Libft/actions/workflows/extra-test.yml)

# Pontuação final
[![dapaulin's 42 Libft Score](https://badge42.vercel.app/api/v2/cl9hhx9hp00400gmjtv4jf33f/project/2769407)](https://github.com/JaeSeoKim/badge42)

# Sobre
A libft pode parecer um projeto simples, porém não basta somente chamar um método como na maioria das linguagens atuais, aqui para que você possa tomar um copo de água você precisa fabricar seu próprio copo! (fazendo valer o ditado "o filho chora e a mãe não vê").

O projeto libft tem como objetivo reescrever funções de extrema importância durante o desenvolvimento utilizando a linguagem C e com isso trazer familaridade com algumas da ações que serão necessárias durante o desenvolvimento de qualquer outro projeto durante a formação da 42, durante o processo de desenvolvimento da lib será necessário lidar com ponteiros, entender conceitos de passagem de paramentro por referências ou por valor, alocação de memoria dinámica, deslocamento de memoria, manipulação de strings, conversão de tipos, listas encadeadas, entre outros.

# O que está incluso

# Como usar

Projetos desenvolvidos em linguagem C precisão ser compilados antes de fato serem usados. Aqui realizaremos esse processo utilizando a ferramenta make, muito utilizada para realizar automação da compilação e execução de projetos, todas a regras de compilação podem ser encontradas no arquivo Makefile.

Nesse projeto em específico o objetivo será criar um lib, que nada mais é que uma coleção de arquivos pré-compilados que serão utilizados na compilação de outros projetos.

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
> Um agradecimento especial para a Soninha e Rose pela energia positiva, boas conversas e por deixarem a 42 impecável e confortável para todo mundo da 42. Também tenho que agradecer o Senhor Francisco pelas conversas bem humoradas da madruga e por todos os ensinamentos passados. E aos amigos e cadetes guerreiros de todos os dias que me ajudaram demais com o desenvolvimento desse projeto, em especial a Aline, Tio Lula, David, Gui, Ranna, Renan I., Lip, Vinicius, Renan do Makefile, Verona e Aurora por todo o conhecimento compartilhado, me desculpe se esqueci de alguém mais no geral obrigado a todo mundo da comunidade 42.
