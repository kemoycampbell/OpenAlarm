#ifndef _OA_ACUTATOR_GROUP_
#define _OA_ACUTATOR_GROUP_

#include "OA_Acutator.h"

class Acutator_Group : public Acutator{
	public:
		Acutator_Group(){
			acutator_group = new unordered_set<Acutator>();
		}
		void activate(){

		} 
		int addAcutator(Acutator acutator){
			return -1;
		}
		int removeAcutator(Acutator acutator){
			return -1;
		}
	private:
		//collection of acutators
		unordered_set<Acutator> acutator_group = null;
};

#endif
