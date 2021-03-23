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
	//~Number();  

	Number(const Number & d); //copy

	friend Number operator+ ( Number v1,  Number v2);

	//friend Number operator- (Number v1, Number v2);

	void operator! ();

	char operator[] (int index); 

	int operator< (const Number v);

	//int operator> (const Number* v);

	//int operator== (const Number* v);

	void operator-- ();   //prefix

	void operator-- (int);  //postfix

	

	void SwitchBase(int newBase); 

	void Print(); 
	 
	int  GetDigitsCount(); 

	int  GetBase(); 

	int toDeci(const char* v);

	void DecitoBase(int num, int base);

	int valoare(char c);

	char reValoare(int x);

};