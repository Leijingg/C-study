#include <iostream> //ʹ��iostream�ļ�
using namespace std;//���������ռ�
# define day 7 //�궨�� ��ʾһ������

struct student//�ṹ�嶨��
{
	//��Ա�б�
	string name;  //����
	int age;      //����
	int score;    //����
}stu3; //�ṹ�����������ʽ3 


int main()//������
{
	const int month = 12; //const���η���ʾ���������޸�
	cout << "helloworld" << endl;

	int a = 10; //����int���ͱ���
	short b = 5;//������
	long c = 2;//������	
	float f1 = 3.14f;//������
	double d1 = 3.14;//˫���ȸ�����
	long long d = 1000000000;//��������
	cout << f1 << endl;
	cout << d1 << endl;

	cout << "float  sizeof = " << sizeof(f1) << endl;
	cout << "double sizeof = " << sizeof(d1) << endl;

	//��ѧ������
	float f2 = 3e2; // 3 * 10 ^ 2 
	cout << "f2 = " << f2 << endl;

	float f3 = 3e-2;  // 3 * 0.1 ^ 2
	cout << "f3 = " << f3 << endl;
	cout << "short ������ռ�ڴ�ռ�Ϊ�� " << sizeof(short) << endl;
	cout << "int ������ռ�ڴ�ռ�Ϊ�� " << sizeof(int) << endl;
	cout << "long ������ռ�ڴ�ռ�Ϊ�� " << sizeof(long) << endl;
	cout << "long long ������ռ�ڴ�ռ�Ϊ�� " << sizeof(long long) << endl;
	cout << "a= " << a << endl;
	cout << day << endl;
	cout << month << endl;

	int movie_rating = 0;
	cout << "����Ӱ���1-3" << endl;
	cin >> movie_rating;

	switch (movie_rating)//switch �����ж�
	{
	case 1://����1
			cout << 1 << endl;
			break;//break����
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
	while (num < 10)//while ѭ��10�� 0~9  
	{
		cout << "num666" << endl;
		num++;//num=num+1;
	}

	int num1 = 0;
	do { //do...while ����һ��
		cout <<"num1="<< num1 << endl;
		num1++;
	} while (num1 < 10);

	for (int i = 0; i < 10; i++) //forѭ������
	{
		cout << i << endl;
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)//��ִ����
		{
			cout << "*";
		}
		cout << endl;
	}

	for (int i = 0; i < 10; i++)
	{
		if (i == 5)//for�е������ж�
		{
			break; //����ѭ�����
		}
		cout << i << endl;
	}


	for (int i = 0; i < 100; i++)//for����ɸѡ�������
	{
		if (i % 2 == 0)
		{
			continue;//�����Ա�2���������Ϊż��
		}
		cout << i << endl;
	}


	cout << "1" << endl;

	goto FLAG;//goto��FLAG��־��

	cout << "2" << endl;
	cout << "3" << endl;
	cout << "4" << endl;

FLAG:

	cout << "5" << endl;

	//���巽ʽ1
	//�������� ������[Ԫ�ظ���];
	int score[10];//����һά�����ڴ�ռ�0~9����

	//�����±긳ֵ
	score[0] = 100;
	score[1] = 99;
	score[2] = 85;

	//�����±����
	cout << score[0] << endl;
	cout << score[1] << endl;
	cout << score[2] << endl;


	//�ڶ��ֶ��巽ʽ
	//�������� ������[Ԫ�ظ���] =  {ֵ1��ֵ2 ��ֵ3 ...};
	//���{}�ڲ���10�����ݣ�ʣ��������0��ȫ
	int score2[10] = { 100, 90,80,70,60,50,40,30,20,10 };

	//������
	//cout << score2[0] << endl;
	//cout << score2[1] << endl;

	//һ��һ�����̫�鷳����˿�������ѭ���������
	for (int i = 0; i < 10; i++)
	{
		cout << score2[i] << endl;
	}

	//���巽ʽ3
	//�������� ������[] =  {ֵ1��ֵ2 ��ֵ3 ...};
	int score3[] = { 100,90,80,70,60,50,40,30,20,10 };

	for (int i = 0; i < 10; i++)
	{
		cout << score3[i] << endl;
	}

//һά��������
	//1.����ͳ�������������ڴ��еĳ���
	//	2.���Ի�ȡ�������ڴ��е��׵�ַ

	//��������;
	//1�����Ի�ȡ��������ռ���ڴ�ռ��С
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	cout << "����������ռ�ڴ�ռ�Ϊ�� " << sizeof(arr) << endl;
	cout << "ÿ��Ԫ����ռ�ڴ�ռ�Ϊ�� " << sizeof(arr[0]) << endl;
	cout << "�����Ԫ�ظ���Ϊ�� " << sizeof(arr) / sizeof(arr[0]) << endl;

	//2������ͨ����������ȡ�������׵�ַ
	cout << "�����׵�ַΪ�� " << (int)arr << endl;
	cout << "�����е�һ��Ԫ�ص�ַΪ�� " << (int)&arr[0] << endl;
	cout << "�����еڶ���Ԫ�ص�ַΪ�� " << (int)&arr[1] << endl;

	//arr = 100; �����������ǳ�������˲����Ը�ֵ
	//ע�⣺�������ǳ����������Ը�ֵ
	//�ܽ�1��ֱ�Ӵ�ӡ�����������Բ鿴������ռ�ڴ���׵�ַ
	//�ܽ�2��������������sizeof�����Ի�ȡ��������ռ�ڴ�ռ�Ĵ�С

	//ð������
	//1.����:��õ������㷨,��������Ԫ�ؽ�������.
	//2.��ÿһ������Ԫ����ͬ���Ĺ���,ִ����Ϻ��ҵ���һ�����ֵ
	//3.�ظ����ϵĲ���,ÿ�αȽϴ���-1,ֱ������Ҫ�Ƚ�

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

	//��ʽ1  
	//�������� ������ [����][����]
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

	//��ʽ2 
	//�������� ������[����][����] = { {����1������2 } ��{����3������4 } };
	int arr2[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};

	//��ʽ3
	//�������� ������[����][����] = { ����1������2 ,����3������4  };
	int arr3[2][3] = { 1,2,3,4,5,6 };

	//��ʽ4 
	//�������� ������[][����] = { ����1������2 ,����3������4  };
	int arr4[][3] = { 1,2,3,4,5,6 };

	//��ά����������
	int arr5[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};

	cout << "��ά�����С�� " << sizeof(arr5) << endl;
	cout << "��ά����һ�д�С�� " << sizeof(arr5[0]) << endl;
	cout << "��ά����Ԫ�ش�С�� " << sizeof(arr5[0][0]) << endl;

	cout << "��ά���������� " << sizeof(arr5) / sizeof(arr5[0]) << endl;
	cout << "��ά���������� " << sizeof(arr5[0]) / sizeof(arr5[0][0]) << endl;

	//��ַ
	cout << "��ά�����׵�ַ��" << arr5 << endl;
	cout << "��ά�����һ�е�ַ��" << arr5[0] << endl;
	cout << "��ά����ڶ��е�ַ��" << arr5[1] << endl;

	cout << "��ά�����һ��Ԫ�ص�ַ��" << &arr5[0][0] << endl;
	cout << "��ά����ڶ���Ԫ�ص�ַ��" << &arr5[0][1] << endl;

	//ָ��
	int e= 10; 
	int* p; //����ָ������p
	p = &e;//pȡe����
	cout << p << endl;

	int f = 10;
	int* point;
	point = &f; //ָ��ָ������a�ĵ�ַ

	cout << *point<< endl; //* ������
	cout << sizeof(point) << endl;
	cout << sizeof(char*) << endl;
	cout << sizeof(float*) << endl;
	cout << sizeof(double*) << endl;

	/***��ָ��**��ָ�����ָ���ڴ��б��Ϊ0�Ŀռ�

**��;��**��ʼ��ָ�����

**ע�⣺**��ָ��ָ����ڴ��ǲ����Է��ʵ�*/
	int* p6 = NULL;
	/*//���ʿ�ָ�뱨�� 
	//�ڴ���0 ~255Ϊϵͳռ���ڴ棬�������û�����
	*/
//	cout << *p6 << endl;
	/*Ұָ��*/
	int* p7 = (int*)0x1100;
	//cout << *p7 << endl;

	/*const����ָ��*/
	/*1.const����ָ��----����ָ��
	2.const���γ���------ָ�볣��
	3.const������ָ�������γ���*/
	int m = 10;
	int n = 100;
	const int* p1 = &m;
	p1 = &n;
	//*p1 = 100;ָ��ָ���ֵ�����Ը���;

	//const���ε��ǳ���,ָ��ָ�򲻿��Ը�,ָ��ָ���ֵ���Ը�
	int* const p2 = &a;
	//p2 = &b;
	*p2 = 100;//ָ��ָ����Ը���

	const int* const p3 = &a;
	//p3=&b;
	//*p3=100;
	/*	3.const������ָ�������γ���*/
	int arr6[] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p8 = arr6;

	cout << "��һ��Ԫ�أ� " << arr[0] << endl;
	cout << "ָ����ʵ�һ��Ԫ�أ� " << *p8 << endl;

	for (int i = 0; i < 10; i++)
	{
		//����ָ���������
		cout <<"�������"<< *p8 << endl;
		p8++;
	}

		//�ṹ�����������ʽ1
		struct student stu1; //struct �ؼ��ֿ���ʡ��

		stu1.name = "����";
		stu1.age = 18;
		stu1.score = 100;

		cout << "������" << stu1.name << " ���䣺" << stu1.age << " ������" << stu1.score << endl;

		//�ṹ�����������ʽ2
		struct student stu2 = { "����",19,60 };

		cout << "������" << stu2.name << " ���䣺" << stu2.age << " ������" << stu2.score << endl;


		stu3.name = "����";
		stu3.age = 18;
		stu3.score = 80;

		cout << "������" << stu3.name << " ���䣺" << stu3.age << " ������" << stu3.score << endl;

		struct student1 {
			string name;
			int age;
			int score;
		};

		struct student1 stu = { "����",18,100, };
		struct student1* poit = &stu;
		poit->score = 80;
		cout << "������" << poit->name << " ���䣺" << poit->age << " ������" << poit->score << endl;
		//�ṹ��Ƕ��
		struct students
		{
			//��Ա�б�
			string name;  //����
			int age;      //����
			int score;    //����
		};

		//��ʦ�ṹ�嶨��
		struct teacher
		{
			//��Ա�б�
			int id; //ְ�����
			string name;  //��ʦ����
			int age;   //��ʦ����
			struct student stu; //�ӽṹ�� ѧ��
		};

		struct teacher t1;
		t1.id = 1000;
		t1.name = "laowang";
		t1.age = 40;

		t1.stu.name = "zhangsan";
		t1.stu.age = 1100;
		t1.stu.score = 100;
		cout << "��ʦ ְ����ţ� " << t1.id << " ������ " << t1.name << " ���䣺 " << t1.age << endl;

		cout << "����ѧԱ ������ " << t1.stu.name << " ���䣺" << t1.stu.age << " ���Է����� " << t1.stu.score << endl;

		/*### 8.6 �ṹ������������ 

**���ã�**���ṹ����Ϊ���������д���

���ݷ�ʽ�����֣�

* ֵ����
* ��ַ����*/
//ѧ���ṹ�嶨��
		struct student233
		{
			//��Ա�б�
			string name;  //����
			int age;      //����
			int score;    //����
		};

		void printStudent(student233 stu);
		{
			stu.age = 28;
			cout << "�Ӻ����� ������" << stu.name << " ���䣺 " << stu.age << " ������" << stu.score << endl;
		}
		/*void printStudent2(student233* stu);
		{
			stu->age = 28;
			cout << "�Ӻ����� ������" << stu->name << " ���䣺 " << stu->age << " ������" << stu->score << endl;
		}*/

		/*### �ṹ���� constʹ�ó���

**���ã�**��const����ֹ�����
*/
/*//ѧ���ṹ�嶨��
struct student
{
	//��Ա�б�
	string name;  //����
	int age;      //����
	int score;    //����
};

//constʹ�ó���
void printStudent(const student *stu) //��const��ֹ�������е������
{
	//stu->age = 100; //����ʧ�ܣ���Ϊ����const����
	cout << "������" << stu->name << " ���䣺" << stu->age << " ������" << stu->score << endl;

}

int main() {

	student stu = { "����",18,100 };

	printStudent(&stu);

	system("pause");

	return 0;
}
*/

	system("pause");
	return 0;

}