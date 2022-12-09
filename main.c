#include <stdio.h>
#include <stdlib.h>

int i,j;main(){
    char palavra[50],inversa[50];
        printf("Informe uma palavra: ");
        scanf("%s",&palavra);
        j=strlen(palavra)-1;
        for (i=0;i<strlen(palavra);i++){
            inversa[j--]=palavra[i];	}
        for (i=0,j=0;i<strlen(palavra);i++,j++){
            if (palavra[i]!=inversa[j]){
                 printf("\nNao eh um Palindromo\n\n");
                 system("pause");
                 return 0;}}
                 printf("\nEh um Palindromo");
                 printf("\n\n");system("pause");}
