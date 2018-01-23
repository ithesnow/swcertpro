
#include <stdio.h>


#define INPUTSTR_MAX_LEN 1024
#define KINDOFCHAR 8

int main(void)
{
	
	int test_case;
	
	int cnt = 0;
	char inputStr[INPUTSTR_MAX_LEN] = {0,};
	int cal[8] = {0,};
	
	freopen("input.txt", "r", stdin);
	/* 아래 코드를 수행하지 않으면 여러분의 프로그램이 제한 시간 초과로 강제 종료 되었을 때,
	출력한 내용이 실제 표준 출력에 기록되지 않을 수 있습니다.
	따라서 안전을 위해 반드시 setbuf(stdout, NULL); 을 수행하시기 바랍니다.
	*/
	setbuf(stdout, NULL);
	int T = 10;
	
	// scanf("%d", &T); 첫행에서 테스트 케이스 숫자를 읽어야 할 때.때
	/*
	여러 개의 테스트 케이스를 처리하기 위한 부분입니다.
	*/
	for (test_case = 1; test_case <= T; ++test_case)
	{
		
		scanf("%d", &cnt);
		scanf("%s", &inputStr);

		for (int i = 0; i < cnt ; i++){
			switch (inputStr[i]){
				case '[':
					++cal[0];
					break;
				case ']':
					++cal[1];
					break;
				case '(':
					++cal[2];
					break;
				case ')':
					++cal[3];
					break;
				case '{':
					++cal[4];
					break;
				case '}':
					++cal[5];
					break;
				case '<':
					++cal[6];
					break;
				case '>':
					++cal[7];
					break;
				default:
					break;
			}
			
		}
		
		int result = 0;
		int sum = 0;
		sum = cal[0] + cal[1] + cal[2] + cal[3] + cal[4] + cal[5] + cal[6] + cal[7]; 
		if (cal[0] == cal[1] && cal[2] == cal[3] && cal[4] == cal[5] && cal[6] == cal[7])
			result = 1;	// valid
		else
			result = 0;	// invalid
		printf("%d %d %d %d %d %d %d %d\n", cal[0], cal[1], cal[2], cal[3], cal[4], cal[5], cal[6], cal[7]);
		printf("result = %d, sum = %d, cnt = %d \n", result, sum, cnt);
		
		for (int i = 0 ; i < KINDOFCHAR ; ++i){
			cal[i] = 0;
		}
		
	}
	return 0; //정상종료시 반드시 0을 리턴해야 합니다.
}

