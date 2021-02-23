#include "Compare.h"

int CompareName(Student el1, Student el2)
{
	char* n1, * n2;
	n1= el1.GetName();
	n2= el2.GetName();
	while (*n1 != '\0' && *n2!='\0')
	{
		if (*n1 < *n2)
			return 1;
		if (*n1 > *n2)
			return -1;
	n1++; n2++;
	}
	if (*n1 != '\0')
		return 1;
	if (*n2 != '\0')
		return -1;
	return 0;

}

int CompareMathematicsGrade(Student el1, Student el2)
{
	float g1, g2;
	g1 = el1.GetmathematicsGrade();
	g2= el2.GetmathematicsGrade();
	if (g1 == g2)
		return 0;
	if (g1 > g2)
		return 1;
	else
		return -1;

}

int CompareEnglishGrade(Student el1, Student el2)
{
	float g1, g2;
	g1 = el1.GetEnglishGrade();
	g2 = el2.GetEnglishGrade();
	if (g1 == g2)
		return 0;
	if (g1 > g2)
		return 1;
	else
		return -1;

}
int CompareHistoryGrade(Student el1, Student el2)
{
	float g1, g2;
	g1 = el1.GetHistoryGrade();
	g2 = el2.GetHistoryGrade();
	if (g1 == g2)
		return 0;
	if (g1 > g2)
		return 1;
	else
		return -1;

}
int CompareAverageGrade(Student el1, Student el2)
{
	float g1, g2;
	g1 = el1.RetrieveAverageGrade();
	g2 = el2.RetrieveAverageGrade();
	if (g1 == g2)
		return 0;
	if (g1 > g2)
		return 1;
	else
		return -1;

}