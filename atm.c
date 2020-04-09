#include "atm.h"
unsigned int get_money(unsigned short int amount)
{
  unsigned int notes = 0;
  unsigned short int amount_copy = amount;
  int money_list[8] = {1, 5, 10, 20, 50, 100, 500, 2000};
  for (int list_index = 7; list_index >=0 ; list_index--)
  {
notes=notes << 4 |  (amount_copy / money_list[list_index]);
    amount_copy %= money_list[list_index];
  }
  return notes;
}