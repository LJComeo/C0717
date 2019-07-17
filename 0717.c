#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Find(int arr[],int n)
{
	int i,j;
	int tmp = 0;
	int m = 0;
	for (i = 0; i < n; i++)
	{
		for (j = n - 1; j>i;j--)
		{
			if (arr[i] == arr[j])
			{
				tmp = arr[i];
				int a;
				for (a = 0; a < n; a++)
				{
					if (arr[a] == tmp)
					{
						m++;
					}
				}
			}	
		}
	}
	if (m>(n / 2))
	{
		printf("存在计数超过数组长度一半的数字%d\n", tmp);
	}
	else
	{
		printf("该数组中不存在这样的数字\n");
	}
}


int main()
{
	//char s[] = "\\123456\123456\t";
	//printf("%d\n", strlen(s));//12     \123是'S'

	//int s = 0, n;
	//for (n = 0; n < 4; n++)
	//{
	//	switch (n)
	//	{
	//	default:s += 4;
	//	case 1:s += 1;
	//	case 2:s += 2;
	//	case 3:s += 3;
	//	}
	//}
	//printf("%d\n", s);//24

	//char *pcColor = "blue1";
	//char acColor[] = "blue1";

	//printf("%d %d %d %d", strlen(pcColor), strlen(acColor), sizeof(pcColor), sizeof (acColor));//5 5 4 6 

	//unsigned long ulA = 0x11000000;
	//printf("%x\n", *(unsigned char *)&ulA);//0

	int arr[10] = { 1, 2, 3, 2, 2, 2, 5, 4, 2, 2 };
	Find(arr,10);

	system("pause");
	return 0;
}