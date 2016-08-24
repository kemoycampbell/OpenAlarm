#ifndef _OA_TRIGGER_SOCKET_
#define _OA_TRIGGER_SOCKET_

#include "OA_Trigger.h"

class Trigger_Socket : public Trigger{
	public:
		Trigger_Socket(const char* host = "localhost", const int port = 1111);
	private:
		char* host;
		int port;
};

#endif
