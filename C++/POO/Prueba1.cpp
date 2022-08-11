#include<iostream>
using namespace std;

class persona{
    private://atributos
        int edad;
        string nombre;
    public://metodos
        persona(int,string);
        void leer();
        void correr();
};

persona::persona(int _edad,string _nombre){
    edad=_edad;
    nombre=_nombre;
}
void persona::leer(){
    cout<<"yo "<<nombre<< " estoy leyendo"<<endl;
}
void persona::correr(){
    cout<<"yo "<<nombre<<" Estoy corriendo"<<endl;
}
int main(){
    persona p1=persona(20,"alvaro");
    p1.leer();
    p1.correr();
    return 0;
}