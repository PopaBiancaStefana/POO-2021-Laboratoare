#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;
template <class T, int n>
void sort(T v[])//greseala in loc de void T
{
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (v[i] > v[j])
			{
				T aux = v[i];
				v[i] = v[j];//greseala in loc de v[i] = v[j] v[j]= v[i]
				v[j] = aux;
			}
}
template <class T, int n>
void sort(char* v[])//greseala in loc de char* T
{
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (strcmp(v[i], v[j]) > 0)//greseala in loc de sctrcmp(v[i],v[j])>0   v[i]>v[j]
			{

				char* temp = new char[strlen(v[i]) + 1];
				strcpy(temp, v[i]);
				delete[] v[i];
				v[i] = new char[strlen(v[j]) + 1];
				strcpy(v[i], v[j]);
				delete[] v[j];
				v[j] = new char[strlen(temp) + 1];
				strcpy(v[j], temp);//greseala in loc de strcpy(v[j], temp) strcpy(temp,v[j])
			}
}
int main()
{
	int v1[] = { 12, 47, 7, 18 };
	double v2[] = { 11.27, 3.7, 19.1, 1.99, 8.78 };
	sort<int, 4>(v1);
	sort<double, 5>(v2);
	cout << "Vectorul 1 sortat este: ";
	for (int i = 0; i < 4; i++)
		cout << v1[i] << " ";
	cout << endl;
	cout << "Vectorul 2 sortat este: ";
	for (int i = 0; i < 4; i++)
		cout << v2[i] << " ";

	char* v3[3];
	v3[0] = new char[8];
	strcpy(v3[0], "mancare");
	v3[1] = new char[5];
	strcpy(v3[1], "somn");
	v3[2] = new char[7];
	strcpy(v3[2], "odihna");
	sort<char*, 3>(v3);
	cout << "Vectorul 3sortat este: ";
	for (int i = 0; i < 3; i++)
		cout << v3[i] << " ";
}
