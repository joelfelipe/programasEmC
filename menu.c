#include <stdio.h>


int sair() {
    char resposta;

    printf("Deseja sair? (s/n): ");
    scanf(" %c", &resposta);

    if (resposta == 's' || resposta == 'S') {
        return 1; // Indica que o usuário deseja sair
    } else if (resposta == 'n' || resposta == 'N') {
        return 0; // Indica que o usuário não deseja sair
    } else {
        printf("Resposta inválida. Tente novamente.\n");
        return sair(); // Chama a função novamente para repetir a pergunta
    }
}

int menu(){
//opções    
}

void main()
{
    int x = 0;
    while(x == 0){
        x = sair();
    }
    printf("Hello World");
}