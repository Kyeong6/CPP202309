// iostream 라이브러리에 있는 입출력 관련 구성 요소 사용
#include <iostream>

// std라는 클래스를 사용하는 것 명시
using namespace std;

int main() {

	// 화씨 및 섭씨 변수 자료형 정의(온도는 정수가 아닌 실수가 나올 수 있으므로 double형)
	double hwasi;
	double subsi;

	// 섭씨 -> 화씨온도 변환이므로 섭씨 온도를 입출력 사용
	cout << "섭씨온도: ";
	cin >> subsi;
	
	// 공식을 이용해 입력받은 섭씨온도 기반으로 화씨온도 구하기
	hwasi = (subsi * 1.8) + 32;

	// 화씨온도 출력
	cout << "화씨온도= " << hwasi << endl;

	return 0;
}