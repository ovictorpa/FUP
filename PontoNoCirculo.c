//Programa que recebe um circulo e um ponto, e retorna se o ponto está contido no circulo
#include <stdio.h>
#include <math.h>

struct pontos {
    
  float x, y;
    
};

struct circulo {
    
  struct pontos centro;
  float raio;
    
};

float distancia (struct pontos p1, struct pontos p2){
    
    float d = sqrt(pow(p1.x-p2.x, 2)+pow(p1.y-p2.y, 2));
    return d;
}

int contido(struct circulo c, struct pontos p){
    
    float d = distancia(c.centro, p);
    if(d<= c.raio) return 1;
    else return 0;
    
}

int main (){
    
    struct circulo c;
    scanf("%f %f %f", &c.centro.x, &c.centro.y, &c.raio);
    struct pontos p;
    scanf("%f %f", &p.x, &p.y);
    
    printf("%d", contido(c, p));
    
    return 0;
}