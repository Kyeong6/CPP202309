#include <iostream>
#include <time.h>
using namespace std;

int main() {
	srand(time(NULL)); // random 함수 관련 설정

	int answer = rand() % 100; // 정답
	int tries = 0; // 시도 횟수 저장 변수
	
	int guess = 0; // 사용자 입력 저장 변수

	// do-while을 통해서 먼저 문제를 주고, guess에 답을 저장 및 tries +1하기
	do {
		cout << "정답을 추측하여 보시오: ";
		cin >> guess;
		tries++;

		if (answer > guess) // 정답이 추측한 값보다 크면 낮다고 알려주기
			cout << "제시한 정수가 낮습니다." << endl;
		if (answer < guess) // 정답이 추측한 값보다 낮으면 크다고 알려주기 
			cout << "제시한 정수가 높습니다." << endl;		
	} while (guess != answer); // 조건 설정 - 값이 다르다면 계속 실행

	cout << "축하합니다. 시도 횟수=" << tries << endl; // 시도횟수를 출력해줌
	return 0;
}