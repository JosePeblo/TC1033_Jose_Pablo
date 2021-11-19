#include <iostream>

class Platillo
{
    public:
        Platillo();
        Platillo(std::string nom, int pI, int rel);
        
        void setPrecio(int);
        void setRelev(int);
        void setNombre(std::string);

        int getPrecioFinal();
        int getRelevancia();
        std::string getNombre();

    private:
        std::string nombre;
        int precioFinal;
        int relevancia;
};
Platillo::Platillo()
{
    nombre = "";
    precioFinal = 0;
    relevancia = 0;
}
Platillo::Platillo(std::string nom, int pI, int rel)
{
    nombre = nom;
    precioFinal = pI*1.30;
    relevancia = rel;
}
void Platillo::setPrecio(int pI)
{
    precioFinal = pI*1.30;
}
void Platillo::setRelev(int rel)
{
    relevancia = rel;
}
void Platillo::setNombre(std::string nom)
{
    nombre = nom;
}

int Platillo::getPrecioFinal()
{
    return precioFinal;
}
int Platillo::getRelevancia()
{
    return relevancia;
}
std::string Platillo::getNombre()
{
    return nombre;
}

class Bebida
{
    public:
        Bebida();
        Bebida(std::string nom, int pI, int rel, bool alc);
        
        void setPrecio(int);
        void setRelev(int);
        void setNombre(std::string);

        int getPrecioFinal();
        int getRelevancia();
        bool getIsAlcoholica();
        std::string getNombre();

    private:
        std::string nombre;
        int precioFinal;
        int relevancia;
        bool alcoholica;
};
Bebida::Bebida()
{
    nombre = "";
    precioFinal = 0;
    relevancia = 0;
    alcoholica = false;
}
Bebida::Bebida(std::string nom, int pI, int rel, bool alc)
{
    nombre = nom;
    precioFinal = pI*1.90;
    relevancia = rel;
    alcoholica = alc;
}
void Bebida::setPrecio(int pI)
{
    precioFinal = pI*1.90;
}
void Bebida::setRelev(int rel)
{
    relevancia = rel;
}
void Bebida::setNombre(std::string nom)
{
    nombre = nom;
}

int Bebida::getPrecioFinal()
{
    return precioFinal;
}
int Bebida::getRelevancia()
{
    return relevancia;
}
bool Bebida::getIsAlcoholica()
{
    return alcoholica;
}
std::string Bebida::getNombre()
{
    return nombre;
}

class Postre
{
    public:
        Postre();
        Postre(std::string nom, int pI, int rel);
        
        void setPrecio(int);
        void setRelev(int);
        void setNombre(std::string);

        int getPrecioFinal();
        int getRelevancia();
        std::string getNombre();

    private:
        std::string nombre;
        int precioFinal;
        int relevancia;
};
Postre::Postre()
{
    nombre = "";
    precioFinal = 0;
    relevancia = 0;
}
Postre::Postre(std::string nom, int pI, int rel)
{
    nombre = nom;
    precioFinal = pI*1.60;
    relevancia = rel;
}
void Postre::setPrecio(int pI)
{
    precioFinal = pI*1.60;
}
void Postre::setRelev(int rel)
{
    relevancia = rel;
}
void Postre::setNombre(std::string nom)
{
    nombre = nom;
}

int Postre::getPrecioFinal()
{
    return precioFinal;
}
int Postre::getRelevancia()
{
    return relevancia;
}
std::string Postre::getNombre()
{
    return nombre;
}
