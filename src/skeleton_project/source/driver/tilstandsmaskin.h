#pragma once

typedef enum {
    OPPSTART,
    STOPP,
    INACTIVE,
    KJOREOPP,
    KJORENED,
    IETASJE
} tilstand;

void stoppFunk(tilstand * tilstandNå);