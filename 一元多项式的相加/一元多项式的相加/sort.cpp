#include"class.h"
#include <iostream>
using namespace std;


void sort(LINKHEAD head)
{
	//做出一个有效元素的冒泡排序
	Polynomial* former = head->next;
	Polynomial* latter = head->next->next;

	//当多项式一个元素也没有的时候
	if (former == nullptr)
	{
		cout << "该多项式没有任何项" << endl;
		exit(0);
	}

	//当多项式只有一个元素的时候
	if (latter == nullptr)
	{
		return;
	}

	//将多项式从小到大排列
	while (true)
	{
		bool issorted = true;
		former = head->next;
		latter = head->next->next;

		while (true)
		{
			if (former->exp > latter->exp)
			{
				//如果发生了排序，那么就要改变标志
				issorted = false;

				//交换幂次,
				int tempexp = former->exp;
				former->exp = latter->exp;
				latter->exp = tempexp;
			
				//交换系数
				int tempk = former->k;
				former->k = latter->k;
				latter->k = tempk;
			}


			former = latter;

			//在这里放一个跳转条件而不在while里面放是因为下一条的执行是不可行的
			if (former->next == nullptr)
			{
				break;
			}

			latter = latter->next;
		}

		if (issorted == true)
		{
			break;
		}
	}
}