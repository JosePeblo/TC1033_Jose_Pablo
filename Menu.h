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
        Alimento *alimentos[100];
    public:
        void setPlatillo();
        void setBebida();

        Platillo getPlatillos();
        Bebida getBebidas();
};

#endif