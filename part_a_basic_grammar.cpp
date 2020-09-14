#include <iostream> //使用iostream文件
using namespace std;//设置命名空间
# define day 7 //宏定义 表示一个常量

struct student//结构体定义
{
	//成员列表
	string name;  //姓名
	int age;      //年龄
	int score;    //分数
}stu3; //结构体变量创建方式3 


int main()//主函数
{
	const int month = 12; //const修饰符表示常量不可修改
	cout << "helloworld" << endl;

	int a = 10; //声明int整型变量
	short b = 5;//短整型
	long c = 2;//长整型	
	float f1 = 3.14f;//浮点数
	double d1 = 3.14;//双精度浮点数
	long long d = 1000000000;//超长整型
	cout << f1 << endl;
	cout << d1 << endl;

	cout << "float  sizeof = " << sizeof(f1) << endl;
	cout << "double sizeof = " << sizeof(d1) << endl;

	//科学计数法
	float f2 = 3e2; // 3 * 10 ^ 2 
	cout << "f2 = " << f2 << endl;

	float f3 = 3e-2;  // 3 * 0.1 ^ 2
	cout << "f3 = " << f3 << endl;
	cout << "short 类型所占内存空间为： " << sizeof(short) << endl;
	cout << "int 类型所占内存空间为： " << sizeof(int) << endl;
	cout << "long 类型所占内存空间为： " << sizeof(long) << endl;
	cout << "long long 类型所占内存空间为： " << sizeof(long long) << endl;
	cout << "a= " << a << endl;
	cout << day << endl;
	cout << month << endl;

	int movie_rating = 0;
	cout << "给电影打分1-3" << endl;
	cin >> movie_rating;

	switch (movie_rating)//switch 条件判断
	{
	case 1://条件1
			cout << 1 << endl;
			break;//break跳出
		case 2:
			cout << 2 << endl;
			break;
		case 3:
				cout << 3 << endl;
			break;
		default:
				cout << "none" << endl;
			break;
	}

	int num = 0;
	while (num < 10)//while 循环10次 0~9  
	{
		cout << "num666" << endl;
		num++;//num=num+1;
	}

	int num1 = 0;
	do { //do...while 先做一次
		cout <<"num1="<< num1 << endl;
		num1++;
	} while (num1 < 10);

	for (int i = 0; i < 10; i++) //for循环遍历
	{
		cout << i << endl;
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)//先执行这
		{
			cout << "*";
		}
		cout << endl;
	}

	for (int i = 0; i < 10; i++)
	{
		if (i == 5)//for中的条件判断
		{
			break; //跳出循环语句
		}
		cout << i << endl;
	}


	for (int i = 0; i < 100; i++)//for遍历筛选条件输出
	{
		if (i % 2 == 0)
		{
			continue;//若可以被2整除输出的为偶数
		}
		cout << i << endl;
	}


	cout << "1" << endl;

	goto FLAG;//goto到FLAG标志处

	cout << "2" << endl;
	cout << "3" << endl;
	cout << "4" << endl;

FLAG:

	cout << "5" << endl;

	//定义方式1
	//数据类型 数组名[元素个数];
	int score[10];//开辟一维数组内存空间0~9放入

	//利用下标赋值
	score[0] = 100;
	score[1] = 99;
	score[2] = 85;

	//利用下标输出
	cout << score[0] << endl;
	cout << score[1] << endl;
	cout << score[2] << endl;


	//第二种定义方式
	//数据类型 数组名[元素个数] =  {值1，值2 ，值3 ...};
	//如果{}内不足10个数据，剩余数据用0补全
	int score2[10] = { 100, 90,80,70,60,50,40,30,20,10 };

	//逐个输出
	//cout << score2[0] << endl;
	//cout << score2[1] << endl;

	//一个一个输出太麻烦，因此可以利用循环进行输出
	for (int i = 0; i < 10; i++)
	{
		cout << score2[i] << endl;
	}

	//定义方式3
	//数据类型 数组名[] =  {值1，值2 ，值3 ...};
	int score3[] = { 100,90,80,70,60,50,40,30,20,10 };

	for (int i = 0; i < 10; i++)
	{
		cout << score3[i] << endl;
	}

//一维数组组名
	//1.可以统计整个数组在内存中的长度
	//	2.可以获取数组在内存中的首地址

	//数组名用途
	//1、可以获取整个数组占用内存空间大小
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	cout << "整个数组所占内存空间为： " << sizeof(arr) << endl;
	cout << "每个元素所占内存空间为： " << sizeof(arr[0]) << endl;
	cout << "数组的元素个数为： " << sizeof(arr) / sizeof(arr[0]) << endl;

	//2、可以通过数组名获取到数组首地址
	cout << "数组首地址为： " << (int)arr << endl;
	cout << "数组中第一个元素地址为： " << (int)&arr[0] << endl;
	cout << "数组中第二个元素地址为： " << (int)&arr[1] << endl;

	//arr = 100; 错误，数组名是常量，因此不可以赋值
	//注意：数组名是常量，不可以赋值
	//总结1：直接打印数组名，可以查看数组所占内存的首地址
	//总结2：对数组名进行sizeof，可以获取整个数组占内存空间的大小

	//冒泡排序
	//1.作用:最常用的排序算法,对数组内元素进行排序.
	//2.对每一对相邻元素做同样的工作,执行完毕后找到第一个最大值
	//3.重复以上的步骤,每次比较次数-1,直到不需要比较

	int arr0[9] = { 9,8,7,6,5,4,3,2,1 };
	for (int i = 0; i < 9 - 1; i++)
	{
		for (int j = 0; j < 9 - 1 - i; j++)
		{
			if (arr0[j] > arr0[j + 1])
			{
				int temp = arr0[j];
				arr0[j] = arr0[j + 1];
				arr0[j + 1] = temp;
			}
		}
	}

	//方式1  
	//数组类型 数组名 [行数][列数]
	int arr1[2][3];
	arr1[0][0] = 1;
	arr1[0][1] = 2;
	arr1[0][2] = 3;
	arr1[1][0] = 4;
	arr1[1][1] = 5;
	arr1[1][2] = 6;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr1[i][j] << " ";
		}
		cout << endl;
	}

	//方式2 
	//数据类型 数组名[行数][列数] = { {数据1，数据2 } ，{数据3，数据4 } };
	int arr2[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};

	//方式3
	//数据类型 数组名[行数][列数] = { 数据1，数据2 ,数据3，数据4  };
	int arr3[2][3] = { 1,2,3,4,5,6 };

	//方式4 
	//数据类型 数组名[][列数] = { 数据1，数据2 ,数据3，数据4  };
	int arr4[][3] = { 1,2,3,4,5,6 };

	//二维数组数组名
	int arr5[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};

	cout << "二维数组大小： " << sizeof(arr5) << endl;
	cout << "二维数组一行大小： " << sizeof(arr5[0]) << endl;
	cout << "二维数组元素大小： " << sizeof(arr5[0][0]) << endl;

	cout << "二维数组行数： " << sizeof(arr5) / sizeof(arr5[0]) << endl;
	cout << "二维数组列数： " << sizeof(arr5[0]) / sizeof(arr5[0][0]) << endl;

	//地址
	cout << "二维数组首地址：" << arr5 << endl;
	cout << "二维数组第一行地址：" << arr5[0] << endl;
	cout << "二维数组第二行地址：" << arr5[1] << endl;

	cout << "二维数组第一个元素地址：" << &arr5[0][0] << endl;
	cout << "二维数组第二个元素地址：" << &arr5[0][1] << endl;

	//指针
	int e= 10; 
	int* p; //创建指针类型p
	p = &e;//p取e内容
	cout << p << endl;

	int f = 10;
	int* point;
	point = &f; //指针指向数据a的地址

	cout << *point<< endl; //* 解引用
	cout << sizeof(point) << endl;
	cout << sizeof(char*) << endl;
	cout << sizeof(float*) << endl;
	cout << sizeof(double*) << endl;

	/***空指针**：指针变量指向内存中编号为0的空间

**用途：**初始化指针变量

**注意：**空指针指向的内存是不可以访问的*/
	int* p6 = NULL;
	/*//访问空指针报错 
	//内存编号0 ~255为系统占用内存，不允许用户访问
	*/
//	cout << *p6 << endl;
	/*野指针*/
	int* p7 = (int*)0x1100;
	//cout << *p7 << endl;

	/*const修饰指针*/
	/*1.const修饰指针----常量指针
	2.const修饰常量------指针常量
	3.const即修饰指针又修饰常量*/
	int m = 10;
	int n = 100;
	const int* p1 = &m;
	p1 = &n;
	//*p1 = 100;指针指向的值不可以更改;

	//const修饰的是常量,指针指向不可以改,指针指向的值可以改
	int* const p2 = &a;
	//p2 = &b;
	*p2 = 100;//指针指向可以更改

	const int* const p3 = &a;
	//p3=&b;
	//*p3=100;
	/*	3.const即修饰指针又修饰常量*/
	int arr6[] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p8 = arr6;

	cout << "第一个元素： " << arr[0] << endl;
	cout << "指针访问第一个元素： " << *p8 << endl;

	for (int i = 0; i < 10; i++)
	{
		//利用指针遍历数组
		cout <<"数组遍历"<< *p8 << endl;
		p8++;
	}

		//结构体变量创建方式1
		struct student stu1; //struct 关键字可以省略

		stu1.name = "张三";
		stu1.age = 18;
		stu1.score = 100;

		cout << "姓名：" << stu1.name << " 年龄：" << stu1.age << " 分数：" << stu1.score << endl;

		//结构体变量创建方式2
		struct student stu2 = { "李四",19,60 };

		cout << "姓名：" << stu2.name << " 年龄：" << stu2.age << " 分数：" << stu2.score << endl;


		stu3.name = "王五";
		stu3.age = 18;
		stu3.score = 80;

		cout << "姓名：" << stu3.name << " 年龄：" << stu3.age << " 分数：" << stu3.score << endl;

		struct student1 {
			string name;
			int age;
			int score;
		};

		struct student1 stu = { "张三",18,100, };
		struct student1* poit = &stu;
		poit->score = 80;
		cout << "姓名：" << poit->name << " 年龄：" << poit->age << " 分数：" << poit->score << endl;
		//结构体嵌套
		struct students
		{
			//成员列表
			string name;  //姓名
			int age;      //年龄
			int score;    //分数
		};

		//教师结构体定义
		struct teacher
		{
			//成员列表
			int id; //职工编号
			string name;  //教师姓名
			int age;   //教师年龄
			struct student stu; //子结构体 学生
		};

		struct teacher t1;
		t1.id = 1000;
		t1.name = "laowang";
		t1.age = 40;

		t1.stu.name = "zhangsan";
		t1.stu.age = 1100;
		t1.stu.score = 100;
		cout << "教师 职工编号： " << t1.id << " 姓名： " << t1.name << " 年龄： " << t1.age << endl;

		cout << "辅导学员 姓名： " << t1.stu.name << " 年龄：" << t1.stu.age << " 考试分数： " << t1.stu.score << endl;

		/*### 8.6 结构体做函数参数 

**作用：**将结构体作为参数向函数中传递

传递方式有两种：

* 值传递
* 地址传递*/
//学生结构体定义
		struct student233
		{
			//成员列表
			string name;  //姓名
			int age;      //年龄
			int score;    //分数
		};

		void printStudent(student233 stu);
		{
			stu.age = 28;
			cout << "子函数中 姓名：" << stu.name << " 年龄： " << stu.age << " 分数：" << stu.score << endl;
		}
		/*void printStudent2(student233* stu);
		{
			stu->age = 28;
			cout << "子函数中 姓名：" << stu->name << " 年龄： " << stu->age << " 分数：" << stu->score << endl;
		}*/

		/*### 结构体中 const使用场景

**作用：**用const来防止误操作
*/
/*//学生结构体定义
struct student
{
	//成员列表
	string name;  //姓名
	int age;      //年龄
	int score;    //分数
};

//const使用场景
void printStudent(const student *stu) //加const防止函数体中的误操作
{
	//stu->age = 100; //操作失败，因为加了const修饰
	cout << "姓名：" << stu->name << " 年龄：" << stu->age << " 分数：" << stu->score << endl;

}

int main() {

	student stu = { "张三",18,100 };

	printStudent(&stu);

	system("pause");

	return 0;
}
*/

	system("pause");
	return 0;

}