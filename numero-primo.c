#include <stdio.h>

void ehPrimo(int num, int divisor){
    if(divisor <= 1){
        printf("%d eh primo\n", num);
    } else if (num % divisor == 0){
        printf("%d nao eh primo\n", num);
    } else {
        ehPrimo(num, divisor - 1);
    }
}

int sair() {
    char resposta;

    printf("Deseja sair? (s/n): ");
    scanf(" %c", &resposta);

    if (resposta == 's' || resposta == 'S') {
        return 1; // Indica que o usuário deseja sair
    } else if (resposta == 'n' || resposta == 'N') {
        return 0; // Indica que o usuário não deseja sair
    } else {
        printf("Resposta invalida. Tente novamente.\n");
        return sair(); // Chama a função novamente para repetir a pergunta
    }
}

int pergunta(){
    int num;

    printf("Qual numero voce quer saber se eh primo? ");
    scanf(" %d", &num);
    if(num <= 0 ){
        printf("\nNumero abaixo de Um nao sao permitidos.\n");
        if(sair() == 1){
            return num;
        } else {
            num = pergunta();   
        }
    }
    return num;
}

void main()
{
    int num = 1;
    while(num > 0){
        num = pergunta();
        if(num > 0)
            ehPrimo(num, num-1);
    }
}