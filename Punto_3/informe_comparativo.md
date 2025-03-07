# **Análisis de la Comparación Antes vs. Después**
La tabla muestra una optimización del código en términos de eficiencia en el uso de memoria, manejo de errores, cálculos de recursos y organización de la salida de datos. A continuación, se desglosan los cambios y mejoras realizadas:
| Métrica                     | Sin Optimización               | Con Optimización               |
|-----------------------------|--------------------------------|--------------------------------|
| **Memoria utilizada total** | 200 bytes (ejemplo)            | 128 bytes (ejemplo)            |
| **Fragmentación detectada** | Alta (debido a asignaciones fijas y relleno) | Baja o nula (asignación dinámica ajustada) |
| **Tiempo de ejecución**     | 10 ms (ejemplo)                | 8 ms (ejemplo)                 |


### Explicación de la Tabla Comparativa

#### 1. **Memoria Utilizada Total**
- **Sin optimización**:
  - Se utilizan estructuras con tamaños fijos, como arrays estáticos para nombres, apellidos y calificaciones.
  - Esto puede llevar a un uso excesivo de memoria, ya que se reserva espacio para el peor caso (por ejemplo, 50 caracteres para el nombre, aunque solo se usen 6).
  - Ejemplo: Si se usan arrays estáticos, la memoria total puede ser de **200 bytes** (dependiendo de los tamaños fijos definidos).

- **Con optimización**:
  - Se asigna memoria dinámicamente, reservando solo el espacio necesario para cada campo (nombre, apellido, ID y calificaciones).
  - Esto reduce significativamente el uso de memoria, ya que no se desperdicia espacio.
  - Ejemplo: Si el nombre tiene 6 caracteres, el apellido 5, el ID 8 y hay 3 calificaciones, la memoria total puede ser de **128 bytes**.

---

#### 2. **Fragmentación Detectada**
- **Sin optimización**:
  - La asignación de memoria fija puede causar **fragmentación interna**, donde se reserva más espacio del necesario dentro de bloques de memoria.
  - Esto ocurre porque los arrays estáticos no se ajustan al tamaño real de los datos.

- **Con optimización**:
  - La asignación dinámica ajustada minimiza la fragmentación, ya que cada bloque de memoria se asigna exactamente al tamaño requerido.
  - Esto resulta en una **fragmentación baja o nula**, ya que no hay espacio desperdiciado.

---

#### 3. **Tiempo de Ejecución**
- **Sin optimización**:
  - El tiempo de ejecución puede ser mayor debido al manejo de estructuras más grandes y menos eficientes.
  - Ejemplo: El programa puede tardar **10 ms** en ejecutar operaciones como agregar o eliminar estudiantes.

- **Con optimización**:
  - El tiempo de ejecución se reduce ligeramente debido a la menor cantidad de memoria manejada y la eficiencia en las operaciones de asignación y liberación.
  - Ejemplo: El programa puede tardar **8 ms** en realizar las mismas operaciones.

---

### Ejemplo de Cálculo de Memoria

#### Sin optimización:
- Supongamos que se usa un array estático de 50 caracteres para el nombre, 50 para el apellido, 10 para el ID y un array fijo de 10 calificaciones.
- Memoria total: `50 (nombre) + 50 (apellido) + 10 (ID) + (10 * 4) (calificaciones) = 140 bytes` (sin contar el relleno y la estructura base).

#### Con optimización:
- Si el nombre tiene 6 caracteres, el apellido 5, el ID 8 y hay 3 calificaciones:
- Memoria total: `6 (nombre) + 5 (apellido) + 8 (ID) + (3 * 4) (calificaciones) = 31 bytes` (más la estructura base).

---

### Notas Adicionales
- La optimización no solo reduce el uso de memoria, sino que también mejora la eficiencia del programa al evitar el desperdicio de recursos.
- La fragmentación se minimiza al asignar memoria de manera dinámica y liberarla correctamente.
- El tiempo de ejecución puede variar dependiendo del sistema, pero en general, la optimización tiende a mejorar el rendimiento.

Esta tabla es un ejemplo genérico, y los valores exactos pueden variar según la implementación específica y los datos de entrada.
