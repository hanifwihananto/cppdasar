#include <iostream>
using namespace std;

int main(){
	cout << "looping 1" << endl;
		for(int i = 1; i <= 10; i++){
		cout << i << endl;
	}
	cout << endl;
	
	cout << "looping 2" << endl;
	for(int i = 1; i <= 10; i += 2){
		cout << i << endl; 
	}
	cout << endl;
	
	cout << "looping 3" << endl;
	for(int i = 1; i >= -10; i--){
		cout << i << endl;
	}
	cout << endl;
	
	cout << "looping 4" << endl;
	for(int i = 1; i >= -10; i++){
		cout << i << endl;
	}
	return 0;
}

