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
    protected:
        std::string nombre;
        float precio;
        int calificacion;
    public:
        Alimento();
        Alimento(std::string,float,int);
        
        void setPrecio(float);
        void setcalificacion(int);
        void setNombre(std::string);

        float getPrecio();
        int getCalificacion();
        std::string getNombre();

        virtual int precioFinal();
};
class Comida: public Alimento
{
    private:
        std::string seccion;
    public:
        Comida();
        Comida(std::string,float,int,std::string);
        
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
        Bebida(std::string,float,int,bool,bool);
        
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
    calificacion = 0;
}
Alimento::Alimento(std::string nom, float prec, int calif)
{
    nombre = nom;
    precio = prec;
    calificacion = calif;
}
//Setters
void Alimento::setPrecio(float prec)
{
    precio = prec;
}
void Alimento::setcalificacion(int calif)
{
    calificacion = calif;
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
int Alimento::getCalificacion()
{
    return calificacion;
}
std::string Alimento::getNombre()
{
    return nombre;
}

int Alimento::precioFinal()
{
    return precio*1.3;
}
// Constructores de Comida
Comida::Comida()
{
    Alimento();
    seccion = "";
}
Comida::Comida(std::string nom,float prec,int calif,std::string secc):
                                                 Alimento(nom,prec,calif)
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
    return precio*1.5;
}

// Constructores de Bebida
Bebida::Bebida()
{
    Alimento();
    alcoholica = false;
}
Bebida::Bebida(std::string nom,float prec,int calif,bool alc,bool cal):
                                              Alimento(nom,prec,calif)
{
    alcoholica = alc;
    caliente = cal;
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
    return precio*1.9;
}

#endif