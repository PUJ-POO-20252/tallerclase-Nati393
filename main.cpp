#include <iostream>
#include "calificaciones_utils.h"

int main() {
    // Datos del estudiante
    std::string nombre = "Juan Sanchez";
    double calificaciones[] = {4.5, 4.0, 4.5, 5.0, 3.0};
    int tamano = 5;

    // Calcular estadísticas
    double promedio = calcularPromedio(calificaciones, tamano);
    double minima = obtenerNotaMinima(calificaciones, tamano);
    double maxima = obtenerNotaMaxima(calificaciones, tamano);

    // Imprimir reporte
    std::cout << "--- Reporte de Calificaciones ---" << std::endl;
    std::cout << "Estudiante: " << nombre << std::endl;
    std::cout << "Promedio: " << promedio << std::endl;
    std::cout << "Nota mas alta: " << maxima << std::endl;
    std::cout << "Nota mas baja: " << minima << std::endl;

    return 0;
}