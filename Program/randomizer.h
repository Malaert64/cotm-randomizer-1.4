#ifndef RANDOMIZER_H_INCLUDED
#define RANDOMIZER_H_INCLUDED

#define UNREACHABLE 0 // Representation of a pedestal which cannot yet be reached
#define UNASSIGNED -1 // Representation of a pedestal with no item yet assigned
#define CONSTANT_DSS_VALUE 200 // To differentiate DSS card indices from other items, offset them by this value (must just be greater than any item index)

// Purely arbitrary choices as to which items are "common" or "rare", only defined to avoid magic number use
/*
#define NUMBER_EASY_ITEMS 9
#define NUMBER_COMMON_ITEMS 33
#define NUMBER_RARE_ITEMS 20
*/

// Defining constants for the number of "low", "mid", and "high" tier items.
#define NUMBER_LOW_ITEMS 19
#define NUMBER_MID_ITEMS 17
#define NUMBER_HIGH_ITEMS 17

#include <stdbool.h>
#include <stdio.h>
#include "options.h"

void generateRandomizerPatch(FILE* randomizer_patch, unsigned int randomizer_seed, struct seed_options *options, FILE* spoiler_log);

#endif
