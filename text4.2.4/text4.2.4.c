#define _CRT_SECURE_NO_WARNINGS 1
//二维数组的使用
//像一维数组一样，其实二维数组在内存中也是连续存储的。

#include <stdio.h>
int main()
{
	int arr[3][4] = { 0 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			arr[i][j] = i * 4 + j;
		}
	}
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);//0 1 2 3 4 5 6 7 8 9 10 11
		}
	}
	return 0;
}

//#include <stdio.h>
//int main()
//{
//	int arr[3][4];
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}
/*&arr[0][0] = 00000007642FF518
&arr[0][1] = 00000007642FF51C
&arr[0][2] = 00000007642FF520
&arr[0][3] = 00000007642FF524
&arr[1][0] = 00000007642FF528
&arr[1][1] = 00000007642FF52C
&arr[1][2] = 00000007642FF530
&arr[1][3] = 00000007642FF534
&arr[2][0] = 00000007642FF538
&arr[2][1] = 00000007642FF53C
&arr[2][2] = 00000007642FF540
&arr[2][3] = 00000007642FF544*/