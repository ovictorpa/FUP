#include <stdio.h>

int main(){

int n1, n2;
scanf("%d %d", &n1, &n2);
int vetor1[n1];
for(int i = 0 ; i < n1 ; i++) scanf("%d", &vetor1[i]);
int vetor2[n2];
for(int i = 0 ; i < n2 ; i++) scanf("%d", &vetor2[i]);

int multiplo[n1];

for(int i = 0; i < n1; i++){

    int qtd = 0;

    for(int j = 0; j < n2; j++){
        
        if(vetor2[j]%vetor1[i] == 0) qtd++;
    }
    
    multiplo[i] == qtd;
}
for(int i = 0; i< n1; i++) printf("%d ", multiplo[i]);

return 0;
}