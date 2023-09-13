#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1 = "Good";
	string s2 = "Bad";
	// 불리안형인 변수 b는 문자열 변수 s1과 s2가 같으면 True, 다르면 False 반환
	bool b = (s1 == s2);
	cout << b << endl;

	s2 = "Good";
	b = (s1 == s2);
	cout << b << endl;

	return 0;
}