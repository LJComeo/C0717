#include <stdio.h>
#include <stdlib.h>

int main()
{
	int day, x1, x2 = 1;//定义天数、最后一天剩下的和倒数第二天剩下的，以此来递推
	day = 9;
	while (day > 0)
	{
		x1 = (x2 + 1) * 2;//每一天的数量等于前一天+1然后整体*2个
		x2 = x1;
		day--;
	}
	printf("%d\n", x1);//打印第一天的数量
	system("pause");
	return 0;
}