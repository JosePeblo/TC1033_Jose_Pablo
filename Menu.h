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
const int size = 50;
class Menu
{
    private:
        Comida *comidas;
        Bebida *bebidas;
    public:
        Menu(){}
        Menu(Comida&,Bebida&);
        
        void setComidas(Comida&);
        void setBebidas(Bebida&);

        Comida *getComidas();
        Bebida *getBebidas();

        void borrarAlimento(int,char);
        void agregarAlimento(Comida);
        void agregarAlimento(Bebida);
        int tamComida();
        int tamBebida();
};
Menu::Menu(Comida &_comidas,Bebida &_bebidas)
{
    comidas = &_comidas;
    bebidas = &_bebidas;
}

void Menu::setComidas(Comida &_comidas)
{
    comidas = &_comidas;
}
void Menu::setBebidas(Bebida &_bebida)
{
    bebidas = &_bebida;
}
Comida *Menu::getComidas()
{
    return comidas;
}
Bebida *Menu::getBebidas()
{
    return bebidas;
}

void Menu::borrarAlimento(int index,char tipo)
{
    switch(tipo)
    {
        case 'c':
            for(index; index < size-1; index++)
            {
                comidas[index].setNombre(comidas[index+1].getNombre());
            }
            break;
        case 'b':
            for(index; index < size-1; index++)
            {
                bebidas[index].setNombre(bebidas[index+1].getNombre());
            }
            break;
    }
}
void Menu::agregarAlimento(Comida tempCom)
{
    for(int i = 0; i < size; i++)
    {
        if(comidas[i].getNombre() == "")
        {
            comidas[i] = tempCom;
            break;
        }
    }
}
void Menu::agregarAlimento(Bebida tempBeb)
{
    for(int i = 0; i < size; i++)
    {
        if(bebidas[i].getNombre() == "")
        {
            bebidas[i] = tempBeb;
            break;
        }
    }
}
int Menu::tamComida()
{
    for(int i = 0; i < 50; i++)
    {
        if(comidas[i].getNombre() == "")
        {
            return i;
        }
    }
    return 0;
}
int Menu::tamBebida()
{
    for(int i = 0; i < 50; i++)
    {
        if(bebidas[i].getNombre() == "")
        {
            return i;
        }
    }
    return 0;
}
#endif