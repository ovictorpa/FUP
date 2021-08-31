//Programa que recebe varios pontos e retorna o ponto mais proximo do ponto pp

#include <stdio.h>
#include <math.h>
#include <limits.h>

//Tipo estruturado que representa um ponto
typedef struct {

    float x;
    float y;

} Ponto;

//Função que calcula a distância entre dois pontos
float Distancia(Ponto p1, Ponto p2){
    
    float distancia = sqrt(pow(p2.x - p1.x,2) + pow(p2.y - p1.y,2));
    return distancia;
}

//Função que retorna o ponto mais próximo do ponto 'pp'
Ponto Proximo(Ponto vetor[], int n, Ponto pp){

    float menor_distancia = INT_MAX;

    Ponto menor;

    for(int i = 0 ; i < n ; i++){

        float ponto_prox = Distancia(vetor[i], pp);

        if(ponto_prox < menor_distancia){

            menor_distancia = ponto_prox;
            menor.x = vetor[i].x;
            menor.y = vetor[i].y;
        }
    }

    return menor;
}

int main (){
    
     //Recebe o vetor de pontos
     int n;
     scanf("%d", &n);
     Ponto vetor[n];
     for(int i = 0; i<n; i++) scanf("%f %f", &vetor[i].x, &vetor[i].y);

     //Recebe o ponto pp
     Ponto pp;
     scanf("%f %f", &pp.x, &pp.y);


     //Imprime o ponto mais proximo de pp
     Ponto proximo = Proximo(vetor, n, pp);
     printf("%.2f %.2f", proximo.x, proximo.y);

}