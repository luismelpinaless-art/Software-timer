# Embedded Software Timer
Embedded software timer library in C for embedded systems.

## Status 
V1.0.0 - one_shot
V1.1.0 - AR_timer

## Design decisions
- 'period_reached' is a volatile variable because it is manipulated by an external interrupt (HAL Callback).
- once the one-shot reaches its limit, the counter resets.

  ## Roadmap
- [x] One-shot timer
- [x] Auto Reload timer
- [ ] AR/OS mode (continuous, one-shot mode)
- [ ] Opaque pointer + function pointer (periodic callback execution)
