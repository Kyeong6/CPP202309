#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1, s2; // ���� �񱳸� ���� string ���� ����
	int count = 0; // Ʋ�� ���� �� ������ �ľ��ϱ� ���� ���� ����

	cout << "DNA!: ";
	cin >> s1;
	cout << "DNA2: ";
	cin >> s2;

	// ���ǹ��� ���� �ϴ� ���̰� ���� ������ ���� �߻�
	// �� ���� ���ڿ��� ���ٸ� s1�� s2�� ���ڿ��� ���ؼ� ���ǹ��� ���� ���� ������ count�� 1�� �߰�
	if (s1.length() != s2.length()) 
		cout << "����: ���̰� �ٸ�" << endl;
	else {
		for (int i = 0; i < s1.length(); i++) {
			if (s1[i] != s2[i])
				count += 1;
		}
		// ���� �ڵ忡�� ����� count �� ���
		cout << "�ع� �Ÿ��� " << count << endl;
	}
	return 0;
}
