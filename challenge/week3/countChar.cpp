#include <iostream>
using namespace std;

int main() {
	int vowel = 0; // ���� ���� �ʱ⼳��
	int consonant = 0; // ���� ���� �ʱ⼳��
	cout << "�����ڸ� �Է��ϰ� ctrl+z�� ġ����" << endl;

	char ch; // ����� �Է� �����ϱ� ���� ����
	
	while (cin >> ch) { // ���� �̿��� ���� ���ð�� ���������� 
		switch (ch) {
		case 'a': case 'e': case 'i': case 'o': case 'u': // ������ �� vowel +1�ϱ�
			vowel++;
			break;
		default: // ������ �� consonant +1�ϱ�
			consonant++;
		}
	}

		cout << "����: " << vowel << endl;
		cout << "����: " << consonant << endl;
		return 0;
}
