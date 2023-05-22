#include <iostream>

using namespace std;

void cariNilaiTerkecil(int arr[], int n, int& indeksGanjilTerkecil, int& indeksGenapTerkecil) {
    int ganjilTerkecil = -1;
    int genapTerkecil = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 1) {
            if (ganjilTerkecil == -1 || arr[i] < arr[ganjilTerkecil]) {
                ganjilTerkecil = i;
            }
        } else {
            if (genapTerkecil == -1 || arr[i] < arr[genapTerkecil]) {
                genapTerkecil = i;
            }
        }
    }

    indeksGanjilTerkecil = ganjilTerkecil;
    indeksGenapTerkecil = genapTerkecil;
}

int main() {
    const int ukuran = 10;
    int arr[ukuran] = {6, 7, 4, 3, 2};

    int indeksGanjilTerkecil = -1;
    int indeksGenapTerkecil = -1;

    cariNilaiTerkecil(arr, ukuran, indeksGanjilTerkecil, indeksGenapTerkecil);

    if (indeksGanjilTerkecil != -1) {
        cout << "Nilai ganjil terkecil: " << arr[indeksGanjilTerkecil] << ", indeks: " << indeksGanjilTerkecil << endl;
    } else {
        cout << "Tidak ada bilangan ganjil dalam urutan bilangan." << endl;
    }

    if (indeksGenapTerkecil != -1) {
        cout << "Nilai genap terkecil: " << arr[indeksGenapTerkecil] << ", indeks: " << indeksGenapTerkecil << endl;
    } else {
        cout << "Tidak ada bilangan genap dalam urutan bilangan." << endl;
    }

    return 0;
}
