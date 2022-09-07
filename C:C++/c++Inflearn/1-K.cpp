// 문제
// 임한수와 임문빈은 서로 사랑하는 사이이다.

// 임한수는 세상에서 팰린드롬인 문자열을 너무 좋아하기 때문에, 둘의 백일을 기념해서 임문빈은 팰린드롬을 선물해주려고 한다.

// 임문빈은 임한수의 영어 이름으로 팰린드롬을 만들려고 하는데, 임한수의 영어 이름의 알파벳 순서를 적절히 바꿔서 팰린드롬을 만들려고 한다.

// 임문빈을 도와 임한수의 영어 이름을 팰린드롬으로 바꾸는 프로그램을 작성하시오.

// 입력
// 첫째 줄에 임한수의 영어 이름이 있다. 알파벳 대문자로만 된 최대 50글자이다.

// 출력
// 첫째 줄에 문제의 정답을 출력한다. 만약 불가능할 때는 "I'm Sorry Hansoo"를 출력한다. 정답이 여러 개일 경우에는 사전순으로 앞서는 것을 출력한다.

// 예제 입력 1  복사
// AABB
// 예제 출력 1  복사
// ABBA
// 예제 입력 2  복사
// AAABB
// 예제 출력 2  복사
// ABABA
// 예제 입력 3  복사
// ABACABA
// 예제 출력 3  복사
// AABCBAA
// 예제 입력 4  복사
// ABCD
// 예제 출력 4  복사
// I'm Sorry Hansoo


#include<bits/stdc++.h> 
using namespace std; 
string s, ret; 
int cnt[200], flag; 
char mid;


int main(){
   
    cin >> s;
    for(char a: s) cnt[a]++;
    for (int i = 'Z'; i >='A'; i--)
    {
        if(cnt[i]){
         for(cnt[i] &1){
            mid = char(i);flag++; // mid(i) 은 홀수개인 알파벳 
            cnt[i]--;
        }
        if(flag == 2) break; // 홀수개일때 펜들롬을 못만드므로 불가능 
        for (int j = 0; j< cnt[i]; j +=2){
            ret = char(i) + ret; // 'Zret': 앞에다가 'z' 붙이기
            ret += char(i); //  'ZretZ' 뒤에다가 'z' 붙이기 
        }
     }
   }
    if(mid) ret.insert(ret.begin()+ ret.size()/2 ,mid);//find(위치,값)
    if(flag == 2) cout << "I'm sorry Hansoo\n";
    else cout << ret << "\n";

}

