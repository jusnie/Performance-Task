#include <iostream> // Credits by Juanie Cuenca and Lance Servino
#include <iomanip>
#include <conio.h>
#include <string.h>
using namespace std;

void centerText(const char* text, int width) {
    int length = strlen(text);
    int pos = (width - length) / 2;
    for (int i = 0; i < pos; i++) {
        cout << "=";
    }
    cout << text;
    for (int i = 0; i < pos; i++) {
        cout << "=";
    }
    cout << endl;
}

// Structure to represent a student's information
struct Student {
    char lrn[13];
    char firstName[16];
    char midInitial[2];
    char lastName[16];
    char track[11];
    char strand[6];
    int gradeLevel;
    char section[11];
    char sexCode[7];
    int age;
    char adviser[21];
    float fil_qtr1, fil_qtr2;
    float comprog2_qtr1, comprog2_qtr2;
    float avgFilipino, avgComprog2, generalAvg;
};

int main() {
    Student student;  // Create a student structure instance

    // Header
    clrscr();
    centerText("<<< Report Card Data Entry >>>", 80);
    cout << endl;

    // Input Personal Information
    cout << "Enter the following information:\n";
    cout << "LRN No: "; cin >> setw(13) >> student.lrn;
    cout << "First Name: "; cin >> setw(16) >> student.firstName;
    cout << "Middle Initial: "; cin >> setw(2) >> student.midInitial;
    cout << "Last Name: "; cin >> setw(16) >> student.lastName;
    cout << "Track: "; cin >> setw(11) >> student.track;
    cout << "Strand: "; cin >> setw(6) >> student.strand;
    cout << "Grade Level: "; cin >> student.gradeLevel;
    cout << "Section: "; cin >> setw(11) >> student.section;
    cout << "Sex Code: "; cin >> setw(7) >> student.sexCode;
    cout << "Age: "; cin >> student.age;
    cout << "Name of Adviser: "; cin >> setw(21) >> student.adviser;

    cout << "\nPress any key to input the grades per quarter...";
    getch();
    clrscr();

    // Input Grades
    centerText("<<< Input Grades >>>", 80);
    cout << endl;
    cout << "Enter grades for Filipino (Q1, Q2): "; cin >> student.fil_qtr1 >> student.fil_qtr2;
    cout << "Enter grades for Comprog 2 (Q1, Q2): "; cin >> student.comprog2_qtr1 >> student.comprog2_qtr2;

    // Compute averages
    student.avgFilipino = (student.fil_qtr1 + student.fil_qtr2) / 2;
    student.avgComprog2 = (student.comprog2_qtr1 + student.comprog2_qtr2) / 2;
    student.generalAvg = (student.avgFilipino + student.avgComprog2) / 2;

    // Display Results
    clrscr();
    centerText("<<< Report Card Summary >>>", 80);
    cout << endl;
    cout << setw(20) << left << "LRN No: " << student.lrn << endl;
    cout << setw(20) << left << "Name: " << student.firstName << " " << student.midInitial << " " << student.lastName << endl;
    cout << setw(20) << left << "Track: " << student.track << endl;
    cout << setw(20) << left << "Strand: " << student.strand << endl;
    cout << setw(20) << left << "Grade Level: " << student.gradeLevel << endl;
    cout << setw(20) << left << "Section: " << student.section << endl;
    cout << setw(20) << left << "Sex Code: " << student.sexCode << endl;
    cout << setw(20) << left << "Age: " << student.age << endl;
    cout << setw(20) << left << "Adviser: " << student.adviser << endl;

    cout << endl;
    centerText("Grades Summary", 80);
    cout << setw(30) << left << "Filipino (Q1 & Q2 Average): " << fixed << setprecision(2) << student.avgFilipino << endl;
    cout << setw(30) << left << "Comprog 2 (Q1 & Q2 Average): " << student.avgComprog2 << endl;
    cout << setw(30) << left << "General Average: " << student.generalAvg << endl;

    getch();
    return 0;
}
