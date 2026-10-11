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
static const char *ng0 = "/home/ise/VLSI/8bit_CPU_Project/8bit_CPU_Project/Set0_AND_JZ_NOT/decoder_4to16_tb.vhd";
extern char *IEEE_P_1242562249;
extern char *STD_STANDARD;

char *ieee_p_1242562249_sub_10420449594411817395_1035706684(char *, char *, int , int );


static void work_a_3495813136_3212880686_p_0(char *t0)
{
    char t6[16];
    char t21[16];
    char t22[16];
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
    char *t23;

LAB0:    t1 = (t0 + 2584U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 5128);
    *((int *)t2) = 0;
    t3 = (t0 + 5132);
    *((int *)t3) = 15;
    t4 = 0;
    t5 = 15;

LAB4:    if (t4 <= t5)
        goto LAB5;

LAB7:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1608U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t20 = (t4 == 0);
    if (t20 != 0)
        goto LAB22;

LAB24:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 5195);
    t7 = ((STD_STANDARD) + 384);
    t8 = (t0 + 1608U);
    t9 = *((char **)t8);
    t4 = *((int *)t9);
    t8 = xsi_int_to_mem(t4);
    t10 = xsi_string_variable_get_image(t6, t7, t8);
    t12 = ((STD_STANDARD) + 984);
    t13 = (t22 + 0U);
    t23 = (t13 + 0U);
    *((int *)t23) = 1;
    t23 = (t13 + 4U);
    *((int *)t23) = 40;
    t23 = (t13 + 8U);
    *((int *)t23) = 1;
    t5 = (40 - 1);
    t17 = (t5 * 1);
    t17 = (t17 + 1);
    t23 = (t13 + 12U);
    *((unsigned int *)t23) = t17;
    t11 = xsi_base_array_concat(t11, t21, t12, (char)97, t2, t22, (char)97, t10, t6, (char)101);
    t23 = (t6 + 12U);
    t17 = *((unsigned int *)t23);
    t18 = (40U + t17);
    xsi_report(t11, t18, (unsigned char)2);

LAB23:    xsi_set_current_line(38, ng0);

LAB27:    *((char **)t1) = &&LAB28;

LAB1:    return;
LAB5:    xsi_set_current_line(23, ng0);
    t7 = (t0 + 5128);
    t8 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t6, *((int *)t7), 4);
    t9 = (t0 + 2968);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t8, 4U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(24, ng0);
    t14 = (10 * 1000LL);
    t2 = (t0 + 2392);
    xsi_process_wait(t2, t14);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB6:    t2 = (t0 + 5128);
    t4 = *((int *)t2);
    t3 = (t0 + 5132);
    t5 = *((int *)t3);
    if (t4 == t5)
        goto LAB7;

LAB21:    t15 = (t4 + 1);
    t4 = t15;
    t7 = (t0 + 5128);
    *((int *)t7) = t4;
    goto LAB4;

LAB8:    xsi_set_current_line(25, ng0);
    t2 = xsi_get_transient_memory(16U);
    memset(t2, 0, 16U);
    t3 = t2;
    memset(t3, (unsigned char)2, 16U);
    t7 = (t0 + 1488U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    memcpy(t7, t2, 16U);
    xsi_set_current_line(26, ng0);
    t2 = (t0 + 1488U);
    t3 = *((char **)t2);
    t2 = (t0 + 5128);
    t15 = *((int *)t2);
    t16 = (t15 - 15);
    t17 = (t16 * -1);
    xsi_vhdl_check_range_of_index(15, 0, -1, *((int *)t2));
    t18 = (1U * t17);
    t19 = (0 + t18);
    t7 = (t3 + t19);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 1488U);
    t7 = *((char **)t2);
    t20 = 1;
    if (16U == 16U)
        goto LAB15;

LAB16:    t20 = 0;

LAB17:    if ((!(t20)) != 0)
        goto LAB12;

LAB14:
LAB13:    goto LAB6;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(28, ng0);
    t9 = (t0 + 1608U);
    t10 = *((char **)t9);
    t15 = *((int *)t10);
    t16 = (t15 + 1);
    t9 = (t0 + 1608U);
    t11 = *((char **)t9);
    t9 = (t11 + 0);
    *((int *)t9) = t16;
    xsi_set_current_line(29, ng0);
    t2 = (t0 + 5136);
    t7 = ((STD_STANDARD) + 384);
    t8 = (t0 + 5128);
    t9 = xsi_int_to_mem(*((int *)t8));
    t10 = xsi_string_variable_get_image(t6, t7, t9);
    t12 = ((STD_STANDARD) + 984);
    t13 = (t22 + 0U);
    t23 = (t13 + 0U);
    *((int *)t23) = 1;
    t23 = (t13 + 4U);
    *((int *)t23) = 20;
    t23 = (t13 + 8U);
    *((int *)t23) = 1;
    t15 = (20 - 1);
    t17 = (t15 * 1);
    t17 = (t17 + 1);
    t23 = (t13 + 12U);
    *((unsigned int *)t23) = t17;
    t11 = xsi_base_array_concat(t11, t21, t12, (char)97, t2, t22, (char)97, t10, t6, (char)101);
    t23 = (t6 + 12U);
    t17 = *((unsigned int *)t23);
    t18 = (20U + t17);
    xsi_report(t11, t18, (unsigned char)2);
    goto LAB13;

LAB15:    t17 = 0;

LAB18:    if (t17 < 16U)
        goto LAB19;
    else
        goto LAB17;

LAB19:    t2 = (t3 + t17);
    t8 = (t7 + t17);
    if (*((unsigned char *)t2) != *((unsigned char *)t8))
        goto LAB16;

LAB20:    t17 = (t17 + 1);
    goto LAB18;

LAB22:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 5156);
    xsi_report(t2, 39U, (unsigned char)0);
    goto LAB23;

LAB25:    goto LAB2;

LAB26:    goto LAB25;

LAB28:    goto LAB26;

}


extern void work_a_3495813136_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3495813136_3212880686_p_0};
	xsi_register_didat("work_a_3495813136_3212880686", "isim/decoder_4to16_tb_isim_beh.exe.sim/work/a_3495813136_3212880686.didat");
	xsi_register_executes(pe);
}
