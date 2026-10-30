# Ordenação de Preços com Bubble Sort em C

Projeto desenvolvido para a Experiência Prática IV da disciplina de Algoritmos e Pensamento Computacional. O programa utiliza o algoritmo Bubble Sort para organizar preços simulados de produtos de supermercado.

## Funcionalidades

- Armazena 10 preços em um vetor do tipo `float`;
- Exibe os valores na ordem original;
- Ordena os preços em ordem crescente;
- Ordena os preços em ordem decrescente;
- Apresenta todas as etapas de forma clara no terminal.

## Conceitos aplicados

- Vetores;
- Laços `for` aninhados;
- Estruturas condicionais `if`;
- Troca de valores com variável temporária;
- Algoritmo Bubble Sort;
- Formatação de saída com `printf`.

## Como executar

É necessário ter um compilador C instalado, como o GCC.

```cmd
gcc ordenacao_precos.c -o ordenacao_precos.exe
ordenacao_precos.exe
```

Caso utilize o GCC instalado pelo MSYS2 no Windows, configure o PATH temporariamente:

```cmd
set PATH=C:\msys64\ucrt64\bin;%PATH%
gcc ordenacao_precos.c -o ordenacao_precos.exe
ordenacao_precos.exe
```

## Resultado esperado

O programa exibe o vetor de preços original e os mesmos valores organizados do menor para o maior e do maior para o menor.
