#include"class.h"
#include"conformity.h"
#include <iostream>
using namespace std;


//这里根本没有什么技巧，就只是将其相加之后又排序
void add(LINKHEAD ahead, LINKHEAD bhead)
{
	Polynomial* point = ahead;
	while (point->next != nullptr)
	{
		point = point->next;
	}
	point->next = bhead->next;
	delete bhead;

	conformity(ahead);
}