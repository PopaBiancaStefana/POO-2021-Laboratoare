#pragma once
#include<iostream>
#include<cstring>
using namespace std; 

class Student
{
private:
	char Name[30];
	float mathematicsGrade;
	float HistoryGrade;
	float EnglishGrade;
	float AverageGrade;
public:
	void SetName(const char* s);
	char* GetName();
	void SetmathematicsGrade(float grade);
	float GetmathematicsGrade();
	void SetEnglishGrade(float grade);
	float GetEnglishGrade();
	void SetHistoryGrade(float grade);
	float GetHistoryGrade();
	float RetrieveAverageGrade();
};

