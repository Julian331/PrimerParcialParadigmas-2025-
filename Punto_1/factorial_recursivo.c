#include <stdio.h>
#include <time.h>  // Para medir el tiempo de ejecución

// Función para calcular el factorial de forma recursiva
unsigned long long factorial_recursivo(int n) {
    // Caso base: si n es 0 o 1, el factorial es 1
    if (n == 0 || n == 1) {
        return 1;
    }

    // Llamada recursiva: n * factorial(n - 1)
    return n * factorial_recursivo(n - 1);
}
int main() {
    int numero;
    printf("Ingrese un número para calcular su factorial: ");
    scanf("%d", &numero);  // Leemos el número ingresado por el usuario
int main() {
    int numero;
    printf("Ingrese un número para calcular su factorial: ");
    scanf("%d", &numero);  // Leemos el número ingresado por el usuario
  printf("\nResultado recursivo: %llu\n", resultado_recursivo);
    printf("Tiempo recursivo: %f segundos\n", tiempo_recursivo);

    return 0;
}
