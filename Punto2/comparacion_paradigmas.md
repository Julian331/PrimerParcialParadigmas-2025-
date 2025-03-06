Comparacion entre Programación Imperativa y Programacion Funcional en la Ordenacion de Estudiantes

- Claridad y Legibilidad del Codigo
En el enfoque imperativo de Python se caracteriza por detallar cada paso del proceso de ordenamiento esto incluimos bucles anidados y comparaciones directas. Hizo que el codigo sea mas largo pero explicito e intuitivo para diferentes enfoques de programacion.
El enfoque funcional de Haskell esta con funciones como sortBy y comparing en esto reduce la cantidad de codigo y mejora mucho la legibilidad 

- Nivel de Expresividad y Abstraccion
Al usar Python se debe definir muy explicitamente cada paso del algoritmo de ordenamiento mientras controla las comparaciones y os intercambios de elementos
En Haskell se define que se quiere logran sin necesidad de especificar como se hace, las funciones que se encapsulan son la logica de ordenamiento, proporcionando un nivel de abstraccion superior y permitiendo que se pueda expresar la intencion del programador de manera concisa y elegante

- Mutabilidad - Inmutabilidad (Manejo de Estructuras)
Python nos permitio modificar las listas directamente a traves de operaciones como Swap que son intercambios asi reflejando un enfoque basado en mutabilidad
Mientras en Haskell utiliza estructuras inmutables lo que hace que se genera una nueva lista sin modificar la original evitandonos asi efectos secundarios y mejora la seguridad del codigo porque no hay riesgo de modificar accidentaalmente los datos que ya estan

- Manejo de Estado
En Python el estado se maneja mediante las variables modificables lo que puede llevar a errores si no se controlan
En Haskell como es un tipo de lenguaje funcional puro a comparacion de python no hay un estado que se modifique pero sin embargo las transformaciones se realizaron a traves de funciones puras que nos generan nuevos valores sin modificar o alterar los que ya existen por eso facilita el comportamiento del programa

- Facilidad de Mantenimiento y Extension
En Python cualquier cambio en el criterio que se puso de ordenamiento nos implica a modificar el algoritmo hecho paso a paso lo que aumenta el riesgo de error
En Haskell facilita el mantenimiento y extension ya que si se necesita cambiar la logica del ordenamiento es suficiente con modificar la funcion de comparacion sin necesidad de alterar la estructura de nuestro programa

- Eficiencia
En Python la verdad el uso de ese algoritmo burbuja en Python resulta ser ineficiente y complejo
En Haskell se podria aprovechar un poco mas el tema de la inmutabilidad y la evaluacion deficiente sin embargo podemos optimizar el codigo y gestionar mucho mas la memoria

- Referencias
https://ellibrodepython.com/mutabilidad-python
https://dev.to/florius/haskell-para-mentes-imperativas-4n7k
https://www.studysmarter.es/resumenes/ciencias-empresariales/administracion/inmutabilidad/
