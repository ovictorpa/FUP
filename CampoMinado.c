//Jogo de campo minado com uma matriz

#include <stdio.h>

int main (){
    
    //Recebe a matriz quadrada
    int n;
    scanf("%d", &n);
    int A[n][n];
    for(int i = 0; i<n; i++)
        for(int j = 0; j<n; j++) 
            scanf("%d", &A[i][j]);
     
    //Recebe a linha e a coluna do numero escolhido       
    int linha, coluna;
    scanf("%d %d", &linha, &coluna);
    
    //Variável soma já com o valor do numero escolhido
    int soma = A[linha][coluna];
    
    //Se for número negativo o jogador perde
    if(A[linha][coluna] < 0) printf("Perdeu!");
    
    //Se não, soma os valores vizinhos(se tiver números) e imprime
    else{

        if(linha + 1 < n) soma+= A[linha+1][coluna]; 
        if(linha - 1 > 0) soma+= A[linha-1][coluna];
        if(coluna + 1 < n) soma+= A[linha][coluna+1];
        if(coluna - 1 > 0) soma+= A[linha][coluna-1];
        
        printf("%d", soma);
    }

return 0;
}