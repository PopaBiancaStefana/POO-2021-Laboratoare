#include "Student.h"
#include "Compare.h"
int main()
{
	float mate,eng, hist;

	char n[30] ;
	Student el1, el2;

	cout << "Nume elev 1: ";
	cin.getline(n, 30);
	el1.SetName(n);
	cout << "Nume elev 2: ";
	cin.getline(n, 30);
	el1.SetName(n);

	cout << "Nota mate elev 1: ";
	cin >> mate;
	el1.SetmathematicsGrade(mate);
	cout << "Nota mate elev 2: ";
	cin >> mate;
	el2.SetmathematicsGrade(mate);

	cout << "Nota engleza elev 1: ";
	cin >> eng;
	el1.SetEnglishGrade(eng);
	cout << "Nota engleza elev 2: ";
	cin >> eng;
	el2.SetEnglishGrade(eng);

	cout << "Nota istorie elev 1: ";
	cin >> hist;
	el1.SetHistoryGrade(hist);
	cout << "Nota istorie elev 2: ";
	cin >> hist;
	el2.SetHistoryGrade(hist);

	
	cout << CompareName(el1, el2)<<endl;
	cout << CompareMathematicsGrade(el1, el2)<<endl;
	cout << CompareEnglishGrade(el1, el2)<<endl;
	cout << CompareHistoryGrade(el1, el2) << endl;
	cout << CompareAverageGrade(el1, el2);

	return 0;
}