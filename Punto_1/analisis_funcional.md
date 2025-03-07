### Mejoras mediante el paradigma funcional
#### 1 Evaluacion perezosa (Lazy evaluation)
 - ** paradigma funcional**
     - La evaluacion perezosa retrasa los calculos hasta que realmente se necesitan Esto es util para trabajar con secuencias infinitas o calculos costosos
   - **Ejemplo en Haskell**
     ```haskell
     factorial Integer -> Integer
     factorial n = product [1n]
     ```

#### 2 Inmutabilidad
   - ** paradigma funcional**
     - En el paradigma funcional los datos son inmutables,hace que el codigo sea mas predecible y facil 
   - **Ejemplo en Haskell**
     ```haskell
     factorial Integer -> Integer
     factorial n = foldl (*) 1 [1n]
     ```

### Comparacion de enfoques

| Caracteristica               | Enfoque iterativo (C)       | Enfoque recursivo (C)       | Paradigma funcional (Haskell) |
|------------------------------|-----------------------------|-----------------------------|-------------------------------|
| **Uso de memoria**           | Bajo (sin pila de llamadas) | Alto (pila de llamadas)     | Bajo (optimizacion de cola)   |
| **Tiempo de ejecucion**      | Rapido                     | Lento para valores grandes  | Rapido (evaluacion perezosa)  |

