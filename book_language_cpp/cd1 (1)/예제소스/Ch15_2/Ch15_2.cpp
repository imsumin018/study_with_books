/*
 * Ch15_2.cpp
 *
 *  Created on: 2015. 3. 12.
 *      Author: Administrator
 */

#include <iostream>
#include <string.h>
using namespace std;

class Date {
private:
	char *day;
	int time[10];

public:
	Date(char *d, int *t, int size) {
		int i;
		day = new char[strlen(d)+1];
		strcpy(day, d);
		for(i=0; i<size; i++)
			time[i] = t[i];
		time[i] = -1;
	}

	~Date() {
		cout<<"day"<<endl;
		delete[] day;
	}

	void setDate(char *d) {
		delete[] day;
		day = new char[strlen(d)+1];
		strcpy(day, d);
	}

	int* getTime() {
		return time;
	}

	void print() {
		cout<<"���� : "<<day<<endl;
		cout<<"�ð� : ";
		int i = 0;

		while(time[i] != -1 ) {
			cout<<time[i]<<" , ";
			i++;
		}
		cout<<"����"<<endl;
	}
};

class Room {
private:
	char name[20];
	int num;

public:
	Room(char *n, int nm) {
		strcpy(name, n);
		num = nm;
	}

	void setName(char *n) {
		strcpy(name, n);
	}

	void setNum(int nm) {
		num = nm;
	}

	void print() {
		cout<<"�ǹ��� : "<<name<<endl;
		cout<<"ȣ�� : "<<num<<endl;
	}
};

class Info {
private :
	int s_num;

public:
	Date d;
	Room r;
	Info(char *day, int *t, int size, char *n, int nm, int s) :
		d(day, t, size), r(n, nm) {
		s_num = s;
	}

	void setSNum(int s) {
		s_num = s;
	}

	void print() {
		d.print();
		r.print();
		cout<<"�ο��� : "<<s_num<<endl;
	}
};

class Subj {
private:
	int code;
	char name[20];
	Info *p;
	bool flag;

public:
	Subj() {

	}

	Subj(int code, char *name) {
		this->code = code;
		strcpy(this->name, name);
		p=NULL;
		flag = false;
	}

	~Subj() {
		cout<<"p"<<endl;
		if(flag)
			delete p;
	}

	void setCode(int code) {
		this->code = code;
	}

	int getCode() {
		return code;
	}

	void setP() {
		delete p;
		p = NULL;
	}

	Info* getP() {
		return p;
	}

	void setInfo() {
		char day[10], name[20];
		int t[10];
		int size, nm, s, i;
		cout<<"���� ������ �Է��Ͻÿ�";
		cin>>day;
		cout<<"�ð� ������ �Է��Ͻÿ�. (�� : 3�ð��� 3 �Է�)";
		cin>>size;
		cout<<"���� ���ø� �Է��Ͻÿ�. (�� : 1~3���ô� 1 2 3 �Է�)";
		for(i=0; i<size; i++)
			cin>>t[i];
		cout<<"���� �ǹ��� �Է��Ͻÿ�.";
		cin>>name;
		cout<<"ȣ�� :";
		cin>>nm;
		cout<<"���� �ο���:";
		cin>>s;
		p=new Info(day, t, size, name, nm, s);
		flag = true;
	}

	void setFlag(bool b) {
		flag = b;
	}

	bool getFlag() {
		return flag;
	}

	void setName(char *name) {
		strcpy(this->name, name);
	}

	char* getName() {
		return name;
	}

	void print() {
		cout<<" code:"<<code<<", name : "<<name<<endl;
	}

	void printInfo() {
		if(p!=NULL) {
			p->print();
		}
	}
};

class Staff {
private:
	Subj *sp[10];
	int num;

public:
	Staff() {
		num = 0;
	}

	void input(int code, char *name) {
		int i;
		bool f = true;
		for(i=0; i<num; i++) {
			if(sp[i]->getCode() == code || !strcmp(sp[i]->getName(), name)) {
				f = false;
				cout<<"�̹� ��ϵ� �����Դϴ�."<<endl;
			}
		}

		if(f)
			sp[num++] = new Subj(code, name);
	}

	~Staff() {
		int i;
		cout<<"sp"<<endl;
		for(i=0; i<num; i++)
			delete sp[i];
	}

	void cancel(int code) {
		int i, j = -1;
		for(i=0; i<num; i++) {
			if(sp[i]->getCode()==code) {
				j = i;
				break;
			}
		}

		if(j!=-1) {
			for(i=j; i<num-1; i++) {
				sp[i] = sp[i+1];
			}
			num--;
		} else {
			cout<<"������ �����ڵ尡 �����ϴ�."<<endl;
		}
	}

	void print() {
		int i;
		for(i=0; i<num; i++)
			sp[i]->print();
	}

	Subj** getSp() {
		return sp;
	}

	int getNum() {
		return num;
	}
};

class Prof {
private:
	char name[10];
	char dept[20];
	Subj *s[5];
	int cnt;

public:
	Prof(char *n, char *d) {
		strcpy(name, n);
		strcpy(dept, d);
		cnt = 0;
	}

	void open(Staff *s1) {
		int x, i;
		bool f = false;
		Subj **ap = s1->getSp();
		s1->print();

		cout<<"������ �����ڵ带 �Է��Ͻÿ�";
		cin>>x;

		for(i=0; i < s1->getNum(); i++) {
			if(x==ap[i]->getCode()) {
				if(!ap[i]->getFlag()) {
					ap[i]->setInfo();
					s[cnt] = ap[i];
					cnt++;
				} else {
					cout<<"�̹� ������ �����Դϴ�."<<endl;
				}
				f = true;
				break;
			}
		}

		if(!f)
			cout<<"���� �����ڵ��Դϴ�."<<endl;
	}

	void cancel() {
		int code, i, j = -1;
		cout<<"����� ���� �ڵ带 �Է��Ͻÿ�"<<endl;
		cin>>code;

		for(i=0; i<cnt; i++) {
			if(code==s[i]->getCode()) {
				j = i;
				s[i]->setFlag(false);
				s[i]->setP();
				break;
			}
		}

		if(j==-1)
			cout<<"�ش� ������ �����ϴ�."<<endl;
		else {
			for(i=j; i<cnt-1; i++)
				s[i]=s[i+1];
			cnt--;
		}
	}

	void edit() {
		int i, j=-1, code, x, size, num, snum;
		char day[10], name[20];
		int * time = NULL;

		cout<<"������ ������ �ڵ带 �Է��Ͻÿ�"<<endl;
		cin>>code;

		for(i=0; i<cnt; i++) {
			/*if(code==s[i]->getCode()) {
				//j=i;
				break;
			}*/

			if(i==cnt)
				cout<<"�ش������ �����ϴ�."<<endl;
			else {
				cout<<"1. �ð����� 2.���ǽ� ���� 3.�����ο� ����"<<endl;
				cin>>x;
				switch(x) {
				case 1:
					cout<<"����:";
					cin>>day;
					cout<<"�ð�����";
					cin>>size;
					cout<<"���� ����";
					time=s[i]->getP()->d.getTime();
					for(j=0; j<size; j++)
						cin>>time[j];
					time[j]=-1;
					s[i]->getP()->d.setDate(day);
					//s[i]->getP()->d.setTime(time, size);
					break;

				case 2:
					cout<<"���ǰǹ��� �Է��Ͻÿ�";
					cin>>name;
					cout<<"ȣ��:";
					cin>>num;
					s[i]->getP()->r.setName(name);
					s[i]->getP()->r.setNum(num);
					break;

				case 3:
					cout<<"�ο���:";
					cin>>snum;
					s[i]->getP()->setSNum(snum);
					break;

				default:
					cout<<"�߸��Է��ϼ̽��ϴ�."<<endl;
				}
			}
		}
	}

	void print() {
		int i;
		cout<<"������:"<<name<<endl;
		cout<<"�а�:"<<dept<<endl;
		for(i=0; i<cnt; i++) {
			s[i]->print();
			if(s[i]->getFlag())
				s[i]->getP()->print();
		}
	}
};

class Stud {
private:
	char name[10];
	char dept[20];
	Subj *s[5];
	int cnt;

public:
	Stud(char *n, char *d) {
		strcpy(name, n);
		strcpy(dept, d);
		cnt = 0;
	}

	void select(Staff *s1) {
		int x, i;
		bool f = false;
		Subj **ap = s1->getSp();

		for(i=0; i<s1->getNum(); i++) {
			if(ap[i]->getFlag()) {
				ap[i]->print();
				ap[i]->printInfo();
			}
		}

		cout<<"��û�� �����ڵ带 �Է��Ͻÿ�";
		cin>>x;

		for(i=0; i<cnt; i++) {
			if(x==s[i]->getCode()) {
				cout<<"�̹� ��û�� �����Դϴ�."<<endl;
				return;
			}
		}

		for(i=0; i<s1->getNum(); i++) {
			if(x==ap[i]->getCode()) {
				s[cnt]=ap[i];
				cnt++;
				f=true;
				break;
			}
		}

		if(!f)
			cout<<"���� �����ڵ��Դϴ�."<<endl;
	}

	void cancel() {
		int code, i, j = -1;

		cout<<"����� ���� �ڵ带 �Է��Ͻÿ�"<<endl;
		cin>>code;

		for(i=0; i<cnt; i++) {
			if(code==s[i]->getCode()) {
				j = i;
				break;
			}
		}

		if(j==-1)
			cout<<"�ش������ �����ϴ�."<<endl;
		else {
			for(i=j; i<cnt-1; i++)
				s[i]=s[i+1];
			cnt--;
		}
	}

	void print() {
		int i;
		cout<<"�л���:"<<name<<endl;
		cout<<"�а�:"<<dept<<endl;
		for(i=0; i<cnt; i++) {
			s[i]->print();
		}
	}
};

int main() {
	Staff s1;
	Prof *f1;
	Stud *st;
	int x, code, y;
	char name[20], dept[20];
	bool flag1 = true, flag2 = true;
	while(flag1) {
		cout<<"1.������ 2.���� 3.�л�"<<endl;
		cin>>y;
		switch(y) {
		case 1:
			while(flag2) {
				cout<<"1.������ 2.������� 3.���"<<endl;
				cin>>x;
				switch(x) {
				case 1:
					cout<<"�����:";
					cin>>name;
					cout<<"�����ڵ�:";
					cin>>code;
					s1.input(code, name);
					break;

				case 2:
					cout<<"�����ڵ�:"<<endl;
					cin>>code;
					s1.cancel(code);
					break;

				case 3:
					s1.print();
					break;

				default:
					flag2 = false;
				}
			}

			break;

		case 2:
			flag2 = true;
			cout<<"������:"<<endl;
			cin>>name;
			cout<<"�а���:"<<endl;
			cin>>dept;
			f1 = new Prof(name, dept);
			while(flag2) {
				cout<<"1.���񰳼� 2.������� 3.�������� ���� 4.�����������"<<endl;
				cin>>x;

				switch(x) {
				case 1:
					f1->open(&s1);
					break;

				case 2:
					f1->cancel();
					break;

				case 3:
					f1->edit();
					break;

				case 4:
					f1->print();
					break;

				default:
					flag2 = false;
				}
			}

			break;

		case 3:
			flag2 = true;
			cout<<"�л���:"<<endl;
			cin>>name;
			cout<<"�а���:"<<endl;
			cin>>dept;
			st = new Stud(name, dept);
			while(flag2) {
				cout<<"1.������û 2.��û��� 3.�����������"<<endl;
				cin>>x;
				switch(x) {
				case 1:
					st->select(&s1);
					break;

				case 2:
					st->cancel();
					break;

				case 3:
					st->print();
					break;

				default:
					flag2 = false;
				}
			}

			break;

		default:
			cout<<"�߸� �Է�"<<endl;
			flag1 = false;
		}
	}

	return 0;
}
