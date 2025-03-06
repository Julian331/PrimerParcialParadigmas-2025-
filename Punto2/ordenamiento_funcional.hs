import Data.List (sortBy) 
--sortBy es una funcion, Data.List es un modulo
import Data.Ord (comparing)
--comparing es una funcion, Dta.ord es un modulo

--Definir lista de estudiantes lista de tuplas nombre y calificacion
students :: [(String, Int)]
students = [
    ("Angel", 85),
    ("Joaquin", 90),
    ("Julian", 85),
    ("Hassana", 92),
    ("Sofia", 90)
  ]

--Funcion para ordenar los estudiantes primero por calificacion descendente y luego por nombre ascendente
topStudents :: [(String, Int)] -> [(String, Int)]
--pura por: no modifica ningun estado externo ni depende de el
topStudents = sortBy (comparing (negate . snd) <> comparing fst)

--Ejecutar la ordenacion y mostrar el resultado
main :: IO ()
main = mapM_ print (topStudents students)
