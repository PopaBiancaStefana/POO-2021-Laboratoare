#include "Student.h"

char* Student::GetName()
{
	return Name;
}

void Student::SetName(const char* s)
{
	strcpy_s(Name, s);
}

float Student::GetmathematicsGrade()
{
	return mathematicsGrade;
}

void Student::SetmathematicsGrade(float grade)
{
	if (grade >= 1 && grade <= 10)
		mathematicsGrade = grade;
}

float Student::GetEnglishGrade()
{
	return EnglishGrade;
}

void Student::SetEnglishGrade(float grade)
{
	if (grade >= 1 && grade <= 10)
		EnglishGrade = grade;
}

float Student::GetHistoryGrade()
{
	return HistoryGrade;
}

void Student::SetHistoryGrade(float grade)
{
	if (grade >= 1 && grade <= 10)
		HistoryGrade = grade;
}

float Student::RetrieveAverageGrade()
{
	AverageGrade = (mathematicsGrade + EnglishGrade + HistoryGrade) / 3;
	return AverageGrade;
}