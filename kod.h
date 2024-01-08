#pragma once
#include <iostream>
#include <string>
using namespace std;
const short slotCount = 10;
class Snack  {
public:
	Snack();
	~Snack();
	Snack(string name);
private:
	string snake_name;
};
class SnackSlot   {
public:
	SnackSlot();
	~SnackSlot();
	SnackSlot(short max_slot);
	void addSnack(Snack* k);
private:
	short summ_snake;
	short max_count_snack;
	Snack* slot_name= nullptr;
};
class VendingMachine {
public:
	VendingMachine();
	~VendingMachine();
	VendingMachine(short max_slot);
	void addSlot(SnackSlot* slot);
	short getEmptySlotsCount();
private:
	short slot_Count;
	SnackSlot* slot_masiv_caunt = nullptr;
};

