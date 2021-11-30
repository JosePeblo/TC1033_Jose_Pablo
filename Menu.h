/*
 * Proyecto Restaurante
 * José Pablo Martínez Valdivia
 * A01275676
 * 18/11/2021
 */
#ifndef MENU_H
#define MENU_H
#include <iostream>
#include "Alimento.h"

class Menu
{
    private:
        Comida *comidas;
        Bebida *bebidas;
    public:
        Menu(){}
        Menu(Comida*[],Bebida*[]);
        
        void setComidas(Comida*[]);
        void setBebidas(Bebida*[]);

        Comida *getComidas();
        Bebida *getBebidas();

        void printMenu();

        void borrarAlimento(int);
        void agregarAlimento(Comida);
        void agregarAlimento(Bebida);
};
Menu::Menu(Comida *_comidas[],Bebida *_bebidas[])
{
    comidas = *_comidas;
    bebidas = *_bebidas;
}

void Menu::setComidas(Comida *_comidas[])
{
    comidas = *_comidas;
}
void Menu::setBebidas(Bebida *_bebida[])
{
    bebidas = *_bebida;
}
Comida *Menu::getComidas()
{
    return comidas;
}
Bebida *Menu::getBebidas()
{
    return bebidas;
}
void Menu::printMenu()
{
    for(int i = 0; i < 5; i++)
    {
        std::cout<<"Platillo n["<<i<<"] "<<comidas[i].getNombre()<<std::endl;
    }
    std::cout<<std::endl;
    for(int i = 0; i < 5; i++)
    {
        std::cout<<"Bebida n["<<i<<"] "<<bebidas[i].getNombre()<<std::endl;
    }
}
void Menu::borrarAlimento(int index)
{
    
}
#endif