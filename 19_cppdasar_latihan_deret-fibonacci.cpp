#include <iostream>
using namespace std;

int main(){
	// Deret Fibonacci
	// 1,1,2,3,5,8,13,21,34
	// f_n = f_n1 + f_n2
	
	int n;
	int f_n, f_n1, f_n2;
		
	cout << "Program Deret Fiboncci" << endl;
	cout << "Masukkan Nilai ke-n : ";
	cin >> n;
	
	f_n1 = 1;
	f_n2 = 0;
	cout << f_n2 << " "; // Dimulai dari 0
	cout << f_n1 << " "; // Dimulai dari 
	cout << f_n << " "; 
	for(int i = 1; i < n; i++){
		f_n = f_n1 + f_n2;
		f_n2 = f_n1;
		f_n1 = f_n;
		cout << f_n << " ";
	}
	
	return 0;
}

