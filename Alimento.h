/**
 * Proyecto Restaurante
 * José Pablo Martínez Valdivia
 * A01275676
 * 03/12/2021
 */

/**
 * Clase Alimento contiene los métodos genéricos para clasificar alimentos
 * tiene 2 clases hijas que se dividen en alimetnos sólidos y líquidosÑ
 * Comida, Bebida
 *
 */

#ifndef ALIMENTO_H
#define ALIMENTO_H
#include <iostream>

// Declaración de clase Alimento
class Alimento
{
    private:
        // Declaración de variables de instancia
        std::string nombre;
        float precio;

    public:
        // Declaración de métodos del objeto
        Alimento();
        Alimento(std::string,float);
        
        void setNombre(std::string);
        void setPrecio(float);

        float getPrecio();
        std::string getNombre();

        virtual int precioFinal() = 0;
};

/**
 * Constructor por default
 * 
 * @param
 * @return Objeto Alimento
 */
Alimento::Alimento()
{
    nombre = "";
    precio = 0;
}

/**
 * Constructor que recibe valores apra llenar las variables de instancia
 * 
 * @param string nom: nombre del alimento, float prec: precio del alimento
 * @return Objeto Alimento
 */
Alimento::Alimento(std::string nom, float prec)
{
    nombre = nom;
    precio = prec;
}

// Setters de nombre y precio

/**
 * setter nombre
 * 
 * @param string nom: nombre del alimento
 * @return
 */
void Alimento::setNombre(std::string nom)
{
    nombre = nom;
}

/**
 * setter precio
 * 
 * @param float prec: precio del alimento
 * @return
 */
void Alimento::setPrecio(float prec)
{
    precio = prec;
}


// Getters de nombre y precio

/**
 * getter nombre
 * 
 * @param
 * @return string: nombre del alimento
 */
std::string Alimento::getNombre()
{
    return nombre;
}

/**
 * getter precio
 * 
 * @param
 * @return float: precio del alimento
 */
float Alimento::getPrecio()
{
    return precio;
}

// Declaro objeto Comida que hereda de Alimento
class Comida: public Alimento
{
    private:
        // Variable de instancia del objeto
        std::string seccion;

    public:
        // Métodos del objeto
        Comida();
        Comida(std::string,float,std::string);
        
        void setSeccion(std::string);

        std::string getSeccion();

        int precioFinal();
};

/**
 * Constructor por default
 * 
 * @param
 * @return Objeto Comida
 */
Comida::Comida()
{
    setNombre("");
    setPrecio(0);
    seccion = "";
}
/**
 * Constructor que recibe nombre, precio y sección
 * 
 * @param string nom: nombre de la comida, float prec: precio, 
 *        string secc: sección
 * @return Objeto Comida
 */
Comida::Comida(std::string nom,float prec,std::string secc):Alimento(nom,prec)
{
    seccion = secc;
}

// Setter de seccion

/**
 * setter seccion
 * 
 * @param string secc: nombre del alimento
 * @return
 */
void Comida::setSeccion(std::string secc)
{
    seccion = secc;
}

// Getter de seccion

/**
 * getter seccion
 * 
 * @param
 * @return string seccion de la comida
 */
std::string Comida::getSeccion()
{
    return seccion;
}

/**
 * Método que regresa el precio que tiene que tener el alimento
 * multiplicando el precio dado en insumos por lo que gana el 
 * restaruante de su precio final
 * 
 * @param
 * @return int precio*1.5
 */
int Comida::precioFinal()
{
    return getPrecio()*1.5;
}

// Declaro objeto Bebida que hereda de Alimento
class Bebida: public Alimento
{
    private:
        // Variables de instancia del objeto
        bool alcoholica;
        bool caliente;

    public:
        // Métodos del objeto
        Bebida();
        Bebida(std::string,float,bool,bool);
        
        void setIsAlcoholica(bool);
        void setIsCaliente(bool);

        bool getIsAlcoholica();
        bool getIsCaliente();
        int precioFinal();
};

/**
 * Constructor por default
 * 
 * @param
 * @return Objeto Bebida
 */
Bebida::Bebida()
{
    setNombre("");
    setPrecio(0);
    alcoholica = false;
}

/**
 * Constructor que recibe nombre, precio, alcoholica, caliente
 * 
 * @param string nom: nombre, float prec: precio, bool alc: si es alcoholica, 
 *        bool hot: si es caliente
 */
Bebida::Bebida(std::string nom,float prec,bool alc,bool hot):Alimento(nom,prec)
{
    alcoholica = alc;
    caliente = hot;
}

// Setters de alcoholica y caliente

/**
 * setter alcoholica
 * 
 * @param bool alc: si la bebida es alcoholica
 * @return
 */
void Bebida::setIsAlcoholica(bool alc)
{
    alcoholica = alc;
}
/**
 * setter caliente
 * 
 * @param bool cal: si la bebida es caliente
 * @return
 */
void Bebida::setIsCaliente(bool cal)
{
    caliente = cal;
}

// Getters de alcoholica y caliente

/**
 * getter alcoholica
 * 
 * @param
 * @return bool: si es o no alcoholica
 */
bool Bebida::getIsAlcoholica()
{
    return alcoholica;
}

/**
 * getter caliente
 * 
 * @param
 * @return bool: si es o no caliente
 */
bool Bebida::getIsCaliente()
{
    return caliente;
}

/**
 * Método que regresa el precio que tiene que tener el alimento
 * multiplicando el precio dado en insumos por lo que gana el 
 * restaruante de su precio final
 * 
 * @param
 * @return int precio*1.9
 */
int Bebida::precioFinal()
{
    return getPrecio()*1.9;
}

#endif