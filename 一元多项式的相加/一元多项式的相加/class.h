#pragma once
//这个就是一个类的声明

typedef struct Polynomial
{
	int k;
	int exp;
	Polynomial* next;
}Polynomial, * LINKHEAD;
