//Programa que procura uma palavra escondida dentro de uma frase

#include <stdio.h>

int main(){
    
    //Recebe as cadeias de caracteres
    char frase[201];
    scanf(" %[^\n]", frase);
    char palavra[201];
    scanf(" %[^\n]", palavra);
    
    
    //Calcula o tamanho da palavra procurada
    int tam_palavra = 0;
    while(palavra[tam_palavra] != '\0') tam_palavra++;

    int qtd = 0, tam_frase = 0;
    
    for(int i = 0; palavra[i] != '\0'; i++){
        
        for(int j = 0; frase[j] != '\0'; j++){
            
            //Verifica a quantidade de igualdades
            if(palavra[i] == frase[tam_frase] || palavra[i] == frase[tam_frase]-32 || palavra[i] == frase[tam_frase]+32){
                qtd++;
                break;
            }
            //Se não houver igualdade, incrementa o tamanho da frase
            else tam_frase++;
        }
    }


    //Imprime se a palavra está contida na frase(na ordem)
    if(qtd == tam_palavra) printf("Sim");
    else printf("Nao");
    
return 0;
}