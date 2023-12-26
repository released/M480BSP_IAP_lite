/*_____ I N C L U D E S ____________________________________________________*/
#include <stdio.h>
#include "NuMicro.h"

#include "header.h"
/*_____ D E C L A R A T I O N S ____________________________________________*/

// volatile const app_info_t __attribute__((section(".ARM.__at_0x0003F000"))) c_app_info = 
volatile const app_info_t c_app_info = 
{
    RIGHT_APP_KEY,
    VERSION,
    0xFFFFFFFF,
    0xFFFFFFFF,
    __DATE__,
    __TIME__,
    0xFF,
    0xFF,
    0xFF
};


void check_header(void)
{
    printf("key : 0x%08X\r\n" , c_app_info.key);
    printf("version : 0x%08X\r\n" , c_app_info.version);
    printf("crc32 : 0x%08X\r\n" , c_app_info.crc32);
    printf("size : 0x%08X\r\n" , c_app_info.size);
    printf("date : %s\r\n" , c_app_info.build_date);
    printf("time : %s\r\n" , c_app_info.build_time);
    printf("dummy0 : 0x%02X\r\n" , c_app_info.dummy[0]);
    printf("dummy1 : 0x%02X\r\n" , c_app_info.dummy[1]);
    printf("dummy2 : 0x%02X\r\n" , c_app_info.dummy[2]);
}


/*_____ D E F I N I T I O N S ______________________________________________*/

/*_____ M A C R O S ________________________________________________________*/

/*_____ F U N C T I O N S __________________________________________________*/


