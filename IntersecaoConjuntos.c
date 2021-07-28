//Programa que calcula a interseção entre dois conjuntos

#include <stdio.h>

int main (){
    
    //Recebe o primeiro conjunto
    int n1;
    scanf("%d", &n1);
    int A[n1];
    for (int i = 0; i<n1 ; i++) scanf ("%d", &A[i]);
    
    //Recebe o segundo conjunto
    int n2;
    scanf("%d", &n2);
    int B[n2];
    for (int i = 0; i<n2 ; i++) scanf ("%d", &B[i]);
    
    int tam_max = (n1<n2 ? n1 : n2), tam_min = 0; //DEFININDO O TAMANHO MÁXIMO E MÍNIMO DO VETOR QUE IRÁ FICAR COM AS INTERSEÇÕES
    int intersecao[tam_max]; //CRIANDO O VETOR INTERSECAO COM O TAMANHO MAXIMO

    //VERIFICAR SE O CONJUNTO 1 ESTA CONTIDO NO CONJUNTO 2
    for (int i = 0 ; i<n1 ; i++)
        for (int j = 0 ; j<n2 ; j++){
        
            if (A[i] == B[j]){ //SE O NUMERO i DO CONJUNTO 1 FOR IGUAL AO NUMERO j DO CONJUNTO 2

                intersecao[tam_min] = A[i]; //ATRIBUI O VALOR DO CONJUNTO 1 AO VETOR INTESEÇÃO COM ÍNDICE MINIMO
                tam_min++; //INCREMENTA 1 NO ÍNDICE MINIMO PRA IR AUMENTANDO
                break;
            }      
        }

     //IMPRIME OS VALORES DO VETOR INTESEÇÃO DE ACORDO COM O TAMANHO DO INDICE  
     for (int i = 0 ; i<tam_min ; i++) printf("%d ", intersecao[i]);   
    
return 0;
}