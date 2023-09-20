#include <iostream>
using namespace std;

int main() {
	int userInput; // 사용자 입력 변수 설정

	cout << "정수를 10번 입력하세요 (0을 입력하면 종료):";
	for (int i = 0; i < 10; i++) // 10번 입력을 위한 반복문 설정
	{
		cin >> userInput;
		if (userInput == 0) // 만약 0을 입력하면 빠져나오기
		{
			break;
		}

		cout << "입력값: " << userInput << "횟수 :" << i << endl; // 0 이외의 입력을 할 경우 10번 실행하면서 값을 출력
	}

	cout << "종료되었습니다";

	return 0;
		
		

}
