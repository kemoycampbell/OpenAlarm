#ifndef _OA_TRIGGER_
#define _OA_TRIGGER_

#include "OA_Acutator.h"

class Trigger{
	public:
		Trigger(Acutator acutator);
		void setAcutator(Acutator acutator);
		Acutator getAcutator();
		bool isTriggered();
		bool isActive();
		void setActive(bool active);
	private:
		Acutator acutator;
		bool triggered;
		bool active;
};

#endif
