#include "tilstandsmaskin.h"
#include "elevio.h"

void stoppFunk(tilstand * tilstandNå){
    elevio_motorDirection(DIRN_STOP);
    elevio_stopLamp(1);
    *tilstandNå = STOPP;
}
void oppstartFunk(tilstand* tilstandNå){
    elevio_motorDirection(DIRN_DOWN);
    while (*tilstandNå == OPPSTART)
    {
        if (elevio_stopButton() == 1)
        {
            stoppFunk(tilstandNå);
        }
        if (elevio_floorSensor() == 1){
            *tilstandNå = INACTIVE;
            elevio_floorIndicator(1);
            return;
        }
    }
    
}