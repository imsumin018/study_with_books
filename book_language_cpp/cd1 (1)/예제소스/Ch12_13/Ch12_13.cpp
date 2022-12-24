/*
 * Ch12_13.cpp
 *
 *  Created on: 2015. 3. 10.
 *      Author: Administrator
 */

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

class Member {
private:
	string name;
	string tel;
	string address;

public:
	Member() {

	}

	Member(string name, string tel, string address) {
		this->name = name;
		this->tel = tel;
		this->address = address;
	}

	void setName(string name) {
		this->name = name;
	}

	string getName() {
		return name;
	}

	void setTel(string tel) {
		this->tel = tel;
	}

	string getTel() {
		return tel;
	}

	void setAddress(string address) {
		this->address = address;
	}

	string getAddress() {
		return address;
	}

	void printMember() {
		cout<<"name:"<<name<<", tel:"<<tel<<", address:"<<address<<endl;
	}

	friend bool operator ==(Member m1, Member m2) {
		return (m1.name==m2.name) ? true : false;
	}
};

void printMenu() {
	cout<<"menu"<<endl;
	cout<<"1. �߰�"<<endl;
	cout<<"2. �˻�"<<endl;
	cout<<"3. ����"<<endl;
	cout<<"4. ����"<<endl;
	cout<<"5. ��ü���"<<endl;
	cout<<"6. ��ü����"<<endl;
	cout<<"7. ����"<<endl;

}


Member input() {
	string name, tel, address;
	cout<<"�̸�:";
	cin>>name;
	cout<<"��ȭ��ȣ:";
	cin>>tel;
	cout<<"�ּ�:";
	cin>>address;
	Member m(name, tel, address);
	return m;
}

int main() {
	int menu;
	bool flag = true;
	string name, tel, address;
	vector<Member> data;
	vector<Member>::iterator it;

	while(flag) {
		printMenu();
		cin>>menu;
		switch(menu) {
		case 1:
			data.push_back(input());
			break;

		case 2:
			cout<<"�˻��� ��� �̸�:";
			cin>>name;
			it=find(data.begin(), data.end(), Member(name, "",""));
			if(it!=data.end()) {
				it->printMember();
			} else {
				cout<<"ã�� ��� ����"<<endl;
			}
			break;

		case 3:
			cout<<"������ ��� �̸�:";
			cin>>name;
			it=find(data.begin(), data.end(), Member(name, "", ""));
			if(it!=data.end()) {
				it->printMember();
				cout<<"�� ��ȭ��ȣ:";
				cin>>tel;
				cout<<"�� �ּ�:";
				cin>>address;
				it->setTel(tel);
				it->setAddress(address);
				cout<<"����Ǿ���"<<endl;
				it->printMember();
			} else {
				cout<<"ã�� ��� ����"<<endl;
			}
			break;

		case 4:
			cout<<"������ ��� �̸�:";
			cin>>name;
			it=remove(data.begin(), data.end(), Member(name, "",""));
			data.erase(it, data.end());
			break;

		case 5:
			if(data.empty()) {
				cout<<"����� �����Ͱ� ����."<<endl;
			} else {
				for(it=data.begin(); it!=data.end(); it++) {
					it->printMember();
				}
			}

			break;

		case 6:
			data.clear();
			break;

		case 7:
			flag = false;
			break;

		default:
			cout<<"�ٽ��Է��϶�"<<endl;
		}
	}

	return 0;
}
