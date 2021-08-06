/*Programa para comparar conjuntos e dizer se
eles são iguais ou diferentes*/

#include <stdio.h>

int main (){
    
    //Recebe o conjunto 1
    int n1;
    scanf("%d", &n1);
    int v1[n1];
    for (int i = 0 ; i<n1 ; i++) scanf("%d", &v1[i]);
    
    //Recebe o conjunto 2
    int n2;
    scanf("%d", &n2);
    int v2[n2];
    for (int i = 0 ; i<n2; i++) scanf("%d", &v2[i]);
    
    int qtd;

    //Analisa se o conjunto 1 está contido no conjunto 2
    for (int i = 0 ; i < n1 ; i++)
        for (int j = 0 ; j < n2 ; j++)
        
            if (v1[i] == v2[j]){ 
            qtd++; 
            break;
            }
            
    //Se o conjunto 1 estiver contido no 2
    if (qtd == n1) {

        qtd = 0; 
        
        //Analisa se o conjunto 2 está contido no conjunto 1
        for (int j = 0 ; j < n2 ; j++)
            for (int i = 0 ; i < n1 ; i++){
        
                if (v1[i] == v2[j]){ 
                qtd++; 
                break;
                }
            }  

        /*SE A QUANTIDADE DE PONTOS ACUMULADAsFOR IGUAL A
        N2 SIGNIFICA QUE OS ELEMENTOS DO CONJUNTO 2 SAO IGUAIS 
        AOS ELEMENTOS DO CONJUNTO 1*/
        
        if (qtd == n2) printf("Iguais"); 
        else printf("Diferentes");

    } 
    
    else printf("Diferentes");
    
return 0;
}
