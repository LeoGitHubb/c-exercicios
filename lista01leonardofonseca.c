#include <stdio.h>
int main(void)
{
    float PrimeiraNota,SegundaNota;
    
    printf("Digite a primeira nota: ");
    scanf("%f" , &PrimeiraNota);
    printf("Digite a segunda nota: ");
    scanf("%f", &SegundaNota);


    float Soma = PrimeiraNota+SegundaNota; 

    float Media = Soma/2;



    if ( Media >= 5 ){
        printf("Aluno aprovado!");
    }
    
    else {
        printf("Aluno reprovado!");

    }

    return 0;
}