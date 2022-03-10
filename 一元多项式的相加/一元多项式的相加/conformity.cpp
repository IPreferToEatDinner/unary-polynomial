#include"class.h"
#include"sort.h"
#include"getcount.h"
#include <iostream>
using namespace std;


//整合操作，将次数一样的项合并成一个项
//这是一个比较顶层的操作，先将所有项都排序之后再对其做整合
void conformity(LINKHEAD head)
{
	sort(head);

	Polynomial* p = head->next;//p指向首元节点

	//如果啥也没有就返回
	if (p == nullptr)
	{
		return;
	}

	int count = getcount(head);
	int position = 1;

	//下面开始整合
	while (position != count)
	{
		if (p->exp == p->next->exp)
		{
			p->k += p->next->k;//数值整合

			Polynomial* temp = p->next;
			p->next = temp->next;
			delete temp;
			count--;
		}
		if (count == 1)
		{
			return;
		}
		if (p->exp != p->next->exp)
		{
			p = p->next;
			position++;
		}
	}

	p->next = nullptr;


}