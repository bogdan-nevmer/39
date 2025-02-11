#include "util.h"
#include <time.h>
#define SIZE 20

int main() {
	srand(time(NULL));
	int array[SIZE];

	init(array, SIZE, -20, 20);

	cout << "array " << convert(array, SIZE) << endl;


	return 0;
}