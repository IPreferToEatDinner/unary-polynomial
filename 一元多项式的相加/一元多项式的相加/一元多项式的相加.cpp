#include<iostream>
#include"class.h"
#include"begin.h"//创建有 m 项的多项式
#include"setvalue.h"//对多项式内容初始化
#include"showtotal.h"//全部展现
#include"killtotal.h"//除了头节点之外全部毁灭
#include"sort.h"//做一个排序的操作
#include"conformity.h"//对多项式做整合
#include"insert.h"//对插入一个值之后并做整合,这里有一个我检查不出来的bug,不知道为什么会出现问题
#include"clean.h"//清空链表
#include"killexp.h"//删除特定幂次的项
#include"add.h"//多项式相加





using namespace std;



int main()
{
	LINKHEAD ahead = nullptr;
	LINKHEAD bhead = nullptr;

	begin(ahead);
	setvalue(ahead);

	begin(bhead);
	setvalue(bhead);

	add(ahead, bhead);

	showtotal(ahead);

}
