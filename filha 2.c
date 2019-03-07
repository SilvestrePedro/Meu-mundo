#include <stdio.h>
#include<stdlib.h>

int main(int argc, char *argv)
{

     int a, b, c, n, mi;
     float media;

     if(argc !=4){
    printf("Digite os valores das tres idades: ");
    scanf("%d %d %d", &a, &b, &c);
}else

{
    a = atoi (argv[1]);
    b = atoi (argv[2]);
    c = atoi (argv[3]);

}

     mi = a;
     if(a>b)
        mi=b;
     if (b>c)
        mi = c;
    printf("menor: %d\n",mi);

    n= a + b + c;
    media = (float) n/3.0;
    printf("media: %.2f\n",media);

return 0;
}
