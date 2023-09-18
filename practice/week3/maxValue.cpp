#include <iostream>
using namespace std;

int main() {
	int a, b, c, largest;

	cout << "3개의 정수를 입력하시오: ";
	cin >> a >> b >> c; // 정수형 변수 a,b,c,를 입력 받음

	if (a > b && a > c) // a가 b보다 크고(and), a가 c보다 크면 아래 문장 실행
		largest = a;
	else if (b > a && b > c) // b가 a보다 크고(and), b가 c보다 크면 아래 문장 실행
		largest = b;
	else // 위의 두 가지 경우를 제외한 모든 경우는 아래 문장 실행
		largest = c;

	cout << "가장 큰 정수는" << largest << endl; // 위의 조건식에서 얻은 변수 largest 값을 출력
	return 0;
}