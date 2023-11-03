//Este programa calcula la nota final del estudiante ...................
// Realizado por Luis Lajara
// Fecha: 29 de octubre 2023
// Modificaciones:
#include <stdio.h>
#include <iostream>

int main() {
    
    double p1;
    double p2;
    double p3;
    double p4;
    double p5;
    double nota_final;

    
    std::cout << "Primer examen parcial ";
    std::cin >> p1;
    std::cout << "Practicas primer parcial ";
    std::cin >> p2;
    std::cout << "Segundo examen parcial ";
    std::cin >> p3;
    std::cout << "Practicas segundo parcial ";
    std::cin >> p4;
    std::cout << "Examen final ";
    std::cin >> p5;
    std::cout << "\n";
    nota_final = p1 + p2 + p3 + p4 + p5;
    
    std::cout << "La nota final del estudiante es: " << nota_final<< std::endl;
    
    
    return 0;
    
    
}
