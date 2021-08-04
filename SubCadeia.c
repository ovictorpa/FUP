#include <stdio.h>

int main(){

    char frase1[101];
    scanf(" %[^\n]", frase1);

    char frase2[101];
    scanf(" %[^\n]", frase2);

    int tamanho1 = 0;
    while(frase1[tamanho1] != '\0') tamanho1++;
    int tamanho2 = 0;
    while(frase2[tamanho2] != '\0') tamanho2++;

    int inicio = -1;
    int cont_char = 0;
    for(int i = 0; frase1[i] != '\0' ; i++){

        int flag = 1;
        int j = 0;
        while(j < tamanho1){

            if(flag){
                if(frase1[j] == frase2[i]){

                    inicio = j;
                    flag = 0;
                    cont_char++;
                    i++;
                    j++;
                    continue;
                } 
                
                else {

                    j++;
                    continue;
                }

            }

            if(frase1[j] == frase2[i]){

                cont_char++;
                i++;
                j++;
            }

            else{

                flag = 1;
                i = 0;
                j++;
                cont_char = 0;
            }

            if(cont_char == tamanho2){

                printf("%d", inicio);
                break;
            }
        }

        if (cont_char!= tamanho2) printf("%d", inicio);
      
    }         
  

return 0;
}

//amar o amanha e lindo

//amanha