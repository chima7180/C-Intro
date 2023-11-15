#include <iostream>
#include <string>


int main() {

    std::cout << "Tapez un nombre entier: ";

    std::string nombre;
    std::getline(std::cin, nombre);

    std::cout << "Vous avez tapé: " << nombre << std::endl;

    return 0;

}
