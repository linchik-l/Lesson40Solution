#include "util.h"
#include "logic.h"

#define SIZE 10
int main() {
	int array[SIZE]{ 9,8,7,6,5,4,3,2,1,0 };

	//init(array, SIZE, -50, 50);
	cout << "Array before sorting: " << convert(array, SIZE) << endl;

	bubble_sort(array, SIZE, true);
	cout << "Array after sorting: " << convert(array, SIZE) << endl;

	bubble_sort(array, SIZE, false);
	cout << "Array after sorting: " << convert(array, SIZE) << endl;


	return 0;
}