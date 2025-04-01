#    * Gestion de inventarios Kotline - Paradigmas de Programacion (2025-1) *

- **Nombres:** Julian Caro, Angel Robles
- **Codigos:** 
- **Asignatura:** Paradigmas de Programacion
- **Periodo:** 2025-1

# * Informe Técnico *  
# * Diseño del Sistema *

El sistema está diseñado siguiendo los principios de la Programación Orientada a Objetos (POO), con un enfoque en el encapsulamiento y la modularidad. Consta de dos clases principales:

Clase Producto: Representa cada ítem en el inventario con sus atributos privados (id, nombre, cantidad, precio) y métodos públicos para acceder y modificar estos valores. También incluye métodos para calcular el valor total y el IVA.

Clase Inventario: Gestiona la colección de productos, proporcionando operaciones CRUD (Crear, Leer, Actualizar, Eliminar) y funcionalidades adicionales como cálculos financieros.

# ** Principios de POO Aplicados **
Encapsulamiento: Todos los atributos de la clase Producto son privados y solo se accede a ellos mediante métodos públicos (getters y setters).

Abstracción: Las clases representan conceptos del mundo real (Producto, Inventario) con sus comportamientos asociados.

Modularidad: Cada clase tiene una responsabilidad bien definida y separada.

Reutilización: Los métodos de cálculo (valor total, IVA) están diseñados para ser usados tanto a nivel de producto individual como de inventario completo.

# **Decisiones de Diseño**

Generación automática de IDs: El inventario asigna IDs secuenciales automáticamente para evitar duplicados.

Validación de datos: Se incluyen validaciones básicas para evitar valores negativos o inválidos.

Actualización selectiva: El método de actualización permite modificar solo los campos que se desean cambiar.

Formato de salida: Los valores monetarios se muestran con 2 decimales para mejor legibilidad.

Manejo de errores: Se incluyen mensajes claros cuando ocurren errores (producto no encontrado, datos inválidos).

# **Ejecución del Programa**

El programa muestra un menú interactivo con las siguientes opciones:

Agregar producto: Solicita nombre, cantidad y precio, y lo añade al inventario.

Listar productos: Muestra todos los productos con sus detalles.

Actualizar producto: Permite modificar uno o más campos de un producto existente.

Eliminar producto: Remueve un producto del inventario por su ID.

Resumen financiero: Muestra cálculos agregados de valor total e IVA.

Salir: Termina la ejecución del programa.

=== SISTEMA DE GESTIÓN DE INVENTARIO ===
1. Agregar producto
2. Listar productos
3. Actualizar producto
4. Eliminar producto
5. Resumen financiero
6. Salir
Seleccione una opción: 1
Nombre del producto: Laptop HP
Cantidad: 5
Precio unitario: 1200
Producto agregado exitosamente:
ID: 1, Nombre: Laptop HP, Cantidad: 5, Precio: $1200.00, Valor Total: $6000.00, IVA: $1140.00

=== SISTEMA DE GESTIÓN DE INVENTARIO ===
1. Agregar producto
2. Listar productos
3. Actualizar producto
4. Eliminar producto
5. Resumen financiero
6. Salir
Seleccione una opción: 2

=== LISTA DE PRODUCTOS ===
ID: 1, Nombre: Laptop HP, Cantidad: 5, Precio: $1200.00, Valor Total: $6000.00, IVA: $1140.00
=========================

=== SISTEMA DE GESTIÓN DE INVENTARIO ===
1. Agregar producto
2. Listar productos
3. Actualizar producto
4. Eliminar producto
5. Resumen financiero
6. Salir
Seleccione una opción: 5

=== RESUMEN FINANCIERO ===
Valor total del inventario: $6000.00
IVA total (19%): $1140.00
Total con IVA: $7140.00
=========================
