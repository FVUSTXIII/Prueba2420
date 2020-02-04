#include <iostream>
using namespace std;

int main() {
	int arreglo[10] = {1,2,3,4,5,6,7,8,9,0};
	int a = 0;
	for(int i = 0; i<10; i++) {
		a += arreglo[i]+i;
	}
	cout<<a<<" es el resultado"<<endl;
	return 0;

}
