#include <iostream>
using namespace std;

int main() {

	int number; // 정수형 변수 number 선언

	cout << "숫자를 입력하시오:"; // 숫자를 입력받고 변수 number에 넣기
	cin >> number;

	if (number == 0) // number가 0이라면 zero 출력
		cout << "zero\n";
	else if (number == 1) // number가 1이라면 one 출력
		cout << "one\n";
	else // 위의 두 가지 경우가 아니라면 many 출력
		cout << "many\n";
	return 0;
}