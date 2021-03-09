#include "Sort.h"

void Sort::Insert_lista(int x)
{
  
    ultim->data = x;
    ultim->next = NULL;
    ultim->prev = NULL;

    if (prim == NULL) //lista vida
        prim = ultim;
    else
    {

        nod* nod_curent = prim;
        while (nod_curent->next != NULL)
            nod_curent = nod_curent->next;

        nod_curent->next = ultim;
        ultim->prev = nod_curent;
    }
}

Sort::Sort(int count, int min, int max)
{   
    int random;
    n = count;
    srand((unsigned)time(0));

    for (int i = 0; i < n; i++)
    {
        random = srand() % max + min;
        Insert_lista(random);
    }
}

//Sort();

Sort::Sort(int x[], int count);

//Sort();

//Sort();

// void Sort::InsertSort(bool ascendent = false);


//void Sort::QuickSort(bool ascendent = false);

//void Sort::BubbleSort(bool ascendent = false);

void Sort::Print();

int Sort::GetElementsCount();

int Sort::GetElementFromIndex(int index);
