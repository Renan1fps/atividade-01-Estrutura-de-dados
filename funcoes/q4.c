#include <stdio.h>
#include <stdlib.h>


int HorasParaSegundos (int h, int m, int s);


int main()
{

    int horas;
    int minutos;
    int segundos;

    printf("Qual o valor da horas: ");
    scanf("%d", &horas);

    printf("Qual o valor dos minutos: ");
    scanf("%d", &minutos);

    printf("Qual o valor dos segundos: ");
    scanf("%d", &segundos);

    HorasParaSegundos(horas, minutos, segundos);


    return 0;
}


int HorasParaSegundos (int h, int m, int s){

    int resultfinal;
    int valorhoras = h * 3600;
    int valormin = m * 60;
    resultfinal = valorhoras + valormin + s;
    printf("\nO valor em segundos e: %d\n", resultfinal);

}
