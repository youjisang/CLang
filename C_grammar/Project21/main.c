// ���� ȯ���� ����׿� ����� ����
// ������� ����� �ÿ� ���� ������ ũ�Ⱑ Ŀ����. �׷��� ����� �� �� �ִ�.
// �ð����⵵, ���� ���⵵
// ��� ǥ���
// �迭 ������ ������, �ݵ�� �ʱ�ȭ�� �Ű�Ἥ ���ش�. ����׽ÿ� ������� �ٸ� ����� ������ �� ��....
// ����ü�� �پ��� �ڷ��� �����͸� �ϳ��� �׷����� ���� �ڷ���
// 1. *ptr_int = &int_value 2. int *ptr_int = NULL -> ptr_int = &int_value
// ���� �޸� �Ҵ��� ���α׷� ���� ���� �������� �޸𸮸� �Ҵ��ϴ� ���� ���Ѵ�. 
// ptr_int = (int *)malloc(sizeof(int)*size), free()

#include<stdio.h>

int main(void)
{


	int ptr_int = (int *)malloc(sizeof(int)*5);
	if (ptr_int != NULL) {
	}
	else {
	
		//ERROR!
	}
	// malloc()�� ���� ���Ӱ� �Ҵ� ���� �޸� ������ �����Ⱚ���� ä���� �ִ�. �׷��Ƿ�, ������ ���鿡�� 0���� �ʱ�ȭ ������ �ʿ䰡 �ִ�.

	if (ptr_int != NULL) {
		free(ptr_int);
	}
	// ���� ������ �������� ������, �޸� ������ �Ͼ
	

	return 0;
}