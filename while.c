#include <stdio.h>
#include<math.h>
#include <locale.h>

    int main(){
        float a, b, c, media;
        setlocale(LC_ALL,"");
        do{
            printf("Informe a sua 1 nota");
            scanf("%f", &a);

            printf("Informe a sua 2 nota");
            scanf("%f", &b);

            printf("Informe a sua 3 nota");
            scanf("%f", &c);
            if(a < 0)
                break;
            media=(a+b+c)/3;
                printf("media é: %f\n", media);
        }while(1);

    return 0;
    }
