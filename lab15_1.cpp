#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
	int b;
	T key;
	for(int a = 1; a < N; a++){
		key = d[a];
		b = a - 1;
		while(b >= 0 && key > d[b]){
			d[b + 1] = d[b];
			b = b - 1;
		}
		d[b + 1] = key;
		
		cout << "Pass " << a << ":";
		for(int x = 0; x < N; x++)
		cout << d[x] << " ";
		cout << "\n";
	}
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
