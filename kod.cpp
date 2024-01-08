#include "kod.h"
Snack::Snack() {};
Snack::~Snack(){};
Snack::Snack(string name) {
	snake_name = name;
};
SnackSlot::SnackSlot() {};
SnackSlot::~SnackSlot() {};
SnackSlot::SnackSlot(short max_snack) {
	summ_snake = 0;
	max_count_snack = max_snack;
	slot_name = new Snack[max_snack]();
};
VendingMachine::VendingMachine() {};
VendingMachine::~VendingMachine() {};
VendingMachine::VendingMachine(short max_slot) {
	slot_Count = max_slot;
	slot_masiv_caunt = new SnackSlot[max_slot]();
}
void SnackSlot::addSnack(Snack* name_snack) {
	if (summ_snake <= max_count_snack) {
		slot_name[++summ_snake] = *name_snack; 
	}
	else
		cout << "слот полон";
}
void VendingMachine::addSlot(SnackSlot* slot) {
	if (slot_Count > 0) {
		slot_masiv_caunt[--slot_Count] = *slot;
	}
	else
		cout << "в автомате нет места для слотов";
}
short VendingMachine::getEmptySlotsCount() {
	return slot_Count;
};



