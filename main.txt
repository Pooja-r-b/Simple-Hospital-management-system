#include "hospital_app.h"
#include "addpatient.c"
#include "displaypatients.c"
#include "searchpatient.c"

int main() {
    int choice;
    
    do {
        printf("Hospital Management System\n");
        printf("1. Add Patient\n");
        printf("2. Display Patients\n");
        printf("3. Search Patient\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
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
