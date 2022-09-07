#include<stdio.h>
#include<time.h>
#include<stdlib.h>


// int main(void)
// {
    
        // int subway_array[3];//[0][1][2]
        // subway_array[0]=30;
        // subway_array[1]=40;
        // subway_array[2]=50;

        // for (int i = 0; i < 3; i++)
        // {
        //     printf("지하철 %d호차에 %d명이 타고 있습니다.\n",i+1,subway_array[i]);
        // }
        // return 0; 

       //값 설정 방법 
        //    int arr[10]={1,2,3,4,5,6,7,8,9,10};
        //    for (int i = 0; i <10; i++)
        //    {
        //     printf("%d\n",arr[i]);
        //    }
        //    return 0;
        // } 
        //int arr[10]={1,2}; //3번째 값부터는 자동으로 '0'으로 초기화 됨 

        // float arr_f[5]={1.0f,2.0f,3.0f};
        // for(int  i = 0; i < 5; i++)
        // {
        //     printf("%.2f\n",arr_f[i]);
        // }
        // return 0;

        //문자 
        // char c = 'A';
        // printf("%c\n",c);

        // char str[6]="coding";//

        // return 0;

        //문자열 
        //char str[7]="coding"; // 맨뒷자리의 여유분을 남겨줘야함 .
        // printf("%s\n",str);
        // printf("%d\n",sizeof(str));
        // for (int i = 0; i < sizeof(str); i++)
        // {
        //     printf("%c\n",str[i]);
        // }
        // return 0 ;


//프로젝트 
int main(void)
{
    srand(time(NULL));
    printf("\n\n == 아빠는 대머리 게임 == \n\n");
    int answer;         //사용자 입력값
    int treatment = rand()%4 ;//발모제 선택(0~3)

    int cntshowBottle=0;//이번 게임에 보여줄 병갯수 
    int preCntshowBottle=0;//앞 게임에 보여준 병갯수 
    
    //3번의 기회(3번의 발모제 투여 시도)
    for (int i = 1; i <=3; i++)
    {
        int bottle[4]={0,0,0,0};//4개의 병 
        do {
            cntshowBottle = rand()%2 +2; //보여줄 병 갯수(0-1, +2 -> 2,3)
        } while(cntshowBottle == preCntshowBottle);
           preCntshowBottle = cntshowBottle;
            int isIncluded=0;//보여줄 병 중에 발모제가 포함되었는지 여부 ('1'이면 포함 )
            printf(">%d 번째 시도",i);

            //보여줄 병 종류를 선택 
            for (int j = 0; j < cntshowBottle; j++)
            {
                int randBottle = rand() %4; //0~3 
                //아직 선택되지 않은 병이면, 선택처리 
                if( bottle[randBottle]==0)
                {
                    bottle[randBottle]=1;
                    if(randBottle == treatment)
                    {
                        isIncluded=1;
                    }
                }
                //이미 선택된 병이면, 중복이므로 다시선택 
                else
                {
                    j--;
                }
            }

            //사용자에게 문제 표시 
            for (int k = 0; k <4; i++)
            {
                if(bottle[k]==1)
                    printf("%d",k+1);
            }
            printf("물약을 머리에 바릅니다.\n\n");

            if(isIncluded ==1 )
            {
                printf(">>성공! 머리가 났어요!\n");
            }
            else
            {
                printf(">>실패! 머리가 나지 않았어요. ㅠㅠ\n");
            }

            printf("\n...계속하려면 아무키나 누르세요");
            getchar();//사용자가 입력할때까지 기다린다. 
            
            
    }



    printf("\n\n 발모제는 몇번일까요???");
    scanf("%d",&answer);
    
    if (answer == treatment+1)
    {
        printf("\n >> 정답입니다! \n");
    }
    else
    {
        printf("\n>>땡! 틀렸어요. 정답은 %d입니다\n",treatment+1);
    }
    
    return 0;


}







        
    


