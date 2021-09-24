#include <iostream>
using namespace std;

int main(){
	int n;
	cout << "Masukkan panjang pola : ";
	cin >> n;
	cout << endl;
	
	cout << "Pola 5" << endl;
	for(int i = 1; i <= n; i++){
		for(int j = n; j > i; j--){
			cout << " ";
		}
		for(int k = 1; k < i*2; k++){
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
	
	cout << "Pola 6" << endl;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j < i; j++){
			cout << " ";
		}
		for(int k = n; k >= i*2-5; k--){
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
	
	// =======================================================================================================
	
	cout << "Pola 7" << endl;
	for(int i = 1; i <= n; i++){
		for(int j = n; j > i; j--){
			cout << " ";
		}
		for(int k = 1; k < i*2; k++){
			cout << "*";
		}
		cout << endl;
	}

	for(int i = 2; i <= n; i++){
		for(int j = 1; j < i; j++){
			cout << " ";
		}
		for(int k = n; k >= i*2-5; k--){
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;

	return 0;
}

