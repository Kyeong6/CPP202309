#include <iostream>
using namespace std;

int main() {
	int choice; // 정수형 변수 choice 선언

	// 순서대로 문장 출력 후 원하는 기능에 맞는 정수 입력하면 choice 변수에 넣어짐
	cout << "1. 파일 저장" << endl; 
	cout << "2. 저장 없이 닫기" << endl;
	cout << "3. 종료" << endl;
	cin >> choice;

	// choice가 정수형 변수이므로 switch문 표현식에 들어갈 수 있음
	// 기능에 해당하는 정수를 입력한 뒤 아래 번호에 맞는 문장을 실행할 수 있음
	// 중요한 건 해당하는 문장을 실행한 뒤 break를 사용하여 원하는 문장만 출력 후 실행이 종료되게 하기
	switch (choice) {
	case 1:
		cout << "파일 저장을 선택했습니다." << endl;
		break;
	case 2:
		cout << "파일 닫기를 선택했습니다." << endl;
		break;
	case 3:
		cout << "프로그램을 종료합니다." << endl;
		break;
	default:
		cout << "잘못된 선택입니다." << endl;
		break;
	}
	
	return 0;
}