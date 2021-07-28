//Programa que calcula a diferença entre dois conjuntos

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
    
    int tam_min = 0; //Define o tamanho minimo do vetor diferença
    int diferenca[n1]; //Tamanho maximo do vetor diferença é n1
    
    for (int i = 0 ; i<n1 ; i++){

        int flag = 1;
        for (int j = 0 ; j<n2 ; j++){
        
            //Se os numeros forem iguais interrompe a verificação
            if (A[i] == B[j]) {
                flag = 0; 
                break;
            }
            
            /*Se a flag continuar 1 até o final do segundo conjunto
            quer dizer que o numero do conjunto 1 não está presente no
            conjunto 2 */
            if (flag == 1 && j == (n2-1)){
                diferenca[tam_min] = A[i]; //Atribui
                tam_min++;  
            }
        }     
    }

     //Imprime os valores do vetor diferença  
     for (int i = 0 ; i<tam_min ; i++) printf("%d ", diferenca[i]);   
    
return 0;
}