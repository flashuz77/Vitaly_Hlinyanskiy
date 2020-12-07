#include<iostream>
#include<conio.h>
using namespace std;
class Tehnika
{
public:
	Tehnika() { cout << "����������� ������� �����." << endl; };
	~Tehnika() { cout << "���������� ������� �����." << endl; };
};

class Computer : public Tehnika
{
public:
	Computer() { cout << "����������� ���i����� �����." << endl; };
	~Computer(){ cout << "���������� ���i����� �����." << endl; };
	void show() { cout << "�������� ��'��� ���i����� �����." << endl; };
};
int main()
{
	setlocale(LC_ALL, "ukr");
	Computer ob;
	ob.show();
	ob.~Computer(); // ��� ������� ����������� ��������� �����, ����������� � ���������� ��������.
	_getch();
	return 0;
}