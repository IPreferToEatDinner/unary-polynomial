#include"class.h"
#include"getcount.h"
#include <iostream>
#include<iomanip>
using namespace std;

//这个函数极为诡异
void showtotal(LINKHEAD head)
{
	Polynomial* p = head->next;//从首元节点开始跳跃
	int count = getcount(head);
	int i = 1;
	while (p != nullptr)
	{
		printf("\t%dx^%d\t", p->k, p->exp);
		if(i<count)
		{
			printf("+");
			i++;
		}
		p = p->next;
	}
}