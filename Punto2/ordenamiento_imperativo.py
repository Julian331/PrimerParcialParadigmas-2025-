#Algoritmo Bubble Sort: es un metodo sencillo para ordenar una lista de elementos
#Estilo Imperativo, Bucles 
#En este caso se ordena una lista de estudiantes por calificacion y nombre


from builtins import len, print, range


def bubble_sort_students(students):
    n = len(students)
    for i in range(n - 1):
        for j in range(n - 1 - i):
            # Comparar por calificacion (descendente)
            if students[j][1] < students[j + 1][1] or \
               (students[j][1] == students[j + 1][1] and students[j][0] > students[j + 1][0]):
                # Intercambiar si es necesario
                students[j], students[j + 1] = students[j + 1], students[j]

#Lista de estudiantes por nombre y calificacion
students = [
    ("Angel", 95),
    ("Joaquin", 93),
    ("Julian", 95),
    ("Valentina", 92),
    ("Humba", 90)
]

#ordena la lista
bubble_sort_students(students)

for student in students:
    print(student)


