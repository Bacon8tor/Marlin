
#include "../../inc/MarlinConfig.h"


#if HAS_LCD_MENU && ENABLED(COOLANT_CONTROL)


    #include "../../feature/coolant_control.h"
    #include "menu_item.h"
    #include "menu_addon.h"

    void menu_coolant_control(){
        
        START_MENU();
        BACK_ITEM(MSG_MAIN);
    #if DISABLED(LASER_FEATURE)
        if(coolant.isMist) {
            ACTION_ITEM(MSG_COOLANT_MIST_OFF,coolant.disableMist);
        } else {
            ACTION_ITEM(MSG_COOLANT_MIST_ON,coolant.enableMist);
        }

        if(coolant.isFlood){
            ACTION_ITEM(MSG_COOLANT_FLOOD_OFF,coolant.disableFlood);
        }else{
            ACTION_ITEM(MSG_COOLANT_FLOOD_ON,coolant.enableFlood);
        }

    #else
        if(coolant.isMist) {
            ACTION_ITEM(MSG_COOLANT_AIR_OFF,coolant.disableMist);
        } else {
            ACTION_ITEM(MSG_COOLANT_AIR_ON,coolant.enableMist);
        }
    #endif
        END_MENU();
    }

#endif