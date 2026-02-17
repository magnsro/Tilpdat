#include "tilstandsmaskin.h"
#include "elevio.h"

void stoppFunk(tilstand * tilstandNå){
    elevio_motorDirection(DIRN_STOP);
    elevio_stopLamp(1);
    *tilstandNå = STOPP;
}
void oppstartFunk(tilstand* tilstandNå){
    
}