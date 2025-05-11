
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

## ⚙️ Como Compilar e Executar

### Pré-requisitos
É necessário ter um compilador C instalado (como o GCC).

### Compilação
Navegue até o diretório do projeto no terminal e compile o código:

```bash
gcc leitor_csv.c -o leitor_csv.exe
Execução
Execute o programa compilado:

bash
Copiar
Editar
./leitor_csv.exe
Interação
O programa solicitará:

O nome do arquivo CSV de entrada (ex: produtos.csv).

O número da coluna para ordenar:

1 para Nome

2 para Estoque

3 para Preço

O nome do arquivo CSV de saída (ex: saida_nome.csv)

Autores: GUILHERME ANDRADE, YURI DA COSTA, MYGUEL ARCANJO, ICARO DE OLIVEIRA, LUIZ CARLOS .
