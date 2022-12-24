#include <iostream>
#include <string>
using namespace std;

//CarŬ���� ����
class Car{
    private:
        int num;
        double gas;
        char* pName;
    public:
        Car(char* pN ,int n, double g);
        ~Car();
        Car(const Car& c);
        Car& operator=(const Car& c);
};

//CarŬ���� ��� �Լ��� ����
Car::Car(char* pN ,int n, double g)
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
Car::Car(const Car& c)
{
    cout << c.pName << " �� �ʱ�ȭ �մϴ�.\n";
    pName = new char[strlen(c.pName) + strlen(" ��  ���纻 1")+1];
    strcpy_s(pName, c.pName);
    strcat(pName, " �� ���纻 1");
    num = c.num;
    gas = c.gas;
}
Car& Car::operator=(const Car& c)
{
    cout << pName << "��" << c.pName << " �� �����մϴ�.\n";
    if(this != &c){
        delete[] pName;
        pName = new char[strlen(c.pName)+strlen(" �� ���纻 2")+1];
        strcpy_s(pName, c.pName);
        strcat(pName, " �� ���纻 2");
        num = c.num;
        gas = c.gas;
    }
    return *this;
}

int main()
{
    Car mycar("mycar", 1234, 25.5);

    Car car1 = mycar;

    Car car2("car2", 0, 0);
    car2 = mycar;

    return 0;
}
