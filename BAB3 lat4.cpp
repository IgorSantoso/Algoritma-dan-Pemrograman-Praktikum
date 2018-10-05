#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
	char huruf;
	cout<<"Masukkan huruf kecil : "; cin>>huruf;
	cout<<endl;
	
	//Seleksi pembandingan OR, salah satu kodisi bernilai benar
	if((huruf == 'a') || (huruf == 'i') || (huruf == 'u') || (huruf == 'e') || (huruf == 'o'))
	cout<<"Anda masukkan huruf vokal"<<endl;
	
	else
	cout<<"Yang anda masukkan adalah huruf konsonan"<<endl;
}
