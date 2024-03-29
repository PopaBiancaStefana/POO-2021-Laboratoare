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

void Sort::Print()
{
    nod* p = prim;
    while (p != nullptr)
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

Sort::Sort(const char* s)
{
    int i = 0;
    int a = 0;


    while (s[i] != NULL)
    {
        if (s[i] == ',')
        {
            Insert_lista(a);
            a = 0;
        }
        else
        {
            a = a * 10 + (sir[i] - '0');
        }

        i++;
    }

    Insert_lista(a);
}

void Sort::InsertSort(bool ascendent = false)
{
    for (int i = 1; i <n; i++)
    {
        int key = this->GetPointerFromIndex(i)->data;
        int j = i - 1;

        if (ascendent)
        {
            while (j >= 0 && GetPointerFromIndex(j)->data > key)
            {
                GetPointerFromIndex(j + 1)->data = GetPointerFromIndex(j)->data;
                j--;
            }
        }
        else
        {
            while (j >= 0 && GetPointerFromIndex(j)->data < key)
            {
                GetPointerFromIndex(j + 1)->data = GetPointerFromIndex(j)->data;
                j--;
            }
        }

        GetPointerFromIndex(j + 1)->data = key;
    }
}



void Sort::BubbleSort(bool ascendent )
{
    bool OK = true;

    while (OK == true)
    {
        OK = false;

        for (int i = 0; i < n - 1; i++)
        {
            if (ascendent)
            {
                if (GetPointerFromIndex(i)->data > GetPointerFromIndex(i + 1)->data)
                {
                    std::swap(GetPointerFromIndex(i)->data, GetPointerFromIndex(i + 1)->data);
                    OK = true;
                }
            }
            else
            {
                if (GetPointerFromIndex(i)->data < GetPointerFromIndex(i + 1)->data)
                {
                    std::swap(GetPointerFromIndex(i)->data, GetPointerFromIndex(i + 1)->data);
                    OK = true;
                }
            }
        }
}


int Sort::GetElementsCount()
{
    return n;
}

int Sort::GetElementFromIndex(int index)
{
    return (GetPointerFromIndex(index))->data;
}

nod* Sort::GetPointerFromIndex(int index)
{
    nod* p = prim;

    for (int i = 0; i < index; i++)
    {
        p = p->next;
    }
    return p;
}