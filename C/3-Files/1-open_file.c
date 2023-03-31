#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {
        char nome_arquivo[50]; // string para armazenar o nome do arquivo
        sprintf(nome_arquivo, "meu_arquivo_%d.txt", i); // cria um nome de arquivo diferente para cada iteração
        FILE *fp = fopen(nome_arquivo, "w"); // abre o arquivo para escrita

        for (j = 1; j <= i; j++) {
            printf("%d ", j); // imprime os valores do loop no console
            fprintf(fp, "%d ", j); // escreve os valores do loop no arquivo
        }
        printf("\n"); // pula uma linha no console
        fprintf(fp, "\n"); // pula uma linha no arquivo

        fclose(fp); // fecha o arquivo
    }

    return 0;
}

