/*
 * test.cpp
 *
 *  Created on: 2015. 3. 12.
 *      Author: Administrator
 */

/*
 * Ch15_1.cpp
 *
 *  Created on: 2015. 3. 12.
 *      Author: Administrator
 */

#include <iostream>
#include <string>
using namespace std;

class Character {
protected:
	int hp;
	int level;
	int energy;

public:
	virtual bool eat() = 0;
	virtual bool sleep() = 0;
	virtual bool play() = 0;
	virtual bool train() = 0;
	virtual void levelUp() = 0;

	bool checkEnergy() {
		if(energy <= 0 ) {
			return true;
		} else {
			return false;
		}
	}

	void printInfo() {
		cout<<"hp = "<<hp<<endl;
		cout<<"������ = "<<energy<<endl;
		cout<<"���� = "<<level<<endl;
	}
};

class Picachu: public Character {
public:
	Picachu() {
		hp = 30;
		level = 0;
		energy = 50;
		cout<<"��ī�߰� �����Ǿ����ϴ�."<<endl;
		printInfo();
	}

	bool eat() {
		cout<<"��ī�� �����"<<endl;
		energy+=10;
		return checkEnergy();
	}

	bool sleep() {
		cout<<"��ī�� �ڴ� ��"<<endl;
		energy+=5;
		return checkEnergy();
	}

	bool play() {
		cout<<"��ī�� ��� ��"<<endl;
		energy-=20;
		hp+=5;
		levelUp();
		return checkEnergy();
	}

	bool train() {
		cout<<"��ī�� ������"<<endl;
		energy-=15;
		hp+=20;
		levelUp();
		return checkEnergy();
	}

	void levelUp() {
		if(40<=hp) {
			cout<<"��ī�� ������"<<endl;
			level++;
			hp-=40;
		}
	}
};

class Gobook: public Character {
public:
	Gobook() {
		hp = 40;
		energy = 50;
		level = 0;

		cout<<"�����̰� �����Ǿ����ϴ�."<<endl;
		printInfo();
	}

	bool eat() {
		cout<<"������ �����"<<endl;
		energy+=15;
		return checkEnergy();
	}

	bool sleep() {
		cout<<"������ �ڴ���"<<endl;
		energy+=10;
		return checkEnergy();
	}

	bool play() {
		cout<<"������ ������"<<endl;
		energy-=30;
		hp+=15;
		levelUp();
		return checkEnergy();
	}

	bool train() {
		cout<<"������ ������"<<endl;
		energy-=20;
		hp+=30;
		levelUp();
		return checkEnergy();
	}

	void levelUp() {
		if(50<=hp) {
			cout<<"��ī�� ������"<<endl;
			level++;
			hp-=50;
		}
	}
};

class Lee: public Character {
public:
	Lee() {
		hp=20;
		energy=30;
		level=0;

		cout<<"�̻��ؾ��� �����Ǿ����ϴ�."<<endl;
		printInfo();
	}

	bool eat() {
		cout<<"�̻��ؾ��� �����"<<endl;
		energy+=5;
		return checkEnergy();
	}

	bool sleep() {
		cout<<"�̻��ؾ��� �ڴ���"<<endl;
		energy+=20;
		return checkEnergy();
	}

	bool play() {
		cout<<"�̻��ؾ��� ��� ��"<<endl;
		energy-=10;
		hp+=15;
		levelUp();
		return checkEnergy();
	}

	bool train() {
		cout<<"�̻��ؾ��� ������"<<endl;
		energy-=10;
		hp+=20;
		levelUp();
		return checkEnergy();
	}

	void levelUp() {
		if(35<=hp) {
			cout<<"�̻��ؾ� ������"<<endl;
			level++;
			hp-=35;
		}
	}
};

class PlayGame{
private:
	Character *character;
	int menu;
	bool exit;

public:
	PlayGame(Character *character) {
		this->character = character;
	}

	void printMenu() {
		cout<<"1.����̱� 2.������ 3.����ֱ� 4.���Ű�� 5.����"<<endl;
		cin>>menu;
		play();
	}

	void play() {
		switch(menu) {
		case 1:
			exit = character->eat();
			break;
		case 2:
			exit = character->sleep();
			break;
		case 3:
			exit = character->play();
			break;
		case 4:
			exit = character->train();
			break;
		case 5:
			exit=true;
			break;
		}
		character->printInfo();
	}

	Character* getCharacter() {
		return character;
	}

	void setCharacter(Character *character) {
		this->character = character;
	}

	int getMenu() {
		return menu;
	}

	void setMenu(int menu) {
		this->menu = menu;
	}

	bool isExit() {
		return exit;
	}

	void setExit(bool exit) {
		this->exit = exit;
	}
};

int main() {
	int x;
	Character *character = NULL;
	cout<<"���ϴ� ĳ���͸� �����Ͻÿ�. \n1.��ī�� 2.������ 3.�̻��ؾ�"<<endl;
	cin>>x;
	switch(x) {
	case 1:
		character = new Picachu();
		break;
	case 2:
		character = new Gobook();
		break;
	case 3:
		character = new Lee();
		break;
	default:
		cout<<"�߸������ϼ̽��ϴ�."<<endl;
	}
	if(character == NULL) {
		cout<<"������ �����մϴ�."<<endl;
		return -1;
	}


	PlayGame pg(character);
	while(true) {
		pg.printMenu();

		if(pg.isExit()) {
			cout<<"������ �����մϴ�.**"<<endl;

			return -1;
		}
	}

	return 0;
}



