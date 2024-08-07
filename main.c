#include "hospital_app.h"
#include "addpatient.c"
#include "displaypatients.c"
#include "searchpatient.c"


int isAlphaString(const char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isalpha(str[i])) {
            return 0;
        }
    }
    return 1;
}

int isPositiveInteger(int num) {
    return num > 0;
}

void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
        // Discard characters
    }
}


int main() {
    int choice;
    
    do {
        printf("Hospital Management System\n");
        printf("1. Add Patient\n");
        printf("2. Display Patients\n");
        printf("3. Search Patient\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            clearInputBuffer();  // Clear the invalid input
            continue;  // Skip to the next iteration of the loop
        }
        
        switch(choice) {
            case 1:
                addpatient();
                break;
            case 2:
                displaypatients();
                break;
            case 3:
                searchpatient();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);
    
    return 0;
}
