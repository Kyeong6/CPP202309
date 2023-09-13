#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1 = "사과";
	string s2;
	// 변수 s1과 s2는 문자열인데 반해 10은 정수형 변수이므로 서로 유형이 달라 + 연산자가 적용되지 않음
	// 그러므로 to_string(10)을 통해서 정수형 10이 아닌 문자형 10으로 바꿔줘야 함
	//s2 = s1 + " " + 10 + "개";
	s2 = s1 + " " + to_string(10) + "개";
	cout << s2 << endl;

	return 0;
}