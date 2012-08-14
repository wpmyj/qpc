/*****************************************************************************
* Product: BSP for DPP example on the Renesas YRDKRX62N board
* Last Updated for Version: 4.3.00
* Date of the Last Update:  Nov 23, 2011
*
*                    Q u a n t u m     L e a P s
*                    ---------------------------
*                    innovating embedded systems
*
* Copyright (C) 2002-2011 Quantum Leaps, LLC. All rights reserved.
*
* This software may be distributed and modified under the terms of the GNU
* General Public License version 2 (GPL) as published by the Free Software
* Foundation and appearing in the file GPL.TXT included in the packaging of
* this file. Please note that GPL Section 2[b] requires that all works based
* on this software must also be made publicly available under the terms of
* the GPL ("Copyleft").
*
* Alternatively, this software may be distributed and modified under the
* terms of Quantum Leaps commercial licenses, which expressly supersede
* the GPL and are specifically designed for licensees interested in
* retaining the proprietary status of their code.
*
* Contact information:
* Quantum Leaps Web site:  http://www.quantum-leaps.com
* e-mail:                  info@quantum-leaps.com
*****************************************************************************/
#ifndef bsp_h
#define bsp_h
                                                  /* system clock tick rate */
#define BSP_TICKS_PER_SEC     50U

void BSP_init(void);
void BSP_busyDelay(void);
void BSP_displyPhilStat(uint8_t n, char const *stat);

#ifdef Q_SPY

    extern QSTimeCtr QS_tickTime_;
    extern QSTimeCtr QS_tickPeriod_;

    extern uint8_t const QS_Excep_CMTU0_CMT0;    /* identifies event source */
    extern uint8_t const QS_Excep_IRQ8;          /* identifies event source */
    extern uint8_t const QS_Excep_IRQ9;          /* identifies event source */
    extern uint8_t const QS_Excep_IRQ10;         /* identifies event source */

#endif                                                             /* Q_SPY */

#endif                                                             /* bsp_h */
