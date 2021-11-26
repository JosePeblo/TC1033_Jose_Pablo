/*
 * Proyecto Restaurante
 * José Pablo Martínez Valdivia
 * A01275676
 * 18/11/2021
 */
#include <iostream>
#include <string>
#include <conio.h>
#include <stdlib.h>
#include "Alimento.h"
#include "Menu.h"
//#include "Menu.h"

void Pruebas();
void crearMenu(int,int,int);
int main()
{
    int respuesta;
    int cComidas;
    int cBebidas;

    std::cout<<"Elija el menu del dia que quiera crear"<<std::endl;
    std::cout<<"[1] Domingo"<<std::endl;
    std::cout<<"[2] Lunes"<<std::endl;
    std::cout<<"[3] Martes"<<std::endl;
    std::cout<<"[4] Miercoles"<<std::endl;
    std::cout<<"[5] Jueves"<<std::endl;
    std::cout<<"[6] Viernes"<<std::endl;
    std::cout<<"[7] Sabado"<<std::endl;
    std::cin>>respuesta;
    
    std::cout<<"Cuantos platillos desea agregar"<<std::endl;
    std::cin>>cComidas;
    std::cout<<"Cuantas bebidas desea agregar"<<std::endl;
    std::cin>>cBebidas;

    crearMenu(respuesta,cComidas,cBebidas);
    
    getch();
    return 0;
}
void crearMenu(int rDia,int cComidas,int cBebidas)
{
    std::string nombre;
    std::string seccion;
    std::string aux;
    float precio;
    int calif;
    Comida platillos[10];
    Bebida bebidas[10];
    
    for(int i = 0; i < cComidas; i++)
    {
        std::cout<<"Ingrese el nombre del platillo: ";
        std::cin>>nombre;
        std::cout<<"\nIngrese la seccion a la que pertenece: ";
        std::cin>>seccion;
        std::cout<<"\nIngrese el precio: ";
        std::cin>>precio;
        std::cout<<"\nIngrese la calificaion: ";
        std::cin>>calif;
        platillos[i].setNombre(nombre);
        platillos[i].setSeccion(seccion);
        platillos[i].setPrecio(precio);
        platillos[i].setcalificacion(calif);
    }
    std::cout<<std::endl;
    for(int i = 0; i < cBebidas; i++)
    {
        
        std::cout<<"Ingrese el nombre de la bebida: ";
        std::cin>>nombre;
        std::cout<<"\nIngrese el precio: ";
        std::cin>>precio;
        std::cout<<"\nIngrese la calificaion: ";
        std::cin>>calif;
        bebidas[i].setNombre(nombre);
        bebidas[i].setPrecio(precio);
        bebidas[i].setcalificacion(calif);
    }
    std::cout<<std::endl;
    Menu nuevoMenu(platillos,bebidas);
    nuevoMenu.printMenu();
    /*
    for(int i = 0; i < cComidas; i ++)
    {
        std::cout<<"\nplato# "<<i<<" "<<platillos[i].getNombre();
        std::cout<<"\nseccion "<<i<<" "<<platillos[i].getSeccion();
        std::cout<<"\nprecio "<<i<<" "<<platillos[i].getPrecio();
        std::cout<<"\ncalif "<<i<<" "<<platillos[i].getCalificacion();
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
    for(int i = 0; i < cBebidas; i ++)
    {
        std::cout<<"\nbebida# "<<i<<" "<<bebidas[i].getNombre();
        std::cout<<"\nprecio "<<i<<" "<<bebidas[i].getPrecio();
        std::cout<<"\ncalif "<<i<<" "<<bebidas[i].getCalificacion();
        std::cout<<std::endl;
    }*/
}
/*
void Pruebas()
{
    Alimento *menu[2];
    Alimento *a1 = new Bebida("Carajillo",100,4,true,false);
    Comida *a2 = new Comida("Chuleta",120.5,7,"Plato fuerte");

    menu[0] = a1;
    menu[1] = a2;

    
    std::cout<<"Nombre: "<<menu[1]->getNombre()<<std::endl;
    std::cout<<"Calificacion: "<<menu[1]->getCalificacion()<<std::endl;
    
    Comida * Comida2 = (Comida*)menu[1];

    std::cout<<"Seccion actual: "<<Comida2->getSeccion()<<std::endl;
    Comida2->setSeccion("Entradas");

    std::cout<<"Nueva seccion: "<<Comida2->getSeccion()<<std::endl;

    std::cout<<"\nNombre: "<<menu[0]->getNombre()<<std::endl;
    std::cout<<"Precio final: "<<menu[0]->precioFinal()<<std::endl;

    Bebida *Comida1 = (Bebida*)menu[0];
    
    std::cout<<"Es alcoholica? "<<Comida1->getIsAlcoholica()<<std::endl;

    delete a1;
    delete a2;
}*/