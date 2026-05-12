#include <iostream>
using namespace std;

class Mahasiswa
{
public:
	static int nim;
	int id;
	string name;

	void setID();
	void printAll();

	Mahasiswa(string pnama) :name(pnama)
	{
		setID();
	}
};

int Mahasiswa::nim = 10;
void Mahasiswa::setID()
{
	id = ++nim;
};

void Mahasiswa::printAll()
{
	cout << "ID: " << id << endl;
	cout << "NAma: " << name << endl;
	cout << endl;
};

int main()
{
	Mahasiswa mhs1("Aseel");
	Mahasiswa mhs2("huss");
	Mahasiswa mhs3("layth");
	Mahasiswa mhs4("suleiman");

	mhs1.printAll();
	mhs2.printAll();
	mhs3.printAll();
	mhs4.printAll();

	return 0;

}