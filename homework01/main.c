#include <stdio.h>
#include <windows.h>

void print_title_screen()
{
    const char* title[] = {
        "################################",
        "#                              #",
        "#   * 교수님을 동요시켜라 *    #",
        "#                              #",
        "#   1. 스토리시작              #",
        "#   2. 스토리진행방법          #",
        "#   3. 게임종료                #",
        "#                              #",
        "################################"
    };

    int num_lines = sizeof(title) / sizeof(title[0]);
    for (int i = 0; i < num_lines; i++)
    {
        printf("%s\n", title[i]);
    }
}

void print_how_to_play_screen()
{
    const char* how_to_play[] = {
        "#################################################",
        "#                                               #",
        "#  1. 스토리 진행은 자동으로 됩니다             #",
        "#  2. 선택지가 나오면 1 or 2 번을 누르세요      #",
        "#  3. 주인공이 원하는 선택지가 아니면           #",
        "#     *즉시 메뉴로 돌아갑니다*                  #",
        "#                                               #",
        "#################################################"
    };

    int num_lines = sizeof(how_to_play) / sizeof(how_to_play[0]);
    for (int i = 0; i < num_lines; i++)
    {
        printf("%s\n", how_to_play[i]);
    }
}

int main()
{
int a;
int num;
while(a)
{
	print_title_screen();
	
	printf("input>");
	scanf("%d",&a);
	if(a == 1)
	{
		while(a)
		{
			printf("과제 제출 D-3\n");
            Sleep(1500);
            printf("학생 : 아...망했다 과제 아직 이해 못했는데\n");
            Sleep(1500);
            printf("학생 : 일단 과제 이해부터 시작해보자\n");
            Sleep(1500);
            printf("(타닥타닥) 과제 이해를 위해 이것저것 검색을 한다.\n");
            Sleep(1500);
            printf("학생 : 찾아봐도 1도 모르겠는데 과제 때려칠까?\n");
            Sleep(1500);
            printf("1.과제를 때려친다\n2.아니지 아직 3일 남았잖아\ninput>");
            scanf("%d", &num);
            if(num == 1)
            {
                printf("학생  : 그래 이건 포기하는게 맞아\n");
                break;
            }
            else if(num == 2)
            {
                printf("학생 : 그래 지금 포기하는건 에바야\n");
                Sleep(1500);
            }
            printf("학생 : 일단 주변 친구들에게 도움 요청을 하자\n");
            Sleep(1500);
            printf("(친구1 에게 전화를 건다.)\n");
            Sleep(1500);
            printf("1.전화를 받지 않았다\n2.전화를 받았다\ninput>");
            scanf("%d", &num);
            if(num == 1)
            {
                printf("왜 안받는 건데! ... 선배한테 연락하자\n");
                Sleep(1500);
                printf("(선배에게 전화했더니 받았다.)\n");
                Sleep(1500);
                printf("학생 : 선배님 안녕하십니까 바쁘신 와중에 저 좀 도와주시겠어요?\n");
                Sleep(1500);
                printf("선배 : 응? 무슨일이니?\n"); 
				Sleep(1500);
				printf("학생 : 1학년 과제로 배열을 써서 게임을 만드는 과제를 하고 있는데 배열부터 이해를 못하겠어요.\n");
				Sleep(1500);
				printf("그래? 그럼 내가 이해를 시켜줄게\n");
				Sleep(1500);
				printf("(선배는 열정적으로 나를 이해 시켜려고 노력하셨다.)\n");
				Sleep(1500);
				printf("(설명이 다 끝난 후)\n");
				Sleep(1500);
				printf("선배 : 이해 다 했니?\n");
				printf("1.이해했다.\n2.뭔소리인지 1도 모르겠다.\ninput>");
				scanf("%d", &num);
				if(num == 1)
				{
					break;
				}
				if(num == 2)
				{
					printf("(이해는 못했지만 대충 이해한척하고 도망가자)\n");
					Sleep(1500);
					printf("학생 : 네!!이해한 것 같아요 감사합니다 선배님 ^^ 다음에 도움이 필요하면 또 오겠습니다.\n");
					Sleep(1500);
					printf("선배 : 그래 과제 화이팅 하렴\n");
					Sleep(1500);
					printf("(전화를 끊었다.)\n");
				}
            }
            else if(num == 2)
            {
                printf("(어? 받았네)\n");
                Sleep(1500);
				printf("친구1 : 무슨일로 전화했어?\n");
            	Sleep(1500);
            	printf("학생 : 친구1아 과제 다했니?\n");
            	Sleep(1500);
            	printf("친구1 : 아니?ㅎㅎ 교수님이 이 과제는 다 같이 죽어보자고 내신게 확실해\n");
            	Sleep(1500);
				printf("학생 : 나도 그렇게 생각해 우리 일단 같이 해보자\n");
				Sleep(1500);
				printf("친구1 : 그래!\n");
				Sleep(1500);
				printf("(a few moment later)\n");
				Sleep(1500);
				printf("학생 : 포기할까? 이건 아닌것 같아 ㅋㅋㅋ\n");
				Sleep(1500);
				printf("친구1 : 인정해 걍 f받는 것도 나쁘지 않은 것 같아 ㅎㅎ\n");
				Sleep(1500);
				printf("학생 : 일단 서로 더 이해 해보고 내일 다시 연락하자\n");
				Sleep(1500);
				printf("친구1 : 그래 내일보자 안녕~\n");
				Sleep(1500);
				printf("(전화를 끊었다.)\n");
            }
			Sleep(1500);
			printf("학생 : 이제 어떻게 해야지 벌써 12시네 일단 자자\n");
            printf("Return to menu? (1.yes 2.no)\n");
			printf("input>");
			scanf("%d", &a);
			if(a == 1)
			{
                system("cls");
			    break;
			}
			else if(a == 2)
			{
              system("cls");
			}
			else
			{
				printf("Invalid input, Please enter a valid number.\n");
			}
		}
	}
	if(a == 2)
	{
		//print_how_to_play_screen();
		while(a)
		{
			print_how_to_play_screen();
			printf("Return to menu? (1.yes 2.no)");
			printf("input>");
			scanf("%d", &a);
			if(a == 1)
			{
                system("cls");
			    break;
			}
			else if(a == 2)
			{
              system("cls");
			}
			else
			{
				printf("Invalid input, Please enter a valid number.\n");
			}
		}
	}
	if(a == 3)
	{
	break;
	}
	
}
	return 0;
}