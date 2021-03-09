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

void Sort::Afis_lista()
{
    nod* p = prim;
    while (p != NULL)
    {
        std::cout << p->data << ' ';
        p = p->next; 
    }
}

Sort::Sort(int count, int min, int max)
{   
 
    n = count;
    srand((unsigned)time(0));
    int random = rand() % max;
    while (random < min || random > max) // aleg random >=min si <=max
    {
        random = random + min;
        random = random % max;
    }

    for (int i = 1; i < n; i++)
    {
        int random = rand() % max;
        while (random < min || random > max) 
        {
            random = random + min;
            random = random % max;
        }
        Insert_lista(random);
    }
}

Sort::Sort(int m, int n, int o, int p)
{
    Insert_lista(m);
    Insert_lista(n);
    Insert_lista(o);
    Insert_lista(p);
}

Sort::Sort(int x[], int count)
{
    for(int i=1;i<count;i++)
        Insert_lista(x[i]);
}

Sort::Sort(int nr, ...)
{
    va_list list;

    va_start(list, nr);

    for (int i = 1; i < nr; i++)
    {
        Insert_lista(va_arg(list, int));
    }
    va_end(list);
}

Sort::Sort(const char* s);

// void Sort::InsertSort(bool ascendent = false);


//void Sort::QuickSort(bool ascendent = false);

//void Sort::BubbleSort(bool ascendent = false);

void Sort::Print();

int Sort::GetElementsCount();

int Sort::GetElementFromIndex(int index);
