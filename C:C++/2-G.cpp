// 문제
// 위대한 해커 창영이는 모든 암호를 깨는 방법을 발견했다. 그 방법은 빈도를 조사하는 것이다.

// 창영이는 말할 수 없는 방법을 이용해서 현우가 강산이에게 보내는 메시지를 획득했다. 이 메시지는 숫자 N개로 이루어진 수열이고, 숫자는 모두 C보다 작거나 같다. 창영이는 이 숫자를 자주 등장하는 빈도순대로 정렬하려고 한다.

// 만약, 수열의 두 수 X와 Y가 있을 때, X가 Y보다 수열에서 많이 등장하는 경우에는 X가 Y보다 앞에 있어야 한다. 만약, 등장하는 횟수가 같다면, 먼저 나온 것이 앞에 있어야 한다.

// 이렇게 정렬하는 방법을 빈도 정렬이라고 한다.

// 수열이 주어졌을 때, 빈도 정렬을 하는 프로그램을 작성하시오.

// 입력
// 첫째 줄에 메시지의 길이 N과 C가 주어진다. (1 ≤ N ≤ 1,000, 1 ≤ C ≤ 1,000,000,000)

// 둘째 줄에 메시지 수열이 주어진다.

// 출력
// 첫째 줄에 입력으로 주어진 수열을 빈도 정렬한 다음 출력한다.

// 예제 입력 1  복사
// 5 2
// 2 1 2 1 2
// 예제 출력 1  복사
// 2 2 2 1 1
// 예제 입력 2  복사
// 9 3
// 1 3 3 3 2 2 2 1 1
// 예제 출력 2  복사
// 1 1 1 3 3 3 2 2 2
// 예제 입력 3  복사
// 9 77
// 11 33 11 77 54 11 25 25 33
// 예제 출력 3  복사
// 11 11 11 33 33 25 25 77 54

#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
const ll Inf = 1e18;
int n,c,a[1004];
vector<pair<int,int>> v;
map<int,int> mp, mp_first; // mp<숫자,빈도>은 갯수를 비교하기 위한 map, 
                            // mp_first 는 어떤 숫자가 먼저 나왔는지 비교하는 요소 
 
bool cmp(pair<int,int>a, pair<int,int>b){  // 출력을 할때에 조건 1,2 를 위한 메소드 
    if(a.first == b.first){ //counting이 같을때 가장 먼저 나온것을 출력 
        return mp_first[a.second] < mp_first[b.second]; //기존의 순서 지키기 
    }
    return a.first > b.first; //빈도 수 기준 내림차순 
}


int main(){
    cin >> n >> c;
    for (int i = 0; i <n; i++) {
        cin >> a[i]; mp[a[i]]++; // a[i]에 담긴 2 1 2 1 2 를 map={2,3개}이런 식으로 저장 
        if(mp_first[a[i]] == 0) mp_first[a[i]] = i + 1;  // 순서저장 ,map의 특성상 참조만해도 0으로 초기화 되므로 
                                                         //i+1로 해줬다. 
    }
    for (auto it : mp){ // mp에 저장된 <key,value>값을 it 에 저장 
        v.push_back({it.second,it.first}); // v<빈도,숫자>로 바꾸기 위함 ,이유는 빈도가 가장 많은 숫자가 앞으로 와야하니깐 정렬 필요 
    }
    sort(v.begin(),v.end(),cmp); // 1,2순위의 정렬 메서드를 호출    
    for(auto i:v){  // 출력을 위한 메서드 
        for (int j = 0; j < i.first; j++){
            cout << i.second << " ";
        }
    }
    
    return 0 ;
}