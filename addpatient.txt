#include "hospital_app.h"

void addpatient() {
if (numPatients < MAX_PATIENTS) {
        struct Patient newPatient;

        // Get and validate patient name
        do {
            printf("Enter patient name: ");
            scanf("%s", newpatient.name);
            if (!isAlphaString(newpatient.name)) {
                printf("Invalid name. Please enter a name with alphabetic characters only.\n");
            }
        } while (!isAlphaString(newpatient.name));

        // Get and validate patient age
        do {
            printf("Enter patient age: ");
            if (scanf("%d", &newpatient.age) != 1 || !isPositiveInteger(newpatient.age)) {
                printf("Invalid age. Please enter a positive integer.\n");
                clearInputBuffer();  // Clear the invalid input
            }
        } while (!isPositiveInteger(newPatient.age));

        // Get and validate patient gender
        do {
            printf("Enter patient gender: ");
            scanf("%s", newpatient.gender);
            if (!isAlphaString(newpatient.gender)) {
                printf("Invalid gender. Please enter a gender with alphabetic characters only.\n");
            }
        } while (!isAlphaString(newpatient.gender));

        // Get and validate patient disease
        do {
            printf("Enter patient disease: ");
            scanf("%s", newpatient.disease);
            if (!isAlphaString(newpatient.disease)) {
                printf("Invalid disease. Please enter a disease with alphabetic characters only.\n");
            }
        } while (!isAlphaString(newpatient.disease));

        patients[num_patients] = newpatient;
        num_patients++;
        printf("Patient added successfully.\n");
    } else {
        printf("Maximum number of patients reached.\n");
    }
}
