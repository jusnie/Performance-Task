#include <iostream>        // Tag: Includes the iostream library for input/output operations (cout, cin)
#include <iomanip>         // Tag: Includes the iomanip library for formatting output (used for setw, setprecision)
#include <conio.h>         // Tag: Includes the conio library for console input/output functions (like getch and clrscr)
#include <string.h>        // Tag: Includes the string.h library for string manipulation functions like strlen()

using namespace std;       // Tag: Allows the use of standard library functions without prefixing with 'std::'

// Tag: Function to center a text within a specified width and surround it with "=" signs
void centerText(const char* text, int width) {
    int length = strlen(text);    // Tag: Calculates the length of the input text
    int pos = (width - length) / 2; // Tag: Calculates the starting position for centering the text
    for (int i = 0; i < pos; i++) { // Tag: Loops to print "=" characters before the text
        cout << "=";
    }
    cout << text;                 // Tag: Outputs the centered text
    for (int i = 0; i < pos; i++) { // Tag: Loops to print "=" characters after the text
        cout << "=";
    }
    cout << endl;                 // Tag: Moves to the next line after printing the centered text
}

// Tag: Structure to represent a student's information
struct Student {
    char lrn[13];                 // Tag: Character array to store LRN (Learner's Reference Number), 12 characters + null terminator
    char firstName[16];            // Tag: Character array to store the first name, max length of 15 characters
    char midInitial[2];            // Tag: Character array for the middle initial, 1 character + null terminator
    char lastName[16];             // Tag: Character array for the last name, max length of 15 characters
    char track[11];                // Tag: Character array for the track, max length of 10 characters
    char strand[6];                // Tag: Character array for the strand, max length of 5 characters
    int gradeLevel;                // Tag: Integer to store the grade level
    char section[11];              // Tag: Character array for the section, max length of 10 characters
    char sexCode[7];               // Tag: Character array for the sex code, max length of 6 characters
    int age;                       // Tag: Integer to store the age
    char adviser[21];              // Tag: Character array for the adviser's name, max length of 20 characters
    float fil_qtr1, fil_qtr2;      // Tag: Floating-point variables for grades in Filipino for quarter 1 and 2
    float comprog2_qtr1, comprog2_qtr2; // Tag: Floating-point variables for grades in Comprog 2 for quarter 1 and 2
    float avgFilipino, avgComprog2, generalAvg; // Tag: Floating-point variables for averages
};

int main() {
    Student student;              // Tag: Create an instance of the Student structure to hold one student's data

    clrscr();                     // Tag: Clears the console screen (from conio.h)
    centerText("<<< Report Card Data Entry >>>", 80); // Tag: Displays the header centered in the console
    cout << endl;                 // Tag: Outputs an empty line for spacing

    // Tag: Prompts the user to enter personal information and stores it in the student structure
    cout << "Enter the following information:\n";
    cout << "LRN No: "; cin >> setw(13) >> student.lrn;               // Tag: Input for LRN, limited to 12 characters
    cout << "First Name: "; cin >> setw(16) >> student.firstName;     // Tag: Input for first name, limited to 15 characters
    cout << "Middle Initial: "; cin >> setw(2) >> student.midInitial; // Tag: Input for middle initial, limited to 1 character
    cout << "Last Name: "; cin >> setw(16) >> student.lastName;       // Tag: Input for last name, limited to 15 characters
    cout << "Track: "; cin >> setw(11) >> student.track;              // Tag: Input for track, limited to 10 characters
    cout << "Strand: "; cin >> setw(6) >> student.strand;             // Tag: Input for strand, limited to 5 characters
    cout << "Grade Level: "; cin >> student.gradeLevel;               // Tag: Input for grade level (integer)
    cout << "Section: "; cin >> setw(11) >> student.section;          // Tag: Input for section, limited to 10 characters
    cout << "Sex Code: "; cin >> setw(7) >> student.sexCode;          // Tag: Input for sex code, limited to 6 characters
    cout << "Age: "; cin >> student.age;                              // Tag: Input for age (integer)
    cout << "Name of Adviser: "; cin >> setw(21) >> student.adviser;  // Tag: Input for adviser's name, limited to 20 characters

    cout << "\nPress any key to input the grades per quarter...";      // Tag: Prompt to proceed to grades input
    getch();                     // Tag: Waits for user input before continuing (from conio.h)
    clrscr();                    // Tag: Clears the console screen again

    centerText("<<< Input Grades >>>", 80); // Tag: Displays the grades input header centered
    cout << endl;                 // Tag: Outputs an empty line for spacing

    // Tag: Prompts the user to enter grades for each subject and stores them in the student structure
    cout << "Enter grades for Filipino (Q1, Q2): "; cin >> student.fil_qtr1 >> student.fil_qtr2;  // Tag: Input for Filipino grades (two floating-point values)
    cout << "Enter grades for Comprog 2 (Q1, Q2): "; cin >> student.comprog2_qtr1 >> student.comprog2_qtr2; // Tag: Input for Comprog 2 grades (two floating-point values)

    // Tag: Computes the average grades for Filipino and Comprog 2
    student.avgFilipino = (student.fil_qtr1 + student.fil_qtr2) / 2;  // Tag: Calculates the average for Filipino
    student.avgComprog2 = (student.comprog2_qtr1 + student.comprog2_qtr2) / 2; // Tag: Calculates the average for Comprog 2
    student.generalAvg = (student.avgFilipino + student.avgComprog2) / 2;  // Tag: Calculates the general average

    clrscr();                    // Tag: Clears the screen again to prepare for the output

    centerText("<<< Report Card Summary >>>", 80);  // Tag: Displays the report card summary header centered
    cout << endl;                // Tag: Outputs an empty line for spacing

    // Tag: Displays the student's personal information and average grades
    cout << setw(20) << left << "LRN No: " << student.lrn << endl;          // Tag: Displays LRN
    cout << setw(20) << left << "Name: " << student.firstName << " " << student.midInitial << " " << student.lastName << endl; // Tag: Displays full name
    cout << setw(20) << left << "Track: " << student.track << endl;          // Tag: Displays track
    cout << setw(20) << left << "Strand: " << student.strand << endl;        // Tag: Displays strand
    cout << setw(20) << left << "Grade Level: " << student.gradeLevel << endl; // Tag: Displays grade level
    cout << setw(20) << left << "Section: " << student.section << endl;      // Tag: Displays section
    cout << setw(20) << left << "Sex Code: " << student.sexCode << endl;    // Tag: Displays sex code
    cout << setw(20) << left << "Age: " << student.age << endl;              // Tag: Displays age
    cout << setw(20) << left << "Adviser: " << student.adviser << endl;      // Tag: Displays adviser's name

    cout << endl;                // Tag: Outputs an empty line for spacing
    centerText("Grades Summary", 80); // Tag: Displays the grades summary header centered
    cout << setw(30) << left << "Filipino (Q1 & Q2 Average): " << fixed << setprecision(2) << student.avgFilipino << endl; // Tag: Displays average grade for Filipino
    cout << setw(30) << left << "Comprog 2 (Q1 & Q2 Average): " << student.avgComprog2 << endl; // Tag: Displays average grade for Comprog 2
    cout << setw(30) << left << "General Average: " << student.generalAvg << endl; // Tag: Displays general average grade

    getch();                     // Tag: Waits for user input before exiting
    return 0;                   // Tag: Indicates that the program finished successfully
}
