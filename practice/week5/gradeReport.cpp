#include <iostream>
#include <string>
using namespace std;

int main()
{
	const int STUDENT = 5; // �迭���� ����� ������ ����� ����
	const int SUBJECT = 3; // �迭���� ����� ������ ����� ����
	int scores[STUDENT][SUBJECT]; // scores�� 2���� �迭�� ����
	string studentNames[STUDENT] // �л����� �̸��� STUDENT(��)�� �ֱ�
		= { "����", "����", "ö��", "�̹�", "����" };
	string subjectNames[SUBJECT] // �л����� ������ ����(��) SUBJECT�� �ֱ�
		= { "����", "����", "CPP"};

	// �ݺ����� �̿��ؼ� �л� ���θ����� ������� ���� �Է¹ޱ�
	// 2�� �ݺ����� �̿��ؼ� �л� �� ���� ���� 3���� ���� �Է� �ޱ�
	for (int i = 0; i < STUDENT; i++) {
		cout << studentNames[i] 
			<< "�� ������ �ϳ��� �Է��ϼ���." << endl;
		for (int j = 0; j < SUBJECT; j++) {
			cout << subjectNames[j] << ":";
			cin >> scores[i][j];
		}
	}
	
	// ������ �Է¹��� �л����� ������ ��� ������ ���ϱ� ���� 
	// average ������ �̿��ؼ� ����
	for (int i = 0; i < STUDENT; i++) {
		cout << studentNames[i] << "�� ��� ������ ";
		double sum = 0;
		double average = 0;
		for (int j = 0; j < SUBJECT; j++) {
			sum += scores[i][j];
		}
		average = sum / SUBJECT;
		cout << average << "�Դϴ�" << endl;
	}
	return 0;
}