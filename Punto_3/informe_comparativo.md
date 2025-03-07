# Comparación Antes vs. Después

| Aspecto | Codigo Original (Antes) | Codigo Optimizado (Después) | Mejora |
|---------|----------------------------|---------------------------------|------------|
| Uso de memoria en edad | unsigned short edad; (16 bits) | unsigned short edad : 7; (7 bits) | Reduce espacio con bitfield. |
| Almacenamiento de ID | char id[15]; (fijo, 15 bytes) | char ID; (dinámico con strdup) | Evita desperdicio de memoria. |
| Tipo de num_calificaciones | int num_calificaciones; | size_t num_calificaciones; | Más seguro y portátil. |
| Copia de calificaciones | Copia manual con for | Uso de memcpy | Mayor eficiencia. |
| Manejo de errores | No verifica strdup | Verifica todas las asignaciones | Mayor seguridad. |
| Calculo de memoria usada | No existe | calcular_memoria_utilizada() | Permite analizar uso de memoria. |
| Impresión de datos | Mensaje básico en main | Función imprimir_estudiante() | Salida más organizada. |
