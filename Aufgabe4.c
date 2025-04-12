#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    const float pi = 3.14159;
    float radius;
    float Kugel_berechnung[10]; // Durchmesser, Oberfläche, Volumen
    

    printf("Bitte geben sie hier den Radius an: \n");
    scanf("%f", &radius);

     
    Kugel_berechnung[0] = radius * 2;

     
    Kugel_berechnung[1] = 4 * pi * (radius * radius);

     
    Kugel_berechnung[2] = (4 / 3) * pi * (radius * radius * radius);

    printf("Durchmesser: %.2f\n", Kugel_berechnung[0]);
    printf("Oberflaeche: %.2f\n", Kugel_berechnung[1]);
    printf("Volumen: %.2f\n", Kugel_berechnung[2]);
    system("pause");
    return 0;
}