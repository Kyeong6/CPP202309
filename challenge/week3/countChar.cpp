#include <iostream>
using namespace std;

int main() {
	int vowel = 0; // 모음 변수 초기설정
	int consonant = 0; // 자음 변수 초기설정
	cout << "영문자를 입력하고 ctrl+z를 치세요" << endl;

	char ch; // 사용자 입력 저장하기 위한 변수
	
	while (cin >> ch) { // 문자 이외의 값이 나올경우 빠져나오기 
		switch (ch) {
		case 'a': case 'e': case 'i': case 'o': case 'u': // 모음일 때 vowel +1하기
			vowel++;
			break;
		default: // 자음일 때 consonant +1하기
			consonant++;
		}
	}

		cout << "모음: " << vowel << endl;
		cout << "자음: " << consonant << endl;
		return 0;
}
