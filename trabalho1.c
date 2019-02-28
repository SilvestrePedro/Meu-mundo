#include <stdio.h>
#include <math.h>

int main (){
    char nome1 [30],nome2[30],nome3[30];
    int idade1,idade2,idade3, somaidade;
    float mediaidade;

    printf("Informe 3 nomes: \n");
    scanf("%s %s %s", &nome1, &nome2, &nome3);
    printf("Informe as idades \n");
    scanf("%d %d %d",&idade1 ,&idade2  ,&idade3);
    somaidade = idade1 + idade2 + idade3;
    mediaidade = somaidade/3;

    printf("Nomes: \n");
    printf("%s \n %s \n %s\n ", nome1, nome2, nome3);
    printf("Media da idades: %f", mediaidade);

return 0;
}
