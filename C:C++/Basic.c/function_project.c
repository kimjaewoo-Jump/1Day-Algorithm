#include <stdio.h> 
#include<time.h>
#include<stdlib.h>

//
//선언부
// void p(int num);// 함수 선언 
// int function_with_return();
// int function_without_params();
// int apple(int total, int age); // 전체 total 개에서 ate개를 먹고 남은 수를 반환 
// int add(int num1, int num2);
// int main(void){
    
//printf("num은 %d 입니다.",num)//2
//  p(num);
//   int ret = function_with_return();
//   p(ret);  

//파라미터(전달값)이 없는 함수 
// int params= function_without_params()
//     p(params);

//파라미터(전달값)도 받고, 반환값이 있는 함수 
// int ret= apple(5,2); //5개의 사과 중에서 2개를 먹었어요
// p(ret);

// int num=2;
// num= add(num,3);
// p(num);

// return 0;
// }   
//정의 
// void p(int ret)
// {
//     printf("%d\n", ret);
// }
// int function_with_return()
// {
//     printf("반환값이 있습니다\n");
//     return 10;
// }

// int function_without_params(){
 
//  return 0;
  
// }

// int apple(int total, int ate){
//     printf("전달값과 반환값이 있는 함수입니다.\n");
//     return total-ate;
// }

// int add(int num1, int num2){
//   return num1+num2;

// }

//2.project 
int getRandomNumber(int level);
void showQuestion(int level,int num1,int num2);
void success();
void fail();

int main(void){

    //문이 5개가 있고, 각 문마다 점점 어려운 수식퀴즈가 출제( 랜덤) 
    // 맞히면 통과, 틀리면 실패 

    srand(time(NULL));
    int count=0;//맟춘 문제 갯수
    for (int i = 0; i <= 5; i++)
    {
        // x*y=?
        int num1= getRandomNumber(i);
        int num2= getRandomNumber(i);
        //printf("%d x %d",num1, num2);
        showQuestion(i,num1,num2);

        int answer=-1;
        scanf("%d",&answer);
        if(answer == -1)
        {
            printf("프로그램을 종료합니다\n");
            exit(0);//바로 프로그램을 종료한다는 말 
        }
        else if(answer == num1 * num2)
        { 
            //성공
            success();
            count++;
        }
        else
        {
            //실패 
            fail();
        }

    }
  printf("\n\n 당신은 5개의 비밀번호 중 %d 개를 맞췄습니다.",count);
    return 0;
}
    int getRandomNumber(int level){
    return rand()%(level*7)+1;
    }
    void showQuestion(int level,int num1,int num2){
      printf("\n\n\n#########%d번째 비밀번호 #########\n",level);
      printf("\n\t%d x %d는? \n\n", num1 , num2 );
      printf("\n비밀번호를 입력하세요(종료:-1)>>");
    }
    void success(){
        printf("정답입니다");
    }
    void fail(){
        printf("실패입니다");
    }

   