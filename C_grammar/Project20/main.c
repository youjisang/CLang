#include <stdio.h>

int main(void) 
{
	char animal1[5][10] = 
	{
		{'c','a','t','\0'},
		{'h','o','r','s','e'},
		{'d','o','g','\0'},
		{'t','i','g','e','r','\0'},
		{'e','l','e','p','h','a','n','t','\0'}

	};

	// 문자열 상수로 한행씩 초기화 , 행의 수 생략 가능
	char animal2[][10] = { "cat","horse","dog","tiger","elephant" };
	int i;

	for (i = 0; i < 5; i++) 
	{
		printf("%s ", animal1[i]);
	}
	printf("\n");
	for (i = 0; i < 5; i++) 
	{
		printf("%s ", animal2[i]);
	}

	// 초기화하는 방법의 차이
	return 0;
}