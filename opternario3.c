# include <stdio.h>
int main(){
    int num1, num2, maior;

    printf("Digite o 1º número: ");
    scanf("%d", &num1);
    printf("digite o 2º número: ");
    scanf("%d", &num2);

    num1 > num2 ? (maior = num1) : (maior = num2);

    printf("1º numero: %d\n", num1);
    printf("2º numero: %d\n", num2);
    printf("O numero maior é: %d\n", maior);

    return 0;
}
