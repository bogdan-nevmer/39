#include "util.h"
#include "sort.h"
#include <time.h>

#define SIZE 20
//это мощьный комментарий 
int main() {
	srand(time(NULL));
	int array[SIZE];

	init(array, SIZE, -20, 20);

	cout << "before array " << convert(array, SIZE) << endl;

	bubble_sort( array,SIZE);

	cout << "before array " << bubble_sort(array, SIZE) << endl;
	return 0;
}