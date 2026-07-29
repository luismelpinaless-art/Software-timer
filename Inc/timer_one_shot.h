#ifndef TIMER_ONE_SHOT_H
#define TIMER_ONE_SHOT_H
#include "stdbool.h"
#include "stdint.h"
#include "stm32f4xx_hal.h"

typedef enum{
EVT_TIMER_IDLE,
EVT_TIMER_DONE
}TIMER_EVT;

typedef struct{
uint32_t counter;
uint32_t limit;
bool active;
volatile bool period_reached;
TIMER_EVT event;
}TIMER;

void timer_init(TIMER *tm, uint32_t limit);
void timer_set(TIMER *tm);
void timer_reset(TIMER *tm);
void timer_update(TIMER *tm);

#endif
