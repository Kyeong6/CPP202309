#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Person 클래스를 생성하여 name, age 멤버변수와 출력해주는 Print 멤버함수 설정
class Person {
public:
	// 멤버 변수 설정
	string name;
	int age;

	Person(string name, int age) : name(name), age(age) {}

	// 멤버 함수 설정(출력을 위한 함수)
	void Print() {
		cout << name << "(" << age << "세)" << endl;
	}
};

int main()
{
	int maxPeople;
	cout << "총 고객의 수를 입력하라: ";
	cin >> maxPeople;

	// vector를 통한 동적 배열 생성
	vector<Person> people;

	for (int i = 0; i < maxPeople; i++) {
		string name;
		int age;
		cout << "사람" << i + 1 << "의 이름 : ";
		cin >> name;
		cout << "사람" << i + 1 << "의 나이 : ";
		cin >> age;
		// push_back을 통해서 입력받은 name, age people 배열에 추가
		people.push_back(Person(name, age));
	}

	// 나이의 임계값 설정
	int ageThreshold;
	cout << "특정 나이 이상인 사람을 찾으려면 나이를 입력하세요: ";
	cin >> ageThreshold;

	cout << ageThreshold << "세 이상인 고객들:" << endl;

	// findPeople이라는 변수를 설정해서 만약 조건에 맞는게 있으면 +1 추가
	int findPeople = 0;
	for (int i = 0; i < maxPeople; i++) {
		if (people[i].age >= ageThreshold) {
			// 멤버 함수를 통한 출력 수행 : 나이가 임계값보다 크다면 조건
			people[i].Print();
			findPeople++;
		}
	}

	if (findPeople == 0) {
		cout << ageThreshold << "이상의 나이를 가진 고객이 없습니다.";
	}
	return 0;
}
