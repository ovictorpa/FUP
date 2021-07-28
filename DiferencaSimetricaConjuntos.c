//Programa que calcula a diferença simétrica entre dois conjuntos

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

    int tam_min = 0; //Define o tamanho minimo do vetor diferença simétrica
    int d_simetrica[n1+n2]; //Tamanho maximo do vetor diferença é n1+n2
    
    //Analisa os elementos do conjunto A que não estão contidos no conjunto B
    for (int i = 0; i < n1; i++){  
        
        int flag = 1;
        for (int j = 0; j < n2; j++){      
            
            if (A[i] == B[j]) {
                flag = 0;
                break;
            }
            //Adiciona os não contidos no vetor diferença simétrica
            if(j == (n2-1) && flag) {
                d_simetrica[tam_min] = A[i];
                tam_min++;
            }  
        }
    }

    //Analisa os elementos do conjunto B que não estão contidos no conjunto A
    for (int j = 0; j < n2; j++){  
        
        int flag = 1;
        for (int i = 0; i < n1; i++){      
            
            if (B[j] == A[i]) {
                flag = 0;
                break;
            }
            //Adiciona os não contidos no vetor diferença simétrica
            if(i == (n1-1) && flag) {
                d_simetrica[tam_min] = B[j];
                tam_min++;
            }  
        }
    }
    
    //Imprime o vetor de diferença simétrica
    for (int i = 0; i < tam_min; i++) printf("%d ", d_simetrica[i]);
    
return 0;
}