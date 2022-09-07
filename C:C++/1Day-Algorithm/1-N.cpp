// 문제
// 자연수 A를 B번 곱한 수를 알고 싶다. 단 구하려는 수가 매우 커질 수 있으므로 이를 C로 나눈 나머지를 구하는 프로그램을 작성하시오.

// 입력
// 첫째 줄에 A, B, C가 빈 칸을 사이에 두고 순서대로 주어진다. A, B, C는 모두 2,147,483,647 이하의 자연수이다.

// 출력
// 첫째 줄에 A를 B번 곱한 수를 C로 나눈 나머지를 출력한다.

// 예제 입력 1  복사
// 10 11 12
// 예제 출력 1  복사
// 4



#include <cstdio>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>
using namespace std;
typedef long long ll;

ll go( ll a , ll b){
    if(b==1) return a%c;

    ll_c = go(a,b/2);
    _c =(_c*_c) %c; 

    if(b%2)_c=(_c*a)%c; //b가 홀수 번일때  
    return _c;

}
 
int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> a >> b >> c;
    cout << go(a,b) << "\n";
    return 0;
}
