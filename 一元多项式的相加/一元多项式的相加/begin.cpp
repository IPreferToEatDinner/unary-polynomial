#include"class.h"
#include <iostream>
using namespace std;


void begin(LINKHEAD& head)
{
	head = new Polynomial;//这里就创建了一个头节点
	head->next = nullptr;

	Polynomial* p = head;
	int count;
	cout << "输入要创建的项数" << endl;
	cin >> count;
	
	if (count < 0)
	{
		cout << "项数不可以是负数" << endl;
		exit(0);
	}


	for (int i = 0; i < count; i++)
	{
		Polynomial* temp = new Polynomial;
		p->next = temp;
		p = p->next;
	}
	if (!p) { exit(0); }
	p->next = nullptr;//尾部节点的指针置空
}