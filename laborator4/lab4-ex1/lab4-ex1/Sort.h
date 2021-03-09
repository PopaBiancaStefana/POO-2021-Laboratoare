#pragma once
#include<iostream>
#include<time.h>
#include<stdlib.h>
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
    int n;
public:

    Sort(int count, int min, int max);

    Sort(int m, int n, int o, int p);

    Sort(int x[], int count);

     Sort(int nr, ...);

     Sort(const char* sir);

    void InsertSort(bool ascendent = false);

    void QuickSort(bool ascendent = false);

    void BubbleSort(bool ascendent = false);

    void Print();

    int  GetElementsCount();

    int  GetElementFromIndex(int index);

    nod* GetPointerFromIndex(int index);

    void Insert_lista(int x);
  
}