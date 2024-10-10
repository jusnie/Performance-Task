#include <iostream> // Cuenca and Servino
#include <iomanip>
#include <string>
using namespace std;

// Function to compute the average of two grades
float computeAverage(float grade1, float grade2) {
    return (grade1 + grade2) / 2;
}

// Function to compute general average based on the averages of multiple subjects
float computeGeneralAverage(float avgFil, float avgComp1, float avgComp2) {
    return (avgFil + avgComp1 + avgComp2) / 3;
}

int main() {
    string lrnNo, firstName, middleInitial, lastName, track, strand, section, sexCode, adviserName;
    int gradeLevel, age;
    float gradeFilQtr1, gradeFilQtr2, gradeComp1Qtr1, gradeComp1Qtr2, gradeComp2Qtr1, gradeComp2Qtr2;
    float avgFil, avgComp1, avgComp2, generalAverage;

    // Input layout and design
    cout << setfill('=') << setw(50) << "=" << endl;
    cout << "            <<Report Card Data Entry>>            " << endl;
    cout << setfill('=') << setw(50) << "=" << endl;
    cout << "Enter the following information:\n";

    // Input data
    cout << "LRN No.: ";
    getline(cin, lrnNo);
    cout << "First Name: ";
    getline(cin, firstName);
    cout << "Middle Initial: ";
    getline(cin, middleInitial);
    cout << "Last Name: ";
    getline(cin, lastName);
    cout << "Track: ";
    getline(cin, track);
    cout << "Strand: ";
    getline(cin, strand);
    cout << "Grade Level: ";
    cin >> gradeLevel;
    cin.ignore();
    cout << "Section: ";
    getline(cin, section);
    cout << "Sex Code: ";
    getline(cin, sexCode);
    cout << "Age: ";
    cin >> age;
    cin.ignore();
    cout << "Name of Adviser: ";
    getline(cin, adviserName);

    // Input grades for each quarter
    cout << setfill('=') << setw(50) << "=" << endl;
    cout << "Enter grades per quarter\n";
    
    // Filipino
    cout << "Filipino Qtr 1 Grade: ";
    cin >> gradeFilQtr1;
    cout << "Filipino Qtr 2 Grade: ";
    cin >> gradeFilQtr2;
    avgFil = computeAverage(gradeFilQtr1, gradeFilQtr2);
    
    // Computer Programming 1
    cout << "Comprog 1 Qtr 1 Grade: ";
    cin >> gradeComp1Qtr1;
    cout << "Comprog 1 Qtr 2 Grade: ";
    cin >> gradeComp1Qtr2;
    avgComp1 = computeAverage(gradeComp1Qtr1, gradeComp1Qtr2);

    // Computer Programming 2
    cout << "Comprog 2 Qtr 1 Grade: ";
    cin >> gradeComp2Qtr1;
    cout << "Comprog 2 Qtr 2 Grade: ";
    cin >> gradeComp2Qtr2;
    avgComp2 = computeAverage(gradeComp2Qtr1, gradeComp2Qtr2);
    
    // Compute General Average
    generalAverage = computeGeneralAverage(avgFil, avgComp1, avgComp2);

    // Display output
    cout << setfill('=') << setw(50) << "=" << endl;
    cout << "            <<Report Card Summary>>            " << endl;
    cout << setfill('=') << setw(50) << "=" << endl;
    cout << "LRN No.: " << lrnNo << endl;
    cout << "Name: " << firstName << " " << middleInitial << ". " << lastName << endl;
    cout << "Track: " << track << endl;
    cout << "Strand: " << strand << endl;
    cout << "Grade Level: " << gradeLevel << endl;
    cout << "Section: " << section << endl;
    cout << "Sex Code: " << sexCode << endl;
    cout << "Age: " << age << endl;
    cout << "Adviser: " << adviserName << endl;
    cout << setfill('=') << setw(50) << "=" << endl;
    
    cout << "Filipino Average: " << avgFil << endl;
    cout << "Comprog 1 Average: " << avgComp1 << endl;
    cout << "Comprog 2 Average: " << avgComp2 << endl;
    cout << setfill('-') << setw(50) << "-" << endl;
    cout << "General Average: " << generalAverage << endl;
    cout << setfill('=') << setw(50) << "=" << endl;

    return 0;
}
