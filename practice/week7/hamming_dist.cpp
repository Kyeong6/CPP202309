#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1, s2; // 문자 비교를 위해 string 변수 설정
	int count = 0; // 틀린 글자 몇 개인지 파악하기 위한 변수 설정

	cout << "DNA!: ";
	cin >> s1;
	cout << "DNA2: ";
	cin >> s2;

	// 조건문을 통해 일단 길이가 같지 않으면 오류 발생
	// 두 개의 문자열이 같다면 s1과 s2의 문자열을 비교해서 조건문을 통해 같지 않으면 count에 1씩 추가
	if (s1.length() != s2.length()) 
		cout << "오류: 길이가 다름" << endl;
	else {
		for (int i = 0; i < s1.length(); i++) {
			if (s1[i] != s2[i])
				count += 1;
		}
		// 위의 코드에서 얻어진 count 수 출력
		cout << "해밍 거리는 " << count << endl;
	}
	return 0;
}
