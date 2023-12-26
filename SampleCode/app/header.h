/*_____ I N C L U D E S ____________________________________________________*/
#include <stdio.h>
#include "NuMicro.h"

/*_____ D E C L A R A T I O N S ____________________________________________*/

#define RIGHT_APP_KEY                                   (0xAA55AA55)
#define VERSION                                         (0xC1C1C1C1)

typedef struct s_app_info
{
    uint32_t key;
    uint32_t version;
    uint32_t crc32;
    uint32_t size;
    uint8_t build_date[sizeof(__DATE__)];
    uint8_t build_time[sizeof(__TIME__)];
    uint8_t dummy[3];
}app_info_t;

/*_____ D E F I N I T I O N S ______________________________________________*/

/*_____ M A C R O S ________________________________________________________*/

/*_____ F U N C T I O N S __________________________________________________*/

void check_header(void);
