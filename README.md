# Software-timer
Embedded software timer library in C.

## Status 
V1.0.0 - one_shot

# Design decisions
- 'period_reached' it's a volatile variable because it's manipulated by an external interrupt (HAL Callback).
- The event 'EVT_TIMER_DONE' auto-clears
- One_shot > reaches its limit, the counter resets

  ## Roadmap
- [x] One-shot timer
- [ ] Continuous timer
- [ ] C/D mode (continuous/discontinuous, per instance)
- [ ] Opaque pointer + function pointer (periodic callback execution)
