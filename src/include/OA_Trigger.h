#ifndef _OA_TRIGGER_
#define _OA_TRIGGER_

class Trigger{
	public:
		Trigger(Acutator acutator);
		void setAcutator(Acutator acutator);
		Acutator getAcutator();
		bool isTriggered();
	private:
		Acutator acutator;
		bool triggered;
};

#endif
