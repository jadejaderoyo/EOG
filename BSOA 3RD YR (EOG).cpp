// BSOA 3RD year

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    char course[100], yearLevel[100], studentStatus[20], studentNumber[20], studentName[100], schoolYear[100];


    printf("                    --------------------------------------------------------------------------------\n");
    printf("                   |                            EVALUATION OF GRADES REQUEST                         |\n");
    printf("                    --------------------------------------------------------------------------------\n");

    // Get course
    printf("                    Enter your course: ");
    fgets(course, sizeof(course), stdin);
    course[strcspn(course, "\n")] = 0;

    // Get year level
    printf("                    Enter your year level: ");
    fgets(yearLevel, sizeof(yearLevel), stdin);
    yearLevel[strcspn(yearLevel, "\n")] = 0; // Remove trailing newline

    // Get student status
    printf("                    Enter your student status (Regular, Non-Regular): ");
    fgets(studentStatus, sizeof(studentStatus), stdin);
    studentStatus[strcspn(studentStatus, "\n")] = 0; // Remove trailing newline

    // Get student number
    printf("                    Enter your student number: ");
    fgets(studentNumber, sizeof(studentNumber), stdin);
    studentNumber[strcspn(studentNumber, "\n")] = 0; // Remove trailing newline
    
    printf("                    Enter your student name: ");
    fgets(studentName, sizeof(studentName), stdin);
    studentName[strcspn(studentName, "\n")] = 0; // Remove trailing newline
    
    printf("                    Enter your school year: ");
    fgets(schoolYear, sizeof(schoolYear), stdin);
    schoolYear[strcspn(schoolYear, "\n")] = 0; // Remove trailing newline

    sleep(2);
	
    #ifdef _WIN32
        system("cls"); // Windows
    #else
        system("clear"); // Linux/macOS
    #endif
    
    printf("                    --------------------------------------------------------------------------------\n");
    printf("                   | Student Name: %-26s       Status: %-24s|\n", studentName, studentStatus);
    printf("                   | Student Nummber: %-23s       School Year: %-19s|\n", studentNumber, schoolYear);
    printf("                   | Course: %-32s       Year Level: %-20s|\n", course, yearLevel);
    printf("                   |--------------------------------------------------------------------------------|\n");
    printf("                   |  SUBJECT CODE |           DESCRIPTION         |     GRADES     |   EVALUATION  |\n");
    printf("                   |---------------|-------------------------------|----------------|---------------|\n");
    printf("                   |      GE8      |     RZAL'S LIFE AND WORKS     |                |               |\n");
    printf("                   |---------------|-------------------------------|----------------|---------------|\n");
    printf("                   |    OACC311    |       INTERNET RESEARCH       |                |               |\n");
    printf("                   |               |          FOR BUSINESS         |                |               |\n");
    printf("                   |---------------|-------------------------------|----------------|---------------|\n"); 
    printf("                   |    OACC312    |      MACHINE SHORTHAND 1      |                |               |\n");
    printf("                   |---------------|-------------------------------|----------------|---------------|\n");
    printf("                   |     ELEC1     |      CUSTOMER ANALYTICS       |                |               |\n");
    printf("                   |---------------|-------------------------------|----------------|---------------|\n");
    printf("                   |     ELEC2     |          WEB DESIGN           |                |               |\n");
    printf("                   |---------------|-------------------------------|----------------|---------------|\n");
    
    
    //2ND SEM
    printf("                   |--------------------------------------------------------------------------------|\n");
    printf("                   |  SUBJECT CODE |           DESCRIPTION         |     GRADES     |   EVALUATION  |\n");
    printf("                   |---------------|-------------------------------|----------------|---------------|\n");
    printf("                   |     ELEC3     |    LEGAL OFFICE PROCEDURES    |                |               |\n");
    printf("                   |---------------|-------------------------------|----------------|---------------|\n");
    printf("                   |    OACC313    |       EVENTS MANAGEMENT       |                |               |\n");
    printf("                   |---------------|-------------------------------|----------------|---------------|\n");
    printf("                   |    OACC313    |          BUSINESS LAW         |                |               |\n");
    printf("                   |---------------|-------------------------------|----------------|---------------|\n");
    printf("                   |    ACCCTG1    |          ACCOUNTING 1         |                |               |\n");
    printf("                   |---------------|-------------------------------|----------------|---------------|\n");

    return 0;
}

