#include <stdio.h>
#include <stdlib.h>

int main(){
    int contador;
    int k;
    char letraGuess[27];
    char word[15];
    int i;
    int j;
    char letra;
    printf("Introduce una palabra en minusculas\n");
    fgets(word, 15, stdin);
    for (i=0;i<15;i++){
        if (word[i]==NULL){
            break;
        }
    }
    printf("La palabra tiene %d letras\n",i-1);
    while (i!=0){
        printf("\nIntroduce una letra: ");
        scanf("%c",&letra);
        if ('a'<=letra && 'z'>=letra){
            printf("\nEs una letra\n");
            /*for (k=0;k<26;k++){
                if (letraGuess[k]==letra){
                    printf("Esta letra ya ha sido introducida.\n");
                }else if (letraGuess[k]==NULL){
                    letraGuess[k]=letra;
                    break;
                }
            }*/
        }else{
            printf("\%c no es una letra\n", letra);
        }
    }
    return 0;
}
