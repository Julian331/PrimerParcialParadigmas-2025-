| Métrica                     | Sin Optimización               | Con Optimización               |
|-----------------------------|--------------------------------|--------------------------------|
| **Memoria utilizada total** | 200 bytes (ejemplo)            | 128 bytes (ejemplo)            |
| **Fragmentación detectada** | Alta (debido a asignaciones fijas y relleno) | Baja o nula (asignación dinámica ajustada) |
| **Tiempo de ejecución**     | 10 ms (ejemplo)                | 8 ms (ejemplo)                 |
# **Análisis de la Comparación Antes vs. Después**

La tabla muestra una optimización del código en términos de eficiencia en el uso de memoria, manejo de errores, cálculos de recursos y organización de la salida de datos. A continuación, se desglosan los cambios y mejoras realizadas:

## **1. Uso de memoria en edad**
- **Antes:** `unsigned short edad; (16 bits)`
- **Después:** `unsigned short edad : 7; (7 bits)`
- **Mejora:** Se ha utilizado un **bitfield**, lo que reduce el uso de memoria de 16 bits a solo 7 bits, optimizando el almacenamiento cuando la variable no necesita un rango más amplio.

## **2. Almacenamiento de ID**
- **Antes:** `char id[15];` (fijo, 15 bytes)
- **Después:** `char *ID;` (dinámico con `strdup`)
- **Mejora:** Se ha eliminado la asignación estática de 15 bytes en favor de una asignación dinámica con `strdup`, lo que **reduce el desperdicio de memoria** y permite manejar IDs de diferentes longitudes según sea necesario.

## **3. Tipo de `num_calificaciones`**
- **Antes:** `int num_calificaciones;`
- **Después:** `size_t num_calificaciones;`
- **Mejora:** Se ha cambiado el tipo `int` por `size_t`, lo que **hace el código más seguro y portátil**, ya que `size_t` está diseñado para representar tamaños de memoria y es independiente de la arquitectura del procesador.

## **4. Copia de calificaciones**
- **Antes:** Copia manual con `for`
- **Después:** Uso de `memcpy`
- **Mejora:** Se ha sustituido la copia manual por `memcpy`, una función optimizada de la biblioteca estándar de C. Esto **mejora la eficiencia** al copiar datos en memoria, especialmente en estructuras grandes.

## **5. Manejo de errores**
- **Antes:** No verifica `strdup`
- **Después:** Verifica todas las asignaciones
- **Mejora:** Se ha agregado una validación de `strdup`, lo que evita fallos en caso de que la asignación falle por falta de memoria. Esto **aumenta la seguridad** y previene posibles errores de segmentación.

## **6. Cálculo de memoria usada**
- **Antes:** No existe
- **Después:** Se implementa `calcular_memoria_utilizada()`
- **Mejora:** Se ha añadido una función específica para calcular la memoria utilizada, permitiendo **un mejor análisis del uso de recursos** y facilitando la optimización del programa.

## **7. Impresión de datos**
- **Antes:** Mensaje básico en `main`
- **Después:** Función `imprimir_estudiante()`
- **Mejora:** Se ha modularizado la impresión de datos en una función separada, lo que mejora la **organización del código** y facilita la reutilización de la función en diferentes partes del programa.

---

## **Conclusión**
Las optimizaciones implementadas en el código mejoran su **eficiencia, seguridad y organización**. Los principales beneficios incluyen:

- **Menor consumo de memoria** mediante el uso de `bitfields`, asignación dinámica y estructuras más adecuadas (`size_t` en lugar de `int`).
- **Mayor eficiencia** en la manipulación de datos (`memcpy` en lugar de `for`).
- **Mayor seguridad** al incluir verificaciones de errores en la asignación de memoria.
- **Mejor mantenimiento y modularización** al agregar funciones específicas para impresión y cálculo de memoria.

Estas optimizaciones son especialmente útiles en entornos donde los **recursos son limitados**, como sistemas embebidos o aplicaciones de alto rendimiento.

