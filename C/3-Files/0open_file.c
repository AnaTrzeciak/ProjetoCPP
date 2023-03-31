#include <stdio.h>

int main() {
    int i, j;
    FILE *fp;

    for (i = 1; i <= 5; i++) {
        char nome_arquivo[50]; // string para armazenar o nome do arquivo
        sprintf(nome_arquivo, "meu_arquivo.txt"); // nome do arquivo
        fp = fopen(nome_arquivo, "a"); // abre o arquivo no modo append

        for (j = 1; j <=3; j++) {
            printf("%d ", j); // imprime os valores do loop no console
            fprintf(fp, "%d ", j); // escreve os valores do loop no arquivo
        }
        printf("\n"); // pula uma linha no console
        fprintf(fp, "\n"); // pula uma linha no arquivo

        fclose(fp); // fecha o arquivo

        fp = fopen(nome_arquivo, "a"); // abre o arquivo novamente no modo append
    }

    fclose(fp); // fecha o arquivo

    return 0;
}

