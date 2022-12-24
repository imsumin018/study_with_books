#include <iostream>
#include <string>
using namespace std;

//CarŬ������ ����
class Car{
    private:
        int num;
        double gas;
        char* pName;
    public:
        Car::Car(char* pN, int n, double g);
        ~Car();
        void show();
};

//CarŬ���� ��� �Լ��� ����
Car::Car(char* pN, int n, double g)
{
    pName = new char[strlen(pN)+1];
    strcpy_s(pName, pN);
    num = n;
    gas = g;
    cout << pName << " �� �����߽��ϴ�.\n";
}
Car::~Car()
{
    cout << pName << " �� �Ҹ��ŵ�ϴ�.\n";
    delete[] pName;
}
void Car::show()
{
    cout << "���� ��ȣ�� " << num << " �Դϴ�.\n";
    cout << "���� ���� " << gas << " �Դϴ�.\n";
    cout << "�̸��� " << pName << " �Դϴ�.\n";
}

//CarŬ������ �̿�
int main()
{
    Car car1("mycar", 1234, 25.5);
    car1.show();
    return 0;
}
