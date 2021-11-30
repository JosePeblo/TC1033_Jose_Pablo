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

const int tam = 10;
class Menu
{
    private:
        Comida comidas[tam];
        Bebida bebidas[tam];
    public:
        Menu(){}
        Menu(Comida[],Bebida[]);
        
        void setComidas(Comida[]);
        void setBebidas(Bebida[]);

        Comida *getComidas();
        Bebida *getBebidas();

        void printMenu();

        void borrarAlimento(int);
        void agregarAlimento(Comida);
        void agregarAlimento(Bebida);
};
Menu::Menu(Comida _comidas[],Bebida _bebidas[])
{
    for(int i = 0; i < tam; i++)
    {
        comidas[i] = _comidas[i];
    }
    for(int i = 0; i < tam; i++)
    {
        bebidas[i] = _bebidas[i];
    }
}
void Menu::setComidas(Comida _comidas[])
{
    for(int i = 0; i < tam; i++)
    {
        comidas[i] = _comidas[i];
    }
}
void Menu::setBebidas(Bebida _bebida[])
{
    for(int i = 0; i < tam; i++)
    {
        bebidas[i] = _bebida[i];
    }
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
    for(int i = 0; i < tam; i++)
    {
        std::cout<<"Platillo n["<<i<<"] "<<comidas[i].getNombre()<<std::endl;
    }
    std::cout<<std::endl;
    for(int i = 0; i < tam; i++)
    {
        std::cout<<"Bebida n["<<i<<"] "<<bebidas[i].getNombre()<<std::endl;
    }
}
#endif