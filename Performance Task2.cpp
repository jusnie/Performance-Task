#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Function to compute the average of two grades
float computeAverage(float grade1, float grade2) {
    return (grade1 + grade2) / 2;
}

// Function to determine if the subject is passed or failed based on average
string checkPassOrFail(float average) {
    return (average >= 75) ? "PASSED" : "FAILED";
}

int main() {
    // Student details
    string lrnNo = "1234567890";
    string firstName = "Juan", middleInitial = "D.", lastName = "Dela Cruz";
    string track = "TVL-ICT", section = "ICT-JOBS", sex = "Male", adviser = "Name of Adviser";
    int gradeLevel = 12, age = 16;
    string schoolYear = "S.Y. 2024 – 2025";
    string schoolName = "Gen. Tiburcio De Leon National High School";

    // Quarter grades
    float filipinoQtr1, filipinoQtr2, oralComQtr1, oralComQtr2, genMathQtr1, genMathQtr2;
    float scienceQtr1, scienceQtr2, hopeQtr1, hopeQtr2, perDevQtr1, perDevQtr2;
    float ucspQtr1, ucspQtr2, compProg1Qtr1, compProg1Qtr2, compProg2Qtr1, compProg2Qtr2;

    // Enter grades
    cout << setfill('=') << setw(50) << "=" << endl;
    cout << "       Enter the Grades for the following subjects       " << endl;
    cout << setfill('=') << setw(50) << "=" << endl;

    // Input each subject's grades
    cout << "Filipino Grade Qtr1: "; cin >> filipinoQtr1;
    cout << "Filipino Grade Qtr2: "; cin >> filipinoQtr2;
    cout << "Oral Communication Qtr1: "; cin >> oralComQtr1;
    cout << "Oral Communication Qtr2: "; cin >> oralComQtr2;
    cout << "General Mathematics Qtr1: "; cin >> genMathQtr1;
    cout << "General Mathematics Qtr2: "; cin >> genMathQtr2;
    cout << "Science Qtr1: "; cin >> scienceQtr1;
    cout << "Science Qtr2: "; cin >> scienceQtr2;
    cout << "HOPE Qtr1: "; cin >> hopeQtr1;
    cout << "HOPE Qtr2: "; cin >> hopeQtr2;
    cout << "Personal Development Qtr1: "; cin >> perDevQtr1;
    cout << "Personal Development Qtr2: "; cin >> perDevQtr2;
    cout << "UCSP Qtr1: "; cin >> ucspQtr1;
    cout << "UCSP Qtr2: "; cin >> ucspQtr2;
    cout << "Comprog 1 Qtr1: "; cin >> compProg1Qtr1;
    cout << "Comprog 1 Qtr2: "; cin >> compProg1Qtr2;
    cout << "Comprog 2 Qtr1: "; cin >> compProg2Qtr1;
    cout << "Comprog 2 Qtr2: "; cin >> compProg2Qtr2;

    // Compute averages for each subject
    float avgFilipino = computeAverage(filipinoQtr1, filipinoQtr2);
    float avgOralCom = computeAverage(oralComQtr1, oralComQtr2);
    float avgGenMath = computeAverage(genMathQtr1, genMathQtr2);
    float avgScience = computeAverage(scienceQtr1, scienceQtr2);
    float avgHOPE = computeAverage(hopeQtr1, hopeQtr2);
    float avgPerDev = computeAverage(perDevQtr1, perDevQtr2);
    float avgUCSP = computeAverage(ucspQtr1, ucspQtr2);
    float avgCompProg1 = computeAverage(compProg1Qtr1, compProg1Qtr2);
    float avgCompProg2 = computeAverage(compProg2Qtr1, compProg2Qtr2);

    // Compute general average
    float generalAverage = (avgFilipino + avgOralCom + avgGenMath + avgScience + avgHOPE + avgPerDev + avgUCSP + avgCompProg1 + avgCompProg2) / 9;

    // Display the report card
    cout << setfill('=') << setw(50) << "=" << endl;
    cout << setw(30) << schoolName << endl;
    cout << "   Corner Mercado St., Gen. T. De Leon, Valenzuela City" << endl;
    cout << "        SENIOR HIGH SCHOOL DEPARTMENT" << endl;
    cout << setfill('=') << setw(50) << "=" << endl;

    cout << "REPORT CARD           " << schoolYear << endl;
    cout << "LRN No: " << lrnNo << endl;
    cout << "Name: " << firstName << " " << middleInitial << " " << lastName << endl;
    cout << "Grade Level & Sec: " << section << endl;
    cout << "Track & Strand: " << track << endl;
    cout << "Sex: " << sex << endl;
    cout << "Age: " << age << endl;
    cout << setfill('-') << setw(50) << "-" << endl;

    cout << left << setw(20) << "Subject" << setw(10) << "First Qtr" << setw(10) << "Second Qtr" << setw(10) << "Average" << setw(10) << "Remarks" << endl;
    cout << setfill('-') << setw(50) << "-" << endl;
    cout << left << setw(20) << "Filipino" << setw(10) << filipinoQtr1 << setw(10) << filipinoQtr2 << setw(10) << avgFilipino << setw(10) << checkPassOrFail(avgFilipino) << endl;
    cout << left << setw(20) << "Oral Communication" << setw(10) << oralComQtr1 << setw(10) << oralComQtr2 << setw(10) << avgOralCom << setw(10) << checkPassOrFail(avgOralCom) << endl;
    cout << left << setw(20) << "Gen. Mathematics" << setw(10) << genMathQtr1 << setw(10) << genMathQtr2 << setw(10) << avgGenMath << setw(10) << checkPassOrFail(avgGenMath) << endl;
    cout << left << setw(20) << "Science" << setw(10) << scienceQtr1 << setw(10) << scienceQtr2 << setw(10) << avgScience << setw(10) << checkPassOrFail(avgScience) << endl;
    cout << left << setw(20) << "HOPE" << setw(10) << hopeQtr1 << setw(10) << hopeQtr2 << setw(10) << avgHOPE << setw(10) << checkPassOrFail(avgHOPE) << endl;
    cout << left << setw(20) << "Per. Dev" << setw(10) << perDevQtr1 << setw(10) << perDevQtr2 << setw(10) << avgPerDev << setw(10) << checkPassOrFail(avgPerDev) << endl;
    cout << left << setw(20) << "UCSP" << setw(10) << ucspQtr1 << setw(10) << ucspQtr2 << setw(10) << avgUCSP << setw(10) << checkPassOrFail(avgUCSP) << endl;
    cout << left << setw(20) << "COMPROG1" << setw(10) << compProg1Qtr1 << setw(10) << compProg1Qtr2 << setw(10) << avgCompProg1 << setw(10) << checkPassOrFail(avgCompProg1) << endl;
    cout << left << setw(20) << "COMPROG2" << setw(10) << compProg2Qtr1 << setw(10) << compProg2Qtr2 << setw(10) << avgCompProg2 << setw(10) << checkPassOrFail(avgCompProg2) << endl;
    
    cout << setfill('-') << setw(50) << "-" << endl;
    cout << left << setw(20) << "Gen. Average" << setw(30) << generalAverage << setw(10) << checkPassOrFail(generalAverage) << endl;
    cout << setfill('=') << setw(50) << "=" << endl;

    cout << "Adviser: Rodolfo Canaria " << adviser << endl;
    cout << "Deadline: Oct. 10, 2024" << endl;
    cout << setfill('=') << setw(50) << "=" << endl;

    return 0;
}
