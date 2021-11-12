#include <iostream>
#include "Platillos.h"

int main()
{
    Platillo platillo_1("Lasagna",70,20);
    platillo_1.setRelev(90);
    std::cout << "Nombre: " << platillo_1.getNombre() << std::endl;
    std::cout << "Precio final: " << platillo_1.getPrecioFinal() << std::endl;
    std::cout << "Relevancia: " << platillo_1.getRelevancia() << std::endl;

    Bebida bebida_1("Jugo de naranja",20,35,false);
    bebida_1.setNombre("Nectar de la vida");
    std::cout << "Nombre: " << bebida_1.getNombre() << std::endl;
    std::cout << "Precio final: " << bebida_1.getPrecioFinal() << std::endl;
    std::cout << "Relevancia: " << bebida_1.getRelevancia() << std::endl;
    std::cout << "Es alcoholica?: " << bebida_1.getIsAlcoholica() << std::endl;

    Postre postre_1("Brownie",70,20);
    postre_1.setPrecio(80);
    std::cout << "Nombre: " << postre_1.getNombre() << std::endl;
    std::cout << "Precio final: " << postre_1.getPrecioFinal() << std::endl;
    std::cout << "Relevancia: " << platillo_1.getRelevancia() << std::endl;

}