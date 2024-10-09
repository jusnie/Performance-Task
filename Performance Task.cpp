#include <stdio.h>
#include <conio.h>

int main() {
    // Variable declarations
    char lrn[13], firstName[16], midInitial[2], lastName[16];
    char track[11], strand[6], section[11], sexCode[7], adviser[21];
    int gradeLevel, age;
    float gradeFil, gradeComprog1, gradeComprog2;
    float avgFil, avgComprog, genAverage;

    // Input details
    clrscr(); // Clear the screen
    printf("<< Report Card Data Entry >>\n\n");

    printf("Enter LRN No: ");
    scanf("%s", lrn);

    printf("Enter First Name: ");
    scanf("%s", firstName);

    printf("Enter Middle Initial: ");
    scanf("%s", midInitial);

    printf("Enter Last Name: ");
    scanf("%s", lastName);

    printf("Enter Track: ");
    scanf("%s", track);

    printf("Enter Strand: ");
    scanf("%s", strand);

    printf("Enter Grade Level: ");
    scanf("%d", &gradeLevel);

    printf("Enter Section: ");
    scanf("%s", section);

    printf("Enter Sex Code: ");
    scanf("%s", sexCode);

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter Name of Adviser: ");
    scanf("%s", adviser);

    // Input grades
    printf("\nEnter Grade in Filipino (Qtr 1): ");
    scanf("%f", &gradeFil);

    printf("Enter Grade in Comprog (Qtr 1): ");
    scanf("%f", &gradeComprog1);

    printf("Enter Grade in Comprog (Qtr 2): ");
    scanf("%f", &gradeComprog2);

    // Computations
    avgFil = gradeFil;
    avgComprog = (gradeComprog1 + gradeComprog2) / 2;
    genAverage = (avgFil + avgComprog) / 2;

    // Output results
    printf("\n<<Report Card Summary>>\n");
    printf("LRN No: %s\n", lrn);
    printf("Name: %s %s %s\n", firstName, midInitial, lastName);
    printf("Track: %s\n", track);
    printf("Strand: %s\n", strand);
    printf("Grade Level: %d\n", gradeLevel);
    printf("Section: %s\n", section);
    printf("Sex Code: %s\n", sexCode);
    printf("Age: %d\n", age);
    printf("Name of Adviser: %s\n", adviser);
    printf("\nAverage in Filipino: %.2f\n", avgFil);
    printf("Average in Comprog: %.2f\n", avgComprog);
    printf("General Average: %.2f\n", genAverage);

    getch(); // Wait for a key press to close the program
    return 0;
}
