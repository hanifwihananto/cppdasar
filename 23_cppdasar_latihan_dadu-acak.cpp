#include <iostream>
#include <cstdlib> // Mengandung fungsi random

using namespace std;

int main(){
	char lanjut;
	
	while(true){
		cout << "Lempar dadu y/n : ";
		cin >> lanjut;
		
		if(lanjut == 'y'){
			cout << 1 + (rand() % 6) << endl;		
		} else if (lanjut == 'n'){
			break;
		} else {
			cout << "Warning !!! Ketik y/n dong kakak!!!" << endl;
		}
	}
	
	
	return 0;
}

