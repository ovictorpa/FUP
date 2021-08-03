#include <stdio.h>

int main (){

    //Recebe o tamanho do vetor
    int n;
    scanf("%d", &n);
    
    //Recebe o vetor de tamanho n
    int vetor[n];
    for (int i = 0 ; i < n ; i++) scanf("%d", &vetor[i]);
    
    //Cria a variável 'prox' para indicar o índice do número posterior
    int prox = 1;
    for (int i = 0; i < n; i++, prox++){        

        /*Cria uma variável auxiliar para armazenar o número 
        do vetor[i] e substituir no vetor que vem em seguida*/
        
        int aux = vetor[i];             
        vetor[i] = vetor[prox];        
        vetor[prox] = aux;          
        i++; 
        prox++;
    }

    //Imprime o vetor alterado
    for(int i = 0; i<n; i++) printf("%d ", vetor[i]);


return 0;
}