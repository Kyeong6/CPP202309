#include <iostream>
#include <time.h>
using namespace std;

int main() {
	int i;
	int ans; // 답변 변수 설정
	cout << "산수 문제를 자동으로 출제합니다." << endl;

	while (true) {
		int firstNum = rand() % 100; // 첫번째 수 랜덤으로 설정
		int secondNum = rand() % 100; // 두번째 수 랜덤으로 설정

		cout << firstNum << "+" << secondNum << "="; // 문제 출제
		cin >> ans; // 답변 받기
		if (firstNum + secondNum == ans)  // 답변과 답이 맞을 경우 break설정
		{ 
			cout << "맞았습니다." << endl;
			break;
		}
		else {
			cout << "틀렸습니다." << endl;
		}
	}
	return 0;
}
