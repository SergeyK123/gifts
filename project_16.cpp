#include <iostream>
using namespace std;

class Attachment {
public:
	virtual void set(int x) = 0;
	void get() { cout << this->point << endl;; }
	virtual void buy() {
		if (point == 12) {
			cout << "you can buy stickers" << endl;
		}
		else if (point == 20) {
			cout << "buy souvenirs" << endl;
		}
	 }
protected:
	int point;

};

class user1 :public Attachment {
public:
	void set(int x) { this->point = x + 12; }
	

};

class user2 :public Attachment {
public:
	void set(int x) { this->point = x + 20; }
	
};

int main()
{
	user1 first;
	first.set(0);
	first.get();
	first.buy();
	user2 second;
	second.set(0);
	second.get();
	second.buy();
}
