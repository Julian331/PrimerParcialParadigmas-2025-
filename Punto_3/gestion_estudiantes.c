#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definición de la estructura Estudiante
typedef struct {
    char* nombre;               // Nombre del estudiante (cadena dinámica)
    char* apellido;             // Apellido del estudiante (cadena dinámica)
    unsigned int edad : 8;      // Edad del estudiante (usamos 8 bits para ahorrar memoria)
    char* id;                   // Número de identificación (cadena dinámica)
    int* calificaciones;        // Array dinámico de calificaciones
    int num_calificaciones;     // Número de calificaciones
} Estudiante;

// Función para agregar un estudiante
Estudiante* agregarEstudiante(const char* nombre, const char* apellido, unsigned int edad, const char* id, int* calificaciones, int num_calificaciones) {
    // Asignar memoria para la estructura Estudiante
    Estudiante* estudiante = (Estudiante*)malloc(sizeof(Estudiante));
    
    // Asignar memoria para el nombre y copiar el valor
    estudiante->nombre = (char*)malloc(strlen(nombre) + 1); // +1 para el carácter nulo
    strcpy(estudiante->nombre, nombre);
    
    // Asignar memoria para el apellido y copiar el valor
    estudiante->apellido = (char*)malloc(strlen(apellido) + 1); // +1 para el carácter nulo
    strcpy(estudiante->apellido, apellido);
    
    // Asignar la edad (usando bitfield para ahorrar memoria)
    estudiante->edad = edad;
    
    // Asignar memoria para el ID y copiar el valor
    estudiante->id = (char*)malloc(strlen(id) + 1); // +1 para el carácter nulo
    strcpy(estudiante->id, id);
    
    // Asignar memoria para las calificaciones y copiar los valores
    estudiante->calificaciones = (int*)malloc(num_calificaciones * sizeof(int));
    memcpy(estudiante->calificaciones, calificaciones, num_calificaciones * sizeof(int));
    
    // Guardar el número de calificaciones
    estudiante->num_calificaciones = num_calificaciones;
    
    return estudiante; // Devolver el estudiante creado
}

// Función para eliminar un estudiante y liberar su memoria
void eliminarEstudiante(Estudiante* estudiante) {
    // Liberar la memoria asignada para el nombre
    free(estudiante->nombre);
    
    // Liberar la memoria asignada para el apellido
    free(estudiante->apellido);
    
    // Liberar la memoria asignada para el ID
    free(estudiante->id);
    
    // Liberar la memoria asignada para las calificaciones
    free(estudiante->calificaciones);
    
    // Liberar la memoria asignada para la estructura Estudiante
    free(estudiante);
}

// Función para actualizar los datos de un estudiante
void actualizarEstudiante(Estudiante* estudiante, const char* nombre, const char* apellido, unsigned int edad, int* calificaciones, int num_calificaciones) {
    // Liberar la memoria anterior del nombre y asignar nueva memoria
    free(estudiante->nombre);
    estudiante->nombre = (char*)malloc(strlen(nombre) + 1);
    strcpy(estudiante->nombre, nombre);
    
    // Liberar la memoria anterior del apellido y asignar nueva memoria
    free(estudiante->apellido);
    estudiante->apellido = (char*)malloc(strlen(apellido) + 1);
    strcpy(estudiante->apellido, apellido);
    
    // Actualizar la edad
    estudiante->edad = edad;
    
    // Liberar la memoria anterior de las calificaciones y asignar nueva memoria
    free(estudiante->calificaciones);
    estudiante->calificaciones = (int*)malloc(num_calificaciones * sizeof(int));
    memcpy(estudiante->calificaciones, calificaciones, num_calificaciones * sizeof(int));
    
    // Actualizar el número de calificaciones
    estudiante->num_calificaciones = num_calificaciones;
}

// Función para calcular la memoria utilizada por un estudiante
size_t calcularMemoriaUtilizada(const Estudiante* estudiante) {
    size_t memoria = sizeof(Estudiante); // Memoria de la estructura base
    memoria += strlen(estudiante->nombre) + 1; // Memoria del nombre
    memoria += strlen(estudiante->apellido) + 1; // Memoria del apellido
    memoria += strlen(estudiante->id) + 1; // Memoria del ID
    memoria += estudiante->num_calificaciones * sizeof(int); // Memoria de las calificaciones
    return memoria;
}

// Variable global para rastrear la memoria total utilizada
size_t memoria_total = 0;

// Función para agregar un estudiante y mostrar un informe de memoria
void agregarEstudianteConReporte(const char* nombre, const char* apellido, unsigned int edad, const char* id, int* calificaciones, int num_calificaciones) {
    Estudiante* estudiante = agregarEstudiante(nombre, apellido, edad, id, calificaciones, num_calificaciones);
    size_t memoria = calcularMemoriaUtilizada(estudiante);
    memoria_total += memoria;
    printf("Estudiante \"%s %s\" agregado correctamente. Memoria utilizada: %zu bytes.\n", nombre, apellido, memoria);
}

// Función para eliminar un estudiante y mostrar un informe de memoria
void eliminarEstudianteConReporte(Estudiante* estudiante) {
    size_t memoria = calcularMemoriaUtilizada(estudiante);
    memoria_total -= memoria;
    printf("Estudiante con ID %s eliminado correctamente. Memoria liberada: %zu bytes.\n", estudiante->id, memoria);
    eliminarEstudiante(estudiante);
}

// Función principal
int main() {
    // Ejemplo de calificaciones
    int calificaciones[] = {85, 90, 78};
    
    // Agregar un estudiante y mostrar el informe de memoria
    agregarEstudianteConReporte("Carlos", "Gomez", 20, "12345678", calificaciones, 3);
    
    // Supongamos que tenemos un puntero al estudiante que queremos eliminar
    Estudiante* estudiante = agregarEstudiante("Ana", "Perez", 22, "87654321", calificaciones, 3);
    
    // Eliminar el estudiante y mostrar el informe de memoria
    eliminarEstudianteConReporte(estudiante);
    
    // Mostrar la memoria total utilizada al final
    printf("Memoria total utilizada: %zu bytes.\n", memoria_total);
    
    return 0;
}
