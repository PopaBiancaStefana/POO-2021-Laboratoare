#pragma once
#include<iostream>
using namespace std;

class Sort

{
private:
    struct nod
    {
        int data;
        nod* prev;
        nod* next;
   };
    nod * prim, * ultim;

public:

    Sort(int count, int min, int max);

    Sort();

    Sort(int x[], int count);

    Sort();

    Sort();

    void InsertSort(bool ascendent = false);

    void QuickSort(bool ascendent = false);

    void BubbleSort(bool ascendent = false);

    void Print();

    int  GetElementsCount();

    int  GetElementFromIndex(int index);

    void Insert_lista(int x);

}