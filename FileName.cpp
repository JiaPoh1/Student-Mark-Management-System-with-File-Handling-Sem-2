#include <iostream>
#include <fstream>
#include <string>
#define LINE "========================================";

using namespace std;
const int Size = 5;
string subject[Size] = { "HCI", "OSS", "CAL", "PRO", "SAD" };

const string studentData = "studentdata.txt";


struct GRADE {

	char G_HCI{};
	char G_OSS{};
	char G_SAD{};
	char G_CAL{};
	char G_PRO{};
};
struct SUBJECT {
	int HCI{};
	int OSS{};
	int SAD{};
	int CAL{};
	int PRO{};
};

struct STUDENT {
	string firstName, lastName{};
	string ID{};
	SUBJECT subject;
	GRADE grade{};
};


int InputMark(string subject[], int mark[], char ArrayGrade[Size])
{
	char buffer;
	string firstName, lastName, studentName;
	STUDENT student;
	SUBJECT subject1;

	int studentID = 0;
	char Grade = 'a';

	bool success = false;

	do {

		cout << "Please enter your name (first name, last name): ";
		cin >> firstName >> lastName;

		if (cin.peek() != '\n')
		{
			cout << "Error inputting name, try again\n";

			cin.clear();
			cin.ignore(100, '\n');

			cout << "\nType any letter and press enter to continue. ";
			cin >> buffer;
			system("cls");
		}
		else
			success = true;

	} while (!success);

	studentName = firstName + " " + lastName;

	for (int i = 0; i < Size; i++)
	{
		cout << "Please enter your marks for subject " << subject[i] << " : ";

		while (true)
		{
			cin >> mark[i];

			if (cin.fail())
			{
				cin.clear();
				cin.ignore(1000, '\n');
				cout << "Invalid input. Please enter a number: ";
			}
			else if (mark[i] < 0 || mark[i] > 100)
			{
				cout << "Please enter a valid mark between 0 and 100: ";
			}
			else
				break;
		}

		if (mark[i] >= 75)
		{
			Grade = 'A';
		}
		else if (mark[i] >= 60)
		{
			Grade = 'B';
		}
		else if (mark[i] >= 47)
		{
			Grade = 'C';
		}
		else if (mark[i] >= 40)
		{
			Grade = 'D';
		}
		else
		{
			Grade = 'E';
		}
		ArrayGrade[i] = Grade;
	}



	ifstream InFile(studentData);

	while (InFile >> student.ID >> student.firstName >> student.lastName >>
		student.subject.HCI >> student.grade.G_HCI >>
		student.subject.OSS >> student.grade.G_OSS >>
		student.subject.CAL >> student.grade.G_CAL >>
		student.subject.PRO >> student.grade.G_PRO >>
		student.subject.SAD >> student.grade.G_SAD)
	{

		if (!student.firstName.empty() && !student.lastName.empty())
			studentID += 1;
	}

	InFile.close();
	ofstream studentFile(studentData, ios::app);

	studentFile << studentID << "\t";
	studentFile << studentName << "\t";

	for (int i = 0; i < Size; i++)
		studentFile << mark[i] << " " << ArrayGrade[i] << " ";
	studentFile << endl;

	studentFile.close();

	cout << "\nType any letter and press enter to continue. ";
	cin >> buffer;


	return 0;
}

void DisplayData(char ArrayGrade[Size])
{
	STUDENT student;
	char buffer;

	cout << "ID\tNAME\t\t";
	for (int i = 0; i < Size; i++)
	{
		cout << subject[i] << "\t";

	}
	cout << endl;
	ifstream studentFile;
	studentFile.open(studentData);

	int count = 0;
	char choice{};

	while (studentFile >> student.ID >> student.firstName >> student.lastName >>
		student.subject.HCI >> student.grade.G_HCI >>
		student.subject.OSS >> student.grade.G_OSS >>
		student.subject.CAL >> student.grade.G_CAL >>
		student.subject.PRO >> student.grade.G_PRO >>
		student.subject.SAD >> student.grade.G_SAD)
	{
		cout << student.ID << "\t" << student.firstName << " " << student.lastName << "\t" << student.subject.HCI << "(" << student.grade.G_HCI << ")" << "\t" <<
			student.subject.OSS << "(" << student.grade.G_OSS << ")" << "\t" <<
			student.subject.CAL << "(" << student.grade.G_CAL << ")" << "\t" <<
			student.subject.PRO << "(" << student.grade.G_PRO << ")" << "\t" <<
			student.subject.SAD << "(" << student.grade.G_SAD << ")" << endl;

		count++;

		if (count % 28 == 0)
		{
			cout << " Type Y to go to the (Next Page), Or any key to (Exit), then press enter ";
			cin >> choice;

			if (choice == 'Y' || choice == 'y')
				continue;
			else
				break;
		}
	}
	cout << "\nType any letter and press enter to continue. ";
	cin >> buffer;
	studentFile.close();
}

void SearchRecord()
{
	string firstInput, secondInput;
	STUDENT student;
	char buffer;

	bool IDexist = false;

	cout << "Enter the ID/NAME of the person you want to search: ";
	cin >> firstInput;

	if (cin.peek() != '\n')
		cin >> secondInput;

	ifstream studentFile;
	studentFile.open(studentData);

	cout << "ID\tNAME\t\t";
	for (int i = 0; i < Size; i++)
	{
		cout << subject[i] << "\t";

	}
	while (studentFile >> student.ID >> student.firstName >> student.lastName >>
		student.subject.HCI >> student.grade.G_HCI >>
		student.subject.OSS >> student.grade.G_OSS >>
		student.subject.CAL >> student.grade.G_CAL >>
		student.subject.PRO >> student.grade.G_PRO >>
		student.subject.SAD >> student.grade.G_SAD)
	{

		if (firstInput == student.ID || firstInput == student.firstName && secondInput == student.lastName || firstInput == student.firstName || firstInput == student.lastName)
		{
			IDexist = true;
			cout << endl;
			cout << student.ID << "\t" << student.firstName << " " << student.lastName << "\t" << student.subject.HCI << "(" << student.grade.G_HCI << ")" << "\t" <<
				student.subject.OSS << "(" << student.grade.G_OSS << ")" << "\t" <<
				student.subject.CAL << "(" << student.grade.G_CAL << ")" << "\t" <<
				student.subject.PRO << "(" << student.grade.G_PRO << ")" << "\t" <<
				student.subject.SAD << "(" << student.grade.G_SAD << ")";
		}
	}
	studentFile.close();

	if (!IDexist)
		cout << "\nThere is no person with the ID/NAME " << firstInput;

	cout << "\nType any letter and press enter to continue. ";
	cin >> buffer;
}
int main()
{
	char input;
	bool exit = false;
	char ArrayOfGrade[Size];
	int markah[Size];

	do {

		cout << LINE;
		cout << "\n\tSTUDENT MARK SYSTEM\n\n";
		cout << "1. Add Mark\n";
		cout << "2. Display Record\n";
		cout << "3. Search Record\n";
		cout << "4. Exit\n\n";
		cin >> input;

		system("cls");

		switch (input)
		{
		case '1':
			InputMark(subject, markah, ArrayOfGrade);
			break;
		case '2':
			DisplayData(ArrayOfGrade);
			break;
		case '3':
			SearchRecord();
			break;
		case '4':
			exit = true;
			break;
		default:
			break;
		}
		system("cls");
	} while (!exit);
}