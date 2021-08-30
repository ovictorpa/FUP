//Programa que recebe uma matriz e retorna a sua transposta

#include <stdio.h>

int main (){
    
    int m, n;
    scanf("%d %d", &m, &n);
    
    int A[m][n];
    for(int i = 0; i<m; i++)
        for(int j = 0; j<n; j++)
            scanf("%d", &A[i][j]);
            
    
    int B[n][m];
    for(int i = 0; i<m; i++) 
        for(int j = 0; j<n; j++)
            B[j][i] = A[i][j];
    
    
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            printf("%d ", B[i][j]);
            
        }
        
        printf("\n");
    }
    
return 0;
}