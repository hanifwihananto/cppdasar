#include <iostream>
using namespace std;

int main(){
	int a;
	
	cout << "masukkan angka :";
	cin >> a;
	
	// if statment
	if (a == 5){
		cout << "nilai ini adalah 5" << endl;
	} else if (a == 3){
		cout << "nilai ini adalah 3" << endl;
	} else if(a == 1){
		cout << "nilai ini adalah 1" << endl;
	} else {
		cout << "nilai ini bukan 5, 3 atau 1" << endl;
	}
	
	cout << "selesai" << endl;
	
	return 0;
}

