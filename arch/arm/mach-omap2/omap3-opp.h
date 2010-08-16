#ifndef __OMAP3_OPP_H_
#define __OMAP3_OPP_H_

#include <plat/omap-pm.h>

/* MPU speeds */
#define S1350M  1350000000
#define S1325M  1325000000
#define S1300M  1300000000 
#define S1298M  1298000000
#define S1288M  1288000000 
#define S1266M  1266000000 
#define S1233M  1233000000
#define S1250M  1250000000
#define S1225M  1225000000
#define S1200M  1200000000
#define S1150M  1150000000
#define S1125M  1125000000
#define S1100M  1100000000
#define S1050M  1050000000
#define S1000M  1000000000
#define S950M   950000000
#define S900M   900000000
#define S850M   850000000
#define S800M   800000000
#define S750M	750000000
#define S700M   700000000
#define S650M   650000000
#define S600M   600000000
#define S550M   550000000
#define S500M   500000000
#define S450M   450000000
#define S400M   400000000
#define S350M   350000000
#define S300M   300000000
#define S250M   250000000
#define S125M   125000000

/* DSP speeds */
#define S430M   430000000
#define S400M   400000000
#define S360M   360000000
#define S180M   180000000
#define S90M    90000000

/* L3 speeds */
#define S83M    83000000
#define S166M   166000000

static struct omap_opp omap3_mpu_rate_table[] = {	
 	/*OPP1*/
	{S300M, VDD1_OPP1, 0x24},
	/*OPP2*/
	{S350M, VDD1_OPP2, 0x26},
	/*OPP3*/
	{S550M, VDD1_OPP3, 0x30},
	/*OPP4*/
	{S750M, VDD1_OPP4, 0x40},
	/*OPP5*/
	{S950M, VDD1_OPP5, 0x46},
};

static struct omap_opp omap3_l3_rate_table[] = {
	{0, 0, 0},
	/*OPP1*/
	{0, VDD2_OPP1, 0x1E},
	/*OPP2*/
	{S83M, VDD2_OPP2, 0x24},
	/*OPP3*/
	{S166M, VDD2_OPP3, 0x2C},
};

static struct omap_opp omap3_dsp_rate_table[] = {
	{0, 0, 0},
	/*OPP1*/
	{S90M, VDD1_OPP1, 0x1E},
	/*OPP2*/
	{S180M, VDD1_OPP2, 0x26},
	/*OPP3*/
	{S360M, VDD1_OPP3, 0x30},
	/*OPP4*/
	{S400M, VDD1_OPP4, 0x36},
	/*OPP5*/
	{S430M, VDD1_OPP5, 0x3C},
};

#endif
