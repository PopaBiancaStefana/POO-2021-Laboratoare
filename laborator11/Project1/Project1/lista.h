#pragma once
#include <iostream>

using namespace std;

template<typename T>
class lista
{
   
	T* v;
	int size;
	int max_size;

public:
    lista()
    {
        max_size = 5;
        v = new T[max_size];
        size = 0;
    }

    void Realloc(int new_size)
    {
        max_size = new_size;

        T* new_v = new T[max_size];

        for (int i = 0; i < size; i++)
            new_v[i] = v[i];

        delete[] v;
        v = new_v;
    }


   void push(const T& val)
    {
        if (size + 1 == max_size)
        {
            Realloc(max_size * 2);
        }

        v[size++] = val;
    }


    void sort()
    {
        bool ok;

        if (!size)
            return;

        do
        {
            ok = false;
            for (int i = 0; i < size - 1; i++)
            {
                    if (v[i] < v[i + 1])
                    {
                        T tmp = v[i];
                        v[i] = v[i + 1];
                        v[i + 1] = tmp;
                        ok = true;
                    }
            }

        } while (ok);
    }

    void Print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << v[i] << ' ';
        }

        cout << endl;
    }
};

