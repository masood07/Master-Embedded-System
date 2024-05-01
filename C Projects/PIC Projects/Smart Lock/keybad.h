#ifndef KEYPAD_H
#define KEYPAD_H
#include "common.h"
void keypad_init(void);
unsigned char keypad_get_key(void);
#endif /* KEYPAD_H */