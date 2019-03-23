#ifndef BLINK_H
#define BLINK_H

#define LED_GREEN 12
#define LED_ORANGE 13
#define LED_RED 14
#define LED_BLUE 15
#define Button 0

void blink(unsigned int led, unsigned int btn);
void blink_count(unsigned int led, unsigned int count);

#endif
