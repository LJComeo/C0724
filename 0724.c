#include <stdio.h>
#include <stdlib.h>

struct student
{
	char name[10];
	int age;
	char gender;
}std[3], *p = std;

void Judge(int arr[],int n)
{
	int i, j;
	for (i = 0, j = n - 1; i != j; i++,j--)
	{
		if (arr[i] == arr[j])
		{
			printf("该数是回文数！\n");
		}
		else
			printf("该数不是回文数！\n");
	}
}

int main()
{
	//int c[] = { 1, 3, 5 };
	//int *k = c + 1;
	//printf("%d", *++k);

	//scanf("%d", &(*p).age);
	//scanf("%c", &std[0].gender);
	//scanf("%c", &(p->gender));
	
	/*int a = 2, *p1, **p2;
	p2 = &p1;
	p1 = &a;
	a++;
	printf("%d,%d,%d\n", a, *p1, **p2);3 3 3*/

	//int k, j, s;
	//for (k = 2; k < 6; k++, k++)
	//{
	//	s = 1;
	//	for (j = k; j < 6; j++)
	//	{
	//		s += j;
	//	}
	//}
	//printf("%d\n", s);//10

	//int arr[] = { 6, 7, 8, 9, 10 };
	//int *ptr = arr;
	//*(ptr++) += 123;
	//printf("%d %d", *ptr, *(++ptr));//8 8

	int arr[] = { 1, 2, 3, 2, 1 };
	Judge(arr, 5);


	system("pause");
	return 0;
}