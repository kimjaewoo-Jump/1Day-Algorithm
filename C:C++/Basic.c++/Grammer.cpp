#include<iostream>

// #define Hungry 1  // 전처리 = Hungry 를 1 로 치환  
//                   // 사용이유: (1) 가독성이 좋음 (2) 유지보수 좋음 
// #define Thirsty 2

// #define Tired 4
// #define Fire 8 
// #define Cold 10
// #define Poision 20 

// //함수 
// // int main(void){
// //비트연산자 
// //쉬프트 <<, >>
// // unsigned char byte = 13;
// // byte <<=3; // 2^n배수 
// // byte >>=1; // 2^n 나눈 몫 

// //비트곱 (&) , 합(|) , xor(^) 반전(~)
// //비트단위로 연산을 진행,
// //& 둘다 1인 경우 1 
// //| 둘중 하나라도 1 이면 1 
// //^ 같으면 0, 다르면 1 
// // ~1 은 0 으로 ,  0 은 1 로 


// unsigned int iStatus = 0; // Hungry =1 이므로 사용가능 


// //상태 추가
// iStatus |= Hungry;
// iStatus |= Thirsty;

// //상태확인 
// if(iStatus && Thirsty) 
// {


// }

// //특정 자리 비트 제거 
// iStatus &= ~Thirsty;

// //변수 
// //1.지역변수 
// //2.전역변수 {괄호 외부에 선언된 애들 }
// //3.정적변수 
// //4.외부변수 


//함수가 사용하는 메모리 영역
// 스택 메모리 영억(선입후출) <-> 큐 메모리영역(선입선출) 

int Factorial(int _iNum)
{

  int ivalue =1;

  for (int j = 0;  j<_iNum ; j++)
  {
        ivalue *= (j+1);
  }
 return ivalue;
}

// int main()  
// {
//   int ivalue = Factorial(4);    
    
//     int iValue=Factorial(10);

//     Factorial_Re(10);

//     return 0 ;

// }

int Factorial_Re(int _iNum)
{
  if( 1== _iNum)
  {
     return 1; 
  }
  return _iNum * Factorial_Re(_iNum -1);
}

 
//재귀함수  -> 단점: 성능이 안좋아짐
//가독성, 구현의 용이 
//피보나치 수열 
//  1 1 2 3 4 8 13 21 34 55 ......
int Fibonacci(int _iNum)
{
  if( 1 == _iNum || 2 == _iNum)
  {
    return 1;
  }
  int iPrev1=1;
  int iPrev2=1;
  int ivalue=0;

  for (int i = 0; i <_iNum; i++)
  {
      ivalue = iPrev1 + iPrev2;
      iPrev1= iPrev2;
      iPrev2 = ivalue;
  }

  return ivalue;
  
}


int Fibonacci_Re(int _iNum) //피보나치 재귀함수 
{
  if( 1 == _iNum || 2 == _iNum)
  {
    return 1;
  }
  return Fibonacci_Re(_iNum -1) + Fibonacci_Re(_iNum-2);
}

int main()
{
  int ivalue = Factorial(4);
  ivalue = Factorial(10);
  ivalue = Factorial_Re(10);

  ivalue = Fibonacci(3); 
  ivalue = Fibonacci_Re(8); 

  //배열 
  int iArray[10]={};
  iArray[4]=10;






  return 0;

}