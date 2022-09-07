#include <stdio.h>
#include <time.h>
#include<stdlib.h>


 
 typedef struct {
    char * name;//이름
    int age;
    char * character;//성격
    int level;
 } CAT;



//현재까지 보유한 고양이 
int collection[5]={0,0,0,0,0};

//전체고양이 리스트 
CAT cats[5];

 // name, age, characteer,age,character,level \0

void  initCats(); //고양이 정보 초기화 
void printCat(int selected); // 고양이 정보 출력 

int main(void)
{

    srand(time(NULL));

    initCats();


    while(1)
    {

        printf("두근두근~! 어느 고양이의 집사가 될까요?\n아무 키나 눌러서 확인하세요!");
		getchar();

		int selected = rand() % 5; // 0~4 사이의 숫자 반환
		printCat(selected); // 뽑은 고양이 정보 출력
		collection[selected] = 1;// 고양이 뽑기 처리

		int collectAll = checkCollection();
		if (collectAll == 1)
		{
			break;
		}
	}

	return 0;



}



void initCats()
{
    
   CAT cats[5] = { //구조체 배열 
        {"깜냥이",5,"온순",1},
        {"귀요미",3,"날카롭",2},
        {"수줍이",7,"늘 잠만 잠",3},
        {"까꿍이",2,"시끄러움",4},
        {"돼냥이",1,"배고픔",5}

    };


}

void printCat(int selected)
{
    printf("\n\n == 당신은 이 고양이의 집사 되었어요=====\n\n");
    printf("이름     :%s\n",cats[selected].name);
    printf("나이     :%d\n",cats[selected].age);
    printf(" 특징(성격) : %s\n", cats[selected].character);
	printf(" 레벨       : ");

    for (int i = 0; i < cats[selected].level; i++)
    {
        printf("%s","★");
    }
    printf("\n\n");

}

int checkCollection()
{
	// 1. 현재 보유한 고양이 목록도 출력
	// 2. 다 모았는지 여부를 반환

	int collectAll = 1;
	
	printf("\n\n === 보유한 고양이 목록이에요 === \n\n");
	for (int i = 0; i < 5; i++)
	{
		if (collection[i] == 0) // 고양이 수집 X
		{
			printf("%10s", "(빈 박스)");
			collectAll = 0; // 다 모으지 못한 상태
		}
		else // 고양이 수집 O
		{
			printf("%10s", cats[i].name);
		}
	}
	printf("\n===================================\n\n");

	if (collectAll) // 모든 고양이를 다 모은 경우
	{
		printf("\n\n 축하합니다 ! 모든 고양이를 다 모았어요, 열심히 키워주세요\n\n");
	}

	return collectAll;
}










































// #include<stdio.h>
// #include<time.h>
// #include<stdlib.h>

// // 10마리의 서로 다른 동물 (각 카드 2장씩)
// // 사용자로부터 2개의 입력값을 받아서 -> 같은 동물 찾으면 카드 뒤집기
// // 모든 동물 쌍을 찾으면 게임 종료
// // 총 실패 횟수 알려주기

// int arrayAnimal[4][5];
// int checkAnimal[4][5];
// char* strAnimal[10];



// void initAnimalArray();
// void initAnimalName();
// void shuffleAnimal();
// int getEmptyPosition();
// int conv_pos_x(int x);
// int conv_pos_y(int y);
// void printAnimals();


// int main(void) 
// {
//     srand(time(NULL));

//     initAnimalArray();
//     initAnimalName();

//     shuffleAnimal();



// }

// void initAnimalArray()
// {
//     for (int i = 0; i <4; i++)
//     {
//         for (int j = 0; j <5; j++)
//         {
//             arrayAnimal[i][j]=-1; //-1로 초기화->배열이 비어있다는 것을 의미  
//         }
//     }
// }

// void initAnimalName()
// {
//     strAnimal[0] = "원숭이";
// 	strAnimal[1] = "하마";
// 	strAnimal[2] = "강아지";
// 	strAnimal[3] = "고양이";
// 	strAnimal[4] = "돼지";

// 	strAnimal[5] = "코끼리";
// 	strAnimal[6] = "기린";
// 	strAnimal[7] = "낙타";
// 	strAnimal[8] = "타조";
// 	strAnimal[9] = "호랑이";
// }

// void shuffle()
// {
//     for (int i = 0; i < 10; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             int pos = getEmptyPosition();
//             int x= conv_pos_x(pos);
//             int y= conv_pos_y(pos);

//             arrayAnimal[x][y]= i;
//         }
//     }

// }

// int getEmptyposition() //좌표에서 빈 공간 찾기 
// {
//     while(1)
//     {
//         int randpos = rand()%20;//0~19 사이의 숫자 반환 
//         // 19 -> (3,4) -> 값을 좌표로 바꿔주는 작업 
//         int x= conv_pos_x(randpos);
//         int y= conv_pos_y(randpos);

//         if(arrayAnimal[x][y]==-1) //-1로 초기화 -> 비어있다는 것을 의미
//         {
//             return randpos;  // 지금 위치 반환 해줌 
//         }
//     }
//     return 0;
// }

// int conv_pos_x(int x)
// {
//     return x/5; //몫 
// }

// int conv_pos_y(int y)
// {
//     return y%5; //나머지 
// }

// void printAnimals()
// {
//     printf("\n=====이건 비밀인데.. 몰래 보여줍니다==\n\n");
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 5; i++)
//         {
//             printf("%8s",strAnimal[arrayAnimal[i][j]]);
//         }
//         printf("\n");
//     }
//     printf("\n===================================\n\n");
// }
