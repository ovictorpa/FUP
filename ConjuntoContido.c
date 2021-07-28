//Programa para calcular se um conjunto está contido no outro

#include <stdio.h>

int main (){
    
    //Recebe o conjunto 1
    int n1;
    scanf("%d", &n1);
    int v1[n1];
    for (int i = 0 ; i<n1 ; i++) scanf("%d", &v1[i]);
    
    //Recebe o conjunto 2
    int n2;
    scanf("%d", &n2);
    int v2[n2];
    for (int i = 0 ; i<n2; i++) scanf("%d", &v2[i]);
    
    int qtd;
    for (int i = 0 ; i < n1 ; i++){

        int flag = 0;
        
        for (int j = 0 ; j < n2 ; j++) 
        
            //Verifica se os numeros são iguais e incrementa 1 se forem
            if (v1[i] == v2[j]){
            flag = 1;
            break;
            }

            if (flag) qtd++;
        
    }  
    if (qtd == n1) printf("Contido");
    else printf("Nao contido");
    
return 0;
}