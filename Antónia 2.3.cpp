#include <stdio.h>
#include <math.h>
 		int main(){
 			
 		int n, valor;
 		char codigo;
 		
 			printf("n\digiteo valor do livro:");
 			scanf("%c %d", &codigo, &n);
 			
 			switch ( codigo )
  {
    		case 'a' :
    		valor = 10 *n;
    		break;
    		
    		case 'b':
    		valor = 20 * n;
    		break;
    		
    		case 'c':
    		valor = 30 * n;
    		break;
    		
    		default:
    			printf("codigo invalido\n");
    			
    	}
    	printf("valor %d", valor);
			 return 0;
		 }
