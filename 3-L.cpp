// 1987번 - 알파벳

// 알파벳 다국어
// 시간 제한	메모리 제한	제출	정답	맞힌 사람	정답 비율
// 2 초	256 MB	78682	25325	15501	29.213%
// 문제
// 세로 R칸, 가로 C칸으로 된 표 모양의 보드가 있다. 보드의 각 칸에는 대문자 알파벳이 하나씩 적혀 있고, 좌측 상단 칸 (1행 1열) 에는 말이 놓여 있다.

// 말은 상하좌우로 인접한 네 칸 중의 한 칸으로 이동할 수 있는데, 새로 이동한 칸에 적혀 있는 알파벳은 지금까지 지나온 모든 칸에 적혀 있는 알파벳과는 달라야 한다. 즉, 같은 알파벳이 적힌 칸을 두 번 지날 수 없다.

// 좌측 상단에서 시작해서, 말이 최대한 몇 칸을 지날 수 있는지를 구하는 프로그램을 작성하시오. 말이 지나는 칸은 좌측 상단의 칸도 포함된다.

// 입력
// 첫째 줄에 R과 C가 빈칸을 사이에 두고 주어진다. (1 ≤ R,C ≤ 20) 둘째 줄부터 R개의 줄에 걸쳐서 보드에 적혀 있는 C개의 대문자 알파벳들이 빈칸 없이 주어진다.

// 출력
// 첫째 줄에 말이 지날 수 있는 최대의 칸 수를 출력한다.

// 예제 입력 1 
// 2 4
// CAAB
// ADCB
// 예제 출력 1 
// 3     
// 예제 입력 2 
// 3 6
// HFDFFB
// AJHGDH
// DGAGEH
// 예제 출력 2 
// 6
// 예제 입력 3 
// 5 5
// IEFCJ
// FHFKC
// FFALF
// HFGCF
// HMCHH
// 예제 출력 3 
// 10


#include <bits/stdc++.h>
using namespace std;
int R, C, ret, ny, nx, visited[30];// 방문한 좌표들 
char a[21][21]; //가려는 좌표들 
const int dy[] = {-1, 0, 1, 0}; // BFS 이용할 좌표들
const int dx[] = { 0, 1, 0, -1};// BFS 이용할 좌표들 
void go(int y, int x, int cnt){ 
    ret = max(ret, cnt); // ret 경우의 수들 중 가장 큰 것을 갱신 
    for(int i = 0; i < 4; i++){  //  BFS 구현 
        ny = y + dy[i], nx = x + dx[i]; // 기존의 좌표 y 에서 ny 로 갱신 
        if(ny < 0 || ny >= R || nx < 0 || nx >= C) continue; // overflow  체크 
        int next = (int)(a[ny][nx] - 'A'); // 다음 좌표를 int 형으로 변환하여 next에 초기화 
                                            //0~26사이의 숫자 

        if(visited[next] == 0){  // 방문하지 않았다면  
            visited[next] = 1; //visited 설정 즉, 방문한 것으로 체크 
            go(ny, nx, cnt + 1); // 재귀함수를 호출하여  ret의 max 값을 갱신 
            visited[next] = 0;  // visited 해체 ->완전 탐색 
        } 
    }
    return;
}
int main(){
    cin >> R >> C;
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            cin >> a[i][j];
        }
    }
    visited[(int)a[0][0] - 'A'] = 1;
    go(0, 0, 1);
    cout << ret << '\n';
    return 0;
}

 
