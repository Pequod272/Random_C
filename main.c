#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Inicialitza la llavor del generador de nombres aleatoris
    srand(time(0));

    // Genera un nombre aleatori
    int nombreAleatori = rand();

    // Imprimeix el nombre aleatori
    printf("El nombre aleatori generat és: %d\n", nombreAleatori);

    return 0;
}
