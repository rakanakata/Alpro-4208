#include <iostream>
using namespace std;

/*
    Raka Daffa Nakata
    A11.2022.14323
    4208
*/

int tambah_rekursif(int m, int n) {
	if (n == 0){
		return m;
	}
	else {
		return 1 + tambah_rekursif(m, n - 1);
	}
}

int kurang_rekursif(int m, int n) {
	if (n == 0){
		return m;
	}
	else {
		return kurang_rekursif(m - 1, n - 1);
	}
}

int kali_rekursif(int m, int n) {
	if (n == 1) {
		return m;
	}
	else {
		return m + kali_rekursif(m, n - 1);
	}
}

int bagi_rekursif(int m, int n){
   if(m - n <= 0){
      return 1;
   }
   else {
      return bagi_rekursif(m - n, n) + 1;
   }
}

int pangkat_rekursif(int m, int n) {
	if (n == 0) {
		return 0;
	}
	else if (n == 1) {
		return m;
	}
	else {
		return m * pangkat_rekursif(m, n - 1);
	}
}


int main() {
	cout << "tambah : " << tambah_rekursif(20, 70) << endl;
	cout << "kurang : " << kurang_rekursif(50, 20) << endl;
	cout << "kali : " << kali_rekursif(4, 9) << endl;
	cout << "bagi : " << bagi_rekursif(50, 4) << endl;
	cout << "pangkat : " << pangkat_rekursif(2, 4);

	return 0;
}
