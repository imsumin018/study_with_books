/*
 * Ch13_2.cpp
 *
 *  Created on: 2015. 3. 10.
 *      Author: Administrator
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
	//�� ���ڿ� ����
	string str1();

	//char*�� �����Ͽ� ���ڿ� ����
	string str2("abcdefghijklmn");

	//str2�� �����Ͽ� ����
	string str3(str2);

	//str2�� �� ��° ��ġ�������� ���� 4���� �����Ͽ� ����
	string str4(str2, 3, 4);

	//str2�� �� ��° ��ġ���� ������ �����Ͽ� ����
	string str5(str2, 3);

	char *p = "opqrstuvwxyz";

	//char*�� �����Ͽ� ����
	string str6(p);

	//char*�� ���� 4���� �����Ͽ� ����
	string str7(p, 4);

	//���̰� 5�� ���ڿ��� �����Ͽ� 'x'�� ä��
	string str8(5, 'x');

	cout<<"str1:"<<str1<<endl;
	cout<<"str2:"<<str2<<endl;
	cout<<"str3:"<<str3<<endl;
	cout<<"str4:"<<str4<<endl;
	cout<<"str5:"<<str5<<endl;
	cout<<"str6:"<<str6<<endl;
	cout<<"str7:"<<str7<<endl;
	cout<<"str8:"<<str8<<endl;

	return 0;

}
