/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
extern char *STD_STANDARD;
static const char *ng1 = "/home/ise/VLSI/8bit_CPU_Project/8bit_CPU_Project/Set0_AND_JZ_NOT/program_rom.vhd";



int work_a_0339436735_3212880686_sub_8837070944123333005_3057020925(char *t1, char *t2)
{
    char t3[128];
    char t4[24];
    char t5[16];
    char t12[8];
    int t0;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    unsigned char t16;
    char *t17;
    int t18;
    int t19;
    char *t20;
    char *t21;
    int t22;
    int t23;
    char *t24;
    int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned char t28;
    int t29;
    int t30;

LAB0:    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 3;
    t7 = (t6 + 4U);
    *((int *)t7) = 0;
    t7 = (t6 + 8U);
    *((int *)t7) = -1;
    t8 = (0 - 3);
    t9 = (t8 * -1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t7 = (t3 + 4U);
    t10 = ((STD_STANDARD) + 384);
    t11 = (t7 + 88U);
    *((char **)t11) = t10;
    t13 = (t7 + 56U);
    *((char **)t13) = t12;
    *((int *)t12) = 0;
    t14 = (t7 + 80U);
    *((unsigned int *)t14) = 4U;
    t15 = (t4 + 4U);
    t16 = (t2 != 0);
    if (t16 == 1)
        goto LAB3;

LAB2:    t17 = (t4 + 12U);
    *((char **)t17) = t5;
    t18 = 3;
    t19 = 0;

LAB4:    if (t18 >= t19)
        goto LAB5;

LAB7:    t6 = (t7 + 56U);
    t10 = *((char **)t6);
    t8 = *((int *)t10);
    t0 = t8;

LAB1:    return t0;
LAB3:    *((char **)t15) = t2;
    goto LAB2;

LAB5:    t20 = (t7 + 56U);
    t21 = *((char **)t20);
    t22 = *((int *)t21);
    t23 = (t22 * 2);
    t20 = (t7 + 56U);
    t24 = *((char **)t20);
    t20 = (t24 + 0);
    *((int *)t20) = t23;
    t6 = (t5 + 0U);
    t8 = *((int *)t6);
    t10 = (t5 + 8U);
    t22 = *((int *)t10);
    t23 = (t18 - t8);
    t9 = (t23 * t22);
    t11 = (t5 + 4U);
    t25 = *((int *)t11);
    xsi_vhdl_check_range_of_index(t8, t25, t22, t18);
    t26 = (1U * t9);
    t27 = (0 + t26);
    t13 = (t2 + t27);
    t16 = *((unsigned char *)t13);
    t28 = (t16 == (unsigned char)3);
    if (t28 != 0)
        goto LAB8;

LAB10:
LAB9:
LAB6:    if (t18 == t19)
        goto LAB7;

LAB11:    t8 = (t18 + -1);
    t18 = t8;
    goto LAB4;

LAB8:    t14 = (t7 + 56U);
    t20 = *((char **)t14);
    t29 = *((int *)t20);
    t30 = (t29 + 1);
    t14 = (t7 + 56U);
    t21 = *((char **)t14);
    t14 = (t21 + 0);
    *((int *)t14) = t30;
    goto LAB9;

LAB12:;
}

static void work_a_0339436735_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(45, ng1);

LAB3:    t1 = (t0 + 1488U);
    t2 = *((char **)t1);
    t1 = (t0 + 1032U);
    t3 = *((char **)t1);
    t4 = work_a_0339436735_3212880686_sub_8837070944123333005_3057020925(t0, t3);
    t5 = (t4 - 0);
    t6 = (t5 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t4);
    t7 = (12U * t6);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t9 = (t0 + 2864);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 12U);
    xsi_driver_first_trans_fast_port(t9);

LAB2:    t14 = (t0 + 2784);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_0339436735_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0339436735_3212880686_p_0};
	static char *se[] = {(void *)work_a_0339436735_3212880686_sub_8837070944123333005_3057020925};
	xsi_register_didat("work_a_0339436735_3212880686", "isim/program_rom_tb_isim_beh.exe.sim/work/a_0339436735_3212880686.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
