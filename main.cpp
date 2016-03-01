// queue::push/pop
#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <queue>          // std::queue
#include <list>          // std::list
using namespace std;


//devuelve true si todos los elementos de la cola son pares, de lo contrario devuelve false
bool sonPares(queue<int> mi_cola)
{
    while(!mi_cola.empty()){
        if(mi_cola.front()%2==0){
            mi_cola.pop();
        }else
            return false;
    }
    return true;
}

//devuelve true si todos los elementos de la lista son pares, de lo contrario devuelve false
bool sonPares(list<int> mi_lista)
{
    for(list<int>::iterator list_temp = mi_lista.begin(); list_temp != mi_lista.end(); list_temp++){
        if(mi_lista.back()%2==0){
            mi_lista.back();
        }else
            return false;
    }
    return true;
}

//devuelve true si str es un elemento de mi_cola, de lo contrario devuelve false
bool existe(queue<string> mi_cola, string str)
{
    while(!mi_cola.empty()){
        if(mi_cola.front()==str){
            return true;
        }
        mi_cola.pop();
    }
    return false;
}

//devuelve true si str es un elemento de mi_cola, de lo contrario devuelve false
bool existe(list<string> mi_lista, string str)
{
    for(list<string>:: iterator temp = mi_lista.begin(); temp != mi_lista.end(); temp++){
        if(mi_lista.back()== str){
            return true;
        }
        mi_lista.back();
    }
    return false;
}

//devuelve la suma de los elementos de la cola
int getSuma(queue<int> mi_cola)
{
    int ac=0;
    while(!mi_cola.empty()){
        ac += mi_cola.front();
        mi_cola.pop();
    }
    return ac;
}

//devuelve la suma de la cantidad letras de cada cadena de la lista
int sumarLetras(list<string> mi_lista)
{

    for(list<string>::iterator temp = mi_lista.begin();temp != mi_lista.end(); temp++){

    }
    return -1;
}

//Devuelve true si los elementos de la lista son estan ordenados alfabeticamente, de lo contrario devuelve false
bool estaOrdenada(list<char>mi_lista)
{
    char c = '65';

    for(list<char>::iterator temp = mi_lista.begin();temp != mi_lista.end(); temp++){
        if(mi_lista.back()){
            c++;
        }else
            return false;
    }
    return true;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
