
#include <stdio.h>

#define MATRIX_LEN_MAX 100
#define RES_MATRIX_MAX 20

typedef struct matrix
{
	int row;
	int column;
}MATRIX;

int main(void)
{
	
	int test_case;
	
	int cnt = 0;
	char inputMatrix[MATRIX_LEN_MAX][MATRIX_LEN_MAX] = {0,};
	MATRIX resultMatrixArr[RES_MATRIX_MAX] = {0,};
	
	freopen("input.txt", "r", stdin);
	
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

		for (int i = 0; i < cnt ; i++){
			for (int j = 0; j < cnt ; j++){
				
				// findMatrix
				 
				// put the Matrix to resultMatrixArr
				
			}
		}

		
		
		
		// print result on this testcase
		
		// 초기화.
		//printf("result = %d, sum = %d, cnt = %d \n", result, sum, cnt);
		
	}
	return 0; //정상종료시 반드시 0을 리턴해야 합니다.
}

