#ifndef LO_H
#define LO_H

// NOTE: LO - Load-Output

#include "constants.h"
#include "import7.h"

#include <random>
#include <time.h>
#include <iostream>

void load(char mass[gLEN], int AB[coord][coord]);
void output(char mass[gLEN], int AB[coord][coord], float C[coord]);

#endif // LO_H
