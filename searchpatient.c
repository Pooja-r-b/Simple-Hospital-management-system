#include "hospital_app.h"

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