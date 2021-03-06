#ifndef __CAT_H__
#define __CAT_H__
#include "Factory.h"

class Cat : public Animal {
    public :
	Cat();
	string value() const;
	int GetNumOfLegs() const;
	void Speak();
	void Free();
	Cat* clone() const;
	void setCnt(int val);
	void showCnt();
};

#endif
