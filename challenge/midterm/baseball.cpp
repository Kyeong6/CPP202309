#include <iostream>
#include <string>
using namespace std;

// 3�ڸ� ������ �ڸ����� ��� �ٸ� �� üũ�ϴ� �Լ� : checkNumber()
bool checkNumber(int number) {
	int first = number / 100;
	int second = (number % 100) / 10;
	int third = number % 10;

	return (first != second) && (first != third) && (second != third);
}

int main() {
	int randomNum; // ����� �ϴ� 3�ڸ����� ���� ���� ����
	int firstNum; // ������ ù��° �ڸ���
	int secondNum; // ������ �ι�° �ڸ���
	int thirdNum; // ������ ����° �ڸ���

	while (1) {
		randomNum = rand() % 900 + 100; // ������ 3�ڸ��� ����

		bool same = false; // ��� ���� �ٸ� ��� true�� ���� ����

		// TODO 1: 3�ڸ� ������ �ڸ����� �����ϰ�, ��� ���� �ٸ��� üũ�ϴ� �ڵ��� �ۼ�
		firstNum = randomNum / 100;
		secondNum = (randomNum % 100) / 10;
		thirdNum = randomNum % 10;

		// ��� ���� �ٸ��� üũ�ϴ� �ڵ�
		// checkNumber() �Լ� Ȱ��ȭ
		if (checkNumber(randomNum)) {
			same = true;
		}

		if (same == true) {
			break;
		}
	}

	int turn = 0;
	while (1) {
		cout << turn + 1 << "��° �õ��Դϴ�. " << endl;

		int userNumber; // ����ڰ� �Է��� ���ڸ��� ���� ����
		int guessFirst; // ������ ������ ù��° �ڸ���
		int guessSecond; // ������ ������ �ι�° �ڸ���
		int guessThird; // ������ ������ ����° �ڸ���


		// ����ڿ��� ���ڸ� ���� �Է¹޴� �ڵ� ���
		while (1) {
			cout << "���ڸ� ���� �Է����ּ���: ";
			cin >> userNumber;

			bool same = false; // ��� ���� �ٸ� ��� true�� ���� ����
			// TODO 1: 3�ڸ� ������ �ڸ����� �����ϰ�, ��� ���� �ٸ��� üũ�ϴ� �ڵ��� �ۼ�
			guessFirst = userNumber / 100;
			guessSecond = (userNumber % 100) / 10;
			guessThird = userNumber % 10;

			if (to_string(userNumber).length() != 3) {
				cout << "�Էµ� ���ڰ� 3�ڸ� ���� �ƴմϴ�. �ٽ� �Է��ϼ���." << endl;
				continue;
			}
			// ���ڸ� �Է����� �� �ߺ��� ���ڰ� ���� ��� ������ ����ϰ� �ٽ� �Է� �ޱ����� �ڵ�
			if (guessFirst == guessSecond || guessFirst == guessThird || guessSecond == guessThird) {
				cout << "�Էµ� ���ڿ� �ߺ��� ���ڰ� �ֽ��ϴ�. �ٽ� �Է��ϼ���." << endl;
				continue;
			}
			// ������ �ۼ��� �ڵ带 ������� ���� �Է��� �ڸ����� ���ڰ� ��� �ٸ� ��� same ������ true�� Ȱ��ȭ���� ���� ��� ����
			if (guessFirst != guessSecond && guessFirst != guessThird && guessSecond != guessThird) {
				same = true;
			}

			if (same == true) {
				break;
			}
		}
			

		int strike = 0; // ��Ʈ����ũ ������ �����ϴ� ����
		int ball = 0; // �� ������ �����ϴ� ����

		// TODO 2: ����� ������ ������ �ڸ����� ���ڸ� ���ϸ� ��Ʈ�� �ֱ� ���� �ڵ��� �ۼ�
		// strike�� ��� �����ϴ� �ڵ�
		if (firstNum == guessFirst) {
			strike++;
		}
		if (secondNum == guessSecond) {
			strike++;
		}
		if (thirdNum == guessThird) {
			strike++;
		}
		// ball�� ��� �����ϴ� �ڵ�
		if (firstNum == guessSecond || firstNum == guessThird) {
			ball++;
		}
		if (secondNum == guessFirst || secondNum == guessThird) {
			ball++;
		}
		if (thirdNum == guessFirst || thirdNum == guessSecond) {
			ball++;
		}

		cout << userNumber << "�� ��� : " << strike << " ��Ʈ����ũ, " << ball << "�� �Դϴ�." << endl;

		if (strike == 3) {
				cout << "������ ������ϴ�. �����մϴ�.";
			break;
		}

		turn += 1;
	}

	return 0;
}
