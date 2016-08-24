#include "OA_Trigger_Socket.h"
#include <iostream>

Trigger_Socket::TriggerSocket(const char* host, port){
	_host = host;
	_port = port;		
}

void Trigger_Socket::setAcutator(Acutator acutator){
	_acutator = acutator;
}

Acutator Trigger_Socket::getAcutator(){
	return _acutator;
}

bool Trigger_Socket::isTriggered(){
	return _triggered;
}

bool Trigger_Socket::isActive(){
	return _active;
}

void Trigger_Socket::setActive(bool active){
	_active = active;
}
