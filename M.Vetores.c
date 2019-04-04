#include<stdio.h>
#include<math.h>

        int main (){
            int v[100];//{0-9};
            int i;

        for(i=0; i<100; i++)
            v[i]=0;

            v[0]=99;
            v[5]=9;
            v[25]=3;
            v[15]=18;
        for(i=99; i>-1; i--)
        printf("pos %d: %d \n", i,v[i]);

    return 0;
        }
