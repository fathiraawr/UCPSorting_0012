// 1. insertion sort cocok untuk data yang kecil dan banyaknya 
//data yang sudah terurut akan lebih efisien
// 2. karena selection sort mencari data yang paling kecil ke yang paling besar
//scan kemudian di tempatkan di tempat yang benar
// 3. data yang lebih besar banyak tapi langkahnya bertambah


#include <iostream>
using namespace std;

int arr[12];
int n;

void input() {
    while (true) {
        cout << "Masukkan banyaknya Elemen pada nickname : ";
        cin >> n;
        if (n <= 12)
            break;
        else {
            cout << "\nMasukkan maksimal 12 Element.\n";
        }
    }
    cout << endl;
    cout << "======================" << endl;
    cout << "Masukkan setiap elemet pada nickname" << endl;
    cout << "======================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }
}

void selectionSort() {
    for (int j = 0; j < n - 1; j++) {
        int min_index = j;
        for (int i = j + 1; i < n; i++) {
            if (arr[i] < arr[min_index]) {
                min_index = i;
            }
        }
        int temp = arr[j];
        arr[j] = arr[min_index];
        arr[min_index] = temp;
    }
}

void display() {
    cout << endl;
    cout << "====================" << endl;
    cout << "Elemen yang telah tersusun" << endl;
    cout << "====================" << endl;
    cout << endl;
    for (int j = 0; j < n; j++) {
        cout << arr[j];
        if (j < n - 1) {
            cout << " --> ";
        }
    }
    cout << endl;
    cout << endl;
    cout << "Jumlah yang tertera = " << n - 1 << endl;
    cout << endl;
}

int main() {
    input();
    selectionSort();
    display();

    system("pause");
    return 0;
}
