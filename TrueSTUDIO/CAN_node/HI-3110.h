/*
 * HI-3110.h
 *
 *  Created on: 30.04.2017
 *      Author: Julia
 */

#ifndef HI_3110_H_
#define HI_3110_H_

//REGISTERS

#define CTRL0_W 	0x14	// Control Register 0 - Write Address
#define CTRL0_R		0xD2	// Control Register 0 - Read Address
#define CTRL1_W 	0x16	// Control Register 1 - Write Address
#define CTRL1_R 	0xD4	// Control Register 1 - Read Address
#define BTR0_W		0x18	// Bit Timing Register 0 - Write Address
#define BTR0_R		0xD6	// Bit Timing Register 0 - Read Address
#define BTR1_W		0x1A	// Bit Timing Register 1 - Write Address
#define BTR1_R		0xD8	// Bit Timing Register 1 - Read Address
#define TEC_W		0X26	// Transmit Error Counter Register - Write Address
#define TEC_R		0xEC	// Transmit Error Counter Register - Read Address
#define REC_W		0X24	// Receive Error Counter Register - Write Address
#define REC_R		0xEA	// Receive Error Counter Register - Read Address
#define MESSTAT_R	0xDA	// Message Status Register - Read Address
#define ERR_R		0xDC	// Error Register - Read Address
#define INTF_R		0xDE	// Interrupt Flag Register - Read Address
#define INTE_W		0x1C	// Interrupt Enable Register - Write Address
#define INTE_R		0xE4	// Interrupt Enable Register - Read Address
#define STATF_R		0xE2	// Status Flag Register - Read Address
#define STATFE_W	0x1E	// Status Flag Enable Register - Write Address
#define STATFE_R	0xE6	// Status Flag Enable Register - Read Address
#define GPINE_W		0x22	// General Purpose Pins Enable Register - Write Address
#define GPINE_R		0xE8	// General Purpose Pins Enable Register - Read Address
#define TIMERUB_R	0xFA	// Free-Running Timer Upper Byte Register - Read Address
#define TIMERLB_R	0xFA	// Free-Running Timer Lower Byte Register - Read Address

#endif /* HI_3110_H_ */
