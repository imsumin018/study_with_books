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
		cout<<"에너지 = "<<energy<<endl;
		cout<<"레벨 = "<<level<<endl;
	}
};

class Picachu: public Character {
public:
	Picachu() {
		hp = 30;
		level = 0;
		energy = 50;
		cout<<"피카추가 생성되었습니다."<<endl;
		printInfo();
	}

	bool eat() {
		cout<<"피카추 밥먹음"<<endl;
		energy+=10;
		return checkEnergy();
	}

	bool sleep() {
		cout<<"피카추 자는 중"<<endl;
		energy+=5;
		return checkEnergy();
	}

	bool play() {
		cout<<"피카추 노는 중"<<endl;
		energy-=20;
		hp+=5;
		levelUp();
		return checkEnergy();
	}

	bool train() {
		cout<<"피카추 수련중"<<endl;
		energy-=15;
		hp+=20;
		levelUp();
		return checkEnergy();
	}

	void levelUp() {
		if(40<=hp) {
			cout<<"피카추 레벨업"<<endl;
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

		cout<<"꼬북이가 생성되었습니다."<<endl;
		printInfo();
	}

	bool eat() {
		cout<<"꼬북이 밥먹음"<<endl;
		energy+=15;
		return checkEnergy();
	}

	bool sleep() {
		cout<<"꼬북이 자는중"<<endl;
		energy+=10;
		return checkEnergy();
	}

	bool play() {
		cout<<"꼬북이 놀이중"<<endl;
		energy-=30;
		hp+=15;
		levelUp();
		return checkEnergy();
	}

	bool train() {
		cout<<"꼬북이 수련중"<<endl;
		energy-=20;
		hp+=30;
		levelUp();
		return checkEnergy();
	}

	void levelUp() {
		if(50<=hp) {
			cout<<"피카추 레벨업"<<endl;
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

		cout<<"이상해씨가 생성되었습니다."<<endl;
		printInfo();
	}

	bool eat() {
		cout<<"이상해씨가 밥먹음"<<endl;
		energy+=5;
		return checkEnergy();
	}

	bool sleep() {
		cout<<"이상해씨가 자는중"<<endl;
		energy+=20;
		return checkEnergy();
	}

	bool play() {
		cout<<"이상해씨가 노는 중"<<endl;
		energy-=10;
		hp+=15;
		levelUp();
		return checkEnergy();
	}

	bool train() {
		cout<<"이상해씨가 수련중"<<endl;
		energy-=10;
		hp+=20;
		levelUp();
		return checkEnergy();
	}

	void levelUp() {
		if(35<=hp) {
			cout<<"이상해씨 레벨업"<<endl;
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
		cout<<"1.밥먹이기 2.잠재우기 3.놀아주기 4.운동시키기 5.종료"<<endl;
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
	cout<<"원하는 캐릭터를 선택하시오. \n1.피카추 2.꼬북이 3.이상해씨"<<endl;
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
		cout<<"잘못선택하셨습니다."<<endl;
	}
	if(character == NULL) {
		cout<<"게임을 종료합니다."<<endl;
		return -1;
	}


	PlayGame pg(character);
	while(true) {
		pg.printMenu();

		if(pg.isExit()) {
			cout<<"게임을 종료합니다.**"<<endl;

			return -1;
		}
	}

	return 0;
}



