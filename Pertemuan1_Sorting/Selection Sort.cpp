#include<iostream>

using namespace std;

void selectionSort(int arr[], int n) {
	int i, j, minIndex, tmp;
	/*
	i = baris
	j = kolom
	minIndex = nampung nilai terkecil
	tmp = nuker angka
	*/
	
	for (i = 0; i < n-1; i++) {
		minIndex = 1;
		
		for (j = i+1; j < n; j++) {
			// kondisi nyari angka terkecil dalam suatu baris
			if (arr[j] < arr[minIndex]) {
				minIndex = j;
			}
		}
		// nukar angka
		tmp = arr[minIndex];
		arr[minIndex] = arr[i];
		arr[i] = tmp;
		
		cout << "Iterasi ke-" << i+1 << ": ";
		
		for (int k = 0; k < n; k++) {
			cout << arr[k] << " ";
		}
		
		cout << "\n";
	}
	
}

int main() {
	int n, i;
	
	cout << "masukan jumlah elemen: ";
	cin >> n;
	
	int arr[n];
	cout << "masukan nilai elemen: \n";
	
	for (i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	cout << "Data sebelum disorting: ";
	for (i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	
	cout << "\n";
	
	selectionSort(arr, n);
	
	cout << "Data sesudah disorting";
	for (i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	
	return 0;
	
	
	
	
}
