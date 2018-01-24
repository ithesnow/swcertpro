
#include <stdio.h>

#define MATRIX_LEN_MAX 100
#define KINDOFCHAR 8

int main(void)
{
	
	int test_case;
	
	int cnt = 0;
	char inputMatrix[MATRIX_LEN_MAX][MATRIX_LEN_MAX] = {0,};
	
	freopen("input.txt", "r", stdin);
	/* 아래 코드를 수행하지 않으면 여러분의 프로그램이 제한 시간 초과로 강제 종료 되었을 때,
	출력한 내용이 실제 표준 출력에 기록되지 않을 수 있습니다.
	따라서 안전을 위해 반드시 setbuf(stdout, NULL); 을 수행하시기 바랍니다.
	*/
	setbuf(stdout, NULL);
	int T = 0;
	
	scanf("%d", &T); //첫행에서 테스트 케이스 숫자를 읽어야 할 때.
	/*
	여러 개의 테스트 케이스를 처리하기 위한 부분입니다.
	*/
	for (test_case = 1; test_case <= T; ++test_case)
	{
		
		scanf("%d", &cnt);

		for (int i = 0; i < cnt ; i++){
			for (int j = 0; j < cnt ; j++){
				scanf("%d", &inputMatrix[i][j]);
				printf("i = %d, j = %d, value = %d \n", i, j, inputMatrix[i][j]);
			}
		}
		
		//printf("result = %d, sum = %d, cnt = %d \n", result, sum, cnt);
		
		
	}
	return 0; //정상종료시 반드시 0을 리턴해야 합니다.
}

