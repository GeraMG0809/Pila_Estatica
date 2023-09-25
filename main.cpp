 #include"Pila.cpp"
#include"Empleado.cpp"

void Insertar(ListaEstatica<empleado>&);
void Eliminar(ListaEstatica<empleado>&);
void Buscar(ListaEstatica<empleado>& );



int main(){
    ListaEstatica<empleado> miPila;
    int opcion;
    do {
        std::cout << "\t \n === MENU ===" << std::endl;
        std::cout << "1. PUSH" << std::endl;
        std::cout << "2. POP" <<std:: endl;
        std::cout << "3. TOP  " <<std::endl;
        std::cout << "4. Salir" << std::endl;
        std::cout << "Ingrese la opcion: ";
        std::cin >> opcion;
        std::cin.ignore();
        switch(opcion){

            case 1:
                Insertar(miPila);
                break;
            case 2: 
                Eliminar(miPila);
                break;
            case 3:
                miPila.imprime();
                break;
            case 4: 
                break;
            
            default:
                std::cout<<"Opcion invalida...";
        }
    }while(opcion != 4);
}





void Insertar(ListaEstatica<empleado>& myPila){
   empleado nuevo_empleado;
    std::cin>>nuevo_empleado;
    int i = myPila.Ultimo();
    myPila.Apilar(nuevo_empleado);
}


void Eliminar(ListaEstatica<empleado>& myPila){
    myPila.DesApilar();
}


void Buscar(ListaEstatica<empleado>& myPila){
   empleado buscar;
    int encontrado;
    std::string name;

    if(myPila.Vacia()){
        std::cout<<"Imposible Buscar... Lista Vacia\n";
    }else{
        std::cout<<"Ingrese el nombre del empleado a buscar: ";
        std::cin>>name;
        buscar.setNombre(name);
        encontrado = myPila.buscar(buscar);
        std::cout<<encontrado;

    }
}

