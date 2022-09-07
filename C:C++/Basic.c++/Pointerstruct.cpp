#include<stdio.h>

// //사용자 정의 자료형 
// typedef struct _tagMyST  //typedef : 타입재정의문 
// {
//     int a;
//     float f;

// }MYSY;

// typedef struct _tagBig 
// {
//     MYSY k;
//     int i;
//     char c;
// }BIG;

// typedef int INT;

// typedef struct NewStruct
// {
//     int a; 
//     short s;
// } NEWST;

// int main()
// {   
    

//     //구조체
//     MYSY t={100,3.14f};// 구조체의 인스턴스를 생성 
//     t.a = 10;
//     t.f = 10.2312f;

//     int iSize = sizeof(MYSY);

//     _tagMyST s;

//     NEWST a;   // c 스타일
//     NEWSTRUCT k;// C++스타일 
//     INT a;

//     return 0;

// }


//2.지역 변수 전역 변수 

//변수의 종류 
//1. 지역변수 
//2. 전역변수 
//3. 정적변수(static)
//4. 외부변수 (extern)

//메모리영역
//1.스택영역
//2.데이터영역
//3.읽기전용(코드,ROM)
//4.힙영역 

//전역변수 
int g_i = 0; //Data 영역
static int g_iStatic=0;
//Data 영역 특징 
//프로그램 시작 시 생성 
// 프로그램 종료 시 해제 

int Test()
{
    static int g_iStatic=0;
    int i;
 
    ++i;

    return i;
}

int main()
{   
    //지역변수 
    int a= 0;
    Test();
    Test();
    Test();
    Test();
    int iCall=Test();

    
    
    printf("Test 함수 호출 횟수: %d\n",iCall);

    return 0;
}