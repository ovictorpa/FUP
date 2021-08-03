#include <stdio.h>

int main(){

    //Recebe a primeira string
    char frase1[101];
    scanf(" %[^\n]", frase1);

    //Recebe a segunda string
    char frase2[101];
    scanf(" %[^\n]", frase2);

    //Calcula o tamanho das duas strings separadamente
    int tamanho1 = 0, tamanho2 = 0;
    while(frase1[tamanho1] != '\0') tamanho1++;
    while(frase2[tamanho2] != '\0') tamanho2++;

    //Cria a variável concatena com o tamanho certo e com os espaços do /0
    char concatena[tamanho1 + tamanho2 + 2];

    int i = 0;
    int indice2 = 0; //Variável para indicar o índice da segunda string

    while (i< tamanho1 + tamanho2 + 2){

        //Armazenar todos os caracteres da primeira string
        if (i<tamanho1) {

        concatena[i] = frase1[i];
        i++;
        }

        //Colocar um espaço para separar as frases
        else if (i == tamanho1) concatena[i++] = ' ';

        //Armazenar todos os caracteres da segunda string
        else concatena[i++] = frase2[indice2++];
    }

    //Imprime o tamanho das strings e a concatenação
    printf("%d\n", tamanho1+tamanho2);
    printf("%s", concatena);

return 0;
}