#include <stdio.h>
#include <stdlib.h>

// PROGRAMA DE CÁLCULO BÁSICO //

int main()
{

    float nota1, nota2, nota3, nota4, media;
    nota1 = nota2 = nota3 = nota4 = media = 0;

    printf("==========Media escolar 1.0==========\n\n");
    printf("Digite a sua primeira nota bimestral: \n");
    scanf("%f", &nota1);
    printf("Digite a sua segunda nota bimestral: \n");
    scanf("%f", &nota2);
    printf("Digite a sua terceira nota bimestral: \n");
    scanf("%f", &nota3);
    printf("Digite a sua quarta nota bimestral: \n");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("A sua media escolar foi de: %f\n\n", media);

    if(media >= 7)
    {
        printf("Parabens, voce foi aprovado.\n\n");
    }else{
        printf("Voce foi reprovado.\n\n");
    }

    return 0;
}

