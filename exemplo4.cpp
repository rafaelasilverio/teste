/*
Fun��o: somar dois n�meros
Autor e autor : Mikaela da Silva e Rafaela Petelin 
Data de cria��o: 25/09/2019
Data de altera��o: 25/09/2019
*/

#include <iostream>
int main(){
    int num1 = 0, num2 = 0, quoc = 0, resto = 0;
    printf("insira o primeiro numero: ");
    scanf("%1", &num1);
     printf("insira o segundo numero: ");
    scanf("%1", &num2);
    quoc = num1 / num2;
    resto = num1 - (quoc * num2);
    printf("O resto �: %i",resto);
    return 0;
    system("pause");
}
