#include <stdio.h>

// Definir tasas de cambio
#define USD_TO_GTQ 7.78
#define EUR_TO_GTQ 9.11

// Función para realizar la conversión entre monedas
double convertirMoneda(double cantidad, int opcion) {
    switch (opcion) {
        case 1:
            // Convertir de GTQ a USD
            return cantidad / USD_TO_GTQ;
        case 2:
            // Convertir de USD a GTQ
            return cantidad * USD_TO_GTQ;
        case 3:
            // Convertir de GTQ a EUR
            return cantidad / EUR_TO_GTQ;
        case 4:
            // Convertir de EUR a GTQ
            return cantidad * EUR_TO_GTQ;
        default:
            // Opción no válida
            return -1;
    }
}

int main() {
    int opcion;
    double cantidad; // prueba


    printf("Bienvenido al conversor de monedas\n");
    printf("Por favor seleccione una opción:\n");
    printf("1. Convertir de Quetzales a Dólares\n");
    printf("2. Convertir de Dólares a Quetzales\n");
    printf("3. Convertir de Quetzales a Euros\n");
    printf("4. Convertir de Euros a Quetzales\n");
    printf("Opción: ");
    scanf("%d", &opcion);

    if (opcion < 1 || opcion > 4) {
        printf("Opción no válida\n");
        return 1; // Salir con código de error
    }

    printf("Ingrese la cantidad a convertir: ");
    scanf("%lf", &cantidad);

    double resultado = convertirMoneda(cantidad, opcion);

    if (resultado >= 0) {
        printf("El resultado de la conversión es: %.2f\n", resultado);
    } else {
        printf("Ocurrió un error durante la conversión\n");
        return 1; // Salir con código de error
    }

    return 0;
}
