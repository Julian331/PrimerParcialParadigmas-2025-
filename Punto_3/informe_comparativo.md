# **Análisis de la Comparación Antes vs. Después**
La tabla muestra una optimización del código en términos de eficiencia en el uso de memoria, manejo de errores, cálculos de recursos y organización de la salida de datos. A continuación, se desglosan los cambios y mejoras realizadas:
| Métrica                     | Sin Optimización               | Con Optimización               |
|-----------------------------|--------------------------------|--------------------------------|
| **Memoria utilizada total** | 200 bytes (ejemplo)            | 128 bytes (ejemplo)            |
| **Fragmentación detectada** | Alta (debido a asignaciones fijas y relleno) | Baja o nula (asignación dinámica ajustada) |
| **Tiempo de ejecución**     | 10 ms (ejemplo)                | 8 ms (ejemplo)                 |


### Explicacion de la Tabla Comparativa

#### 1. **Memoria Utilizada Total**
- **Sin optimizacion**:
  - Se utilizan estructuras con tamaños fijos, como arrays estáticos para nombres, apellidos y calificaciones
  - Esto puede llevar a un uso excesivo de memoria, ya que se reserva espacio para el peor caso (por ejemplo, 50 caracteres para el nombre, aunque solo se usen 6)

- **Con optimizacion**:
  - Se asigna memoria dinamicamente, solo el espacio necesario para (nombre, apellido, ID y calificaciones).
  - Reduce el uso de memoria, ya que no se desperdicia espacio.

---

#### 2. **Fragmentacion Detectada**
- **Sin optimizacion**:
  - La  memoria fija puede causar fragmentacion interna, donde necesita más espacio del necesario dentro de bloques de memoria.
  - Esto ocurre porque los arrays estáticos no se ajustan al tamaño real de los datos.

- **Con optimización**:
  - La asignacion dinamica ajustada minimiza la fragmentacion, ya que se asigna exactamente al tamaño requerido.
  - no hay espacio desperdiciado.

---

#### 3. **Tiempo de Ejecucion**
- **Sin optimizacion**:
  - El tiempo de ejecucion puede ser mayor debido al manejo de estructuras mas grandes y menos eficientes.
  - Ejemplo: El programa puede tardar **10 ms** en ejecutar operaciones como agregar o eliminar estudiantes.

- **Con optimizacion**:
  - El tiempo de ejecución se reduce a la menor cantidad de memoria manejada y la eficiencia en las operaciones.
  - Ejemplo: El programa puede tardar **8 ms** en realizar las mismas operaciones.

---

### Conclusion final
- La optimización no solo reduce el uso de memoria, sino que también mejora la eficiencia del programa al evitar el desperdicio de recursos.
- La fragmentación se quita al asignar memoria de manera dinámica 
- El tiempo de ejecución  varia dependiendo del sistema
- la optimización tiende a mejorar el rendimiento

