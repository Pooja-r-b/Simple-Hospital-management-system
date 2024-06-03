#ifndef HOSPITAL_APP_H_INCLUDED
#define HOSPITAL_APP_H_INCLUDED
#define MAX_PATIENTS 100
#include <stdio.h>
#include <string.h>

void addpatient();
void displaypatients();
void searchpatient();

struct Patient 
{
    int age;
    char name[48];
    char gender[8];
    char disease[48];
};

struct Patient patients[MAX_PATIENTS];
int num_patients = 0;

#endif