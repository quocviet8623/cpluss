#include <iostream>
using namespace std;
//tech : print pattern

int main(){
	int n; 
	cout <<"Ban muon can ai ?: ";
	cin >> n ;
	for(int i = n; i >= 1; i--){
		for(int j = 1 ; j <= i; j++){
			cout << "Baby Tuyen";
		}
		cout << endl;
	}
}
