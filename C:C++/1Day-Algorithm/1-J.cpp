// 문제
// 해빈이는 패션에 매우 민감해서 한번 입었던 옷들의 조합을 절대 다시 입지 않는다. 예를 들어 오늘 해빈이가 안경, 코트, 상의, 신발을 입었다면, 다음날은 바지를 추가로 입거나 안경대신 렌즈를 착용하거나 해야한다. 해빈이가 가진 의상들이 주어졌을때 과연 해빈이는 알몸이 아닌 상태로 며칠동안 밖에 돌아다닐 수 있을까?

// 입력
// 첫째 줄에 테스트 케이스가 주어진다. 테스트 케이스는 최대 100이다.

// 각 테스트 케이스의 첫째 줄에는 해빈이가 가진 의상의 수 n(0 ≤ n ≤ 30)이 주어진다.
// 다음 n개에는 해빈이가 가진 의상의 이름과 의상의 종류가 공백으로 구분되어 주어진다. 같은 종류의 의상은 하나만 입을 수 있다.
// 모든 문자열은 1이상 20이하의 알파벳 소문자로 이루어져있으며 같은 이름을 가진 의상은 존재하지 않는다.

// 출력
// 각 테스트 케이스에 대해 해빈이가 알몸이 아닌 상태로 의상을 입을 수 있는 경우를 출력하시오.

// 예제 입력 1  복사
// 2
// 3
// hat headgear
// sunglasses eyewear
// turban headgear
// 3
// mask face
// sunglasses face
// makeup face
// 예제 출력 1  복사
// 5
// 3
// 힌트
// 첫 번째 테스트 케이스는 headgear에 해당하는 의상이 hat, turban이며 eyewear에 해당하는 의상이 sunglasses이므로   (hat), (turban), (sunglasses), (hat,sunglasses), (turban,sunglasses)로 총 5가지 이다.

#include <bits/stdc++.h>
using namespace std;
int t, n;
string a, b;

int main(){
   cin >> t;
   while(t--){
        map<string,int> _map;
        cin >> n;
         for (int i = 0; i <n; i++){
            cin >> a >>b;// hat(a) headgear(b) 
            _map[b]++; //같은종류의 옷만 입을 수있으므로 map에 저장
         }
         long long ret = 1;
     for(auto c : _map){
            ret *= ((long long)c.second + 1);//  2개의 옷이 있다고 하면 a, b 를 입는 경우의 수 + 안입는 경우의 수 


        }
        ret--;//옷을 아예 안입는 경우의 수 
        cout << ret << "\n";
    }
    return 0;
}

// #include<iostream>
// #include<map>
// #include<string>
// using namespace std;

// int N, T;
// int ans;
// string s1, s2;

// int main()
// {
// 	cin >> T; // 테스트케이스 수

// 	while (T--)
// 	{
// 		map<string, int> m; // Map<의상종류,의상수>

// 		ans = 1;
// 		cin >> N; // 의상 수

// 		for (int i = 0; i < N; i++)
// 		{
// 			cin >> s1 >> s2;

// 			// 해당key값이 존재하지 않을 경우 find함수는 end()리턴
// 			if (m.find(s2) == m.end()) 
// 			{
// 				m[s2] = 1;
// 			}
// 			else // 해당 key값이 존재할 경우
// 			{
// 				m[s2]++;
// 			}

// 		}

// 		for (auto iter : m) // iter.first = key, iter.second = value
// 			ans *= (iter.second + 1); // (의상수+1) 씩 곱하기
		
// 		cout << ans - 1 << "\n";
// 	}