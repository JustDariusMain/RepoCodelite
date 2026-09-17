#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

struct persona{
    char nombre[30];
    int edad;
    long telefono;
}
void Escribir(persona p){
    cout << p.nombre << " tiene " << p.edad << " annyos y su telefono es " << p.telefono;
    cout << endl;
}
void EscribirPuntero(persona p){
    cout << p->nombre << " tiene " << p->edad << " annyos y su telefono es " << p->telefono;
    cout << endl;
}
persona CrearPersona(cahr n[30], int e, long t){
    persona aux;
    strcpy(aux.nombre, n);
    aux.edad = e;
    aux.telefono = t;
    return aux;
}