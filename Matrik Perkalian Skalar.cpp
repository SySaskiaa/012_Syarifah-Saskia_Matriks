#include <iostream>

using namespace std;

int main(){
	int matriks[20][20];
	int hasil[20][20];
	int baris;
	int kolom;
	int skalar;
	
	cout<<"Masukkan Baris Matriks :";
	cin>>baris;
	cout<<"Masukkan Kolom Matriks :";
	cin>>kolom;
	cout<<"Bilangan Skalar :";
	cin>>skalar;
	cout<<endl;
	
	cout<<"Matriks"<<endl;
	for (int i=0; i<baris; i++){
		for (int j=0; j<kolom; j++){
			cin>>matriks[i][j];
		}
	}
	cout<<endl;
	
	cout<<"Hasil Perkalian Skalar dengan Matriks"<<endl;
	for(int i=0; i<baris; i++){
		for(int j=0; j<kolom; j++){
			hasil[i][j]=skalar*matriks[i][j];
			cout<<" "<<hasil[i][j];
		}
		cout<<endl;
	}
	return 0;
}
