#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1 = "Good";
	string s2 = "Bad";
	// �Ҹ������� ���� b�� ���ڿ� ���� s1�� s2�� ������ True, �ٸ��� False ��ȯ
	bool b = (s1 == s2);
	cout << b << endl;

	s2 = "Good";
	b = (s1 == s2);
	cout << b << endl;

	return 0;
}