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
		cout<<"요일 : "<<day<<endl;
		cout<<"시간 : ";
		int i = 0;

		while(time[i] != -1 ) {
			cout<<time[i]<<" , ";
			i++;
		}
		cout<<"교시"<<endl;
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
		cout<<"건물명 : "<<name<<endl;
		cout<<"호수 : "<<num<<endl;
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
		cout<<"인원수 : "<<s_num<<endl;
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
		cout<<"강의 요일을 입력하시오";
		cin>>day;
		cout<<"시간 단위를 입력하시오. (예 : 3시간은 3 입력)";
		cin>>size;
		cout<<"강의 교시를 입력하시오. (예 : 1~3교시는 1 2 3 입력)";
		for(i=0; i<size; i++)
			cin>>t[i];
		cout<<"강의 건물을 입력하시오.";
		cin>>name;
		cout<<"호수 :";
		cin>>nm;
		cout<<"수강 인원수:";
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
				cout<<"이미 등록된 과목입니다."<<endl;
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
			cout<<"삭제할 과목코드가 없습니다."<<endl;
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

		cout<<"개설할 과목코드를 입력하시오";
		cin>>x;

		for(i=0; i < s1->getNum(); i++) {
			if(x==ap[i]->getCode()) {
				if(!ap[i]->getFlag()) {
					ap[i]->setInfo();
					s[cnt] = ap[i];
					cnt++;
				} else {
					cout<<"이미 개설된 과목입니다."<<endl;
				}
				f = true;
				break;
			}
		}

		if(!f)
			cout<<"없는 과목코드입니다."<<endl;
	}

	void cancel() {
		int code, i, j = -1;
		cout<<"취소할 과목 코드를 입력하시오"<<endl;
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
			cout<<"해당 과목이 없습니다."<<endl;
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

		cout<<"수정할 과목의 코드를 입력하시오"<<endl;
		cin>>code;

		for(i=0; i<cnt; i++) {
			/*if(code==s[i]->getCode()) {
				//j=i;
				break;
			}*/

			if(i==cnt)
				cout<<"해당과목이 없습니다."<<endl;
			else {
				cout<<"1. 시간수정 2.강의실 수정 3.수강인원 수정"<<endl;
				cin>>x;
				switch(x) {
				case 1:
					cout<<"요일:";
					cin>>day;
					cout<<"시간단위";
					cin>>size;
					cout<<"강의 교시";
					time=s[i]->getP()->d.getTime();
					for(j=0; j<size; j++)
						cin>>time[j];
					time[j]=-1;
					s[i]->getP()->d.setDate(day);
					//s[i]->getP()->d.setTime(time, size);
					break;

				case 2:
					cout<<"강의건물을 입력하시오";
					cin>>name;
					cout<<"호수:";
					cin>>num;
					s[i]->getP()->r.setName(name);
					s[i]->getP()->r.setNum(num);
					break;

				case 3:
					cout<<"인원수:";
					cin>>snum;
					s[i]->getP()->setSNum(snum);
					break;

				default:
					cout<<"잘못입력하셨습니다."<<endl;
				}
			}
		}
	}

	void print() {
		int i;
		cout<<"교수명:"<<name<<endl;
		cout<<"학과:"<<dept<<endl;
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

		cout<<"신청할 과목코드를 입력하시오";
		cin>>x;

		for(i=0; i<cnt; i++) {
			if(x==s[i]->getCode()) {
				cout<<"이미 신청한 과목입니다."<<endl;
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
			cout<<"없는 과목코드입니다."<<endl;
	}

	void cancel() {
		int code, i, j = -1;

		cout<<"취소할 과목 코드를 입력하시오"<<endl;
		cin>>code;

		for(i=0; i<cnt; i++) {
			if(code==s[i]->getCode()) {
				j = i;
				break;
			}
		}

		if(j==-1)
			cout<<"해당과목이 없습니다."<<endl;
		else {
			for(i=j; i<cnt-1; i++)
				s[i]=s[i+1];
			cnt--;
		}
	}

	void print() {
		int i;
		cout<<"학생명:"<<name<<endl;
		cout<<"학과:"<<dept<<endl;
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
		cout<<"1.교직원 2.교수 3.학생"<<endl;
		cin>>y;
		switch(y) {
		case 1:
			while(flag2) {
				cout<<"1.과목등록 2.과목취소 3.출력"<<endl;
				cin>>x;
				switch(x) {
				case 1:
					cout<<"과목명:";
					cin>>name;
					cout<<"과목코드:";
					cin>>code;
					s1.input(code, name);
					break;

				case 2:
					cout<<"과목코드:"<<endl;
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
			cout<<"교수명:"<<endl;
			cin>>name;
			cout<<"학과명:"<<endl;
			cin>>dept;
			f1 = new Prof(name, dept);
			while(flag2) {
				cout<<"1.과목개설 2.개설취소 3.개설정보 수정 4.개설정보출력"<<endl;
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
			cout<<"학생명:"<<endl;
			cin>>name;
			cout<<"학과명:"<<endl;
			cin>>dept;
			st = new Stud(name, dept);
			while(flag2) {
				cout<<"1.수강신청 2.신청취소 3.수강정보출력"<<endl;
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
			cout<<"잘못 입력"<<endl;
			flag1 = false;
		}
	}

	return 0;
}
