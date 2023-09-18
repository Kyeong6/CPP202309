#include <iostream>
using namespace std;

int main() {
	int choice; // 정수형 변수 choice 선언

	// 원하는 기능에 숫자를 입력하여 choice에 담기
	cout << "1. 파일 저장" << endl;
	cout << "2. 저장 없이 닫기" << endl;
	cout << "3. 종료" << endl;
	cin >> choice;
	
	// 조건문에 있는 표현식을 통해 숫자가 담겨있는 choice 변수에 해당하는 기능 출력
	if (choice == 1)
		cout << "파일 저장을 선택했습니다." << endl;
	else if (choice == 2)
		cout << "파일 닫기를 선택했습니다." << endl;
	else if (choice == 3)
		cout << "프로그램을 종료합니다." << endl;
	else
		cout << "잘못된 선택입니다." << endl;

	return 0;
}