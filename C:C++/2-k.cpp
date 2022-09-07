// 문제
// 알고리즘의 킹갓제너럴엠퍼러마제스티충무공알고리즘마스터 현우가 교수로 취임하였다!

// 그러나 학생들에게 크나큰 기대를 품고 첫 수업에 들어갔던 현우는 아무도 외판원 순회 문제(Traveling Salesman Problem, TSP)를 풀지 못하는 것을 보고 낙심하였다.

// 그 와중에 학생 남규는 TSP를 완전탐색으로 풀려고 하였고, 현우는 그걸 보고 경악을 금치 못한다. 왜냐면 TSP를 완전탐색으로 풀려면 O(N!)의 시간이 소모되는데, 이는 경악을 금치 못할 시간이기 때문이다.

// 그러나 남규는 O(N!)이 왜 큰지도 잘 모른다. 그래서 현우는 더더욱 경악을 금치 못하고, N!이 얼마나 큰지 대략적으로나마 알려주기 위해, 자연수 N이 주어지면 N!의 오른쪽 끝에 있는 0의 개수를 알려주기로 하였다.

// 그러나 현우는 경악을 금치 못하여 지금 코딩을 할 수 없는 상황이다. 여러분이 현우를 대신하여 프로그램을 작성하시오.

// 입력
// 첫째 줄에 테스트 케이스의 개수 T가 주어지고, 이어서 T개의 줄에 정수 N이 주어진다(1 <= N <= 1000000000).

// 출력
// 각 줄마다 N!의 오른쪽 끝에 있는 0의 개수를 출력한다.

// 예제 입력 1  복사
// 6
// 3
// 60
// 100
// 1024
// 23456
// 8735373
// 예제 출력 1  복사
// 0
// 14
// 24
// 253
// 5861
// 2183837

int ret;

#include <bits/stdc++.h>


int n, a;
int main() {
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
cin >> n;
for (int i = 0; i <n; i++){
        cin >> a;
        int ret2,ret5 = 0;
    for (int j = 2; j<n; j *=2)
    {
        ret2= a/j;
    }
    for(int j= 5; j<n; j *=5)
    {
        ret5=a/j;
    }
    cout << min(ret2,ret5) << "\n";
}
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// #define sz(x) ((int)(x).size())    
// #define f first
// #define s second
// typedef unsigned long long ll;      
// int n, a;
// int main () {
// 	ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
// 	cin >> n; 
// 	for(int i = 0; i < n; i++){
// 		cin >> a; 
// 		int ret2 = 0, ret5 = 0;
// 		for(int j = 2; j <= a; j *= 2){
// 			ret2 += a / j;  
// 		}
// 		for(int j = 5; j <= a; j *= 5){
// 			ret5 += a / j; 
// 		}
// 		cout << min(ret2, ret5) << "\n";
// 	} 
// 	return 0;
// }