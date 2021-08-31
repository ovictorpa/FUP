//Formula de função recursiva do prof

#include <stdio.h>

//Função que calcula a recursão
int Fabio(int n, int m){
   
    if (n < 3 || m < 3 ) return 1;
    if ((n % 2 == 0) && (m % 2 != 0)) return Fabio(n-1, m) + 1;
    if ((n % 2 != 0) && (m % 2 == 0)) return Fabio(n-1, m-2) + 2;
    if ((n % 2 == 0) && (m % 2 == 0)) return Fabio(n-2, m-1) + 3;
    else return Fabio(n, m-1) + 4; 
}

int main (){
    
    //Recebe os parâmetros
    int n, m;
    scanf ("%d %d", &n, &m);
    
    //Imprime o resultado da recursão
    printf ("%d",Fabio(n, m));
    
    return 0;
}