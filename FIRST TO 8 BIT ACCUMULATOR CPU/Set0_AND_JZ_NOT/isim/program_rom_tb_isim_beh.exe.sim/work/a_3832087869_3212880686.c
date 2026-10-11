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
static const char *ng0 = "/home/ise/VLSI/8bit_CPU_Project/8bit_CPU_Project/Set0_AND_JZ_NOT/program_rom_tb.vhd";
extern char *IEEE_P_1242562249;
extern char *STD_STANDARD;

char *ieee_p_1242562249_sub_10420449594411817395_1035706684(char *, char *, int , int );


static void work_a_3832087869_3212880686_p_0(char *t0)
{
    char t6[16];
    char t24[16];
    char t25[16];
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    int64 t14;
    int t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned char t20;
    unsigned int t21;
    int t22;
    int t23;
    char *t26;

LAB0:    t1 = (t0 + 2584U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 5652);
    *((int *)t2) = 0;
    t3 = (t0 + 5656);
    *((int *)t3) = 15;
    t4 = 0;
    t5 = 15;

LAB4:    if (t4 <= t5)
        goto LAB5;

LAB7:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1608U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t20 = (t4 == 0);
    if (t20 != 0)
        goto LAB22;

LAB24:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 5715);
    t7 = ((STD_STANDARD) + 384);
    t8 = (t0 + 1608U);
    t9 = *((char **)t8);
    t4 = *((int *)t9);
    t8 = xsi_int_to_mem(t4);
    t10 = xsi_string_variable_get_image(t6, t7, t8);
    t12 = ((STD_STANDARD) + 984);
    t13 = (t25 + 0U);
    t26 = (t13 + 0U);
    *((int *)t26) = 1;
    t26 = (t13 + 4U);
    *((int *)t26) = 38;
    t26 = (t13 + 8U);
    *((int *)t26) = 1;
    t5 = (38 - 1);
    t17 = (t5 * 1);
    t17 = (t17 + 1);
    t26 = (t13 + 12U);
    *((unsigned int *)t26) = t17;
    t11 = xsi_base_array_concat(t11, t24, t12, (char)97, t2, t25, (char)97, t10, t6, (char)101);
    t26 = (t6 + 12U);
    t17 = *((unsigned int *)t26);
    t18 = (38U + t17);
    xsi_report(t11, t18, (unsigned char)2);

LAB23:    xsi_set_current_line(45, ng0);

LAB27:    *((char **)t1) = &&LAB28;

LAB1:    return;
LAB5:    xsi_set_current_line(32, ng0);
    t7 = (t0 + 5652);
    t8 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t6, *((int *)t7), 4);
    t9 = (t0 + 2968);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t8, 4U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(33, ng0);
    t14 = (10 * 1000LL);
    t2 = (t0 + 2392);
    xsi_process_wait(t2, t14);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB6:    t2 = (t0 + 5652);
    t4 = *((int *)t2);
    t3 = (t0 + 5656);
    t5 = *((int *)t3);
    if (t4 == t5)
        goto LAB7;

LAB21:    t15 = (t4 + 1);
    t4 = t15;
    t7 = (t0 + 5652);
    *((int *)t7) = t4;
    goto LAB4;

LAB8:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 1488U);
    t7 = *((char **)t2);
    t2 = (t0 + 5652);
    t15 = *((int *)t2);
    t16 = (t15 - 0);
    t17 = (t16 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, *((int *)t2));
    t18 = (12U * t17);
    t19 = (0 + t18);
    t8 = (t7 + t19);
    t20 = 1;
    if (12U == 12U)
        goto LAB15;

LAB16:    t20 = 0;

LAB17:    if ((!(t20)) != 0)
        goto LAB12;

LAB14:
LAB13:    goto LAB6;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(35, ng0);
    t11 = (t0 + 1608U);
    t12 = *((char **)t11);
    t22 = *((int *)t12);
    t23 = (t22 + 1);
    t11 = (t0 + 1608U);
    t13 = *((char **)t11);
    t11 = (t13 + 0);
    *((int *)t11) = t23;
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 5660);
    t7 = ((STD_STANDARD) + 384);
    t8 = (t0 + 5652);
    t9 = xsi_int_to_mem(*((int *)t8));
    t10 = xsi_string_variable_get_image(t6, t7, t9);
    t12 = ((STD_STANDARD) + 984);
    t13 = (t25 + 0U);
    t26 = (t13 + 0U);
    *((int *)t26) = 1;
    t26 = (t13 + 4U);
    *((int *)t26) = 18;
    t26 = (t13 + 8U);
    *((int *)t26) = 1;
    t15 = (18 - 1);
    t17 = (t15 * 1);
    t17 = (t17 + 1);
    t26 = (t13 + 12U);
    *((unsigned int *)t26) = t17;
    t11 = xsi_base_array_concat(t11, t24, t12, (char)97, t2, t25, (char)97, t10, t6, (char)101);
    t26 = (t6 + 12U);
    t17 = *((unsigned int *)t26);
    t18 = (18U + t17);
    xsi_report(t11, t18, (unsigned char)2);
    goto LAB13;

LAB15:    t21 = 0;

LAB18:    if (t21 < 12U)
        goto LAB19;
    else
        goto LAB17;

LAB19:    t9 = (t3 + t21);
    t10 = (t8 + t21);
    if (*((unsigned char *)t9) != *((unsigned char *)t10))
        goto LAB16;

LAB20:    t21 = (t21 + 1);
    goto LAB18;

LAB22:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 5678);
    xsi_report(t2, 37U, (unsigned char)0);
    goto LAB23;

LAB25:    goto LAB2;

LAB26:    goto LAB25;

LAB28:    goto LAB26;

}


extern void work_a_3832087869_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3832087869_3212880686_p_0};
	xsi_register_didat("work_a_3832087869_3212880686", "isim/program_rom_tb_isim_beh.exe.sim/work/a_3832087869_3212880686.didat");
	xsi_register_executes(pe);
}
