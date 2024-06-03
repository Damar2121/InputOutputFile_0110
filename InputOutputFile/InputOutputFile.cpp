#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baris;

	ofstream outfile;

	outfile.open("contohfile.txt");

	cout << ">= Menulis file, \'q\' untuk keluar" << endl;

	//unlimited loop untuk menulis
	while (true) {
		cout << "- ";
	//mendapatkan setiap karakter dalam satu baris
		if (baris == "q") break;
		//menulis dan memasukkan nilai dari 'baris' ke dalam file
		outfile << baris << endl;
	}
}