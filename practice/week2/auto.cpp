#include <iostream>

using namespace std;

// auto 키워드는 자동 타입 추론 -> 변수, 표현식의 데이터 형식을 컴파일러가 자동으로 추론
auto add(int x, int y)
{
	return x + y;
}

int main()
{
	// add(5, 6)은 위에서 정의한 것처럼 x=5, y=6이 되어 11의 값이 sum에 대입
	auto sum = add(5, 6);
	cout << sum;
	return 0;
}