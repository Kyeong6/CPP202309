#include <iostream>
#include <string>
using namespace std;

int main()
{
	const int maxPeople = 3; // 총 고객의 수 변수 설정 및 초기화
	// cout << "총 고객의 수를 입력하라: ";
	// cin >> maxPeople;
	string names[maxPeople];
	int ages[maxPeople];

	// for문을 이용한 리스트 요소에 각각 이름과 나이 추가
	// i+1로 설정해서 입력받을 때 1,2,3으로 시작
	for (int i = 0; i < maxPeople; i++) {
		cout << "사람" << i+1 << "의 이름 : ";
		cin >> names[i];
		cout << "사람" << i+1 << "의 나이 : ";
		cin >> ages[i];
	}

	// 나이의 임계값 설정
	int ageThreshold;
	cout << "특정 나이 이상인 사람을 찾으려면 나이를 입력하세요: ";
	cin >> ageThreshold;

	cout << ageThreshold << "세 이상인 고객들:\n";
	
	int findPeople = 0; // findPeople이라는 변수를 설정해서 만약 조건에 맞는게 있으면 +1 추가
	for (int i = 0; i < maxPeople; i++) {
		// 나이가 임계값보다 크다면 조건
		if (ages[i] >= ageThreshold) { 
			cout << names[i] << "(" << ages[i] << "세)\n";
			findPeople++; // 꼭 증가시켜줘서 설정 맞추기
		}
	}
	// 특정 나이 이상인 사람이 없을 경우
	if (findPeople == 0) {
		cout << ageThreshold << "이상의 나이를 가진 고객이 없습니다";
	}
	return 0;

	
}