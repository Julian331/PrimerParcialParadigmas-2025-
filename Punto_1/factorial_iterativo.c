#include <stdio.h>
#include <time.h>  // Para medir el tiempo de ejecución

// Función para calcular el factorial de forma iterativa
unsigned long long factorial_iterativo(int n) {
    unsigned long long resultado = 1;  // Inicializamos el resultado en 1

    // Iteramos desde 1 hasta n, multiplicando el resultado por cada número
    for (int i = 1; i <= n; i++) {
        resultado *= i;  // resultado = resultado * i
    }

    return resultado;  // Devolvemos el resultado final
}
int main() {
    int numero;
    printf("Ingrese un número para calcular su factorial: ");
    scanf("%d", &numero);  // Leemos el número ingresado por el usuario

    // Medición del tiempo para el enfoque iterativo
    clock_t inicio_iterativo = clock();
    unsigned long long resultado_iterativo = factorial_iterativo(numero);
    clock_t fin_iterativo = clock();
    double tiempo_iterativo = (double)(fin_iterativo - inicio_iterativo) / CLOCKS_PER_SEC;

    // Mostramos los resultados
    printf("\nResultado iterativo: %llu\n", resultado_iterativo);
    printf("Tiempo iterativo: %f segundos\n", tiempo_iterativo);
--------------------------------------------------------------------------------------------
EJEMPLO
Ingrese un número para calcular su factorial: 5
Resultado iterativo: 120
Tiempo iterativo: 0.000001 segundos
