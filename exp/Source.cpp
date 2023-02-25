#include "iostream";

using namespace std;

int strLength(double *e) {
	int numb = 0;

	while (e[numb] != '\0') {
		numb++;
	}
	return numb;
}