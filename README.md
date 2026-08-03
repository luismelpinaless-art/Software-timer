# Embedded Software Timer
Software timer library in C for embedded systems.

## Status 
- V1.0.0 - One_shot
- V1.1.0 - AR_timer

## Design decisions
- 'period_reached' is a volatile variable because it is manipulated by an external interrupt (HAL Callback).
- Once the one-shot reaches its limit, the counter resets.
- The AR_timer generates "EVT_TIMER_DONE" every time the timer expires.

## Roadmap
- [x] One_shot timer
- [x] Auto Reload timer
- [ ] AR/OS modes (Auto Reload mode, one_shot mode)
- [ ] Time stamps timer + opaque pointer
