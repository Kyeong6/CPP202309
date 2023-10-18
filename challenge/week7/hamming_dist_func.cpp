#include <iostream>
#include <string>
using namespace std;


string toLowerStr(string str) // 문자열 입력 받기
{
	string lowerStr; // lowerStr 이라는 빈 문자열 변수 설정
	// 입력받은 str 각 문자열을 확인하여 각 문자를 소문자화하고, lowerStr에 저장
	for (char c : str) {
		lowerStr += tolower(c);
	}
	return lowerStr;
}

string toUpperStr(string str) // 문자열 입력 받기
{
	string upperStr; // upperStr 이라는 빈 문자열 변수 설정
	// 입력받은 str 각 문자열을 확인하여 각 문자를 대문자화하고, upperStr에 저장
	for (char c : str) {
		upperStr += toupper(c);
	}
	return upperStr;
}

// 해밍 거리를 구하기 위한 함수 작성
int calcHammingDist(string s1, string s2)
{
	int count = 0; // 다른 값이 있을 경우 +1 해야하기 위한 count 변수
	s1 = toLowerStr(s1); // 소문자로 변환
	s2 = toLowerStr(s2); // 소문자로 변환

	// 다른 값이 있을 경우 +1 하기 위한 코드
	for (int i = 0; i < s1.length(); i++) {
		if (s1[i] != s2[i]) {
			count += 1;
		}
	}
	return count;
}

int main() 
{
	string s1, s2; // 함수 넣을 변수의 자료형 설정

	cout << "DNA1: "; 
	cin >> s1;
	cout << "DNA2: ";
	cin >> s2;

	// 입력받은 s1,s2를 토대로 calcHammingDist 함수 호출
	int count = calcHammingDist(s1, s2); 
	// calcHammingDist의 return 값인 count를 출력
	cout << "해밍 거리는 " << count << endl;

	return 0;
}