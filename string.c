#include <stdio.h>
#include <string.h>

int main(){


    char nome[50];
    char senha[20];

    printf("Digite seu nome: ");
    fgets(nome, 50, stdin);
    nome[strcsp(nome, "\n")] = '\0';

    printf("Digite seu nome: ");
    fgets(senha, 20, stdin);
    senha[strcsp(senha, "\n")] = '\0';

    printf("Seu nome: ", nome);
    printf("Sua senha: ", senha);
    


}