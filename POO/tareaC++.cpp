/*A más tardar el Lunes.
Construya una clase llamada Figuras(circulo ,triangulo ,cuadrado , rectángulo). 
Donde sus métodos es obtener perímetro y área.
*/

#include <iostream>
using namespace std;

class Figuras{
    private:
        int numLados;
        float num1,num2;
    public:
        Figuras(int,float,float);
        void perimetro();
        void area();
        void identificar();
};

Figuras::Figuras(int lados,float val1,float val2){
    numLados=lados;
    num1=val1;//base
    num2=val2;//altura
}

void Figuras::identificar(){
    if (numLados==4){
        if(num1==num2){
            cout<<"La figura es un cuadrado"<<endl;
        }else{
            cout<<"La figura es un rectangulo"<<endl;
        }
    }else if (numLados==3){
        cout<<"La figura es un triangulo"<<endl;
    }else if (numLados==1){
        cout<<"La figura es una circunferencia"<<endl;
    }else{
        cout<<"No se puede identificar la figura"<<endl;
    }
}

void Figuras::perimetro(){
    float perim;
    if (numLados==4){
        perim=(num1*2)+(num2*2);
    }else if (numLados==3){
        perim=(num1)+(num2*2);
    }else if (numLados==1){
        perim=(3.1416 * num1);
    }else{
        cout<<"No se puede identificar la figura"<<endl;
    }
    cout<<"El perimetro de la figura es: "<<perim<<endl;
}

void Figuras::area(){
    float area;
    if (numLados==4){
        area=(num1*num2);
    }else if (numLados==3){
        area=(num1*num2)/2;
    }else if (numLados==1){
        area=(3.1416 * (num1*num1));
    }else{
        cout<<"No se puede identificar la figura"<<endl;
    }
    cout<<"El area de la figura es: "<<area<<endl;
}

int main(int argc, char const *argv[])
{
    //los valores se gregam de la siguiente forma:
    //num de lados, base, altura
    Figuras cuadrado(4,5,5);
    Figuras rectangulo(4,7,10);
    Figuras triangulo(3,10,7);
    Figuras circunferencia(1,5,0);

    cuadrado.identificar();
    cuadrado.perimetro();
    cuadrado.area();


    rectangulo.identificar();
    rectangulo.perimetro();
    rectangulo.area();


    triangulo.identificar();
    triangulo.perimetro();
    triangulo.area();


    circunferencia.identificar();
    circunferencia.perimetro();
    circunferencia.area();


    return 0;
}
