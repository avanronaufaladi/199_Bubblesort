#include <iostream>
using namespace std;

int a[20];  // deklarasi array a dengan ukuran 20
int n;      // deklarasi variabel n untuk menyimpan banyaknya elemen padda array
 
void input() {     // procedure untuk input
	while (true) {  // looping
		cout << "masukkan banyaknya elemen pada array : "; // output ke layar
		cin >> n;  // input dari pengguna
		if (n <= 20) //jika n kurang dari  atau sama dengan 20
			break;  // keluar dari loop
		else {   // jika n lebih dari 20
			cout << "\narray dapat mempunyai maksimal 20 elemen. \n"; //  output ke layar
		}

	}
	cout << endl;           // ouput baris kosong
	cout << "===================" << endl; // output ke layar
	cout << "masukkan elemen array " << endl;  // output ke layara
	cout << "===================" << endl; // output ke layar

	for (int i = 0; i < n; i++) { // looping dengan 1 dimulai dari 0 hingga n-1
		cout << "data ke -" << (i + 1) << "; "; // output ke layar
		cin >> a[i];              // input dari pengguna
	}
}





int main() {

}
	
