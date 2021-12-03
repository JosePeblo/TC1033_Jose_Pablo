/*
 * Proyecto Restaurante
 * José Pablo Martínez Valdivia
 * A01275676
 * 03/12/2021
 */

/**
 * Clase Menu, maneja grupos de alimentos, divididos en
 * Comidas y bebidas
 * 
 */

#ifndef MENU_H
#define MENU_H
#include <iostream>
#include "Alimento.h"

const int size = 50; // Constante de tamaño de arreglos

// Declaración de la clase Menu
class Menu
{
    private:
        // Declaración de las variables de instancia
        Comida *comidas;
        Bebida *bebidas;

    public:
        // Declaración de los métodos de la clase
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

/**
 * Constructor que recibe valores apra llenar las variables de instancia
 * 
 * @param Comida &_comidas: referencia a la lista de comidas 
 *        Bebida &_bebidas: referencia a la lista de bebidas
 * @return Objeto Menu
 */
Menu::Menu(Comida &_comidas,Bebida &_bebidas)
{
    comidas = &_comidas;
    bebidas = &_bebidas;
}

// Setters de camidas y bebidas

/**
 * setter comida
 * 
 * @param Comida &_comidas: referencia de comidas
 * @return
 */
void Menu::setComidas(Comida &_comidas)
{
    comidas = &_comidas;
}

/**
 * setter bebida
 * 
 * @param bebida &_bebidas: referencia de bebidas
 * @return
 */
void Menu::setBebidas(Bebida &_bebidas)
{
    bebidas = &_bebidas;
}

// Getters de comidas y bebidas

/**
 * getter comidas
 * 
 * @param
 * @return *Comida: apuntador a comidas
 */
Comida *Menu::getComidas()
{
    return comidas;
}

/**
 * getter bebidas
 * 
 * @param
 * @return *Bebida: apuntador a bebidas
 */
Bebida *Menu::getBebidas()
{
    return bebidas;
}

/**
 * Elimina el alimento en el indice dado y recorre el arreglo
 * modo 'c' para comidas
 * modo 'b' para bebidas
 * 
 * @param int index: indice del alimento a borrar, char modo de borrado
 * @return
 */
void Menu::borrarAlimento(int index,char modo)
{
    switch(modo)
    {
        case 'c':
            for(index; index < tamComida(); index++)
            {
                comidas[index] = comidas[index+1];
            }
            break;
        case 'b':
            for(index; index < tamBebida(); index++)
            {
                bebidas[index] = bebidas[index+1];
            }
            break;
    }
}

/**
 * Agrega una nueva Comida al final del arreglo de comidas
 * 
 * @param Comida tempCom: comida para agregar
 * @return
 */
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

/**
 * Agrega una nueva Bebida al final del arreglo de bebidas
 * 
 * @param Bebida tempBeb: Bebida para agregar
 * @return
 */
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

/**
 * Regresa el número de elementos llenos en el arreglo de comidas
 * 
 * @param
 * @return int: número de comidas
 */
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

/**
 * Regresa el número de elementos llenos en el arreglo de bebidas
 * 
 * @param
 * @return int: número de bebidas
 */
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