#include <iostream>
using namespace std;

int main() {
	int a, b, c, largest;

	cout << "3���� ������ �Է��Ͻÿ�: ";
	cin >> a >> b >> c; // ������ ���� a,b,c,�� �Է� ����

	if (a > b && a > c) // a�� b���� ũ��(and), a�� c���� ũ�� �Ʒ� ���� ����
		largest = a;
	else if (b > a && b > c) // b�� a���� ũ��(and), b�� c���� ũ�� �Ʒ� ���� ����
		largest = b;
	else // ���� �� ���� ��츦 ������ ��� ���� �Ʒ� ���� ����
		largest = c;

	cout << "���� ū ������" << largest << endl; // ���� ���ǽĿ��� ���� ���� largest ���� ���
	return 0;
}