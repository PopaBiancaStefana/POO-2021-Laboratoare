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
            for (int i = 0; i < size; i += 2)   //  i< size - 1 si i++
            {
                if (v[i] < v[i + 1])
                {
                    T tmp = v[i];
                    v[i] = v[i + 2];   // v[i]=v[i+1]
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