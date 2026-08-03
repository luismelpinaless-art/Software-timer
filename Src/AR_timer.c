#include <AR_timer.h>

void timer_init(TIMER *tm, uint32_t limit){
tm->counter = 0;
tm->limit = limit;
tm->active = true;
tm->period_reached = false;
tm->event = EVT_TIMER_IDLE;
}

void timer_set(TIMER *tm){
if(tm->active == false){
	tm->active = true;
	}
}

void timer_reset(TIMER *tm){
if(tm->active == true){
	tm->active = false;
	}
}

void timer_update(TIMER *tm){
if(tm->active == false){
tm->counter = 0;
tm->event = EVT_TIMER_IDLE;
return;
}

if(tm->event == EVT_TIMER_DONE){
	tm->event = EVT_TIMER_IDLE;
}

if(tm->period_reached == true){
	tm->period_reached = false;
}

if(tm->counter < tm->limit){
	tm->counter++;
	}

if(tm->counter >= tm->limit){
	tm->counter = 0;
	tm->event = EVT_TIMER_DONE;
	}
}
