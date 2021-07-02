#include <stdio.h>

int main() {

int n1, n2, n3, m1, m2, m3, pivo;

scanf ("%d %d %d", &n1, &n2, &n3);
scanf ("%d %d %d", &m1, &m2, &m3);
scanf ("%d", &pivo);

int pontuacao1 = 0, pontuacao2 = 0;


if (pivo%2 ==0){

pontuacao1 += (n1%2 ==0 ? n1 : -1*n1);
pontuacao1 += (n2%2 ==0 ? n2 : -1*n2);
pontuacao1 += (n3%2 ==0 ? n3 : -1*n3);
pontuacao2 += (m1%2 ==0 ? m1 : -1*m1);
pontuacao2 += (m2%2 ==0 ? m2 : -1*m2);
pontuacao2 += (m3%2 ==0 ? m3 : -1*m3);

} else {
pontuacao1 += (n1%2 ==0 ? -1*n1 : n1);
pontuacao1 += (n2%2 ==0 ? -1*n2 : n2);
pontuacao1 += (n3%2 ==0 ? -1*n3 : n3);
pontuacao2 += (m1%2 ==0 ? -1*m1 : m1);
pontuacao2 += (m2%2 ==0 ? -1*m2 : m2);
pontuacao2 += (m3%2 ==0 ? -1*m3 : m3);
    
}


if (pontuacao1>pontuacao2) printf ("Jogador1 %d", pontuacao1);
else if (pontuacao2>pontuacao1) printf ("Jogador2 %d", pontuacao2);
else printf ("Empate");

return 0;
}