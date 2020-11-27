#include <stdio.h>

int main(){

    int fatorial, n;
    printf("insira o numero que vc quer fatorar\n");
    scanf("%i",&n);

    for(fatorial=1;n>=1; n--){
    fatorial *= n;
    }
    printf("o fator do seu numero e: %i",fatorial);
    return 0;
}


