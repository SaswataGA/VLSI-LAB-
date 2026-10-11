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
static const char *ng0 = "/home/ise/VLSI/8bit_CPU_Project/8bit_CPU_Project/Set0_AND_JZ_NOT/program_counter_tb.vhd";
extern char *IEEE_P_2592010699;
extern char *STD_STANDARD;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_2964799144_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int64 t10;

LAB0:    t1 = (t0 + 3104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);

LAB4:    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (!(t4));
    if (t5 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(32, ng0);

LAB18:    *((char **)t1) = &&LAB19;

LAB1:    return;
LAB5:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 3736);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(29, ng0);
    t10 = (10 * 1000LL);
    t2 = (t0 + 2912);
    xsi_process_wait(t2, t10);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB6:;
LAB8:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 3736);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(30, ng0);
    t10 = (10 * 1000LL);
    t2 = (t0 + 2912);
    xsi_process_wait(t2, t10);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    goto LAB4;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    goto LAB2;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

}

void work_a_2964799144_3212880686_sub_3456417201998323431_134673997(char *t0, char *t1, char *t2, char *t3, char *t4)
{
    char t6[40];
    char t7[16];
    char t37[16];
    char t38[16];
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    unsigned char t12;
    char *t13;
    char *t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned char t32;
    int64 t33;
    unsigned int t34;
    unsigned int t35;
    int t36;

LAB0:    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 3;
    t9 = (t8 + 4U);
    *((int *)t9) = 0;
    t9 = (t8 + 8U);
    *((int *)t9) = -1;
    t10 = (0 - 3);
    t11 = (t10 * -1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    t9 = (t6 + 4U);
    t12 = (t2 != 0);
    if (t12 == 1)
        goto LAB3;

LAB2:    t13 = (t6 + 12U);
    *((char **)t13) = t7;
    t14 = (t6 + 20U);
    t15 = (t3 != 0);
    if (t15 == 1)
        goto LAB5;

LAB4:    t16 = (t6 + 28U);
    *((char **)t16) = t4;
    t17 = (t0 + 992U);
    xsi_add_dynamic_wait(t1, t17, -1, -1);

LAB9:    t18 = (t1 + 224U);
    t18 = *((char **)t18);
    xsi_wp_set_status(t18, 1);
    t19 = (t1 + 88U);
    t20 = *((char **)t19);
    t21 = (t20 + 1888U);
    *((unsigned int *)t21) = 1U;
    t22 = (t1 + 88U);
    t23 = *((char **)t22);
    t24 = (t23 + 0U);
    getcontext(t24);
    t25 = (t1 + 88U);
    t26 = *((char **)t25);
    t27 = (t26 + 1888U);
    t11 = *((unsigned int *)t27);
    if (t11 == 1)
        goto LAB10;

LAB11:    t28 = (t1 + 88U);
    t29 = *((char **)t28);
    t30 = (t29 + 1888U);
    *((unsigned int *)t30) = 3U;

LAB7:
LAB8:    t31 = (t0 + 992U);
    t32 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t31, 0U, 0U);
    if (t32 == 1)
        goto LAB6;
    else
        goto LAB9;

LAB3:    *((char **)t9) = t2;
    goto LAB2;

LAB5:    *((char **)t14) = t3;
    goto LAB4;

LAB6:    xsi_remove_dynamic_wait(t1, t17);
    t33 = (2 * 1000LL);
    xsi_process_wait(t1, t33);

LAB15:    t8 = (t1 + 88U);
    t17 = *((char **)t8);
    t18 = (t17 + 1888U);
    *((unsigned int *)t18) = 1U;
    t19 = (t1 + 88U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    getcontext(t21);
    t22 = (t1 + 88U);
    t23 = *((char **)t22);
    t24 = (t23 + 1888U);
    t11 = *((unsigned int *)t24);
    if (t11 == 1)
        goto LAB16;

LAB17:    t25 = (t1 + 88U);
    t26 = *((char **)t25);
    t27 = (t26 + 1888U);
    *((unsigned int *)t27) = 3U;

LAB13:
LAB14:
LAB12:    t8 = (t0 + 1672U);
    t17 = *((char **)t8);
    t8 = (t0 + 6592U);
    t18 = (t8 + 12U);
    t11 = *((unsigned int *)t18);
    t11 = (t11 * 1U);
    t19 = (t7 + 12U);
    t34 = *((unsigned int *)t19);
    t34 = (t34 * 1U);
    t12 = 1;
    if (t11 == t34)
        goto LAB21;

LAB22:    t12 = 0;

LAB23:    if ((!(t12)) != 0)
        goto LAB18;

LAB20:
LAB19:
LAB1:    return;
LAB10:    xsi_saveStackAndSuspend(t1);
    goto LAB11;

LAB16:    xsi_saveStackAndSuspend(t1);
    goto LAB17;

LAB18:    t22 = (t0 + 2128U);
    t23 = *((char **)t22);
    t10 = *((int *)t23);
    t36 = (t10 + 1);
    t22 = (t0 + 2128U);
    t24 = *((char **)t22);
    t22 = (t24 + 0);
    *((int *)t22) = t36;
    t8 = (t0 + 6632);
    t19 = ((STD_STANDARD) + 984);
    t20 = (t38 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = 1;
    t21 = (t20 + 4U);
    *((int *)t21) = 6;
    t21 = (t20 + 8U);
    *((int *)t21) = 1;
    t10 = (6 - 1);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t11;
    t18 = xsi_base_array_concat(t18, t37, t19, (char)97, t8, t38, (char)97, t3, t4, (char)101);
    t21 = (t4 + 12U);
    t11 = *((unsigned int *)t21);
    t11 = (t11 * 1U);
    t34 = (6U + t11);
    xsi_report(t18, t34, (unsigned char)2);
    goto LAB19;

LAB21:    t35 = 0;

LAB24:    if (t35 < t11)
        goto LAB25;
    else
        goto LAB23;

LAB25:    t20 = (t17 + t35);
    t21 = (t2 + t35);
    if (*((unsigned char *)t20) != *((unsigned char *)t21))
        goto LAB22;

LAB26:    t35 = (t35 + 1);
    goto LAB24;

}

static void work_a_2964799144_3212880686_p_1(char *t0)
{
    char t9[16];
    char t13[16];
    char t15[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t10;
    unsigned int t11;
    unsigned char t12;
    char *t14;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;

LAB0:    t1 = (t0 + 3352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 3800);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 3864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 6638);
    t4 = (t0 + 3928);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 3160);
    t3 = (t0 + 6642);
    t5 = (t0 + 6646);
    t7 = (t9 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 1;
    t8 = (t7 + 4U);
    *((int *)t8) = 22;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t10 = (22 - 1);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t11;
    work_a_2964799144_3212880686_sub_3456417201998323431_134673997(t0, t2, t3, t5, t9);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 3800);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 3160);
    t3 = (t0 + 6668);
    t5 = (t0 + 6672);
    t7 = (t9 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 1;
    t8 = (t7 + 4U);
    *((int *)t8) = 7;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t10 = (7 - 1);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t11;
    work_a_2964799144_3212880686_sub_3456417201998323431_134673997(t0, t2, t3, t5, t9);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 3160);
    t3 = (t0 + 6679);
    t5 = (t0 + 6683);
    t7 = (t9 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 1;
    t8 = (t7 + 4U);
    *((int *)t8) = 7;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t10 = (7 - 1);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t11;
    work_a_2964799144_3212880686_sub_3456417201998323431_134673997(t0, t2, t3, t5, t9);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 3160);
    t3 = (t0 + 6690);
    t5 = (t0 + 6694);
    t7 = (t9 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 1;
    t8 = (t7 + 4U);
    *((int *)t8) = 7;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t10 = (7 - 1);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t11;
    work_a_2964799144_3212880686_sub_3456417201998323431_134673997(t0, t2, t3, t5, t9);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 3160);
    t3 = (t0 + 6701);
    t5 = (t0 + 6705);
    t7 = (t9 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 1;
    t8 = (t7 + 4U);
    *((int *)t8) = 7;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t10 = (7 - 1);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t11;
    work_a_2964799144_3212880686_sub_3456417201998323431_134673997(t0, t2, t3, t5, t9);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 3160);
    t3 = (t0 + 6712);
    t5 = (t0 + 6716);
    t7 = (t9 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 1;
    t8 = (t7 + 4U);
    *((int *)t8) = 7;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t10 = (7 - 1);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t11;
    work_a_2964799144_3212880686_sub_3456417201998323431_134673997(t0, t2, t3, t5, t9);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 3160);
    t3 = (t0 + 6723);
    t5 = (t0 + 6727);
    t7 = (t9 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 1;
    t8 = (t7 + 4U);
    *((int *)t8) = 7;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t10 = (7 - 1);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t11;
    work_a_2964799144_3212880686_sub_3456417201998323431_134673997(t0, t2, t3, t5, t9);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 3160);
    t3 = (t0 + 6734);
    t5 = (t0 + 6738);
    t7 = (t9 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 1;
    t8 = (t7 + 4U);
    *((int *)t8) = 7;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t10 = (7 - 1);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t11;
    work_a_2964799144_3212880686_sub_3456417201998323431_134673997(t0, t2, t3, t5, t9);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 3160);
    t3 = (t0 + 6745);
    t5 = (t0 + 6749);
    t7 = (t9 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 1;
    t8 = (t7 + 4U);
    *((int *)t8) = 7;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t10 = (7 - 1);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t11;
    work_a_2964799144_3212880686_sub_3456417201998323431_134673997(t0, t2, t3, t5, t9);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 3160);
    t3 = (t0 + 6756);
    t5 = (t0 + 6760);
    t7 = (t9 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 1;
    t8 = (t7 + 4U);
    *((int *)t8) = 7;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t10 = (7 - 1);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t11;
    work_a_2964799144_3212880686_sub_3456417201998323431_134673997(t0, t2, t3, t5, t9);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 3160);
    t3 = (t0 + 6767);
    t5 = (t0 + 6771);
    t7 = (t9 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 1;
    t8 = (t7 + 4U);
    *((int *)t8) = 8;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t10 = (8 - 1);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t11;
    work_a_2964799144_3212880686_sub_3456417201998323431_134673997(t0, t2, t3, t5, t9);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3160);
    t3 = (t0 + 6779);
    t5 = (t0 + 6783);
    t7 = (t9 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 1;
    t8 = (t7 + 4U);
    *((int *)t8) = 8;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t10 = (8 - 1);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t11;
    work_a_2964799144_3212880686_sub_3456417201998323431_134673997(t0, t2, t3, t5, t9);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 3160);
    t3 = (t0 + 6791);
    t5 = (t0 + 6795);
    t7 = (t9 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 1;
    t8 = (t7 + 4U);
    *((int *)t8) = 8;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t10 = (8 - 1);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t11;
    work_a_2964799144_3212880686_sub_3456417201998323431_134673997(t0, t2, t3, t5, t9);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 3160);
    t3 = (t0 + 6803);
    t5 = (t0 + 6807);
    t7 = (t9 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 1;
    t8 = (t7 + 4U);
    *((int *)t8) = 8;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t10 = (8 - 1);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t11;
    work_a_2964799144_3212880686_sub_3456417201998323431_134673997(t0, t2, t3, t5, t9);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 3160);
    t3 = (t0 + 6815);
    t5 = (t0 + 6819);
    t7 = (t9 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 1;
    t8 = (t7 + 4U);
    *((int *)t8) = 8;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t10 = (8 - 1);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t11;
    work_a_2964799144_3212880686_sub_3456417201998323431_134673997(t0, t2, t3, t5, t9);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3160);
    t3 = (t0 + 6827);
    t5 = (t0 + 6831);
    t7 = (t9 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 1;
    t8 = (t7 + 4U);
    *((int *)t8) = 8;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t10 = (8 - 1);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t11;
    work_a_2964799144_3212880686_sub_3456417201998323431_134673997(t0, t2, t3, t5, t9);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 3160);
    t3 = (t0 + 6839);
    t5 = (t0 + 6843);
    t7 = (t9 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 1;
    t8 = (t7 + 4U);
    *((int *)t8) = 12;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t10 = (12 - 1);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t11;
    work_a_2964799144_3212880686_sub_3456417201998323431_134673997(t0, t2, t3, t5, t9);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 3864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 6855);
    t4 = (t0 + 3928);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 3160);
    t3 = (t0 + 6859);
    t5 = (t0 + 6863);
    t7 = (t9 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 1;
    t8 = (t7 + 4U);
    *((int *)t8) = 9;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t10 = (9 - 1);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t11;
    work_a_2964799144_3212880686_sub_3456417201998323431_134673997(t0, t2, t3, t5, t9);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 3864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 3160);
    t3 = (t0 + 6872);
    t5 = (t0 + 6876);
    t7 = (t9 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 1;
    t8 = (t7 + 4U);
    *((int *)t8) = 16;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t10 = (16 - 1);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t11;
    work_a_2964799144_3212880686_sub_3456417201998323431_134673997(t0, t2, t3, t5, t9);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 3864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 6892);
    t4 = (t0 + 3928);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 3160);
    t3 = (t0 + 6896);
    t5 = (t0 + 6900);
    t7 = (t9 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 1;
    t8 = (t7 + 4U);
    *((int *)t8) = 16;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t10 = (16 - 1);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t11;
    work_a_2964799144_3212880686_sub_3456417201998323431_134673997(t0, t2, t3, t5, t9);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 6916);
    t4 = (t0 + 3928);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 3160);
    t3 = (t0 + 6920);
    t5 = (t0 + 6924);
    t7 = (t9 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 1;
    t8 = (t7 + 4U);
    *((int *)t8) = 9;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t10 = (9 - 1);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t11;
    work_a_2964799144_3212880686_sub_3456417201998323431_134673997(t0, t2, t3, t5, t9);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 3864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 3160);
    t3 = (t0 + 6933);
    t5 = (t0 + 6937);
    t7 = (t9 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 1;
    t8 = (t7 + 4U);
    *((int *)t8) = 21;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t10 = (21 - 1);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t11;
    work_a_2964799144_3212880686_sub_3456417201998323431_134673997(t0, t2, t3, t5, t9);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 6958);
    t4 = (t0 + 3928);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3800);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 3160);
    t3 = (t0 + 6962);
    t5 = (t0 + 6966);
    t7 = (t9 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 1;
    t8 = (t7 + 4U);
    *((int *)t8) = 27;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t10 = (27 - 1);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t11;
    work_a_2964799144_3212880686_sub_3456417201998323431_134673997(t0, t2, t3, t5, t9);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 2128U);
    t3 = *((char **)t2);
    t10 = *((int *)t3);
    t12 = (t10 == 0);
    if (t12 != 0)
        goto LAB4;

LAB6:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 7034);
    t4 = ((STD_STANDARD) + 384);
    t5 = (t0 + 2128U);
    t6 = *((char **)t5);
    t10 = *((int *)t6);
    t5 = xsi_int_to_mem(t10);
    t7 = xsi_string_variable_get_image(t9, t4, t5);
    t14 = ((STD_STANDARD) + 984);
    t16 = (t15 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = 1;
    t17 = (t16 + 4U);
    *((int *)t17) = 42;
    t17 = (t16 + 8U);
    *((int *)t17) = 1;
    t18 = (42 - 1);
    t11 = (t18 * 1);
    t11 = (t11 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t11;
    t8 = xsi_base_array_concat(t8, t13, t14, (char)97, t2, t15, (char)97, t7, t9, (char)101);
    t17 = (t9 + 12U);
    t11 = *((unsigned int *)t17);
    t19 = (42U + t11);
    xsi_report(t8, t19, (unsigned char)2);

LAB5:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 3992);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(94, ng0);

LAB9:    *((char **)t1) = &&LAB10;

LAB1:    return;
LAB4:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 6993);
    xsi_report(t2, 41U, (unsigned char)0);
    goto LAB5;

LAB7:    goto LAB2;

LAB8:    goto LAB7;

LAB10:    goto LAB8;

}


extern void work_a_2964799144_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2964799144_3212880686_p_0,(void *)work_a_2964799144_3212880686_p_1};
	static char *se[] = {(void *)work_a_2964799144_3212880686_sub_3456417201998323431_134673997};
	xsi_register_didat("work_a_2964799144_3212880686", "isim/program_counter_tb_isim_beh.exe.sim/work/a_2964799144_3212880686.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
