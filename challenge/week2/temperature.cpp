#include <iostream>
using namespace std;

int main() {

	// 화씨 및 섭씨 변수 자료형 정의
	double hwasi;
	double subsi;

	// 화씨 -> 섭씨온도 변환이므로 화씨 온도를 입출력으로 받음
	cout << "화씨온도: ";
	cin >> hwasi;
	
	// 공식을 이용해 입력받은 화씨온도 기반으로 섭씨온도 구하기
	subsi = (5.0 / 9.0) * (hwasi - 32);

	// 섭씨온도 출력
	cout << "섭씨온도= " << subsi << endl;

	return 0;
}