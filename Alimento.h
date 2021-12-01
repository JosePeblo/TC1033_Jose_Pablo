/*
 * Proyecto Restaurante
 * José Pablo Martínez Valdivia
 * A01275676
 * 18/11/2021
 */
#ifndef ALIMENTO_H
#define ALIMENTO_H
#include <iostream>

class Alimento
{
    private:
        std::string nombre;
        float precio;
    public:
        Alimento();
        Alimento(std::string,float);
        
        void setPrecio(float);
        void setNombre(std::string);

        float getPrecio();
        std::string getNombre();

        virtual int precioFinal() = 0;
};
class Comida: public Alimento
{
    private:
        std::string seccion;
    public:
        Comida();
        Comida(std::string,float,std::string);
        ~Comida(){};
        
        void setSeccion(std::string);

        std::string getSeccion();

        int precioFinal();
};
class Bebida: public Alimento
{
    private:
        bool alcoholica;
        bool caliente;
    public:
        Bebida();
        Bebida(std::string,float,bool,bool);
        
        void setIsAlcoholica(bool);
        void setIsCaliente(bool);

        bool getIsAlcoholica();
        bool getIsCaliente();
        int precioFinal();
};

// Constructores de Alimento
Alimento::Alimento()
{
    nombre = "";
    precio = 0;
}
Alimento::Alimento(std::string nom, float prec)
{
    nombre = nom;
    precio = prec;
}
//Setters
void Alimento::setPrecio(float prec)
{
    precio = prec;
}

void Alimento::setNombre(std::string nom)
{
    nombre = nom;
}
//Getters
float Alimento::getPrecio()
{
    return precio;
}
std::string Alimento::getNombre()
{
    return nombre;
}

int Alimento::precioFinal()
{
    return precio;
}
// Constructores de Comida
Comida::Comida()
{
    setNombre("");
    setPrecio(0);
    seccion = "";
}
Comida::Comida(std::string nom,float prec,std::string secc):Alimento(nom,prec)
{
    seccion = secc;
}
void Comida::setSeccion(std::string secc)
{
    seccion = secc;
}
std::string Comida::getSeccion()
{
    return seccion;
}
int Comida::precioFinal()
{
    return getPrecio()*1.5;
}

// Constructores de Bebida
Bebida::Bebida()
{
    setNombre("");
    setPrecio(0);
    alcoholica = false;
}
Bebida::Bebida(std::string nom,float prec,bool alc,bool hot):Alimento(nom,prec)
{
    alcoholica = alc;
    caliente = hot;
}
void Bebida::setIsAlcoholica(bool alc)
{
    alcoholica = alc;
}
void Bebida::setIsCaliente(bool cal)
{
    caliente = cal;
}

bool Bebida::getIsAlcoholica()
{
    return alcoholica;
}
bool Bebida::getIsCaliente()
{
    return caliente;
}
int Bebida::precioFinal()
{
    return getPrecio()*1.9;
}

#endif