setlocale(LC_ALL, "Russian");
//����, � ������� �������� ���� �������
#include <iostream>
using namespace std;
int mult(int a, int b) {
	int res = a * b;
	return res;
}
int mult(int a, int b, int c) {
	int res = a * b * c;
	return res;
}
//�������� ������� ����� ������� �����
//������ �� ����� � ������ �����, � ����� ����� �� ������ - � ��� � ����� ���������
void print() {
#ifdef USER
	cout << "����� ������ ����������" << endl;
#endif
#ifndef USER
	cout << "������ ������� �� ����������" << endl;
#endif
}