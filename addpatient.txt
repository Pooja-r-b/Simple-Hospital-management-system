#include "hospital_app.h"

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
