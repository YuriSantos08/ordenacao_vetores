# Documento de Especificação – Processador de CSV com Ordenação

## 1. Objetivo da Solução  
Desenvolver um programa em linguagem C capaz de:
- Ler dados de um arquivo CSV;
- Permitir ao usuário escolher uma coluna de ordenação;
- Ordenar os dados conforme a coluna escolhida;
- Exibir os dados ordenados no console;
- Salvar os dados ordenados em um novo arquivo CSV.

---

## 2. Descrição da Entrada e Saída de Dados  

###  Entrada:
- **Arquivo CSV**: Deve conter uma lista de produtos, com três campos por linha:
  - `Nome` (string)
  - `Estoque` (inteiro)
  - `Preço` (float)
- **Formato esperado (com separador vírgula)**:
  ```
  Arroz,30,5.49  
  Feijao,20,6.99  
  Acucar,50,4.30  
  ```
- **Separador**: Os campos devem estar separados por **vírgula (`,`)**.
- **Escolha do usuário**:
  - Qual campo utilizar na ordenação:
    - `1` – Nome
    - `2` – Estoque
    - `3` – Preço
  - Nome do arquivo de saída para salvar os dados ordenados.

###  Saída:
- Dados ordenados são exibidos no console;
- Um novo arquivo CSV é gerado com os dados organizados;
- O nome do arquivo de saída é definido pelo usuário.

---

## 3. Algoritmo de Ordenação Utilizado

###  Bubble Sort  
O código implementa três versões do **Bubble Sort**, uma para cada critério de ordenação:

- `bubbleSortNome`: ordena alfabeticamente os nomes dos produtos.
- `bubbleSortEstoque`: ordena em ordem crescente de estoque.
- `bubbleSortPreco`: ordena em ordem crescente de preço.

###  Troca de Elementos  
Uma função auxiliar `trocar()` é usada para realizar as trocas entre registros durante a ordenação.

---

## 4. Estrutura do Código e Funções Principais  

### `struct produto`  
Estrutura que representa um produto com os campos:
- `char nome[100]`
- `int estoque`
- `float preco`

###  Implementar leitura do CSV  
- Abre o arquivo CSV de entrada;
- Lê os dados utilizando `fgets()` e `strtok()` com separador `,`;
- Armazena os dados em um vetor de `struct produto`;
- Solicita ao usuário o critério de ordenação;
- Chama a função de ordenação correspondente;
- Imprime os dados ordenados;
- Solicita o nome do arquivo de saída e salva os dados ordenados.

###  Implementar funções de ordenação
- `bubbleSortNome(produtos, n)`
- `bubbleSortEstoque(produtos, n)`
- `bubbleSortPreco(produtos, n)`

Todas utilizam o algoritmo Bubble Sort.

---

## 5. Problemas Encontrados e Soluções Adotadas  

###  Separador do CSV  
- O programa está configurado para utilizar **vírgula (`,`)** como separador no `strtok()`, compatível com o formato tradicional de arquivos CSV.

###  Leitura de dados  
- O número de produtos no CSV é limitado a 100 registros.
- Cada linha é processada usando `fgets` e `strtok` com três chamadas sucessivas para extrair os campos.

### Falta de acentos e caracteres especiais  
- Ao utilizarmos a biblioteca locale.h continuava dando erro ao exibir os "ç" e "acentos" na impressão dos dados e mensagens. Então optamos por utilizar palavras sem acentuação, como por exemplo: "açúcar" virou "acucar", pois não encontramos uma solução que funcionasse corretamente no VSCode.

---

Este projeto foi desenvolvido como prática de manipulação de arquivos, ordenação e estruturas em C.
