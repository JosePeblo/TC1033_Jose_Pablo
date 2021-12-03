/*
 * Proyecto Restaurante
 * José Pablo Martínez Valdivia
 * A01275676
 * 03/12/2021
 */

/**
 * Este programa genera menús para un restarante, los menús tienen comidas y
 * bebidas. El programa te permite manipular los menús, quitando y agregando 
 * hasta 50 entradas para cada categoría de alimento; e imprimir el menu
 * de una forma ordenada mostrando los alimentos y separando las bebidas 
 * por categoria.
 * 
 */
//Bibliotecas
#include <iostream> 
#include <string> 
#include <conio.h>
#include <stdlib.h>
#include "Alimento.h"
#include "Menu.h"

//Prototipo de las funciones
void printOpciones();
void nuevoAlimento(Comida&);
void nuevoAlimento(Bebida&);
void crearMenu(Menu&,int,int);
void printComidas(Menu);
void printBebidas(Menu);

int main()
{
    //Variables para guardar elecciones en menus y objetos
    int selec,index,cantidadCom,cantidadBeb;
    Menu nuevoMenu;
    Comida auxComida;
    Bebida auxBebida;

    std::cout<<"\nCrea un menu para comenzar"<<std::endl;

    std::cout<<"\nCuantos platillos desea agregar: ";
    std::cin>>cantidadCom;
    std::cout<<"Cuantas bebidas desea agregar: ";
    std::cin>>cantidadBeb;

    //Creamos el menu con la cantidad de comidas y bebidas seleccionadas
    crearMenu(nuevoMenu,cantidadCom,cantidadBeb);
    //mostramos el menu
    printComidas(nuevoMenu);
    printBebidas(nuevoMenu);

    bool i = true;
    //Ciclo para continuar el programa hasta que se seleccione salir
    while(i)
    {
        //Imprimir las opciones
        printOpciones();
        //Leer seleccion
        std::cin>>selec;
        //Switch para cada eleccion
        switch(selec)
        {
            //Caso 1 imprime el menu
            case 1:
                printComidas(nuevoMenu);
                printBebidas(nuevoMenu);
                break;
            //Caso 2 crea un nuevo alimento y lo guarda en el menu
            case 2:
                nuevoAlimento(auxComida);
                nuevoMenu.agregarAlimento(auxComida);
                break;
            //Caso 3 crea una nueva bebida y la guarda en el menu
            case 3:
                nuevoAlimento(auxBebida);
                nuevoMenu.agregarAlimento(auxBebida);
                break;
            //Caso 4 muestra las comidas y elimina la que selecciones
            case 4:
                printComidas(nuevoMenu);
                std::cout<<"\nSelecciona el indice que quieres eliminar: ";
                std::cin>>index;
                nuevoMenu.borrarAlimento(index,'c');
                printComidas(nuevoMenu);
                break;
            //Caso 5 muestra las bebidas y elimina la que selecciones
            case 5:
                printBebidas(nuevoMenu);
                std::cout<<"\nSelecciona el indice que quieres eliminar: ";
                std::cin>>index;
                nuevoMenu.borrarAlimento(index,'b');
                printBebidas(nuevoMenu);
                break;
            //Caso 6 cierra el ciclo
            case 6:
                i = false;
        }
    }
    
    getch(); //Pausa del sistema
    return 0;
}

void printOpciones()
{
    //Imprime las opciones
    std::cout<<"[1] mostrar menu"<<std::endl;
    std::cout<<"[2] agregar una nueva comida"<<std::endl;
    std::cout<<"[3] agregar una nueva bebida"<<std::endl;
    std::cout<<"[4] eliminar una comida"<<std::endl;
    std::cout<<"[5] eliminar una bebida"<<std::endl;
    std::cout<<"[6] salir"<<std::endl;
    
}
void nuevoAlimento(Comida &auxComida)
{
    /**
     * Pregunta los valores de comida y crea un objeto con estos
     * @param Comida &auxComida
     * @return
     */

    std::string nombre;
    std::string seccion;
    float precio;

    std::cout<<"Ingrese el nombre del platillo sin espacios: ";
    std::cin>>nombre;
    std::cout<<"\nIngrese la seccion a la que pertenece sin espacios: ";
    std::cin>>seccion;
    std::cout<<"\nIngrese el precio: ";
    std::cin>>precio;
    auxComida = Comida(nombre,precio,seccion);

}
void nuevoAlimento(Bebida &auxBebida)
{
    /**
     * Pregunta los valores de bebida y crea un objeto con estos
     * @param Bebida &auxBebida
     * @return Bebida por referencia
     */

    std::string nombre;
    float precio;
    bool alcoholica;
    bool caliente;

    std::cout<<"Ingrese el nombre de la bebida: ";
    std::cin>>nombre;
    std::cout<<"\nIngrese el precio: ";
    std::cin>>precio;
    std::cout<<"\nEs alcoholica?: 1: si  0: no    ";
    std::cin>>alcoholica;
    std::cout<<"\nEs caliente?: 1: si  0: no    ";
    std::cin>>caliente;
    auxBebida = Bebida(nombre,precio,alcoholica,caliente);

}
void crearMenu(Menu &nuevoMenu,int cantidadCom,int cantidadBeb)
{
    /**
     * Recorre la lista de comidas y la lista de bebias preguntando los 
     * valores de cada una de estas para llenar las listas de objetos 
     * y usarlas para construir el objeto menu
     * @param Menu &nuevoMenu, int cantidadCom, int cantidadBeb
     * @return Menu por referencia
     */

    std::string nombre;
    std::string seccion;
    float precio;
    bool alcoholica;
    bool caliente;

    Comida platillos[50];
    Bebida bebidas[50];
    
    for(int i = 0; i < cantidadCom; i++)
    {
        std::cout<<"Ingrese el nombre del platillo sin espacios: ";
        std::cin>>nombre;
        std::cout<<"\nIngrese la seccion a la que pertenece sin espacios: ";
        std::cin>>seccion;
        std::cout<<"\nIngrese el precio: ";
        std::cin>>precio;
        platillos[i].setNombre(nombre);
        platillos[i].setSeccion(seccion);
        platillos[i].setPrecio(precio);
    }
    std::cout<<std::endl;
    for(int i = 0; i < cantidadBeb; i++)
    {
        
        std::cout<<"Ingrese el nombre de la bebida: ";
        std::cin>>nombre;
        std::cout<<"\nIngrese el precio: ";
        std::cin>>precio;
        std::cout<<"\nEs alcoholica?: 1: si  0: no    ";
        std::cin>>alcoholica;
        std::cout<<"\nEs caliente?: 1: si  0: no    ";
        std::cin>>caliente;
        bebidas[i].setNombre(nombre);
        bebidas[i].setPrecio(precio);
        bebidas[i].setIsAlcoholica(alcoholica);
        bebidas[i].setIsCaliente(caliente);
    }
    nuevoMenu = Menu(*platillos,*bebidas);
}
void printComidas(Menu ptrMenu)
{
    /**
     * Imprime con formato las comidas, mostrando su nombre, seccion y precio
     * @param Menu ptrMenu
     * @return 
     */

    std::cout<<"\n~~Comidas~~\n"<<std::endl;
    int tam = ptrMenu.tamComida();
    for(int i = 0; i < tam; i++)
    {
        if(ptrMenu.getComidas()[i].getNombre() == "")
        {
            break;
        }
        std::cout<<"Platillo["<<i<<"]: "<<ptrMenu.getComidas()[i].getNombre();
        std::cout<<"......"<<ptrMenu.getComidas()[i].getSeccion();
        std::cout<<"......"<<ptrMenu.getComidas()[i].precioFinal()<<std::endl;
    }
}
void printBebidas(Menu ptrMenu)
{
    /**
     * Imprime con formato las bebidas, separandolas en secciones de:
     * bebidas, bebidas calientes y bebidas alcoholicas
     * @param Menu ptrMenu
     * @return 
     */

    int tam = ptrMenu.tamBebida();

    std::cout<<"\n~~Bebidas~~\n"<<std::endl;
    for(int i = 0; i < tam; i++)
    {
        if(ptrMenu.getBebidas()[i].getNombre() == "")
        {
            break;
        }
        if(ptrMenu.getBebidas()[i].getIsAlcoholica() ||
           ptrMenu.getBebidas()[i].getIsCaliente())
        {
            continue;
        }
        std::cout<<"Bebida["<<i<<"]: "<<ptrMenu.getBebidas()[i].getNombre();
        std::cout<<"......"<<ptrMenu.getBebidas()[i].precioFinal()<<std::endl;
    }

    std::cout<<"\n~~Bebidas Calientes~~\n"<<std::endl;

    for(int i = 0; i < tam; i++)
    {
        if(ptrMenu.getBebidas()[i].getNombre() == "")
        {
            break;
        }
        if(ptrMenu.getBebidas()[i].getIsAlcoholica() ||
          !ptrMenu.getBebidas()[i].getIsCaliente())
        {
            continue;
        }
        std::cout<<"Bebida["<<i<<"]: "<<ptrMenu.getBebidas()[i].getNombre();
        std::cout<<"......"<<ptrMenu.getBebidas()[i].precioFinal()<<std::endl;
    }

    std::cout<<"\n~~Bebidas Alcoholicas~~\n"<<std::endl;

    for(int i = 0; i < tam; i++)
    {
        if(ptrMenu.getBebidas()[i].getNombre() == "")
        {
            break;
        }
        if(!ptrMenu.getBebidas()[i].getIsAlcoholica() ||
            ptrMenu.getBebidas()[i].getIsCaliente())
        {
            continue;
        }
        std::cout<<"Bebida["<<i<<"]: "<<ptrMenu.getBebidas()[i].getNombre();
        std::cout<<"......"<<ptrMenu.getBebidas()[i].precioFinal()<<std::endl;
    }
    std::cout<<std::endl;
}