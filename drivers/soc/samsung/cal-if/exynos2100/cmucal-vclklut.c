#include "../cmucal.h"
#include "cmucal-vclklut.h"


/* DVFS VCLK -> LUT Parameter List */
unsigned int vdd_mif_od_lut_params[] = {
	4266000, 4266000, 
};
unsigned int vdd_mif_nm_lut_params[] = {
	3732000, 3732000, 
};
unsigned int vdd_mif_ud_lut_params[] = {
	2704000, 2704000, 
};
unsigned int vdd_mif_sud_lut_params[] = {
	1420000, 1420000, 
};
unsigned int vdd_mif_uud_lut_params[] = {
	710000, 710000, 
};
unsigned int vdd_cam_nm_lut_params[] = {
	0, 1, 1200000, 4, 58, 2, 7, 
};
unsigned int vdd_cam_sud_lut_params[] = {
	2, 5, 1200000, 0, 0, 2, 7, 
};
unsigned int vdd_cam_ud_lut_params[] = {
	1, 3, 1200000, 0, 0, 2, 7, 
};
unsigned int vdd_cam_uud_lut_params[] = {
	8, 7, 1200000, 4, 58, 8, 3, 
};
/* OVERCLOCK: CPU CLUSTER 2 (Core X1) Boosted from 2.95GHz to 3.10GHz */
unsigned int vdd_cpucl2_sod_lut_params[] = {
	3100000, 
};
unsigned int vdd_cpucl2_od_lut_params[] = {
	2500000, 
};
unsigned int vdd_cpucl2_nm_lut_params[] = {
	2000000, 
};
unsigned int vdd_cpucl2_ud_lut_params[] = {
	1400000, 
};
unsigned int vdd_cpucl2_sud_lut_params[] = {
	700000, 
};
unsigned int vdd_cpucl2_uud_lut_params[] = {
	300000, 
};
unsigned int vdd_cpucl0_sod_lut_params[] = {
	2300000, 2000000, 1, 
};
unsigned int vdd_cpucl0_od_lut_params[] = {
	2050000, 1750000, 1, 
};
unsigned int vdd_cpucl0_nm_lut_params[] = {
	1800000, 1400000, 0, 
};
unsigned int vdd_cpucl0_ud_lut_params[] = {
	1300000, 1000000, 0, 
};
unsigned int vdd_cpucl0_sud_lut_params[] = {
	700000, 500000, 0, 
};
unsigned int vdd_cpucl0_uud_lut_params[] = {
	300000, 180000, 0, 
};
/* OVERCLOCK: CPU CLUSTER 1 (Cortex-A78) Boosted from 2.80GHz to 2.95GHz */
unsigned int vdd_cpucl1_sod_lut_params[] = {
	2950000, 
};
unsigned int vdd_cpucl1_od_lut_params[] = {
	2400000, 
};
unsigned int vdd_cpucl1_nm_lut_params[] = {
	2000000, 
};
unsigned int vdd_cpucl1_ud_lut_params[] = {
	1400000, 
};
unsigned int vdd_cpucl1_sud_lut_params[] = {
	700000, 
};
unsigned int vdd_cpucl1_uud_lut_params[] = {
	300000, 
};
