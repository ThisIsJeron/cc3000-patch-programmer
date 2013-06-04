/**
 ******************************************************************************
 * @file    main.h
 * @author  Spark Application Team
 * @version V1.0.0
 * @date    03-June-2013
 * @brief   Header for main.c module
 ******************************************************************************
 */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

/* Includes ------------------------------------------------------------------*/

#include "hw_config.h"
#include "evnt_handler.h"
#include "hci.h"
#include "wlan.h"
#include "nvmem.h"
#include "socket.h"
#include "netapp.h"

/* Exported types ------------------------------------------------------------*/

/* Exported constants --------------------------------------------------------*/

/* Exported macro ------------------------------------------------------------*/

/* Exported functions ------------------------------------------------------- */
void Timing_Decrement(void);
void Delay(__IO uint32_t nTime);

/* WLAN Initialize Driver */
int WLAN_Init_Driver(unsigned short cRequestPatch);
/* WLAN Application related callbacks passed to wlan_init */
void WLAN_Async_Callback(long lEventType, char *data, unsigned char length);
char *WLAN_Firmware_Patch(unsigned long *length);
char *WLAN_Driver_Patch(unsigned long *length);
char *WLAN_BootLoader_Patch(unsigned long *length);
/* WLAN Apply Patch */
void WLAN_Apply_Patch(void);

#endif /* __MAIN_H */
