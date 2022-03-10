#include"class.h"
#include <iostream>
using namespace std;


//就是一个简单的计算项数的函数
int getcount(LINKHEAD head)
{
	int count = 0;
	Polynomial* p = head;
	p = p->next;
	while (p != nullptr)
	{
		count++;
		p = p->next;
	}
	return count;
}