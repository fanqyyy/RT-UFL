/*
 * Copyright 2020 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef _UFL_ROM_API_IMXRT6XX_H_
#define _UFL_ROM_API_IMXRT6XX_H_

#include "ufl_flexspi_nor_flash_imxrt6xx.h"
/*******************************************************************************
 * Definitions
 ******************************************************************************/

#define RT6XX_ROM_API_TREE_ADDR  (0x0303f000u)

typedef struct _bootloader_tree_imxrt6xx
{
    void (*runBootloader)(void *arg);
    uint32_t version;
    const char *copyright;
    const uint32_t reserved0;
    const uint32_t reserved1;
    const uint32_t reserved2;
    const uint32_t reserved3;
    const flexspi_nor_flash_driver_imxrt6xx_t *flexspiNorDriver;
    const uint32_t reserved4;
    const uint32_t reserved5;
} bootloader_tree_imxrt6xx_t;

#define g_bootloaderTree_imxrt6xx  ((bootloader_tree_imxrt6xx_t*)(RT6XX_ROM_API_TREE_ADDR))

//!@brief FLEXSPI ROOT CLOCK soruce related definitions
enum
{
    kFlexSpiClockSrc_MainClk = 0,
    kFlexSpiClockSrc_MainPllClk,
    kFlexSpiClockSrc_Aux0PllClk,
    kFlexSpiClockSrc_FFRO_Clk,
    kFlexSpiClockSrc_Aux1PllClk,
};

/*******************************************************************************
 * API
 ******************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif /*_cplusplus*/



#if defined(__cplusplus)
}
#endif /*_cplusplus*/

#endif /* _UFL_ROM_API_IMXRT6XX_H_ */
