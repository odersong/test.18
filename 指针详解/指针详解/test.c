#include<stdio.h>



//int main()
//{
//	char* p = "abcdef";//这是一个常量字符串，传送的也是首字符地址
//	printf("%c\n", *p);//打印a
//	printf("%s\n", p);//打印abcdef
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	char* p = arr;//传的是首字符地址
//	printf("%s\n", p);//打印abcdef，打印字符串
//	printf("%c\n", *p);//打印a 
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";//
//	*p = 'W';
//	printf("%s\n", p);//这里会报错，原因是"abcdef"是常量字符串，不能改变，最好在char* p前加上const
//	return 0;
//}


//int main()
//{
//	const char* p = "abcdef";//
//	*p = 'W';//加上const前面会有报错，能找到错误
//	printf("%s\n", p);//这里会报错，原因是"abcdef"是常量字符串，不能改变，最好在char* p前加上const
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abcde";
//	char arr2[] = "abcde";
//	if (arr1 == arr2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha");//arr1和arr2地址不同，因为他是变量字符串
//	}
//	return 0;
//}

//int main()
//{
//	char* p1 = "abcde";
//	char* p2 = "abcde";
//	if (p1 == p2)
//	{
//		printf("hehe");//"abcde"是常量字符串，电脑为了节省空间只给了一个地址，所以p1和p2地址相同
//	}
//	else
//	{
//		printf("haha");
//	}
//	return 0;
//}


//指针数组： 是数组，用来存放指针的
//int main()
//{
//	int arr[10] = { 0 };//整型数组
//	char ch[10] = { 0 };//字符数组
//	int* parr[4];//存放整形指针的数组--指针数组
//	char* pch[4];//存放字符指针的数组--指针数组
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* p[] = { &a,&b,&c,&d };
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d\n", *(p[i]));//指针数组的p[]代表的是地址，需要解引操作符*来找到内容
//	}
//	return 0;
//}


//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6 };
//	int arr2[] = { 2,3,4,5,6,7 };
//	int arr3[] = { 3,4,5,6,7,8 };
//	int* p[] = { arr1,arr2,arr3 };//这个p[]是数组，不是指针
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(p[i] + j));//这里的p[i]是指向arr1的第行的地址，加上j就是后续地址，用*解引用
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,7,3,4,5,6 };
//	for (int i = 0; i < 6; i++)
//	{
//		printf("%d\n", *arr+i);//这个打印出来是1，2，3，4，5，6因为*arr=1，*arr+1=2，*arr+2=3...
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,7,3,4,5,6 };
//	for (int i = 0; i < 6; i++)
//	{
//		printf("%d\n", *(arr + i));//这个打印是对的，这个是加地址
//	}
//	return 0;
//}



//数组指针：是指针
//int main()
//{
//	int* p = NULL;//p是整型指针，指向整型的指针，可以存放整型的地址
//	char* ch = NULL;//ch是字符指针，指向字符的指针，可以存放字符的地址
//	int arr[10] = { 0 };
//	int (*p)[10] = &arr;//arr是首元素地址，&arr是整个数组的地址    ，*是说明p是指针[10]说明数组有10个元素，int说明数组元素是整型
//  //上面的p就是数组指针，指向数组的指针，可以存放数组的地址
//	return 0;//             重要的一点是（*p）相当于是arr，是地址，需要*（*p）才是值
//}


//int main()
//{
//	char* arr[5];//这时指针数组，数组arr的类型是char*
//	char* (*p)[5] = &arr;//*p的*说明p是指针，指向的数组有五个元素，数组的类型是char*
//	//char*是数组的类型
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int (*p)[10] = &arr;
//	printf("%p\n", p);//打印的是&arr的地址，是数组的地址，不是首地址
//	printf("%p\n", p+1);//有十个元素，所以p+1==40
//	printf("%p\n", *p);//打印的是首地址
//	printf("%p\n", *p+1);//首元素地址加一，所以*p+1==4
//	return 0;
//}


//下面几种方式打印数组中的元素
//int main()
//{
//	int arr[10] = { 1,5,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *p++);//*和++是同等级的，要从右向左算，但是++是后置++，所以先*p再++，可以理解为先++，但是在第二次用
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,5,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p+i));//如果（*p+i）就是先把p解引，在加上i，然后打印：1，2，3，4，5，6，7，8，9，10
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,5,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", (*p)[i]);//*p相当于arr,p相当于&arr
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,5,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//	printf("p    = %p\n", p);
//	printf("p+1  = %p\n", p + 1);//p+1=40
//	printf("*p+1 = %p\n", *p + 1);//*p+1=4
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,5,3,4,5,6,7,8,9,10 };
//	int (*p)[10] = &arr;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", (*p)[i]);//*(*p+i)
//	}
//	return 0;
//}


//二维数组的打印
// 方法一
// 参数是数组的形式
//void print(int arr[3][4], int x, int y)
//{
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][4] = { {1,2,3,4},{2,3,4,5},{3,4,5,6} };
//	print(arr, 3, 4);
//	return 0;
//}

//方法二
//参数是指针的形式
//void print(int (*p)[4], int x, int y)
//{
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(p + i)+j));//=*(p[i]+j)=p[i][j]   ,p是二维数组中的一维数组arr的地址，
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][4]= { {1,2,3,4,},{2,3,4,5,},{3,4,5,6,} };//三个一维数组分别是：{1,2,3,4},{2,3,4,5},{3,4,5,6}
//	print(arr, 3, 4);//arr表示元素首地址，但是在二维数组中，可以理解为这个二维数组有三个一为数组arr表示第一个一维数组
//	return 0;
//}
//p表示二维数组arr，p表示二维数组中的一维数组arr
//*(p+1)+1表示第 1 行第 1 个元素的地址
//*(*(p+1)+1)表示第 1 行第 1 个元素的值。很明显，增加一个 * 表示取地址上的数据。
//对一个代表某元素的地址解引用，得到的是该元素
//对一个代表一行元素的地址解引用，得到的是该行首元素的地址，再对这个地址解引用得到首元素

//&arr和arr在传参时，虽然这两个地址的意义不同一个表示整个数组的地址，一个表示首元素地址，但单看地址都是一样的。
//而在传参时，函数会为其单独开辟一块栈帧空间，这个空间里存放的仅仅是一个16进制的地址，
//所以要考虑接收参数时的类型，这个类型很重要，它决定了函数中这个地址表示什么意思，故需要注意类型的匹配



//方块的优先级要高于*，，，[]>*


//int arr[5]  :arr是一个5个元素的数组
//int *parr[5]  :parr是一个有5个元素的数组，每个元素的类型是int*，是指针数组
//int (*parr)[5]  :parr是一个指针，指向一个数组，数组有5个元素,每个元素都是int型，是数组指针
//int (*parr[10])[5]  :parr是一个数组，这个数组有10个元素，每个元素都是一个数组指针，该数组指针指向的数组有五个元素,每个元素都是int
