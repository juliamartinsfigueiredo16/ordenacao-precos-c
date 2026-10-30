#include <stdio.h>

#define TAMANHO 10

int main() {
    /* Vetor com os precos simulados de produtos de supermercado. */
    float precosOriginais[TAMANHO] = {
        12.50, 8.99, 25.00, 4.75, 18.30,
        7.49, 31.90, 15.60, 9.25, 22.40
    };
    float precosCrescente[TAMANHO];
    float precosDecrescente[TAMANHO];
    float temporario;
    int i;
    int j;

    /* Copia o vetor original para preservar os dados iniciais. */
    for (i = 0; i < TAMANHO; i++) {
        precosCrescente[i] = precosOriginais[i];
        precosDecrescente[i] = precosOriginais[i];
    }

    printf("=== ORDENACAO DE PRECOS DE SUPERMERCADO ===\n");

    printf("\n--- PRECOS ORIGINAIS ---\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("Produto %d: R$ %.2f\n", i + 1, precosOriginais[i]);
    }

    /* Bubble Sort em ordem crescente. */
    for (i = 0; i < TAMANHO - 1; i++) {
        for (j = 0; j < TAMANHO - 1 - i; j++) {
            if (precosCrescente[j] > precosCrescente[j + 1]) {
                temporario = precosCrescente[j];
                precosCrescente[j] = precosCrescente[j + 1];
                precosCrescente[j + 1] = temporario;
            }
        }
    }

    printf("\n--- PRECOS EM ORDEM CRESCENTE ---\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("Posicao %d: R$ %.2f\n", i + 1, precosCrescente[i]);
    }

    /* Bubble Sort em ordem decrescente. */
    for (i = 0; i < TAMANHO - 1; i++) {
        for (j = 0; j < TAMANHO - 1 - i; j++) {
            if (precosDecrescente[j] < precosDecrescente[j + 1]) {
                temporario = precosDecrescente[j];
                precosDecrescente[j] = precosDecrescente[j + 1];
                precosDecrescente[j + 1] = temporario;
            }
        }
    }

    printf("\n--- PRECOS EM ORDEM DECRESCENTE ---\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("Posicao %d: R$ %.2f\n", i + 1, precosDecrescente[i]);
    }

    return 0;
}
