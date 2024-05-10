#include <stdio.h>
#include <string.h>
#define MAX_PATIENTS 100
struct Patient 
{
    int age;
    char name[48];
    char gender[8];
    char disease[48];
};

struct Patient patients[MAX_PATIENTS];
int num_patients = 0;

void addpatient() {
if(num_patients<MAX_PATIENTS){
   struct Patient newpatient;
        printf("Enter patient name: ");
        scanf("%s", newpatient.name);
        printf("Enter patient age: ");
        scanf("%d",&newpatient.age);
        printf("Enter patient gender: ");
        scanf("%s", newpatient.gender);
        printf("Enter patient disease: ");
        scanf("%s", newpatient.disease);
       patients[num_patients] = newpatient;
        num_patients++;
        printf("Patient added successfully.\n");
}
        else{
        printf("Maximum number of patients reached.\n");
}
}

void displaypatients() {
    if (num_patients == 0) {
        printf("No patients in the system.\n");
    } else {
        printf("Patient Records:\n");
        for (int i = 0; i < num_patients; i++) {
            printf("Name: %s\nAge: %d\nGender: %s\nDisease: %s\n\n", 
                   patients[i].name, patients[i].age, patients[i].gender, patients[i].disease);
        }
    }
}

void searchpatient() {
    char searchName[50];
    printf("Enter the name of the patient to search for: ");
    scanf("%s", searchName);
    
    int found = 0;
    for (int i = 0; i < num_patients; i++) {
        if (strcmp(patients[i].name, searchName) == 0) {
            printf("Patient found:\n");
            printf("Name: %s\nAge: %d\nGender: %s\nDisease: %s\n", 
                   patients[i].name, patients[i].age, patients[i].gender, patients[i].disease);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Patient not found.\n");
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