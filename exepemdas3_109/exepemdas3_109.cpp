#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x;
public:
	string luas;
	string keliling;
	string jejari;
	string sisi;
	int Luas_Lingkaran;
	int Keliling_Lingkaran;
	int Luas_Bujursangkar;
	int Keliling_Bujursangkar;
	bidangDatar() {
		x = 0;
	}

	virtual void input() {
		cout << "Lingkaran dibuat" << endl;
		cout << "\nBujursangkar dibuat" << endl;
	}

	virtual float Luas(int a) { 
		Luas_Lingkaran = 3, 14 * a * a;
		cout << "\nLuas Lingkaran =" << endl;
		cin >> luas;
		Luas_Bujursangkar = a * a;
		cout << "\nLuas Bujursangkar =" << endl;
		cin >> luas;
		return 0; 
	}

	virtual float Keliling(int a) { 
		Keliling_Lingkaran = 1 / 2 * 3, 14 * a;
		cout << "\nKeliling Lingkaran =" << endl;
		cin >> keliling;
		Keliling_Bujursangkar = 4 * a;
		cout << "\nKeliling Bujursangkar =" << endl;
		cin >> keliling;
		return 0; 
	}

	void setX(int a) {
		this->x = a;
	}

	int getX() {
		return x;
	}
};

class Lingkaran:public bidangDatar{
public:
	void input(){
		cout << "\nMasukkan jejari :" << endl;
		cin >> jejari;
	}
};

class Bujursangkar:public bidangDatar{

public:
	void input(){
		cout << "\nMasukkan sisi :" << endl;
		cin >> sisi;
	}
};

int main(){
	bidangDatar;
	Lingkaran;
	Bujursangkar;

	void input();
	float Luas(int a);
	float Keliling(int a);
	void setX(int a);
	int getX();

	return 0;
}