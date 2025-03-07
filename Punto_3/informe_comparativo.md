# **Análisis de la Comparación Antes vs. Después**
La tabla muestra una optimización del código en términos de eficiencia en el uso de memoria, manejo de errores, cálculos de recursos y organización de la salida de datos. A continuación, se desglosan los cambios y mejoras realizadas:
| Métrica                     | Sin Optimización               | Con Optimización               |
|-----------------------------|--------------------------------|--------------------------------|
| **Memoria utilizada total** | 200 bytes (ejemplo)            | 128 bytes (ejemplo)            |
| **Fragmentación detectada** | Alta (debido a asignaciones fijas y relleno) | Baja o nula (asignación dinámica ajustada) |
| **Tiempo de ejecución**     | 10 ms (ejemplo)                | 8 ms (ejemplo)                 |


Explicación Detallada
1. Memoria Utilizada Total
Sin Optimización
Se utilizan estructuras con tamaños fijos, como arrays estáticos para nombres, apellidos y calificaciones.

Por ejemplo:

Un array de 50 caracteres para el nombre.

Un array de 50 caracteres para el apellido.

Un array de 10 enteros para las calificaciones.

Esto lleva a un uso excesivo de memoria, ya que se reserva espacio para el peor caso, incluso si no se utiliza completamente.

Ejemplo: Si el nombre solo tiene 6 caracteres, se desperdician 44 bytes.

Con Optimización
Se asigna memoria dinámicamente, ajustándose al tamaño exacto de los datos.

Por ejemplo:

Si el nombre tiene 6 caracteres, se asignan solo 6 bytes (+1 para el carácter nulo).

Si hay 3 calificaciones, se asignan solo 3 enteros (12 bytes en sistemas de 32 bits).

Esto reduce significativamente el uso de memoria, ya que no se reserva espacio innecesario.

Ejemplo: Si el nombre tiene 6 caracteres, el apellido 5, el ID 8 y hay 3 calificaciones, la memoria total sería:

Nombre: 7 bytes (6 + 1).

Apellido: 6 bytes (5 + 1).

ID: 9 bytes (8 + 1).

Calificaciones: 12 bytes (3 * 4).

Total: 34 bytes (más la estructura base).

2. Fragmentación Detectada
Sin Optimización
La asignación de memoria fija puede causar fragmentación interna.

Esto ocurre cuando se reserva más memoria de la necesaria, dejando espacios no utilizados dentro de los bloques asignados.

Por ejemplo, si se reservan 50 bytes para un nombre pero solo se usan 10, los 40 bytes restantes se desperdician.

Con Optimización
La asignación dinámica ajustada minimiza la fragmentación.

Cada bloque de memoria se asigna exactamente al tamaño necesario, evitando el desperdicio.

Además, al liberar la memoria correctamente, se reduce la fragmentación externa.

3. Tiempo de Ejecución
Sin Optimización
El tiempo de ejecución puede ser mayor debido al manejo de estructuras más grandes y menos eficientes.

Por ejemplo, copiar y manipular arrays estáticos de tamaño fijo consume más recursos.

Con Optimización
El tiempo de ejecución se reduce ligeramente debido a:

Menor cantidad de memoria manejada.

Operaciones de asignación y liberación más eficientes.

Menos sobrecarga en la manipulación de datos.

Ejemplo de Cálculo
Sin Optimización
Supongamos:

Nombre: Array de 50 caracteres (50 bytes).

Apellido: Array de 50 caracteres (50 bytes).

ID: Array de 10 caracteres (10 bytes).

Calificaciones: Array de 10 enteros (40 bytes).

Memoria total: 50 + 50 + 10 + 40 = 150 bytes.

Con Optimización
Supongamos:

Nombre: 6 caracteres (7 bytes).

Apellido: 5 caracteres (6 bytes).

ID: 8 caracteres (9 bytes).

Calificaciones: 3 enteros (12 bytes).

Memoria total: 7 + 6 + 9 + 12 = 34 bytes.

