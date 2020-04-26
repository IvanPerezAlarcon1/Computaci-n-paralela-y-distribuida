#include <iostream>
#include <fstream>
#include <cstdlib>


using namespace std;

/**
 * Función que muestra los participantes del grupo
 */
void participante();

/**
 * Taller computacional
 * @param argc cantidad de argumentos
 * @param argv argumentos
 * @return El código de salida del programa
 */
int main(int argc, char** argv) {

    std::ofstream archivoSalida("archivo.csv");
    archivoSalida << "Hola;Muchachos;Saludos" << std::endl;
    archivoSalida.close();

    participante();
    return EXIT_SUCCESS;
}

void participante() {
    std::cout << std::endl << "=== Tarea ===" << std::endl;
    std::cout << std::endl << "Ivan Perez Alarcon" << std::endl; // Reemplazar por su nombre
}
