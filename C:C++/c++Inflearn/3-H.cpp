// 숨바꼭질 4 스페셜 저지
// 시간 제한	메모리 제한	제출	정답	맞힌 사람	정답 비율
// 2 초	512 MB	26541	9038	6334	32.125%
// 문제
// 수빈이는 동생과 숨바꼭질을 하고 있다. 수빈이는 현재 점 N(0 ≤ N ≤ 100,000)에 있고, 동생은 점 K(0 ≤ K ≤ 100,000)에 있다. 수빈이는 걷거나 순간이동을 할 수 있다. 만약, 수빈이의 위치가 X일 때 걷는다면 1초 후에 X-1 또는 X+1로 이동하게 된다. 순간이동을 하는 경우에는 1초 후에 2*X의 위치로 이동하게 된다.

// 수빈이와 동생의 위치가 주어졌을 때, 수빈이가 동생을 찾을 수 있는 가장 빠른 시간이 몇 초 후인지 구하는 프로그램을 작성하시오.

// 입력
// 첫 번째 줄에 수빈이가 있는 위치 N과 동생이 있는 위치 K가 주어진다. N과 K는 정수이다.

// 출력
// 첫째 줄에 수빈이가 동생을 찾는 가장 빠른 시간을 출력한다.

// 둘째 줄에 어떻게 이동해야 하는지 공백으로 구분해 출력한다.

// 예제 입력 1 
// 5 17
// 예제 출력 1 
// 4
// 5 10 9 18 17
// 예제 입력 2 
// 5 17
// 예제 출력 2 
// 4
// 5 4 8 16 17

#include <bits/stdc++.h>
using namespace std;
#define prev aaa
#define next aaaa
const int max_n = 200004;
int visited[max_n], prev[max_n], n, k, ret, here, cnt, next;   
vector<int> v; 
queue<int> q;  
int main() { 
    cin >> n >> k; 
    visited[n] = 1; 
    q.push(n);  
    while(q.size()){
        here = q.front();  
        q.pop();
        if(here == k){
            ret = visited[k]; 
            break;
        }
		for(int next : {here + 1, here - 1, here * 2}){
            if(next >= max_n || next < 0 || visited[next]) continue;  
            visited[next] = visited[here] + 1; 
            prev[next] = here; 
            q.push(next); 
		} 
    }   
    for(int i = k; i != n; i = prev[i]){
        v.push_back(i);
    }
    v.push_back(n);
    cout << ret - 1<< '\n'; 
    reverse(v.begin(), v.end());
	for(int i : v) cout << i << ' '; 
    return 0;
}

