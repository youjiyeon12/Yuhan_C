#include <stdio.h>
#include <windows.h>
int print_title_screen()
{
	printf("################################\n");
	printf("#                              #\n");
	printf("#    * 교수님을 동요시켜라 *   #\n");
	printf("#                              #\n");
	printf("#      1. 스토리시작           #\n");
	printf("#      2. 스토리진행방법       #\n");
	printf("#      3. 게임종료             #\n");
	printf("#                              #\n");
	printf("################################\n");

	return 0;

}
int print_how_to_play_screen()
{
			printf("#################################################\n");
            printf("#                                               #\n");
	        printf("#    1. 스토리 진행은 자동으로 됩니다           #\n");
	        printf("#    2. 선택지가 나오면 1 or 2 번을 누르세요    #\n");
	        printf("#    3. 주인공이 원하는 선택지가 아니면         #\n");
	        printf("#           *즉시 메뉴로 돌아갑니다*            #\n");                                               
	        printf("#                                               #\n");
	        printf("#################################################\n");

	return 0;
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
                printf("선배 : 응? 무슨일이니?"); //미완성입니다. 돌리지 마세요.

            }
            else if(num == 2)
            {
                printf("(어? 받았네)");
                Sleep(1500);
            }
            printf("친구1 : 무슨일로 전화했어?\n");
            Sleep(1500);
            printf("학생 : 친구1아 과제 다했니?\n");
            Sleep(1500);
            printf("친구1 : 아니?ㅎㅎ 교수님이 이 과제는 다 같이 죽어보자고 내신게 확실해\n");
            Sleep(1500);
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