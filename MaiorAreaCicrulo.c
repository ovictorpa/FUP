//Programa que recebe vários circulos e retorna a maior área

#include <stdio.h>
#include <math.h>
#include <limits.h>

struct ponto {
    
    float x;
    float y;
};

struct circulo {

    struct ponto centro;
    float raio;
};

float areaCirculo (struct circulo c){
    
    float area = pow(c.raio, 2) * 3.14;
    return area;
    
}

float maiorArea (struct circulo c[], int n){
    
    float maiorArea = INT_MIN;
    
    for(int i = 0 ; i < n ; i++){
        
        float area = areaCirculo(c[i]);
        if(area > maiorArea) maiorArea = area;
    }
 
    return maiorArea;   
}

int main (){
    
    int n;
    scanf("%d", &n);
    
    struct circulo c[n];
    for(int i = 0; i < n; i++) scanf("%f %f %f", &c[i].centro.x, &c[i].centro.y, &c[i].raio);
    
    printf("%.2f", maiorArea(c, n));
    
    return 0;
}