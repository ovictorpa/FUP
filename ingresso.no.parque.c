#include <stdio.h>

int main() {

int i1, i2, i3, i4;
float preco;

scanf ("%d %d %d %d", &i1, &i2, &i3, &i4);
scanf ("%f", &preco);

float total = 4*preco; //TOTAL SEM DESCONTO
double d1, d2, d3, d4; //VALORES DOS DESCONTOS

//DESCONTOS DE ACORDO COM A IDADE

if (i1<=5) d1 = preco*0.2; 
else if (i1<=7) d1 = preco*0.15;
else if (i1<=10) d1 = preco*0.05;
else d1 = 0;

if (i2<=5) d2 = preco*0.2;
else if (i2<=7) d2 = preco*0.15;
else if (i2<=10) d2 = preco*0.05;
else d2 = 0;

if (i3<=5) d3 = preco*0.2;
else if (i3<=7) d3 = preco*0.15;
else if (i3<=10) d3 = preco*0.05;

if (i4<=5) d4 = preco*0.2;
else if (i4<=7) d4 = preco*0.15;
else if (i4<=10) d4 = preco*0.05;


if ((0.15*total) >= (d1+d2+d3+d4)){ //O SOMATÓRIO DOS DESCONTOS NÃO PODEM ULTRAPASSAR 15% DO TOTAL

    total = (preco - d1) + (preco - d2) + (preco - d3) + (preco - d4); //TOTAL C DESCONTOS (OU NÃO)
    printf ("%f", total);

} else {

    total *= 0.85; //TOTAL C DESCONTO MÁXIMO (15%)
    printf ("%f", total);
}



return 0;
}