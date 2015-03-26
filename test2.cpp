#include <iostream> 
using namespace std; 

int main(){ 
	int n; 
	cout<<"Enter an integer";
	cin>>n; 
	
	int col = (n + n - 1); 

	for (int r; r <= n; r++){
		for(int c = n; c>= 1 ; c--){ 
			if ( -c == (-r - (n/2)+1))
				cout<<"*";
			else 
				cout<<" ";
		}
		cout<<endl; 
	}
	return 0; 
}  
