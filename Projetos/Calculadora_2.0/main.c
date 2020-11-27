#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

int main()
{
    float num1, num2, resultado;
    char op = '0';

    do{
        num1 = num2 = resultado = 0; //resetando as varáveis
        //imprimindo as opções da calculadora
        printf(" (1)somar\n");
        printf(" (2)subtrair\n");
        printf(" (3)multiplicar\n");
        printf(" (4)dividir\n");

        printf("Informe a operacao:\n");
        op = getche();
        printf("\n");

        if(op!= '0'){


        printf("Digite o primeiro numero:\n");
        scanf("%f", &num1);
        printf("Digite o segundo numero:\n");
        scanf("%f", &num2);

            if(op=='1'){
                resultado = num1 + num2;
            }else{
                if(op=='2'){
                    resultado = num1 - num2;
                }else{
                    if(op=='3'){
                        resultado = num1 * num2;
                    }else{
                        if(op=='4'){
                            resultado = num1 / num2;
                        }
                    }
                }
            }
        }
        printf("\nO resultado e %f\n", resultado);

        //system("pause"); // parar o programa
        printf("\nAperte uma tecla para uma nova operacao\n");
        getch();

        system("cls"); // limpar a tela

    }while(op!=0);
}

