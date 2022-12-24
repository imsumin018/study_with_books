//����: Visual Studio 2010���� �̻� ����ڴ� �Ʒ��� �ڵ带 �� �����ʽÿ�.[s]
#define _CRT_SECURE_NO_WARNINGS
//����: Visual Studio 2010���� �̻� ����ڴ� ���� �ڵ带 �� �����ʽÿ�.[e]
#include <iostream>
#include <string>
using namespace std;

int main()
{
    char str0[20];
    char str1[10];
    char str2[10];

    strcpy_s(str1, "Hello");
    strcpy_s(str2, "Goodbye");
    strcpy_s(str0, str1);
    strcat(str0, str2);

    cout << "�迭 str1 ��(��)" << str1 << "�Դϴ�.\n";

    cout << "�迭 str2 ��(��)" << str2 << " �Դϴ�.\n";

    cout << "�����ϸ� " << str0 << " �Դϴ�.\n";

    return 0;
}
