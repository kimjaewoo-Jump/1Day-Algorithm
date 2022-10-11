#include <iostream>
#include <stack>
#include <string>
using namespace std;

int n, d[200001], ret, cnt;  //d: ) 세기  위함 
string s;
stack<int> stk; // 쌍의 수= 짝짓기
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); 
	cin >> n >> s;   
	for (int i = 0; i < n; i++) {
		if (s[i] == '(') stk.push(i);  
		else if(stk.size()){ 
				d[i] = d[stk.top()] = 1;
				stk.pop(); 
		}
	} 
	for (int i = 0; i < n; i++){
		if (d[i]) {
			cnt++;
            ret = max(ret, cnt);   
		}else cnt = 0;  
	}
	cout << ret << "\n"; 
}





    

