/*
/*
 * UNIVERSIDAD POLITECNICA DE TULANCIONGO
 * PROGRAMACION ESTRUCTURADA
 * BRAULIO GABRIEL RAMIREZ MARTINEZ
 * LISE 101
 * ARTURO NEGRETE MEDELLIN
 *-----------------------------------------
 * El código es un programa sencillo en C que pide al usuario dos números,
 * calcula y muestra los resultados de la suma, la resta, la multiplicación
 * y la división entre ellos. Además, incluye una pequeña validación para
 * comprobar que el segundo número no sea cero, evitando así un error al intentar dividir.
 */

#include <stdio.h>

int main() {
    double num1, num2;

    printf("Ingrese el primer numero: ");
    if (scanf_s("%lf", &num1) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    printf("Ingrese el segundo numero: ");
    if (scanf_s("%lf", &num2) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }
    printf("\n--- RESULTADOS ---\n");

    // 1. Suma
    printf("Suma (%.2lf + %.2lf) = %.2lf\n", num1, num2, num1 + num2);

    // 2. Resta
    printf("Resta (%.2lf - %.2lf) = %.2lf\n", num1, num2, num1 - num2);

    // 3. Multiplicación
    printf("Multiplicacion (%.2lf * %.2lf) = %.2lf\n", num1, num2, num1 * num2);

    // 4. División (con validación para evitar dividir entre 0)
    if (num2 != 0) {
        printf("Division (%.2lf / %.2lf) = %.2lf\n", num1, num2, num1 / num2);
    }
    else {
        printf("Division: No es posible dividir entre cero (0).\n");
    }

    return 0;
}