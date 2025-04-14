#include <iostream>
using namespace std;

string nama[] = {"nonong", "kopril", "andri"};

float kecepatan[3] = {75.3 , 83.9 , 95.9};

float waktu[4];

int main(){
    cout << "data ke-2 " << nama[1] << endl;
    nama[1]= "gibran";
    cout << "data ke-2 " << nama[1] << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << "kecepatan ke- " << i+1 << " = " << kecepatan[i] << endl;
    }

    for (int i = 0; i < 4; i++)
    {
        cout << "data ke-" << i + 1 << endl;
        cout << " masukkan waktu = ";
        cin >> waktu[i];
    }
    cout << endl;
    cout << "tampilkan waktu" << endl;

    cout << endl;


    for (int i = 0; i < 4; i++)
    {
        cout << "waktu ke- " << i + 1 << " = " << waktu[i] << endl;
    }
}