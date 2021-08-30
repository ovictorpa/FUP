//Programa que soma todos os elementos de uma matriz

#include <stdio.h>

int main (){
    
    int m, n;
    scanf("%d %d", &m, &n);

    int A[m][n];

    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            scanf("%d", &A[i][j]);
        
        }
    }
    
    int soma = 0;
    
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            soma+=A[i][j];
        
        }
    }
    
    printf("%d", soma);
    
    
return 0;
}