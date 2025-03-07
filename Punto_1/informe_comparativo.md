# Comparación entre Enfoque Iterativo y Recursivo

1) **TIEMPO DE EJECUCIÓN**  
   - **ITERATIVO**  
       - Es más rápido ya que no es necesario que tenga que usar las llamadas recursivas  
       - Cada iteración representa una operación básica por lo que hace que sea más eficiente en cuanto a tiempo  
       - Si es un número pequeño, el tiempo de ejecución es corto  
   - **RECURSIVO**  
       - En comparación al iterativo, acá se presenta una saturación en cuanto a las llamadas recursivas  
       - En cada llamada recursiva es necesario guardar los elementos del dato, lo que hace que su tiempo de ejecución sea lento  
       - En caso de que sea un número pequeño tardará más comparándolo con el iterativo.  
       - Funciona mejor cuando no se necesita efectividad sino más bien un código el cual sea claro.  

---

2) **CANTIDAD DE MEMORIA USADA**  
   - **ITERATIVO**  
       - Utiliza una cantidad constante de memoria, ya que solo necesita almacenar datos.  
       - No necesita una pila de llamadas, lo que hace que no sea necesario preocuparse por el desbordamiento de pila  
   - **RECURSIVO**  
       - Tiene que usar memoria adicional para cada llamada recursiva, donde *n* será el número de llamadas  
       - En caso de que *n* tome valores grandes, causará el desbordamiento de la pila como sería calcular el factorial de 200,000  

---

| Aspecto                 | Iterativo                                      | Recursivo                                      |
|-------------------------|-----------------------------------------------|-----------------------------------------------|
| **Tiempo de ejecución** | Más rápido (menos sobrecarga)                 | Más lento (sobrecarga de llamadas)           |
| **Consumo de memoria**  | O(1) (constante)                              | O(n) (depende de la profundidad)             |
| **Facilidad de código** | Menos intuitivo para problemas recursivos     | Más intuitivo y claro                        |
| **Escalabilidad**       | Escala mejor para valores grandes             | No escala bien para valores grandes          |
| **Riesgo de stack overflow** | No aplica                            | Sí, para valores grandes de n                |


3) **CONCLUSIONES**  
   - El enfoque iterativo es mejor en cuanto a términos de tiempo y memoria, sobre todo en valores grandes de *n*  
   - El enfoque recursivo tiene limitación de memoria  
   - La elección entre recursivo vs iterativo depende de qué se busque. Si es eficiencia, el iterativo es mejor, pero si es claridad o enfoque en el código, el recursivo es mejor.  
