//Programa que recebe uma matriz e soma os elementos da diagonal principal

#include <stdio.h>

int main (){

    int n;
    scanf("%d", &n);
    
    int A[n][n];
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            scanf("%d", &A[i][j]);
        }
    }
    
    int soma = 0;
    
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(i == j) soma+=A[i][j];
        }
    }
    
    printf("%d", soma);
    
    
return 0;
}