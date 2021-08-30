//Programa que soma duas matrizes

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
   
   int B[m][n];
   
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            scanf("%d", &B[i][j]);
        }
    }
    
    int soma[m][n];
    
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            soma[i][j] = A[i][j] + B[i][j];
            
        }
        
    }
    
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            printf("%d ", soma[i][j]);
            
        }
        
        printf("\n");
    }
    
    
return 0;
}