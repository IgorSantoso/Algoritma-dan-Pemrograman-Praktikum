#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
	int angka;
	cout<<"Masukkan angka : "; cin>>angka;
	cout<<endl;
	
	//seleksi pembanding AND, kedua kondisi harus bernilai benar
	if ((angka > 0) && (angka < 10)) {
	cout<<"Yang memasukkan angka antara 1 sampai 9";
	}
	else {
	cout<<"Yang anda masukkan bukan antara 1 sampai 9";
	}
}
