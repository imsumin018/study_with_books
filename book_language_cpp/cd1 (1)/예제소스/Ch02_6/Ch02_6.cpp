/*
 * Ch02_3.cpp
 *
 *  Created on: 2015. 3. 3.
 *      Author: Administrator
 */

#include <iostream>
#include <string>

int main()
{
	using namespace std;
	string word;
	char temp;

	cout << "������ �ܾ �Է��ϼ��� : ";
	cin >> word;

	int i, j;
	for(j=0, i=word.size()-1; j<i; --i, ++j)
	{
		temp = word[i];
		word[i] = word[j];
		word[j] = temp;
	}
	cout << word <<endl;
	return 0;
}


