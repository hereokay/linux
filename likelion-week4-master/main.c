#include "gis.h"

int getGIS(char* filename, struct coordinate* a, struct coordinate* b);
void convertDMS(struct coordinate* a, struct coordinate* b, int);
void printDistance(struct coordinate* a, struct coordinate* b, int);

struct coordinate a[10];
struct coordinate b[10];

int main(int argc, char* argv[]) {

	int length = getGIS("input.txt", a, b);
	convertDMS(a, b, length);
	printDistance(a, b, length);

	return 0;
}