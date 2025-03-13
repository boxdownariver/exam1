#ifndef SORT_H
#define SORT_H

#include "persontype.h"
#include "studenttype.h"
#include "professortype.h"

void sortByName(PersonType people[], int size);
void sortByHeight(PersonType people[], int size);
void sortByID(StudentType people[], int size);
void sortByID(ProfessorType people[], int size);

#endif
