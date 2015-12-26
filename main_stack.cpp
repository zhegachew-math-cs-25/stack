#include "stdafx.h"
#include "stack.h"
#include <iostream>
#include <conio.h>

using namespace std;



int _tmain(int argc, _TCHAR* argv[])
{
	int a = 0;
	node *top = NULL;


	bool first_num = true;


	// 
	cout << "Vvod a -> ";
	cin >> a;


	while (a != (-1))
	{
		if (first_num == true)
		{
			first(a, &top);
			first_num = false;
		}
		else
		{
			push(a, &top);
		}


		cout << "Vvod a -> ";
		cin >> a;

	} // while


	print(top);

	printDel(top);

	_getch();
	return 0;
}

