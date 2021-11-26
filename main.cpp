/*
 * Proyecto Restaurante
 * José Pablo Martínez Valdivia
 * A01275676
 * 18/11/2021
 */
#include <iostream>
#include "Alimento.h"

int main()
{
    Alimento *menu[2];
    Alimento *a1 = new Bebida("Carajillo",100,4,true,false);
    Platillo *a2 = new Platillo("Chuleta",120.5,7,"Plato fuerte");

    menu[0] = a1;
    menu[1] = a2;

    std::cout<<"Nombre: "<<menu[1]->getNombre()<<std::endl;
    std::cout<<"Calificacion: "<<menu[1]->getCalificacion()<<std::endl;
    
    Platillo * platillo2 = (Platillo*)menu[1];

    std::cout<<"Seccion actual: "<<platillo2->getSeccion()<<std::endl;
    platillo2->setSeccion("Entradas");

    std::cout<<"Nueva seccion: "<<platillo2->getSeccion()<<std::endl;

    std::cout<<"\nNombre: "<<menu[0]->getNombre()<<std::endl;
    std::cout<<"Precio final: "<<menu[0]->precioFinal()<<std::endl;
    
    Bebida *platillo1 = (Bebida*)menu[0];
    
    std::cout<<"Es alcoholica? "<<platillo1->getIsAlcoholica()<<std::endl;

    delete a1;
    delete a2;
    return 0;
}
