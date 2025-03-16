#include "persontype.h"
#include <array>

//Searches 1d std::array of PersonTypes for target; Case-insensitive, partial matches.
int seqSearch (const std::array<PersonType, 20>& list, std::string target);

//Finds index of tallest person in a 1d std::array of PersonTypes
size_t tallestPerson(const std::array<PersonType, 20>& list);

//Finds index of shortest person in a 1d std::array of PersonTypes
size_t shortestPerson(const std::array<PersonType, 20>& list);

// Sorts 1d std::array of PersonTypes by lName, then fName if lName matches
void selectionSort(std::array<PersonType, 20>& list);
