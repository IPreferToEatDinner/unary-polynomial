#include"class.h"
#include <iostream>
#include"conformity.h"
using namespace std;


//插入一个元素
//具体操作就是在头部加入一个元素，然后做整合
void insert(LINKHEAD head)
{
	cout << "请输入要插入项的系数和次数" << endl;
	
	Polynomial input;
	cin >> input.k >> input.exp;

	//将其插入在头节点的后面
	input.next = head->next;
	head->next = &input;

	conformity(head);
}