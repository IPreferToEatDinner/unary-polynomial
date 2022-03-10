#include"class.h"
#include"conformity.h"
#include <iostream>
using namespace std;


//找到exp为特定值的项并删除

void killexp(LINKHEAD head)
{
	int exp;
	cout << endl << "请输入要删除项的系数" << endl;
	cin >> exp;

	conformity(head);

	Polynomial* former = head;
	Polynomial* latter = head->next;

	while (latter != nullptr)
	{
		if (latter->exp == exp && latter->next != nullptr)
		{
			former->next = latter->next;
			delete latter;
			break;
		}
		else if(latter->exp == exp && latter->next == nullptr)
		{
			delete latter;
			former->next = nullptr;
			break;
		}
		else
		{
			former = latter;
			latter = latter->next;
		}
	}
}