#ifndef _OA_TRIGGER_GROUP_
#define _OA_TRIGGER_GROUP_

#include "OA_Trigger.h"
#include <unordered_set>

class Trigger_Group_AND : public Trigger{
	public:

		/** Constructor
		 *	A constructor with one required paramter to link an Acutator object
		 *	@param acutator Acutator object to be linked to this Trigger
		 */
		Trigger_Group_AND(Acutator acutator);

		/** Links an Acutator to this Trigger
		 *	@param acutator Acutator object to be linked to this Trigger
		 */
		void setAcutator(Acutator acutator);

		/** Gets the current Acutator linked to this Trigger
		 *	@return Acutator object that is currently linked to this Trigger
		 */
		Acutator getAcutator();

		/** Gets the status of this Trigger's state
		 *	@return boolean that represents this Trigger's state, true if triggered, otherwise false
		 */
		bool isTriggered();
	private:

		/** Trigger List - unordered_set for fast access */
		unordered_set<Trigger> trigger_group = null;

		/** Acutator object */
		Acutator acutator;

		/** Triggered flag; true if triggered, otherwise false */
		bool triggered;
};

#endif
