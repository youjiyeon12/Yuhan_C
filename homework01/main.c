#include <stdio.h>
#include <windows.h>

//함수 정의
void sleep();
void print_title_screen();
void print_how_to_play_screen();
void print_story_1();
void print_story_2();

int main()//스토리 진행 main함수(Day-2만 main함수에서 진행)
{
int a = 1;
int num;
while(a)
{
	title:
	system("cls");
	print_title_screen();//title띄우기
	
	printf("숫자를 입력하세요 : ");
	scanf("%d",&a);
	if(a == 1)
	{
		while(a)
		{
			system("cls");
			printf("과제 제출 D-2\n");
            sleep();
            printf("주인공 : 아...망했다 과제 아직 이해 못했는데 3일 남았네\n");
            sleep();
            printf("주인공 : 일단 과제 이해부터 시작해보자\n");
            sleep();
            printf("(타닥타닥) 과제 이해를 위해 이것저것 검색을 한다.\n");
            sleep();
            printf("주인공 : 찾아봐도 1도 모르겠는데 과제 때려칠까?\n");
            sleep();
			while(a)
			{
            printf("1.과제를 때려친다\n2.아직 3일 남았잖아\n숫자를 입력하세 : ");
            scanf("%d", &num);
            if(num == 1)//타이틀 화면으로 돌아감(주인공이 원하는 선택지 x)
            {
				system("cls");
                printf("\033[41m벌써 포기하는건 아닌것 같아\033[0m\n");
            }
            else if(num == 2)//스토리 계속 진행
            {
                printf("주인공 : 그래 지금 포기하는건 에바야\n");
                sleep();
				break;
            }
			else
			{
				system("cls");
				printf("잘못 입력된 숫자입니다. 바르게 입력해주세요.\n");
			}
			}
            printf("주인공 : 일단 주변 친구들에게 도움 요청을 하자\n");
            sleep();
            printf("(친구1 에게 전화를 건다.)\n");
            sleep();
			while(a)
			{
            printf("1.전화를 받지 않았다\n2.전화를 받았다\n숫자를 입력하세요 : ");
            scanf("%d", &num);
            if(num == 1)//전화 받았을 때
            {
				system("cls");
                printf("주인공 : 왜 안받는 건데! ... 선배한테 연락하자\n");
                sleep();
                printf("(선배에게 전화했더니 받았다.)\n");
                sleep();
                printf("주인공 : 선배님 안녕하십니까 바쁘신 와중에 저 좀 도와주시겠어요?\n");
                sleep();
                printf("선배 : 응? 무슨일이니?\n"); 
				sleep();
				printf("주인공 : 1학년 과제로 게임을 만드는 과제를 하고 있는데\n배열이 뭔지 이해 못하겠어요.\n");
				sleep();
				printf("그래? 그럼 내가 이해를 시켜줄게\n");
				sleep();
				printf("(선배는 열정적으로 나를 이해 시켜려고 노력하셨다.)\n");
				sleep();
				printf("(설명이 다 끝난 후)\n");
				sleep();
				printf("선배 : 이해 다 했니?\n");
				sleep();
				while(a)
				{
				printf("1.이해했다.\n2.뭔소리인지 1도 모르겠다.\n숫자를 입력하세요 : ");
				scanf("%d", &num);
				if(num == 1)//반복문 다시 진행
				{
					system("cls");
					printf("\033[41m너가 이해 했을리는 없다.\033[0m\n");
				}
				else if(num == 2)//스토리 계속 진행
				{
					printf("(이해는 못했지만 대충 이해한척하고 도망가자)\n");
					sleep();
					printf("주인공 : 네!!이해한 것 같아요 감사합니다 선배님 ^^\n다음에 도움이 필요하면 또 오겠습니다.\n");
					sleep();
					printf("선배 : 그래 과제 화이팅 하렴\n");
					sleep();
					printf("주인공 : 네!\n");
					sleep();
					printf("(전화를 끊었다.)\n");
					sleep();
					goto jump_1;
				}
				else
				{
					system("cls");
					printf("잘못 입력된 숫자입니다. 바르게 입력해주세요.\n");
				}
				}
            }
            else if(num == 2)//전화 안받았을 때
            {
                printf("(어? 받았네)\n");
                sleep();
				printf("친구1 : 무슨일로 전화했어?\n");
            	sleep();
            	printf("주인공 : 친구1아 과제 다했니?\n");
            	sleep();
            	printf("친구1 : 아니?ㅎㅎ 교수님이 이 과제는 다 같이 죽어보자고 내신게 확실해\n");
            	sleep();
				printf("주인공 : 나도 그렇게 생각해 우리 일단 같이 해보자\n");
				sleep();
				printf("친구1 : 그래!\n");
				sleep();
				printf("(a few moment later)\n");
				sleep();
				printf("주인공 : 포기할까? 이건 아닌것 같아 ㅋ\n");
				sleep();
				printf("친구1 : 인정해 걍 f받는 것도 나쁘지 않은 것 같아 ㅎㅎ\n");
				sleep();
				printf("주인공 : 일단 서로 더 이해 해보고 내일 다시 연락하자\n");
				sleep();
				printf("친구1 : 그래 내일보자 안녕~\n");
				sleep();
				printf("(전화를 끊었다.)\n");
				sleep();
				break;
            }
			else
			{
				system("cls");
				printf("잘못 입력된 숫자입니다. 바르게 입력해주세요.\n");
			}
			}
			sleep();
			jump_1:
				printf("주인공 : 이제 뭐하지 벌써 12시네 일단 자자\n");
				//수정중(끝)
				sleep();
				while(a)//D-2 마무리 메뉴
				{
					printf("메뉴로 돌아가시겠습니까? (1.예 2.아니요)\n");
					printf("숫자를 입력하세요 : ");
					scanf("%d", &a);
					if(a == 1)
					{
						system("cls");
						goto title;
					}
					else if(a == 2)
					{
						goto jump_3;
					}
					else
					{
						system("cls");
						printf("잘못 입력된 숫자입니다. 바르게 입력해주세요.\n");
					}
				}
				sleep();
			jump_3:
			print_story_1();//D-1

			while(a)//D-1 마무리 메뉴
			{
				printf("메뉴로 돌아가시겠습니까? (1.예 2.아니요)\n");
				printf("숫자를 입력하세요 : ");
				scanf("%d", &a);
				if(a == 1)
				{
					system("cls");
					goto title;
				}
				else if(a == 2)
				{
					system("cls");
					goto jump_4;
				}
				else
				{
					system("cls");
					printf("잘못 입력된 숫자입니다. 바르게 입력해주세요.\n");
				}
			}
			jump_4:
			print_story_2();
			goto title;
		}
	}
	if(a == 2)
	{
		//print_how_to_play_screen();
		while(a)
		{
			print_how_to_play_screen();
			printf("메뉴로 돌아가시겠습니까? (1.예 2.아니요)\n");
			printf("숫자를 입력하세요 : ");
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
				system("cls");
				printf("잘못 입력된 숫자입니다. 바르게 입력해주세요.\n");
			}
		}
	}
	if(a == 3)
	{
	break;
	}
	
}
}

void print_story_1()//D-1스토리
{
	int a = 1;
	system("cls");
	printf("(다음날 12시 기상)\n");
	sleep();
	printf("과제 제출 D-1\n");
	sleep();
	printf("주인공 : 벌써 아침이네 과제 하기 싫은데 게임이나 할까?\n");
	sleep();
	while(a)
	{
		printf("1.게임을 한다.\n2.과제를 한다.\n숫자를 입력하세요 : ");
		scanf("%d",&a);
		if(a == 1)
		{
			system("cls");
			printf("주인공 : 그래 과제는 어차피 내가 할 수 없는 과제야 게임이나 하자\n");
			sleep();
			printf("(과제는 잊고 신나게 게임을 하였다.)\n");
			sleep();
			printf("(6시간 뒤)\n");
			sleep();
			printf("주인공 : 벌써 6시네\n");
			sleep();
			printf("주인공 : 일단 밥부터 먹고 생각해보자\n");
			sleep();
			printf("(1시간 뒤)\n");
			sleep();
			printf("(일단 책상에 앉았다.)\n");
			sleep();
			printf("주인공 : 하.. 과제 하기 싫다 친구1한테 연락 해봐야지\n");
			sleep();
			printf("(친구1에게 전화를 걸었다.)\n");
			sleep();
			printf("친구1 : 여보세요?\n");
			sleep();
			printf("주인공 : 친구1아 과제 어디까지 했어?\n");
			sleep();
			printf("친구1 : ㅎ..난 포기하려고 오늘 하루종일 했는데 감을 못잡겠어\n");
			sleep();
			printf("주인공 : 아 나도 그냥 포기 할까 나는 겜하다가 이제 막 시작하려 했는데\n");
			sleep();
			printf("친구1 : 그래 그냥 나랑 같이 F나 받자\n");
			sleep();
			printf("주인공 : 그래도 조금은 하면 좋은 점수 주실 것 같은데\n");
			sleep();
			printf("친구1 : 교수님을 믿니? 나는 믿지 않는단다.\n");
			sleep();
			printf("주인공 : ㅋㅋ일단 한번 해보고 안되면 포기할게\n");
			sleep();
			printf("친구1 : 그래 힘내 난 F를 받으러 가볼게 안녕~\n");
			sleep();
			printf("주인공 : 안녕~\n");
			sleep();
			printf("(전화를 끊었다.)\n");
			sleep();
			system("cls");
			printf("주인공 : 음..그래 머라도 해보자\n");
			sleep();
			printf("(강의도 다시 들어보고, 검색도 해보았다.)\n");
			sleep();
			printf("주인공 : 조금은 알겠네 일단 게임 화면 부터 만들어보자\n");
			sleep();
			printf("(다 만든 후)\n");
			sleep();
			printf("주인공 : 오 나쁘지 않은데 이 기세로 게임 방법까지 만들어 봐야겠다.\n");
			sleep();
			printf("(2시간 뒤)\n");
			sleep();
			printf("주인공 : ㅎㅎ 어렵네 친구2한테 전화나 해야지\n");
			sleep();
			printf("(친구2에게 전화를 걸었다.)\n");
			sleep();
			printf("친구2 : 어 주인공 무슨 일이야?\n");
			sleep();
			printf("주인공 : 친구2야 과제 어떻게 하고 있어?\n");
			sleep();
			printf("친구2 : 나는 이 프로젝트 잘 아는 친구있어서 도움받아서 다 했어!\n");
			sleep();
			printf("주인공 : 다 했다고? 이걸? 말도안돼\n");
			sleep();
			printf("친구2 : 다른 애들 보니깐 대부분 못하긴 했어\n");
			sleep();
			printf("주인공 : 그래도 넌 한측에 속하네..부럽다 ㅜㅜ\n");
			sleep();
			printf("친구2 : 아니야 너도 할 수 있을거야 정 못하겠으면\n스토리 게임이라도 만들어 보는게 어때 쉽잖아\n");
			sleep();
			printf("주인공 : 오 그거 좋은데? 전혀 생각도 못했다.\n");
			sleep();
			printf("친구2 : 그랬구나 그럼 그거라도 지금 해봐 할 수 있을거야\n");
			sleep();
			printf("주인공 : 고마워 가서 해볼게!\n");
			sleep();
			printf("친구2 : 그래 안녕~ 나중에 보자\n");
			sleep();
			printf("(전화를 끊었다.)\n");
			sleep();
			system("cls");
			printf("주인공 : 일단 스토리 게임 만들기로 했으니 스토리 부터 짜보자\n");
			sleep();
			printf("(a few moment later)\n");
			sleep();
			printf("주인공 : 쉽다며? 쉽다며!! 짤게 너무 많아 ㅜㅜ\n");
			sleep();
			printf("주인공 : 그냥 포기할까?\n");
			sleep();
			while(a)
			{
				printf("1.포기한다\n2.좀 더 생각해본다\n숫자를 입력하세요 : ");
				scanf("%d",&a);
				if(a == 1)
				{
					printf("주인공 : 그래 이제 포기하는거야 최선을 다했어!\n");
					sleep();
					printf("주인공 : 교수님을 설득할 방법을 찾아 보자!\n");
					sleep();
					printf("(시간을 보니 12시다.)\n");
					sleep();
					printf("주인공 : 일단 자고 내일 교수님과 싸워보자\033[31m^-^\033[0m\n");
					goto jump_2;
				}	
				else if(a == 2)	
				{
					system("cls");
					printf("\033[41m이젠 진짜 아니야 +_+!\033[0m\n");
				}
				else
				{
					system("cls");
					printf("잘못 입력된 숫자입니다. 바르게 입력해주세요.\n");
				}
			}
		}
		else if(a == 2)
		{
			system("cls");
			printf("\033[41m너가 과제를 하겠다고? 구라치지마\033[0m\n");
			continue;
		}
		else
		{
			system("cls");
			printf("잘못 입력된 숫자입니다. 바르게 입력해주세요.\n");
			continue;
		}
			jump_2:
			break;
	}
}

void print_story_2()//D-day스토리
{
	int a = 1;
	printf("과제 제출 D-day\n");
	sleep();
	printf("주인공 : 음..과제는 포기하기로 했으니 교수님을 설득할까? 싸울까?\n");
	sleep();
	while(a)
	{
		printf("1.설득한다.\n2.싸운다.\n숫자를 입력하세요 : ");
		scanf("%d",&a);
		if(a == 1)
		{
			printf("주인공 : 그래 싸우는건 좋지 않은 선택이야 교수님에게 일단 연락해보자\n");
			sleep();
			printf("(교수님에게 전화를 했다.)\n");
			sleep();
			printf("주인공 : 교수님 안녕하십니까 교수님 수업듣고 있는 ooo이라고 합니다.\n");
			sleep();
			printf("교수 : 어 그래 무슨 일이니?\n");
			sleep();
			printf("주인공 : 교수님 제가 내주신 과제를 열심히 해봤는데 도저히 안될 것 같아 연락드렸습니다.\n");
			sleep();
			printf("교수 : 열심히 한거 맞아? 대충했을 것 같은데? ㅎㅎ\n");
			sleep();
			printf("(살짝 움찔했다)\n");
			sleep();
			printf("주인공 : 에이 그럴리가요 정말 최선을 다했는데 못하겠습니다.\n");
			sleep();
			printf("교수 : 어디까지 했는데? 이게 어렵니?^^\n");
			sleep();
			printf("주인공 : 네! 너무 어려워요(교수님 미워) 스토리 게임 타이틀 까진 했어요.\n");
			sleep();
			printf("교수 : 거기까지 했으면 그냥 귀찮아서 더 안한거 아니야?\n");
			sleep();
			printf("(정곡을 찌르셨다.)\n");
			sleep();
			printf("주인공 : 아닙니다 이건 다른 학생들도 포기한 과제 입니다.\n");
			sleep();
			printf("교수 : 그래? 그럼 한데까지 제출해 F는 면할거야\n");
			sleep();
			printf("주인공 : (다행이다)감사합니다 교수님!\n");
			sleep();
			printf("(전화를 끊었다.)\n");
			sleep();
			printf("주인공 : 제출하자~\n");
			sleep();
			printf("(주인공은 제출 후 결국 Bo를 받았다고 한다.)\n");
			sleep();
			printf("주인공 : 생각보다 잘 주셨군..(행복)\n");
			sleep();
			printf("the end\n");
			sleep();
			goto end_1;
		}
		else if(a == 2)
		{
			printf("주인공 : 에라 모르겠다 교수님과 싸워서라도 A학점을 얻어야겠어!\n");
			sleep();
			printf("(교수님과 싸우러 갔다.)\n");
			sleep();
			//수정중
			int student,professor;
			professor = 20;//교수님 공격력
			printf("(교수님의 공격력은 20이다.)\n");
			sleep();
			printf("주인공 : 생각보다 약하신데?\n");
			sleep();
			printf("주인공의 공격력을 입력하세요 :");
			scanf("%d",&student);
			if(student<20)
			{
				printf("주인공이 교수님을 공격하여 %d의 데미지를 입혔습니다.\n",student);
				sleep();
				printf("교수님의 잔여HP : %d\n",professor-student);
				sleep();
				printf("교수님이 주인공을 공격하여 주인공이 패배했습니다.\n");
				sleep();
				printf("주인공 : 아? 이게 아닌데?\n");
				sleep();
				printf("교수 : 감히 나를 공격해? 넌 F야!\n");
				sleep();
				printf("주인공 : 교수님..그래도 그건 좀 \033[35mㅜㅅㅜ\033[0m\n");
				sleep();
				printf("(주인공은 결국 F를 받았다고 한다.)\n");
				sleep();
				printf("주인공 : 젠장 교수니이임~~\n");
				sleep();
				printf("the end\n");
				sleep();
				goto end_2;
			}
			else
			{
				printf("주인공이 교수님을 공격하여 %d의 데미지를 입혔습니다.\n",student);
				sleep();
				printf("교수님의 잔여HP : 0\n");
				sleep();
				printf("(교수님을 제압했습니다!)\n");
				sleep();
				printf("교수 : 내가 지다니 원하는게 머냐?\n");
				sleep();
				printf("주인공 : 양심상 A+은 오바니 Ao를 주십쇼 열심히 했는데 실패한거니깐요!\n");
				sleep();
				printf("교수 : 쳇 졌으니 어쩔 수가 없군 알았다.\n");
				sleep();
				printf("주인공 : 아싸 학점 지켰다!\n");
				sleep();
				printf("(주인공은 결국 Ao를 받았다고 한다.)\n");
				sleep();
				printf("the end\n");
				sleep();
				goto end_3;
			}

		}
		else
		{
			system("cls");
			printf("잘못 입력된 숫자입니다. 바르게 입력해주세요.\n");
			continue;
		}
		end_1:
		end_2:
		end_3:
		break;
	}
}

void sleep() //Sleep 함수
{
	Sleep(1500);
}

void print_title_screen() //title 함수
{
    const char* title[] = {
        "################################",
        "#                              #",
        "#   * 교수님을 설득시켜라 *    #",
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

void print_how_to_play_screen()//how to play 함수
{
    const char* how_to_play[] = {
        "#################################################",
        "#                                               #",
        "#     1. 스토리 진행은 자동으로 됩니다          #",
        "#   2. 선택지가 나오면 1 or 2 번을 누르세요     #",
        "#     3. 주인공이 원하는 선택지가 아니면        #",
        "#          *다시 스토리를 반복 합니다*          #",
        "#                                               #",
        "#################################################"
    };

    int num_lines = sizeof(how_to_play) / sizeof(how_to_play[0]);
    for (int i = 0; i < num_lines; i++)
    {
        printf("%s\n", how_to_play[i]);
    }
}
