// 문제
// 2와 5로 나누어 떨어지지 않는 정수 n(1 ≤ n ≤ 10000)가 주어졌을 때, 1로만 이루어진 n의 배수를 찾는 프로그램을 작성하시오.

// 입력
// 입력은 여러 개의 테스트 케이스로 이루어져 있다. 각 테스트 케이스는 한 줄로 이루어져 있고, n이 주어진다.

// 출력
// 1로 이루어진 n의 배수 중 가장 작은 수의 자리수를 출력한다.

// 예제 입력 1  복사
// 3
// 7
// 9901
// 예제 출력 1  복사
// 3
// 6
// 12

#include<bits/stdc++.h>
using namespace std;  
typedef long long ll; 
int n;
int main(){ 

    while(scanf("%d", &n)!=EOF){
        int cnt=1, ret=1;
        while(true){
            if(cnt%n ==0){
                printf("%d\n",ret);
                break;
            }else{
                cnt = (cnt*10)+1;
                cnt %=n; //정수론에서 모듈러 연산에 의함 
                ret++;
            }
        }

    }



    return 0;
}