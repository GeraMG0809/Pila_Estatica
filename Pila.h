#include<iostream>


template <class obj>
class ListaEstatica{
    private:
        obj datos[50];
        int ultimo;
        bool inserta(obj, int);
        bool elimina(int);

    public:

        ListaEstatica();
        bool Vacia()const;
        bool Llena()const;

        obj recupera(int)const;
        int primero()const;
        int Ultimo()const;
        void imprime()const;
        int buscar(obj);
        void Apilar(obj);
        obj DesApilar();


};
