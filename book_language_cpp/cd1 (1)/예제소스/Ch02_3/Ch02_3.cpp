/*
 * Ch02_3.cpp
 *
 *  Created on: 2015. 3. 3.
 *      Author: Administrator
 */

#include <iostream>

int main()
{
	using namespace std;
	int i;

	cout<<"���ڸ� �Է��ϼ��� :";
	cin>>i;

	if(i<0)
		cout<<"i�� �����Դϴ�. \n";
	else if(i>0)
		cout<<"i�� ����Դϴ�.\n";
	else if(i==0)
		cout<<"i�� 0�Դϴ�.\n";

	return 0;
}
