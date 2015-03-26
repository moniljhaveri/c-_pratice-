#include <iostream> 
using namespace std; 

int *reverse(int const *list, const int size){ 
	int result[6]; 
	for (int i = 0; int j = (size - 1); i < (size - 1); i < size; i++, j--){
		result[j] = list[i]; 
	}
	return 0; 
}

void printArray(int const *list, const int size){ 
	for (int i = 0; i < size; i++)
		cout << list[i] << " "; 
}
int main(){ 
	int list[] = {1, 2, 3, 4, 5, 6 }; 
	int *p = reverse(list, 6); 
	printArray(p, 6); 

	return 0; 
}