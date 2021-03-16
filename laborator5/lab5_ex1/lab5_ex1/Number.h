#pragma once
#include<stdlib.h>
#include<cstring>
#include<iostream>
using namespace std;
class Number

{
	char nr[256];
	int baza;

public:

	Number(const char* value, int base); //iau parametrul si il pun in membru,   where base is between 2 and 16
	~Number();  

	friend Number operator+ (Number v1, Number v2);

	//friend Number operator- (Number v1, Number v2);

	Number operator! ();

	Number operator[] (int k); //elementul de de pozitia data

	Number operator< (Number v);

	//Number operator> (Number v);

	//Number operator== (Number v);

	Number& operator-- ();   //prefix

	Number operator-- (int);  //postfix


	void SwitchBase(int newBase); //convert sirul din cadrul clasei in noua baza

	void Print(); 
	 
	int  GetDigitsCount(); 

	int  GetBase(); 

	int valoare(char c);
	char reValoare(int x);

};