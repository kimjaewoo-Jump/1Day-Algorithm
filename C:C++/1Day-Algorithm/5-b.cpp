// #include <bits/stdc++.h>
// using namespace std;
// string S, T, ret;
// int main() {
//     cin >> S >> T;
//     for(char a : S){
//         ret += a;
//         if(ret.size() >= T.size() && ret.substr(ret.size() - T.size(), T.size()) == T){
//             ret.erase(ret.end() - T.size(), ret.end()); 
//         }
//     }
//     if(!ret.size())cout << "FRULA" << "\n";
//     else cout << ret << "\n";
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string s,boom,temp=""; // 1. 문자열 s는 문자열 원문의 전문을 복사하고 boom에는 폭발 문자열을 저장합니다. temp는 stack처럼 활용하여 문자열을 저장할 변수입니다.
    cin >> s;
    cin >> boom;
    for(int i=0; i<s.size(); i++){// 2. 문자열 s의 사이즈만큼 for문을 돌립니다.
        temp+=s[i];
        if(temp.back()==boom.back()){ // 3. 만약 temp에 저장된 문자열의 맨뒤(=stack의 top()에 해당됨)와 boom의 맨 뒤 값이 일치한다면...
            bool ch = true;
            if(temp.size()<boom.size()) continue; // 4.  만약 temp의 사이즈가 boom의 사이즈보다 작다면 폭발이 불가능하므로 continue를 진행합니다.
            for(int j=0; j<boom.size(); j++){ // 5 . 그렇지 않을 경우 boom의 사이즈만큼 for문을 돌립니다.
                                              //5번의 for문은 boom의 사이즈만큼 문자열 s에서 값을 확인하고 순차적으로 앞에서 뒤까지 boom의 문자열과 일치하는지를 확인하는 과정입니다. 
                                              //포인트는 stack처럼 맨 뒤에서 하나씩 비교하는게 아니라, boom의 사이즈만큼 앞에서 뒤로 순차적으로 확인한다는 점입니다.
                if(temp[temp.size()-boom.size()+j]!=boom[j]){
                    ch = false;
                    break;
                }
            }
            if(ch){ // 6.  만약 ch가 true라면 폭발문자열이 존재한다는 뜻이므로, 폭발문자열의 사이즈만큼 temp의 맨 뒤에서부터 값을 삭제합니다.
                for(int j=0; j<boom.size(); j++) temp.pop_back();
            }
        }
    }
    if(temp.empty()) cout << "FRULA" << "\n"; // 7. temp가 비어있을 경우 FRULA를 출력하고, 그렇지 않을 경우 temp자체를 출력합니다
    else cout << temp << "\n";
    return 0;
}

