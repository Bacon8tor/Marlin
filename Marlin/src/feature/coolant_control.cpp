/**
    * ADDED by Bacon8tor
 */

/**
 * feature/coolant_control.cpp
 */

#include "../inc/MarlinConfig.h"

#if ENABLED(COOLANT_CONTROL)
    #include "coolant_control.h"
#endif 

CoolantControl coolant;
bool CoolantControl::isFlood = COOLANT_FLOOD_INVERT;
bool CoolantControl::isMist = COOLANT_MIST_INVERT;

void CoolantControl::init(){
   #if ENABLED(COOLANT_MIST)
    OUT_WRITE(COOLANT_MIST_PIN, COOLANT_MIST_INVERT);   // Init Mist Coolant OFF
  #endif
  #if ENABLED(COOLANT_FLOOD)
    OUT_WRITE(COOLANT_FLOOD_PIN, COOLANT_FLOOD_INVERT); // Init Flood Coolant OFF
  #endif

    
}
