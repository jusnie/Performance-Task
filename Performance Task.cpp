#include <iostream>  // Credits by Juanie Cuenca and Lance Servino
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

int main() {
    char lrn[13], firstName[16], midInitial[2], lastName[16], track[11], strand[6];
    char section[11], sexCode[7], adviser[21];
    int gradeLevel, age;
    float fil_qtr1, fil_qtr2, comprog2_qtr1, comprog2_qtr2;
    float avgFilipino, avgComprog2, generalAvg;

    // Header
    clrscr();
    centerText("<<< Report Card Data Entry >>>", 80);
    cout << endl;

    // Input Personal Information
    cout << "Enter the following information:\n";
    cout << "LRN No: "; cin >> setw(13) >> lrn;
    cout << "First Name: "; cin >> setw(16) >> firstName;
    cout << "Middle Initial: "; cin >> setw(2) >> midInitial;
    cout << "Last Name: "; cin >> setw(16) >> lastName;
    cout << "Track: "; cin >> setw(11) >> track;
    cout << "Strand: "; cin >> setw(6) >> strand;
    cout << "Grade Level: "; cin >> gradeLevel;
    cout << "Section: "; cin >> setw(11) >> section;
    cout << "Sex Code: "; cin >> setw(7) >> sexCode;
    cout << "Age: "; cin >> age;
    cout << "Name of Adviser: "; cin >> setw(21) >> adviser;

    cout << "\nPress any key to input the grades per quarter...";
    getch();
    clrscr();

    // Input Grades
    centerText("<<< Input Grades >>>", 80);
    cout << endl;
    cout << "Enter grades for Filipino (Q1, Q2): "; cin >> fil_qtr1 >> fil_qtr2;
    cout << "Enter grades for Comprog 2 (Q1, Q2): "; cin >> comprog2_qtr1 >> comprog2_qtr2;

    // Compute averages
    avgFilipino = (fil_qtr1 + fil_qtr2) / 2;
    avgComprog2 = (comprog2_qtr1 + comprog2_qtr2) / 2;
    generalAvg = (avgFilipino + avgComprog2) / 2;

    // Display Results
    clrscr();
    centerText("<<< Report Card Summary >>>", 80);
    cout << endl;
    cout << setw(20) << left << "LRN No: " << lrn << endl;
    cout << setw(20) << left << "Name: " << firstName << " " << mid
