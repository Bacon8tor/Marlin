/**
    * ADDED by Bacon8tor
 */
#pragma once

/**
 * feature/coolant_control.h
 * Support for Coolant/Mist Control
 */

#include "../inc/MarlinConfig.h"


class CoolantControl {
public:

static bool isFlood,isMist;

static void init();

static inline void disableMist() { isMist = false; }
static inline void enableMist() { isMist = true; }
static inline void disableFlood() { isFlood = false; }
static inline void enableFlood() { isFlood = true; }

};

extern CoolantControl coolant;
