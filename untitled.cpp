#include <iostream> 
#include <cmath> 
using namespace std; 

int main(){ 
	int n;
	cout << "Enter a number between 1 and 9 " << end1; 
	cin >> n;

	if ((n < 1)||(n > 9)){ 
		cout << " Errour num outside of dim" << endl; 
		return 0; 
	}

	int a = pow(2,n); 
	int b = a; 
	cout << b << endl; 

	return 0; 
}