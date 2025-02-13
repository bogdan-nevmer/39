#include "util.h"
#include "sort.h"
#include <time.h>

#define SIZE 10
//это мощьный комментарий 
int main() {
	srand(time(NULL));
	int array[]{1,2,3,4,5,6,7,8,9,10};

	init(array, SIZE, -20, 20);

	cout << "before array " << convert(array, SIZE) << endl;

	//bubble_sort( array,SIZE);
	selected_sort(array, SIZE);

	cout << "before array " << bubble_sort(array, SIZE) << endl;
	return 0;


	
}