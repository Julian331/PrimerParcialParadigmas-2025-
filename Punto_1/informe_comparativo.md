1) TIEMPO DE EJECUCION
   - ITERATIVO
       - Es mas rapido ya que no es necesario que tenga que usar las llamadas recursivas
       - Cada iteracion representa una operacion basica por lo que hace que sea mas eficiente en cuanto a tiempo
       - si es un numero pequeño, el tiempo de ejecucion es corto
    - RECURSIVO
        - En comparacion al iterativo, aca se presenta una saturacion en cuanto a las llamadas recursivas
        - En cada llamada recursiva es necesario guardar los elementos del dato. lo que hace que su tiempo de ejecucion sea lento
        - en caso de que sea un numero pequeño tardara mas comparandolo con el iterativo.
        - Funciona mejor cuando no se necesita efectividad sino mas bien un codigo el cual sea claro.
----------------------------------------------------------------------------------------------------------------------------------------
2) CANTIDAD DE MEMORIA USADA
   - ITERATIVO
       - utiliza una cantidad constante de memoria, ya que solo necesita almacenar datos.
       - no necesita una pila de llamadas, lo que hace que no sea necesario preocuparse por el desbordamiento de pila
   - RECURSIVO
       - tiene que usar memoria adicional para cada llamada recursiva. donde n sera el numero de llamadas
       - en caso de que n tome valores grandes causara el desbordamiento de la pila como seria calcular el factorial de 200.000
----------------------------------------------------------------------------------------------------------------------------------------

Aspecto	                               Iterativo	                                                   Recursivo
Tiempo de ejecución	          Más rápido (menos sobrecarga) 	                       Más lento (sobrecarga de llamadas)
Consumo de memoria	          O(1) (constante)	                                      O(n) (depende de la profundidad)
Facilidad de código	          Menos intuitivo para problemas recursivos	           Más intuitivo y claro
Escalabilidad	                Escala mejor para valores grandes	No escala           bien para valores grandes
Riesgo de stack overflow	    No aplica	                                            Sí, para valores grandes de n


----------------------------------------------------------------------------------------------------------------------------------------
3) CONCLUSIONES
   - el enfoque iterativo es mejor en cuanto a terminos de tiempo y memoria. sobre todo en valores grandes de n
   - el enfoque recursivo tiene limitacion de memoria
   - la eleccion entre recursivo vs iterativo, depende de que se busque. si es eficiencia, el iterativo es mejor. pero si es claridad o enfoque en el codigo el recursivo es mejor.
        
