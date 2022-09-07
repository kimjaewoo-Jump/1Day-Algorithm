#include <stdio.h> 
#include<time.h>
#include<stdlib.h>

int main(void)
 { 

    //0.
    //정수형 변수 
    // int age= 12;
    // printf("%d\n",age);

    //1,
   //1.실수형 변수
    // float f = 46.5f;
    // printf("%.3f\n",f);
 
    //2
    //2.double d = 4.428;
    // printf("%.2lf\n",d);
    // return 0;

    //3.
    //3.scanf 키보드로부터 입력받기 
    // int input; 
    // printf("값을 입력하세요:");
    // scanf("%d",&input);
    // printf("입력값: %d\n", input );
    // return 0; 
    
    //4.
    //문자(한글자), 문자열(한 글자 이상의 여러 글자) 
    // char c = 'A';
    // printf("%c\n",c);

    //5.
    // char str[256];
    // scanf_s("%s",str,sizeof(str));
    // printf("%s\n",str);
    // return 0;

    //6.
    //프로젝트: 경찰관이 범죄자의 정보를 입수 ( 조서 작성 )
    //이름? 나이? 몸무개? 키? 범죄명? 
    //  char name[256];
    //  printf("이름이 뭐예요??");

    //  scan(("%s",name,sizeof(name)));

    //  int age;
    //  printf("몇 살이예여? ");
    //  scanf_s("%d", &age);s

    //  float weight;
    //  printf("몸무게는 몇 kg이예요?");
    //  scanf_s("%f",&weight);

    //  double height;
    //  printf("키는 몇 cm이예요?");
    //  scanf_s("%lf", &height );

    //  char what[256];
    //  printf("무슨범죄를 저질렀어요?");
    //  scanf_s("%s",what, sizeof(what));
     
    //  //조서내용 출력 
    //  printf("\n\n -- 범죄자 정보 -- \n\n");
    //  printf("이름      : %s\n",name);
    //  printf("나이       : %d\n",age);
    //  printf("몸무게     : %.2f\n",weight);
    //  printf("키      : %.2lf",height);
    //  printf("범죄      : %s\n",what);

    //  return 0;

    //7.
    // int b= 20;
    // printf("b는 %d\n",++b);
    // printf("b는 %d\n",b++);
    // printf("b는 %d\n",b);

    //8. if,else
    //버스를 탄다고가정. 학생/일반인으로 구분(일반인:20세 )
      // int age=15;
      // if(age>=20)
      //   printf("일반인입니다. ");
      // else 
      //   printf("학생입니다.");
      // return 0;
      // }

      //9.break
      //1번부터 30번까지 있는 반에서 1번에서 5번까지 조별발표를 합니다.
//       for (int i = 0; i <=30; i++)
//       {
//         if(i>=1 && i<=5){ 
//            printf(" %d학생은 조별발표를 합니다.\n",i);
//            break;
//             }
//            printf("안해도 된다.\n");
//       }
//          return 0;
//  }
      
        //10.continue 
        //1번 부터 30번까지 있는 반에서 7번학생은 아파서 결석
        // 7번을 제외하고  6번 부터 10번까지 조별 발표를 하세요
//        for (int i = 0; i <30; i++)
//     {
//           if(i==7)
//         {
//           printf("%d학생은 결석입니다.\n",i);
//           continue;
//         }  
//           printf("%d번 학생은 발표준비를 하세요.\n",i);            
//     }
//  }
       
     //11 난수 

        // srand(time(NULL));//난수 초기화
        // printf("난수 초기화 실행\n");
        // for (int i = 0; i <10; i++)
        //   printf("%d", rand()%10 );
  
        // return 0;

        // }


      //12.up and down  project 
      srand(time(NULL));
      int num= rand()%100+1 ;//1~100사이의 숫자 
      printf("숫자 :%d\n",num);
      int answer;//정답 
      int chance=5;//기회 
      while(chance >0 )
      {
        printf("남은 기회 %d번\n",chance--);
        printf("숫자를 맞춰보세요(1~100): ");
        scanf("%d",&answer);
      if(answer>num)
       {
         printf("DOWN \n\n");
       }
       else if(answer<num)
       {
        printf("up \n\n");
       }
       else if(answer==num)
       {
          printf("정답입니다.! \n\n");
          break;
       }
       else
        {
          printf("알수없는 오류발생했슴요");
        }
        if(chance == 0)
         { 
          printf("모든 기회를 다 사용하셨네요, 아쉽게 실패하셨습니다.");
          break;
         }
      }
       return 0;
 }



















