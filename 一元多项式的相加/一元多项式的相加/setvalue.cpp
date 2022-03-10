#include"class.h"
#include"sort.h"
#include <iostream>
using namespace std;


void setvalue(LINKHEAD head)
{
	Polynomial* p = head->next;
	int count = 0;

	//就是简单的链表逐个跳跃
	while (p != nullptr)
	{
		count++;
		cout << "输入系数和次数" << endl;
		cin >> p->k >> p->exp;
		cout << "第 " << count << " 个已经录入" << endl;

		p = p->next;//这一段的跳跃不能忘记
	}

	sort(head);

}