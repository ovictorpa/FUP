//Programa criado para retornar o nome dos alunos que passaram em FUP

#include <stdio.h>

struct Informacoes {

    char nome[100];
    float notas[3];
    float media;
};


int main (){

    int n;
    scanf("%d", &n);

    struct Informacoes Aluno[n]; 

    for(int i = 0; i<n; i++){

        scanf(" %[^\n]", Aluno[i].nome);
        scanf("%f %f %f", &Aluno[i].notas[1], &Aluno[i].notas[2], &Aluno[i].notas[3]);
    }
    
    float media_univ;
    scanf("%f", &media_univ);

    for(int i = 0; i<n; i++){
        
        float soma = Aluno[i].notas[1] + Aluno[i].notas[2] + Aluno[i].notas[3];
        Aluno[i].media = soma/3;
        if(Aluno[i].media >= media_univ) printf("%s\n", Aluno[i].nome);
    }
    
    return 0;
}