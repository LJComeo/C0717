#include <stdio.h>
#include <stdlib.h>

int main()
{
	int day, x1, x2 = 1;//�������������һ��ʣ�µĺ͵����ڶ���ʣ�µģ��Դ�������
	day = 9;
	while (day > 0)
	{
		x1 = (x2 + 1) * 2;//ÿһ�����������ǰһ��+1Ȼ������*2��
		x2 = x1;
		day--;
	}
	printf("%d\n", x1);//��ӡ��һ�������
	system("pause");
	return 0;
}