#include "hospital_app.h"

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