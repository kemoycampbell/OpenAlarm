#ifndef _OA_ACUTATOR_
#define _OA_ACUTATOR__

#include "OA_Acutator.h"

class Acutator_Log : public OA_Acutator{
	public:
		Acutator_Log(char* message);
		void setMessage(char* message);
		char* getMessage();		
	private:
		char* message;
};
#endif
