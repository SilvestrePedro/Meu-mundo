#include<stdio.h>
#include<math.h>

        int main()
        {
            int idade1, idade2, idade3;
            char nome1 [10],nome2 [10], nome3 [10];
            int media;
            printf("Primeiro nome1 e idadede\n");
            scanf("%s %d", nome1, &idade1);

            printf("Segundo nome e idade\n");
            scanf("%s %d", nome2, &idade2);

            printf("terceiro nome e idade\n");
            scanf("%s %d", nome3, &idade3);

            media = (idade1 + idade2 +idade3)/3;

            printf("media %d \n", media);
            printf("Nome: %s idade1: %d\n", nome1, idade1);

            printf("media %d \n", media);
            printf("Nome: %s idade2: %d\n", nome2, idade2);

            printf("media %d \n", media);
            printf("Nome: %s idade3: %d\n", nome3, idade3);

            return 0;
        }
