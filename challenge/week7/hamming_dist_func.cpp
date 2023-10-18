#include <iostream>
#include <string>
using namespace std;


string toLowerStr(string str) // ���ڿ� �Է� �ޱ�
{
	string lowerStr; // lowerStr �̶�� �� ���ڿ� ���� ����
	// �Է¹��� str �� ���ڿ��� Ȯ���Ͽ� �� ���ڸ� �ҹ���ȭ�ϰ�, lowerStr�� ����
	for (char c : str) {
		lowerStr += tolower(c);
	}
	return lowerStr;
}

string toUpperStr(string str) // ���ڿ� �Է� �ޱ�
{
	string upperStr; // upperStr �̶�� �� ���ڿ� ���� ����
	// �Է¹��� str �� ���ڿ��� Ȯ���Ͽ� �� ���ڸ� �빮��ȭ�ϰ�, upperStr�� ����
	for (char c : str) {
		upperStr += toupper(c);
	}
	return upperStr;
}

// �ع� �Ÿ��� ���ϱ� ���� �Լ� �ۼ�
int calcHammingDist(string s1, string s2)
{
	int count = 0; // �ٸ� ���� ���� ��� +1 �ؾ��ϱ� ���� count ����
	s1 = toLowerStr(s1); // �ҹ��ڷ� ��ȯ
	s2 = toLowerStr(s2); // �ҹ��ڷ� ��ȯ

	// �ٸ� ���� ���� ��� +1 �ϱ� ���� �ڵ�
	for (int i = 0; i < s1.length(); i++) {
		if (s1[i] != s2[i]) {
			count += 1;
		}
	}
	return count;
}

int main() 
{
	string s1, s2; // �Լ� ���� ������ �ڷ��� ����

	cout << "DNA1: "; 
	cin >> s1;
	cout << "DNA2: ";
	cin >> s2;

	// �Է¹��� s1,s2�� ���� calcHammingDist �Լ� ȣ��
	int count = calcHammingDist(s1, s2); 
	// calcHammingDist�� return ���� count�� ���
	cout << "�ع� �Ÿ��� " << count << endl;

	return 0;
}