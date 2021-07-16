#include <stdio.h>

void main() {
	int x = 5;
	int y = 6;
	int z = 10;
	if (x == 3) puts("AA1");
	else puts("BB2");
	if (x = 3, x < y) puts("CC3");
	else puts("DD4");
	if (z < y, z = -4) puts("EE5");
	else puts("FF6");
	system("pause");
}
