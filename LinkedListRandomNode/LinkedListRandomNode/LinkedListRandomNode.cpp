// LinkedListRandomNode.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include"ListNodeInput.h"
#include"ListRandomAccess.h"
using namespace std;

int main()
{
	SingleListInput SLIP;
	ListNode* p = SLIP.Input();
	ListRandomAccess* get = new ListRandomAccess(p);
	cout << get->getRandom() << " " << get->getRandom() << " " << get->getRandom() << '\n';
    return 0;
}

