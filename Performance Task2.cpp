#include<iostream.h>
#include<conio.h>

void main() {
    clrscr(); // Clear screen

    // Variables to store grades
    int filipino_qtr1, filipino_qtr2, oralcom_qtr1, oralcom_qtr2;
    int math_qtr1, math_qtr2, science_qtr1, science_qtr2;
    int hope_qtr1, hope_qtr2, perdev_qtr1, perdev_qtr2;
    int ucsp_qtr1, ucsp_qtr2, comp1_qtr1, comp1_qtr2;
    int comp2_qtr1, comp2_qtr2;

    // Enter grades for each subject
    cout << "Enter the Grade for the following subjects Per Quarter:\n";
    cout << "Filipino Grade Qtr1: "; cin >> filipino_qtr1;
    cout << "Filipino Grade Qtr2: "; cin >> filipino_qtr2;
    cout << "Oral Communication Grade Qtr1: "; cin >> oralcom_qtr1;
    cout << "Oral Communication Grade Qtr2: "; cin >> oralcom_qtr2;
    cout << "General Mathematics Grade Qtr1: "; cin >> math_qtr1;
    cout << "General Mathematics Grade Qtr2: "; cin >> math_qtr2;
    cout << "Science Grade Qtr1: "; cin >> science_qtr1;
    cout << "Science Grade Qtr2: "; cin >> science_qtr2;
    cout << "HOPE Grade Qtr1: "; cin >> hope_qtr1;
    cout << "HOPE Grade Qtr2: "; cin >> hope_qtr2;
    cout << "Personal Development Grade Qtr1: "; cin >> perdev_qtr1;
    cout << "Personal Development Grade Qtr2: "; cin >> perdev_qtr2;
    cout << "UCSP Grade Qtr1: "; cin >> ucsp_qtr1;
    cout << "UCSP Grade Qtr2: "; cin >> ucsp_qtr2;
    cout << "Comprog 1 Grade Qtr1: "; cin >> comp1_qtr1;
    cout << "Comprog 1 Grade Qtr2: "; cin >> comp1_qtr2;
    cout << "Comprog 2 Grade Qtr1: "; cin >> comp2_qtr1;
    cout << "Comprog 2 Grade Qtr2: "; cin >> comp2_qtr2;

    // Calculate the averages
    float filipino_avg = (filipino_qtr1 + filipino_qtr2) / 2.0;
    float oralcom_avg = (oralcom_qtr1 + oralcom_qtr2) / 2.0;
    float math_avg = (math_qtr1 + math_qtr2) / 2.0;
    float science_avg = (science_qtr1 + science_qtr2) / 2.0;
    float hope_avg = (hope_qtr1 + hope_qtr2) / 2.0;
    float perdev_avg = (perdev_qtr1 + perdev_qtr2) / 2.0;
    float ucsp_avg = (ucsp_qtr1 + ucsp_qtr2) / 2.0;
    float comp1_avg = (comp1_qtr1 + comp1_qtr2) / 2.0;
    float comp2_avg = (comp2_qtr1 + comp2_qtr2) / 2.0;

    float gen_avg = (filipino_avg + oralcom_avg + math_avg + science_avg + 
                    hope_avg + perdev_avg + ucsp_avg + comp1_avg + comp2_avg) / 9;

    // Display the report card
    cout << "\n-------------------------------------------------\n";
    cout << " Gen. Tiburcio De Leon National High School\n";
    cout << " REPORT CARD S.Y. 2024 – 2025\n";
    cout << " Name: Juan D. Dela Cruz   Age: 16   Sex: Male\n";
    cout << " Grade Level: ICT-JOBS     Track & Strand: TVL-ICT\n";
    cout << "-------------------------------------------------\n";

    cout << "Subject\t\tFirst Quarter\tSecond Quarter\tAverage\tRemarks\n";
    cout << "-------------------------------------------------\n";
    cout << "Filipino\t" << filipino_qtr1 << "\t\t" << filipino_qtr2 << "\t\t" << filipino_avg << "\t" << (filipino_avg >= 75 ? "PASSED" : "FAILED") << "\n";
    cout << "Oral Com\t" << oralcom_qtr1 << "\t\t" << oralcom_qtr2 << "\t\t" << oralcom_avg << "\t" << (oralcom_avg >= 75 ? "PASSED" : "FAILED") << "\n";
    cout << "Math\t\t" << math_qtr1 << "\t\t" << math_qtr2 << "\t\t" << math_avg << "\t" << (math_avg >= 75 ? "PASSED" : "FAILED") << "\n";
    cout << "Science\t\t" << science_qtr1 << "\t\t" << science_qtr2 << "\t\t" << science_avg << "\t" << (science_avg >= 75 ? "PASSED" : "FAILED") << "\n";
    cout << "HOPE\t\t" << hope_qtr1 << "\t\t" << hope_qtr2 << "\t\t" << hope_avg << "\t" << (hope_avg >= 75 ? "PASSED" : "FAILED") << "\n";
    cout << "Per Dev\t\t" << perdev_qtr1 << "\t\t" << perdev_qtr2 << "\t\t" << perdev_avg << "\t" << (perdev_avg >= 75 ? "PASSED" : "FAILED") << "\n";
    cout << "UCSP\t\t" << ucsp_qtr1 << "\t\t" << ucsp_qtr2 << "\t\t" << ucsp_avg << "\t" << (ucsp_avg >= 75 ? "PASSED" : "FAILED") << "\n";
    cout << "Comprog1\t" << comp1_qtr1 << "\t\t" << comp1_qtr2 << "\t\t" << comp1_avg << "\t" << (comp1_avg >= 75 ? "PASSED" : "FAILED") << "\n";
    cout << "Comprog2\t" << comp2_qtr1 << "\t\t" << comp2_qtr2 << "\t\t" << comp2_avg << "\t" << (comp2_avg >= 75 ? "PASSED" : "FAILED") << "\n";
    cout << "-------------------------------------------------\n";
    cout << "General Average: " << gen_avg << "\n";

    getch(); // Wait for a key press
}
