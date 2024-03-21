// 1. Jelaskan bagaimana algoritma Bubble Sort membandingkan serta menukar 
// elemen-elemen.?
// - Algoritma bubble sort membandingkan dua elemen yang berdekatan dalam 
// suatu array serta menukar posisi ketika urutan mereka tidak sesuai.
// - Dilakukan secara berulang untuk setiap pasangan elemen dalam 
// array sampai tidak ada lagi pertukaran yang diperlukan, sehingga membuat 
// elemen-elemen tersebut menjadi terurut.

// 2.	Jelaskan bagaimana algoritma Shell Sort membandingkan serta menukar 
// elemen-elemen.
// - Elemen-elemen tersebut dibagi menjadi beberapa kelompok dengan jarak tertentu 
// yang disebut celah.
// - Shell sort melakukan pengurutan secara sederhana (seperti bubble sort atau insertion sort) 
// pada setiap kelompok.
// - Celah atau kesalahan yang ada dikecilkan secara bertahap, sehingga elemen-elemen 
// semakin dekat satu sama lain.
// - Proses ini diulang dengan celah yang lebih kecil hingga semua elemen menjadi terurut.

// 3.	Dalam algorithma sortir, jika data sudah ada beberapa yang berutan, 
// maka algorithma mana yang harus dipilih? Jelaskan mengapa.
// Algoritma yang tepat untuk dipilih adalah Insertion Sort. Algoritma ini lebih efisien untuk 
// data yang sebagian besar hampir terurut karena mempunyai kompleksitas waktu yang linier saat 
// memproses data yang hampir terurut.

#include <iostream>
using namespace std;

int pradipta[37]; 
int n;

void input() {
    while (true) {
        cout << "Masukan banyaknya elemen pada array : ";
        cin >> n;
        if (n <= 20)
            break;
        else {
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";
        }
    }
    cout << endl;                           
    cout << "===============" << endl;      
    cout << "Masukan Elemen Array" << endl; 
    cout << "===============" << endl;      

    for (int i = 0; i < n; i++) { 
        cout << "Data ke-" << (i + 1) << ": "; 
        cin >> pradipta[i];                        

    }
}

void bubbleSortArray() { 
    int pass = 1; 

    do {
        for (int j = 0; j <= n - 1 - pass; j++) { 
            if (pradipta[j] > pradipta[j + 1]) { 
                int temp = pradipta[j];
                pradipta[j] = pradipta[j + 1];
                pradipta[j + 1] = temp;
            }
        }
        pass = pass + 1; 

        cout << "\nPass " << pass - 1 << ": ";  
        for (int k = 0; k < n; k++) {           
            cout << pradipta[k] << " ";              


        }
        cout << endl;

    } while (pass <= n - 1); 
}

void display() {
    cout << endl;
    cout << "===================================" << endl;
    cout << "Element Array yang telah tersusun" << endl;
    cout << "===================================" << endl;
    cout << endl;
    for (int j = 0; j < n; j++) {
        cout << pradipta[j]; 
        if (j < n - 1) {
            cout << " --> ";
        }
    }
    cout << endl;
    cout << endl;
    cout << "Jumlah pass = " << n - 1 << endl; 
    cout << endl;
}

int main() {
    input();  
    bubbleSortArray();  
    display();
    system("pause");

    return 0;
}