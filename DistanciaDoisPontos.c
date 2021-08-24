//Programa que calcula a distancia entre dois pontos no plano cartesiano

#include <stdio.h>
#include <math.h>

struct ponto {
    
    float coordX;
    float coordY;
    
};

float distancia(struct ponto p1, struct ponto p2){
    
    float d = sqrt(pow(p1.coordX - p2.coordX, 2) + pow(p1.coordY - p2.coordY, 2));
    return d;
}


int main (){
    
    struct ponto p1;
    scanf("%f %f", &p1.coordX, &p1.coordY);
    struct ponto p2;
    scanf("%f %f", &p2.coordX, &p2.coordY);
    
    printf("%.2f", distancia(p1, p2));
    
    return 0;
}