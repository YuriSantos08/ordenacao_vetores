
# Processador de CSV com Ordenação em C

Este projeto contém um programa em linguagem C que lê dados de um arquivo CSV, permite ao usuário escolher uma coluna para ordenação e salva os dados ordenados em um novo arquivo CSV.

---

## Descrição

O programa implementa as seguintes funcionalidades:

- Leitura de dados de um arquivo CSV especificado pelo usuário.
- Suporte para arquivos CSV com campos **Nome** (string), **Estoque** (inteiro) e **Preço** (float).
- Solicitação ao usuário para escolher a coluna de ordenação (Nome, Estoque ou Preço).
- Ordenação dos dados utilizando o algoritmo **Bubble Sort**.
- Geração de um novo arquivo CSV com os dados ordenados, com nome definido pelo usuário.

---

##  Arquivos no Repositório

- **leitor_csv.c**: Código-fonte principal do programa em C.
- **produtos.csv**: Arquivo CSV de exemplo para teste.
- **Especificações.md**: Documento detalhando a especificação do projeto, incluindo objetivo, entrada/saída, algoritmo de ordenação, estrutura do código e desafios.
- **README.md**: Este arquivo.

---

##  Como Compilar e Executar

### Pré-requisitos
É necessário ter um compilador C instalado (como o GCC).

### Compilação
Navegue até o diretório do projeto no terminal.

Compile o código usando o seguinte comando:
**gcc leitor_csv.c -o leitor_csv.exe**
 Execução
Após a compilação, execute o programa com o seguinte comando:
**./leitor_csv.exe**
##Interação com o Usuário
O programa solicitará:

Nome do arquivo CSV de entrada (ex: produtos.csv).

Número da coluna para ordenação:

1 para Nome

2 para Estoque

3 para Preço

Nome do arquivo CSV de saída (ex: saida_nome.csv).

###  Autores
Guilherme Andrade

Yuri da Costa

Myguel Arcanjo

Icaro de Oliveira

Luiz Carlos
