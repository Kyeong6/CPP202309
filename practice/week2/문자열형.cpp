#include <iostream>
// string 헤더파일을 추가하여 문자열 사용, 필수조건
#include <string>
using namespace std;

int main()
{
	// s1,s2,s3는 문자열 변수임을 나타냄
	string s1 = "Good";
	string s2 = "Morning";
	string s3 = s1 + " " + s2 + "!";
	// cout << << endl; 을 통해서 출력을 하는 코드 여기서는 변수 s3 값을 출력
	cout << s3 << endl;
	return 0;
}