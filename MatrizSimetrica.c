//Programa que diz se uma matriz é simétrica ou não

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
    
    int flag = 1;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(A[i][j] != A[j][i]) flag = 0;
        }
    }
    
    if(flag == 1) printf("Sim");
    else printf("Nao");
    
return 0;
}