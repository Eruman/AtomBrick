#ifndef demo_h
#define demo_h

#include <Arduino.h>

class DemoClass
{
	public:
		DemoClass();
		void blink();
	private:
		int level;
};

#endif