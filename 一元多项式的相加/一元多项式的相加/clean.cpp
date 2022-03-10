#include"class.h"
#include <iostream>
using namespace std;

void clean(LINKHEAD head)
{
	Polynomial* p = head->next;
	
	//就是简单的链表逐个跳跃
	while (p != nullptr)
	{
		p->exp = 0;
		p->k = 0;
		p = p->next;//这一段的跳跃不能忘记
	}

}