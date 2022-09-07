#include <iostream> // C언어의 <stdio.h>격

using namespace std; // 표준 네임스페이스를 사용하겠다는 의미

int main(void){

    int num;
    cout << "숫자 입력 :"; // cout는 C의 printf와 동일하다.
    cin >> num; // cin은 C의 scanf와 동일하다.
    cout << num << endl; // endl은 C의 개행문자 출력과 동일하다.

    return 0;

}