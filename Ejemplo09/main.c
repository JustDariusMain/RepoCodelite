#include <iostream>
using namespace std;

void machaca1(int x, int* y){
    *y = x;
    return; //Funcion no devuelve nada, de ahí
            //que el return sea nulo, aunque al
            //ser una función tiene que tener el return
}

void machaca2(int x, int& y){
    y = x;
    return;
}

int main(int argc, char** argv){
    int a,b;
    cout << "Escribe dos datos enteros:" << endl;
    int copia = b;
    cout << "Antes de machaca1: " << a << " y " << b << endl << endl;
    machaca1(a,&b);
    cout << "Después de machaca1: " << a << " y " << b << endl << endl;
    b = copia;
    cout << "Antes de machaca2: " << a << " y " << b << endl;
    machaca2(a,b);
    cout << "Después de machaca2: " << a << " y " << b << endl;
    return 0;
}