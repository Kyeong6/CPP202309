#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Person Ŭ������ �����Ͽ� name, age ��������� ������ִ� Print ����Լ� ����
class Person {
public:
	// ��� ���� ����
	string name;
	int age;

	Person(string name, int age) : name(name), age(age) {}

	// ��� �Լ� ����(����� ���� �Լ�)
	void Print() {
		cout << name << "(" << age << "��)" << endl;
	}
};

int main()
{
	int maxPeople;
	cout << "�� ���� ���� �Է��϶�: ";
	cin >> maxPeople;

	// vector�� ���� ���� �迭 ����
	vector<Person> people;

	for (int i = 0; i < maxPeople; i++) {
		string name;
		int age;
		cout << "���" << i + 1 << "�� �̸� : ";
		cin >> name;
		cout << "���" << i + 1 << "�� ���� : ";
		cin >> age;
		// push_back�� ���ؼ� �Է¹��� name, age people �迭�� �߰�
		people.push_back(Person(name, age));
	}

	// ������ �Ӱ谪 ����
	int ageThreshold;
	cout << "Ư�� ���� �̻��� ����� ã������ ���̸� �Է��ϼ���: ";
	cin >> ageThreshold;

	cout << ageThreshold << "�� �̻��� ����:" << endl;

	// findPeople�̶�� ������ �����ؼ� ���� ���ǿ� �´°� ������ +1 �߰�
	int findPeople = 0;
	for (int i = 0; i < maxPeople; i++) {
		if (people[i].age >= ageThreshold) {
			// ��� �Լ��� ���� ��� ���� : ���̰� �Ӱ谪���� ũ�ٸ� ����
			people[i].Print();
			findPeople++;
		}
	}

	if (findPeople == 0) {
		cout << ageThreshold << "�̻��� ���̸� ���� ���� �����ϴ�.";
	}
	return 0;
}
