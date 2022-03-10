#include"class.h"
#include <iostream>
using namespace std;

void killtotal(LINKHEAD head)
{
	//这里用双指针来释放内存
	Polynomial* former = head->next->next;
	Polynomial* latter = head->next;

	while (former != nullptr)
	{
		delete latter;
		latter = former;
		former = former->next;
	}
	delete latter;//尾部处理一下，这个循环不是很优秀
	head->next = nullptr;
}