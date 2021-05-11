#include "lista.h"


int main()
{

    lista<int> v;

    v.push(5);
    v.push(1);
    v.push(7);
    v.push(7);
    v.push(3);
    v.push(8);
    v.push(10);


    v.Print();
    v.sort();
    v.Print();


    lista<double> v2;

    v2.push(5.4);
    v2.push(1);
    v2.push(7.9);
    v2.push(7.4);
    v2.push(3);
    v2.push(8.21);
    v2.push(10);


    v2.Print();
    v2.sort();
    v2.Print();




}