#include <bits/stdc++.h>

using namespace std;

const int INF=987654321;

int n, a[11], m , temp , ret= INF , comp[11] , visited[11];

vector<int> adj[11];

pair<int,int> dfs(int here, int value){

  visited[here]=1;
  
  pair<int,int> ret={1,a[here]}; // a[here]: 인구수의 총합 

  for(int there : adj[here]){  
    if(comp[there] != value) continue;  // 색이 다르면 중단
    if(visited[there]) continue; // 색이 다르면 중단 
    pair<int,int> _temp= dfs(there,value);
    ret.first += _temp.first;
    ret.second += _temp.second;
   }
  return ret;
} 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 0; i <=n; i++){
        cin >> a[i];
    }
    for (int i = 1; i <=n; i++){ //양방향 간선만듦.
        cin >> m;
        for(int j=0; j<m; j++){
             cin >> temp;
             adj[i].push_back(temp);
             adj[temp].push_back(i);
        }
    }
    for(int i=1; i<(1<<n)-1;i++){ // 비트마스킹 사용해서 모든 노드 체크 
        fill(comp,comp+11,0); // 레드팀, 블루팀으로 색칠해야함 
        fill(visited,visited+11,0); // 초기화
        int idx1 = -1, idx2=-1; //시작지점 
        for(int j =0; j<n ; j++){ // 색칠 시작 
            if(i & (1<<j)){comp[j+1]=1; idx1 = j+1;}
            else idx2= j+1;
        }
        pair<int, int> comp1 = dfs(idx1,1); // 1. dfs 딱 2번만돌림 
        pair<int, int> comp2 = dfs(idx2,1); // 2.
        if(comp1.first + comp2.first == n) ret= min(ret,abs(comp1.second-comp2.second));
        // 정확히 2그룹으로 쪼개져 있는지 확인하기 위해 n으로 나눔 -> 최솟값을 갱신
       }
       cout<< (ret == INF? -1: ret) << "\n";
    }
    
