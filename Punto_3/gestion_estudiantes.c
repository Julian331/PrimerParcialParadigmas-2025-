#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estructura optimizada del estudiante
typedef struct {
    char *nombre;
    char *apellido;
    unsigned short edad : 7; // Bitfield para optimizar almacenamiento (rango 0-127)
    char *ID;  // ID dinámico para evitar desperdicio de memoria
    int *calificaciones;
    size_t num_calificaciones;
} Estudiante;

// Funcion para crear un nuevo estudiante
Estudiante *crear_estudiante(const char *nombre, const char *apellido, unsigned short edad, const char *ID, int *calificaciones, size_t num_calificaciones) {
    Estudiante *nuevo_estudiante = (Estudiante *)malloc(sizeof(Estudiante));
    if (!nuevo_estudiante) {
        printf("Error al asignar memoria para el estudiante.\n");
        return NULL;
    }

    nuevo_estudiante->nombre = strdup(nombre);
    nuevo_estudiante->apellido = strdup(apellido);
    nuevo_estudiante->ID = strdup(ID);

    if (!nuevo_estudiante->nombre || !nuevo_estudiante->apellido || !nuevo_estudiante->ID) {
        printf("Error al asignar memoria para los campos de texto.\n");
        free(nuevo_estudiante->nombre);
        free(nuevo_estudiante->apellido);
        free(nuevo_estudiante->ID);
        free(nuevo_estudiante);
        return NULL;
    }

    nuevo_estudiante->edad = edad;
    nuevo_estudiante->num_calificaciones = num_calificaciones;
    nuevo_estudiante->calificaciones = (int *)malloc(num_calificaciones * sizeof(int));

    if (!nuevo_estudiante->calificaciones) {
        printf("Error al asignar memoria para las calificaciones.\n");
        free(nuevo_estudiante->nombre);
        free(nuevo_estudiante->apellido);
        free(nuevo_estudiante->ID);
        free(nuevo_estudiante);
        return NULL;
    }

    memcpy(nuevo_estudiante->calificaciones, calificaciones, num_calificaciones * sizeof(int));

    return nuevo_estudiante;
}

// Funcion para liberar memoria de un estudiante
void liberar_estudiante(Estudiante *estudiante) {
    if (estudiante) {
        free(estudiante->nombre);
        free(estudiante->apellido);
        free(estudiante->ID);
        free(estudiante->calificaciones);
        free(estudiante);
    }
}

// Funcion para imprimir información del estudiante
void imprimir_estudiante(const Estudiante *estudiante) {
    if (!estudiante) return;

    printf("Nombre: %s %s\n", estudiante->nombre, estudiante->apellido);
    printf("Edad: %u anos\n", estudiante->edad);
    printf("ID: %s\n", estudiante->ID);
    printf("Calificaciones: ");
    for (size_t i = 0; i < estudiante->num_calificaciones; i++) {
        printf("%d ", estudiante->calificaciones[i]);
    }
    printf("\n");
}

// Funcion para calcular la memoria utilizada por un estudiante
size_t calcular_memoria_utilizada(const Estudiante *estudiante) {
    if (!estudiante) return 0;
    return sizeof(Estudiante) +
           strlen(estudiante->nombre) + 1 +
           strlen(estudiante->apellido) + 1 +
           strlen(estudiante->ID) + 1 +
           estudiante->num_calificaciones * sizeof(int);
}


int main() {
    int calificaciones[] = {85, 90, 78};
    size_t num_calificaciones = sizeof(calificaciones) / sizeof(calificaciones[0]);

    Estudiante *estudiante = crear_estudiante("Carlos", "Gomez", 20, "12345678", calificaciones, num_calificaciones);

    if (estudiante) {
        imprimir_estudiante(estudiante);
        printf("Memoria utilizada: %zu bytes\n", calcular_memoria_utilizada(estudiante));
        liberar_estudiante(estudiante);
    }

    return 0;
}
