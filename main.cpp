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

void Pruebas();
void crearMenu(Menu,int,int);


int main()
{
    int tam = 5;
    Comida *comidas = new Comida[tam];
    Bebida *bebidas = new Bebida[tam];

    Comida *copiaDeComidas;

    comidas[0] = Comida("fileteM",100,"carnes");
    comidas[1] = Comida("chuleta",200,"carnes");
    comidas[2] = Comida("camaron",300,"pescados");
    comidas[3] = Comida("supdcebolla",80,"sopas");
    comidas[4] = Comida("atun",2000,"pescados");

    Menu nueMenu(&comidas,&bebidas);
    nueMenu.printMenu();
    nueMenu.borrarAlimento(2);
    nueMenu.printMenu();
    
    getch();

    delete[] comidas;
    delete[] bebidas;
    
    return 0;
}



// void principal()
// {
//     int cantidadCom;
//     int cantidadBeb;
//     Menu nuevoMenu;

//     std::cout<<"Cuantos platillos desea agregar"<<std::endl;
//     std::cin>>cantidadCom;
//     std::cout<<"Cuantas bebidas desea agregar"<<std::endl;
//     std::cin>>cantidadBeb;

//     crearMenu(nuevoMenu,cantidadCom,cantidadBeb);
    
// }
// void crearMenu(Menu *nuevoMenu,int cantidadCom,int cantidadBeb)
// {
//     std::string nombre;
//     std::string seccion;
//     float precio;
//     Comida *platillos = new Comida[cantidadCom];
//     Bebida *bebidas = new Bebida[cantidadBeb];
    
//     for(int i = 0; i < cantidadCom; i++)
//     {
//         std::cout<<"Ingrese el nombre del platillo: ";
//         std::cin>>nombre;
//         std::cout<<"\nIngrese la seccion a la que pertenece: ";
//         std::cin>>seccion;
//         std::cout<<"\nIngrese el precio: ";
//         std::cin>>precio;
//         platillos[i].setNombre(nombre);
//         platillos[i].setSeccion(seccion);
//         platillos[i].setPrecio(precio);
//     }
//     std::cout<<std::endl;
//     for(int i = 0; i < cantidadBeb; i++)
//     {
        
//         std::cout<<"Ingrese el nombre de la bebida: ";
//         std::cin>>nombre;
//         std::cout<<"\nIngrese el precio: ";
//         std::cin>>precio;
//         std::cout<<"\nIngrese la calificaion: ";
//         bebidas[i].setNombre(nombre);
//         bebidas[i].setPrecio(precio);
//     }
//     std::cout<<std::endl;
//     Menu nuevoMenu(&platillos,&bebidas);
//     delete[] platillos;
//     delete[] bebidas;
    
    
    
//     /*
//     for(int i = 0; i < cComidas; i ++)
//     {
//         std::cout<<"\nplato# "<<i<<" "<<platillos[i].getNombre();
//         std::cout<<"\nseccion "<<i<<" "<<platillos[i].getSeccion();
//         std::cout<<"\nprecio "<<i<<" "<<platillos[i].getPrecio();
//         std::cout<<"\ncalif "<<i<<" "<<platillos[i].getCalificacion();
//         std::cout<<std::endl;
//     }
//     std::cout<<std::endl;
//     for(int i = 0; i < cBebidas; i ++)
//     {
//         std::cout<<"\nbebida# "<<i<<" "<<bebidas[i].getNombre();
//         std::cout<<"\nprecio "<<i<<" "<<bebidas[i].getPrecio();
//         std::cout<<"\ncalif "<<i<<" "<<bebidas[i].getCalificacion();
//         std::cout<<std::endl;
//     }*/
// }




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