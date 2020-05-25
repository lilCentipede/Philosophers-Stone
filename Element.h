#pragma once
#pragma warning( disable : 4250 )
class Element
{
public:
	virtual const char* getName() = 0;
	virtual bool reactwithFire();
	virtual bool reactwithAir();
	virtual bool reactwithWater();
	virtual bool reactwithEarth();
	virtual bool reactwithMetal();
	virtual bool reactwithStone();
	virtual bool reactwithEnergy();
	virtual bool reactwithSpirit();
	virtual bool reactwithGold();
	virtual bool reactwithMe(Element*) = 0;
	virtual Element* copy();
	virtual ~Element() {}

};

