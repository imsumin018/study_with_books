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
	cout<<"1. 추가"<<endl;
	cout<<"2. 검색"<<endl;
	cout<<"3. 수정"<<endl;
	cout<<"4. 삭제"<<endl;
	cout<<"5. 전체출력"<<endl;
	cout<<"6. 전체삭제"<<endl;
	cout<<"7. 종료"<<endl;

}


Member input() {
	string name, tel, address;
	cout<<"이름:";
	cin>>name;
	cout<<"전화번호:";
	cin>>tel;
	cout<<"주소:";
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
			cout<<"검색할 사람 이름:";
			cin>>name;
			it=find(data.begin(), data.end(), Member(name, "",""));
			if(it!=data.end()) {
				it->printMember();
			} else {
				cout<<"찾는 사람 없음"<<endl;
			}
			break;

		case 3:
			cout<<"수정할 사람 이름:";
			cin>>name;
			it=find(data.begin(), data.end(), Member(name, "", ""));
			if(it!=data.end()) {
				it->printMember();
				cout<<"새 전화번호:";
				cin>>tel;
				cout<<"새 주소:";
				cin>>address;
				it->setTel(tel);
				it->setAddress(address);
				cout<<"변경되었음"<<endl;
				it->printMember();
			} else {
				cout<<"찾는 사람 없음"<<endl;
			}
			break;

		case 4:
			cout<<"삭제할 사람 이름:";
			cin>>name;
			it=remove(data.begin(), data.end(), Member(name, "",""));
			data.erase(it, data.end());
			break;

		case 5:
			if(data.empty()) {
				cout<<"출력할 데이터가 없다."<<endl;
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
			cout<<"다시입력하라"<<endl;
		}
	}

	return 0;
}
