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

# Como usar

Projetos desenvolvidos em linguagem C precisão ser compilados antes de fato serem usados. Aqui realizaremos esse processo utilizando a ferramenta make, muito utilizada para realizar automação da compilação e execução de projetos, todas a regras de compilação podem ser encontradas no arquivo Makefile.

Nesse projeto em específico o objetivo será criar um lib, que nada mais é que uma coleção de arquivos pré-compilados que serão utilizados na compilação de outros projetos.

1. **Clone do Projeto**
    > Para utilizar a biblioteca basta realizar o clone do projeto utilizando o comando abaixo.

    ```bash
    git clone git@github.com:ThreeDP/Libft.git
    ```
    
2. **Criando a biblioteca**
    > Para criar a biblioteca sem a parte de manipulação de lista encadeada execute comando abaixo
    
    ```bash
    make
    ```
    
    > Para criar a biblioteca com a parte de manipulação de lista encadeada execute o comando abaixo
    
    ```bash
    make bonus
    ```
    
3. **Compilando projeto com a biblioteca**
    > Para compilar seu projeto com a biblioteca, inclua o caminho do arquivo header da pasta Libft e execute o seguinte comando indicando o caminho da biblioteca e dos seus arquivos.
    
        #include "./Libft/libft.h
    
    ```bash
    gcc -Wall -Werror -Wextra <files>.c -I ./Libft -L ./Libft -lft
    ```
    
4. **Outros Comandos**
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

# O que está incluso

1. **Funções básicas**
    ```C
    int			ft_isalpha(int c);
    ```
    > Verifica se o inteiro passado está na faixa de caractere alfabético da tabela ASCII.
    ```C
    int			ft_islower(int c);
    ```
    > Verifica se o inteiro passado está na faixa de caractere alfabético minúsculo da tabela ASCII.
    ```C
    int			ft_isupper(int c);
    ```
    > Verifica se o inteiro passado está na faixa de caractere alfabético maiúsculo da tabela ASCII.
    ```C
    int			ft_isspace(int c);
    ```
    > Verifica se o inteiro passado é um dos caracteres de espaçamento, '\t', '\n', '\v', '\f', '\r' ou ' ', da tabela ASCII.
    ```C
    int			ft_isdigit(int c);
    ```
    > Verifica se o inteiro passado está na faixa de caractere numérico da tabela ASCII.
    ```C
    int			ft_isalnum(int c);
    ```
    > Verifica se o inteiro passado está na faixa de caractere alfabético e numérico, alfanumérico, da tabela ASCII.
    ```C
    int			ft_isascii(int c);
    ```
    > Verifica se o inteiro passado é um caracter ASCII válido.
    ```C
    int			ft_isprint(int c);
    ```
    > Verifica se o inteiro passado está na faixa de caracteres  ASCII printavéis.
    ```C
    size_t                  ft_strlen(const char *str);
    ```
    > Retorna o numéro de caracteres contidos na string.
    ```C
    int			ft_putchar_fd(char c, int fd);
    ```
    > Realiza a escrita de um único caracter em um fd.
    ```C
    int			ft_putstr_fd(char *s, int fd);
    ```
    > Realiza a escrita de uma cadeia caracteres em um fd.
    ```C
    int			ft_putendl_fd(char *s, int fd);
    ```
    > Realiza a escrita de uma cadeia caracteres seguido de um '\n', quebra de linha, em um fd.
    ```C
    int			ft_putnbr_fd(int nb, int fd);
    ```
    > Realiza a escrita de valor numérico, inteiro, em um fd.
    ```C
    int			ft_puthex_fd(unsigned long nb, int fd, char *caset);
    ```
    > Realiza a escrita de valor hexadecimal em um fd.

2. **Manipulação de memória**
    ```C
    void		*ft_memset(void *str, int c_fill, size_t n_bytes);
    ```
    ```C
    void		ft_bzero(void *str, size_t n_bytes);
    ```
    ```C
    void		*ft_memcpy(void *dest, const void *src, size_t n_bytes);
    ```
    ```C
    void		*ft_memmove(void *dest, const void *src, size_t n_bytes);
    ```
    ```C
    void		*ft_memchr(const void *str, int c, size_t n);
    ```
    ```C
    int			ft_memcmp(const void *s1, const void *s2, size_t n);
    ```
    ```C
    void		*ft_calloc(size_t nmemb, size_t size);
    ```

3. **Manipulação de strings**
    ```C
    size_t		ft_strlcpy(char *dst, const char *src, size_t size);
    ```
    ```C
    size_t		ft_strlcat(char *dst, const char *src, size_t size);
    ```
    ```C
    char		*ft_strchr(const char *str, int c);
    ```
    ```C
    char		*ft_strrchr(const char *str, int c);
    ```
    ```C
    int			ft_strncmp(const char *s1, const char *s2, size_t n);
    ```
    ```C
    char		*ft_strnstr(const char *big, const char *little, size_t len);
    ```
    ```C
    char		*ft_strdup(const char *s);
    ```
    ```C
    char		*ft_strndup(const char *s, size_t size);
    ```
    ```C
    char		*ft_substr(char const *s, unsigned int start, size_t len);
    ```
    ```C
    char		*ft_strjoin(char const *s1, char const *s2);
    ```
    ```C
    char		*ft_strtrim(char const *s1, char const *set);
    ```
    ```C
    char		**ft_split(char const *s, char c);
    ```
    ```C
    char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
    ```
    ```C
    void		ft_striteri(char *s, void (*f)(unsigned int, char*));
    ```

4. **Converções**
    ```C
    int			ft_toupper(int c);
    ```
    > Realiza a conversão de um caracter ASCII alfabético minúsculo para maiúsculo.
    ```C
    int			ft_tolower(int c);
    ```
    > Realiza a conversão de um caracter ASCII alfabético  maiúsculo para minúsculo.  
    ```C
    char		*ft_itoa(int n);
    ```
    ```C
    char		*ft_uitoa(unsigned int n);
    ```
    ```C
    char		*ft_itoa_base(unsigned long n, int base);
    ```
    ```C
    int			ft_atoi(const char *nptr);
    ```

6. **Manipulação de lista encadeada**
    ```C
    t_list		*ft_lstnew(void *content);
    ```
    ```C
    void		  ft_lstadd_front(t_list **list, t_list *new);
    ```
    ```C
    int			  ft_lstsize(t_list *lst);
    ```
    ```C
    t_list		*ft_lstlast(t_list *lst);
    ```
    ```C
    void		  ft_lstadd_back(t_list **lst, t_list *new);
    ```
    ```C
    void		  ft_lstdelone(t_list *lst, void (*del)(void *));
    ```
    ```C
    void		  ft_lstclear(t_list **lst, void (*del)(void *));
    ```
    ```C
    void		  ft_lstiter(t_list *lst, void (*f)(void *));
    ```
    ```C
    t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
    ```

# TDD
Durante parte do projeto algumas das funções foram desenvolvidas utilizado a técnica de desenvolvimento TDD, esse projeto ainda se encontra e desenvolvimento e em breve outros testes serão inseridos, e podem ser encontrados na pasta [tests](https://github.com/ThreeDP/Libft/tests). Todas as informações para execução estão descritas por lá e a ferramenta para o desenvolvimento dos teste foi a [minunit](https://github.com/siu/minunit)

# Glossário

- **ASCII**: A palavra ASCII é um acrônimo em inglês que significa "American Standard Code for Information Interchange". Em português, pode ser traduzido como "Código Padrão Americano para Intercâmbio de Informações".
- **FD**: Em C, um file descriptor (descritor de arquivo) é um número inteiro que é usado para identificar um arquivo aberto pelo programa.
- **lib**: Em C, o termo "lib" é uma abreviação comum para "library" (biblioteca, em português). Uma biblioteca em C é um conjunto de funções, variáveis e definições que são compiladas separadamente e podem ser reutilizadas em vários programas.
- **make**: O termo "make" refere-se ao utilitário de construção de software chamado "make". O "make" é uma ferramenta amplamente utilizada para automatizar o processo de compilação e construção de programas em C e outras linguagens de programação.
- **TDD**: O termo "TDD" significa "Test-Driven Development", que pode ser traduzido como "Desenvolvimento Orientado a Testes". TDD é uma prática de desenvolvimento de software em que os testes automatizados são criados antes da implementação do código.

# Agradecimentos
Um agradecimento especial para a Soninha e Rose pela energia positiva, boas conversas e por deixarem a 42 impecável e confortável para todo mundo da 42. Também tenho que agradecer o Senhor Francisco pelas conversas bem humoradas da madruga e por todos os ensinamentos passados. E aos amigos e cadetes guerreiros de todos os dias que me ajudaram demais com o desenvolvimento desse projeto, em especial a Aline, Tio Lula, David, Gui, Ranna, Renan I., Lip, Vinicius, Renan do Makefile, Verona e Aurora por todo o conhecimento compartilhado, me desculpe se esqueci de alguém mais no geral obrigado a todo mundo da comunidade 42.
