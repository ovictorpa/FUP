//Programa que recebe uma data e retorna se ela é válida ou não 

#include <stdio.h>

struct Data{
    
    int dia;
    int mes;
    int ano;
};

int dataValida(struct Data d){
    
    int flag = 0;
    
    if (d.mes == 2) {
        
        if (d.dia <= 28) flag = 1;
        if (d.dia == 29 && (d.ano % 400 == 0) || ((d.ano % 4 == 0) && (d.ano % 100 != 0))) flag = 1;
    }
    
    if (d.mes == 4 || d.mes == 6|| d.mes == 9|| d.mes == 11) {
        
        if (d.dia <= 30) flag = 1;
    }
    
    if (d.mes == 1 || d.mes == 3 || d.mes == 5 || d.mes == 7 || d.mes == 8 || d.mes == 10|| d.mes == 12) {
        
        if (d.dia <= 31) flag = 1;
    }
    
    return flag;
}

int main(){
    
    struct Data d;
    scanf("%d/%d/%d", &d.dia, &d.mes, &d.ano);
    
    printf("%d", dataValida(d));
    
return 0;
}