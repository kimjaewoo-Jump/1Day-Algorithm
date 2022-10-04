// 문제
// ROT13은 카이사르 암호의 일종으로 영어 알파벳을 13글자씩 밀어서 만든다.

// 예를 들어, "Baekjoon Online Judge"를 ROT13으로 암호화하면 "Onrxwbba Bayvar Whqtr"가 된다. ROT13으로 암호화한 내용을 원래 내용으로 바꾸려면 암호화한 문자열을 다시 ROT13하면 된다. 앞에서 암호화한 문자열 "Onrxwbba Bayvar Whqtr"에 다시 ROT13을 적용하면 "Baekjoon Online Judge"가 된다.

// ROT13은 알파벳 대문자와 소문자에만 적용할 수 있다. 알파벳이 아닌 글자는 원래 글자 그대로 남아 있어야 한다. 예를 들어, "One is 1"을 ROT13으로 암호화하면 "Bar vf 1"이 된다.

// 문자열이 주어졌을 때, "ROT13"으로 암호화한 다음 출력하는 프로그램을 작성하시오.

// 입력
// 첫째 줄에 알파벳 대문자, 소문자, 공백, 숫자로만 이루어진 문자열 S가 주어진다. S의 길이는 100을 넘지 않는다.

// 출력
// 첫째 줄에 S를 ROT13으로 암호화한 내용을 출력한다.

// 예제 입력 1  복사
// Baekjoon Online Judge
// 예제 출력 1  복사
// Onrxwbba Bayvar Whqtr
// 예제 입력 2  복사
// One is 1
// 예제 출력 2  복사
// Bar vf 1

#include <bits/stdc++.h>
using namespace std;

string s;
int main() {
    getline(cin,s); //단순히 문자만 받는게 아니라 띄어쓰기포함해서 s개 까지 입력 받는 것 
                    //getline(cin,str); // 표준입력방식으로 str에 문자열 끝까지 저장
for (int i = 0; i < s.size(); i++){
    //대문자인 경우 
    if(s[i]>=65 && s[i]<=90){
        if(s[i]+13>90) s[i]=s[i]+13 -26;
        else s[i]=s[i]+13;
    }else if(s[i]>=97 && s[i]<=122){
        if(s[i]+13>122)s[i]=s[i]+13-26;
        else s[i]=s[i]+13;
    }
        
    cout<< s[i];
    }
    return 0;
}
