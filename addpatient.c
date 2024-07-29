#include "hospital_app.h"

void addpatient() {
if (numPatients < MAX_PATIENTS) {
        struct Patient newPatient;

        // Get and validate patient name
        do {
            printf("Enter patient name: ");
            scanf("%s", newPatient.name);
            if (!isAlphaString(newPatient.name)) {
                printf("Invalid name. Please enter a name with alphabetic characters only.\n");
            }
        } while (!isAlphaString(newPatient.name));

        // Get and validate patient age
        do {
            printf("Enter patient age: ");
            if (scanf("%d", &newPatient.age) != 1 || !isPositiveInteger(newPatient.age)) {
                printf("Invalid age. Please enter a positive integer.\n");
                clearInputBuffer();  // Clear the invalid input
            }
        } while (!isPositiveInteger(newPatient.age));

        // Get and validate patient gender
        do {
            printf("Enter patient gender: ");
            scanf("%s", newPatient.gender);
            if (!isAlphaString(newPatient.gender)) {
                printf("Invalid gender. Please enter a gender with alphabetic characters only.\n");
            }
        } while (!isAlphaString(newPatient.gender));

        // Get and validate patient disease
        do {
            printf("Enter patient disease: ");
            scanf("%s", newPatient.disease);
            if (!isAlphaString(newPatient.disease)) {
                printf("Invalid disease. Please enter a disease with alphabetic characters only.\n");
            }
        } while (!isAlphaString(newPatient.disease));

        patients[numPatients] = newPatient;
        numPatients++;
        printf("Patient added successfully.\n");
    } else {
        printf("Maximum number of patients reached.\n");
    }
}
