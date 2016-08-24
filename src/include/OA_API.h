#ifndef _OA_API_
#define _OA_API_

//start
int run_alarm();

//end
int shutdown_alarm();

//triggers
int addTrigger();
void listTriggers();
int removeTrigger();

//acutators
int addAcutator();
void listAcutators();
int removeAcutator();

#endif
