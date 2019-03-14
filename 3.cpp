#include <iostream>
#include <cmath>
using namespace std;
int main(){
	
	int n, i, j, a, c = 0;
	cin >> n;
	a = (n*2) - 1;
	
	for(i = 0; i < a; i++){
		for(j = 0; j < a; j++){
			if(i == j || i + j == a - 1){
				if(i < n){ c++;
					cout << " " << i + 1 << " ";
				} else {
					cout << " " << abs(i - c) << " "; 
				}
			} else {
				cout << "  ";
			}
		} cout << endl;
	}
	return 0;
}
