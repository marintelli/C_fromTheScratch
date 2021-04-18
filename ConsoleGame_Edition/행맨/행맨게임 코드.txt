#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
#include<conio.h>
#include<Windows.h>
#include<vector>
#include<fstream>	

using namespace std;

void gotoxy(int x, int y)
{
	COORD Pos{ 2 * x , y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

int GetKeyDown()
{
	if (_kbhit() != 0)
		return _getch();

	return 0;
}

void SetConsoleView()
{
	system("mode con:cols=50 lines=20");
	system("title [HangManGame]");
}

void DrawReadyGame()
{
	system("cls");

	gotoxy(5, 2);
	printf("==============================\n");
	gotoxy(5, 3);
    printf("======= HANG MAN GAME ========\n");
	gotoxy(5, 4);
    printf("==============================\n");
	gotoxy(6, 6);
    printf("시작 키 : s, 종료 키 : q\n");
}

void DrawStartGame(const int life, const int score, vector<string>& pastWord)
{
	system("cls");

	gotoxy(5, 1);
    printf("life = %d", life);

	gotoxy(5, 2);
    printf("score = %d", score);

	gotoxy(5, 8);
    printf("past = ");

	for (int i = 0; i < static_cast<int>(pastWord.size()); ++i)
	{
		printf("%s ", pastWord[i].c_str());
	}

	gotoxy(5, 12);
	printf("input = ");

	gotoxy(13, 14);
    printf("메인화면 'qq'\n");
}

//시작화면 기능
bool ReadyGame()
{
	DrawReadyGame();

	while (true)
	{
		int key = GetKeyDown();
		if (key == 's' || key == 'S')
		{
			return true;
		}
		else if (key == 'q' || key == 'Q')
		{
			break;
		}
	}

	return false;
}

//게임 시작 함수.
void StartGame()
{
    vector<string> pastWord; // 입력한 단어들의 집합
    vector<string> strArr{ "apple", "title", "banana", "kiwi", "maple", "ice", "jspark" }; // 맞출 단어들의 집합

    int score = 0;  // 점수는 게임을 종료할 때 까지 누적하도록 함
    while (true)	//하나의 탄을 표현하는 루프
    {
        // 랜덤 함수를 이용하여 맞출단어를 선정합니다.
        srand((unsigned int)time(NULL));
        int num = rand() % static_cast<int>(strArr.size());
        const string strOriginal = strArr[num];
        const int originLen = static_cast<int>(strOriginal.length());

        // 게임 정답 단어판과 목숨을 설정합니다. 목숨은 기본적으로 맞출 단어 길이 + 2
        int life = originLen + 2;
        string strQuestion(originLen, '_');
        
        //1 question
        while (true)
        {
            DrawStartGame(life, score, pastWord);

            // 정답 단어판을 그린다.
            gotoxy(5, 5);
            for (int i = 0; i < originLen; ++i)
            {
                printf("%c ", strQuestion[i]);
            }
            printf("\n");

            // 답안을 입력 받으나 만약 qq라는 단어를 입력받으면 게임을 종료함.
            gotoxy(9, 12);
            string strInput;
            cin >> strInput;
            if (strInput == "qq")
            {
                return;
            }

            // 입력 받은 답안을 입력한 답안 집합에 추가한다.
            pastWord.push_back(strInput);

            // 입력받은 답안의 길이가 1이라면 알파벳이다. 답안의 문자들 중에 해당 알파벳이 존재 하는가?
            if (strInput.length() == 1)
            {
                for (int i = 0; i < originLen; ++i)
                {
                    // 정답에 같은 알파벳이 있다면 해당 칸을 노출한다.
                    if (strOriginal[i] == strInput[0])
                        strQuestion[i] = strInput[0];
                }
            }
            // 문자열 길이가 2라면 의미론 적으로 단어 두개를 비교한다.
            else if (strInput.length() > 1)
            {
                // 정답이라면 점수증가와 입력한 단어들의 집합을 초기화 한다.
                if (strOriginal == strInput)
                {
                    score += 5;
                    pastWord.clear();
                    break;
                }
            }

            // 기본 게임 규칙을 적용한다.
            life -= 1;

            // 만약 남은 목숨이 0미만 이라면?
            if (life < 0)
            {
                score -= 5;

                if (score < 0)
                    score = 0;

                pastWord.clear();
                break;
            }
        }
    }
}

int main(void)
{
	SetConsoleView();

	while (ReadyGame())
	{
        StartGame();
	}

	return 0;
}