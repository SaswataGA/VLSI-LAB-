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
static const char *ng0 = "/home/ise/VLSI/8bit_CPU_Project/8bit_CPU_Project/Set0_AND_JZ_NOT/register_1bit_set_tb.vhd";
extern char *IEEE_P_2592010699;
extern char *STD_STANDARD;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_2326211251_3212880686_p_0(char *t0)
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

LAB2:    xsi_set_current_line(25, ng0);

LAB4:    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (!(t4));
    if (t5 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(29, ng0);

LAB18:    *((char **)t1) = &&LAB19;

LAB1:    return;
LAB5:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 3848);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(26, ng0);
    t10 = (10 * 1000LL);
    t2 = (t0 + 2912);
    xsi_process_wait(t2, t10);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB6:;
LAB8:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(27, ng0);
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

static void work_a_2326211251_3212880686_p_1(char *t0)
{
    char t12[16];
    char t15[16];
    char t17[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned char t7;
    int64 t8;
    unsigned char t9;
    int t10;
    int t11;
    char *t13;
    char *t14;
    char *t16;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;

LAB0:    t1 = (t0 + 3352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 3912);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 3976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 4040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(37, ng0);

LAB6:    t2 = (t0 + 3672);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t4 = (t0 + 3672);
    *((int *)t4) = 0;
    xsi_set_current_line(37, ng0);
    t8 = (2 * 1000LL);
    t2 = (t0 + 3160);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    t3 = (t0 + 992U);
    t7 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t7 = *((unsigned char *)t3);
    t9 = (t7 != (unsigned char)3);
    if (t9 != 0)
        goto LAB12;

LAB14:
LAB13:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 3912);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 4040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 3976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(44, ng0);

LAB17:    t2 = (t0 + 3688);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 2128U);
    t4 = *((char **)t2);
    t10 = *((int *)t4);
    t11 = (t10 + 1);
    t2 = (t0 + 2128U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    *((int *)t2) = t11;
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 6684);
    xsi_report(t2, 37U, (unsigned char)2);
    goto LAB13;

LAB15:    t4 = (t0 + 3688);
    *((int *)t4) = 0;
    xsi_set_current_line(44, ng0);
    t8 = (2 * 1000LL);
    t2 = (t0 + 3160);
    xsi_process_wait(t2, t8);

LAB21:    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB16:    t3 = (t0 + 992U);
    t7 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB15;
    else
        goto LAB17;

LAB18:    goto LAB16;

LAB19:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t7 = *((unsigned char *)t3);
    t9 = (t7 != (unsigned char)3);
    if (t9 != 0)
        goto LAB23;

LAB25:
LAB24:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 4040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 3976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(49, ng0);

LAB28:    t2 = (t0 + 3704);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB29;
    goto LAB1;

LAB20:    goto LAB19;

LAB22:    goto LAB20;

LAB23:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2128U);
    t4 = *((char **)t2);
    t10 = *((int *)t4);
    t11 = (t10 + 1);
    t2 = (t0 + 2128U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    *((int *)t2) = t11;
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 6721);
    xsi_report(t2, 28U, (unsigned char)2);
    goto LAB24;

LAB26:    t4 = (t0 + 3704);
    *((int *)t4) = 0;
    xsi_set_current_line(49, ng0);
    t8 = (2 * 1000LL);
    t2 = (t0 + 3160);
    xsi_process_wait(t2, t8);

LAB32:    *((char **)t1) = &&LAB33;
    goto LAB1;

LAB27:    t3 = (t0 + 992U);
    t7 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB26;
    else
        goto LAB28;

LAB29:    goto LAB27;

LAB30:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t7 = *((unsigned char *)t3);
    t9 = (t7 != (unsigned char)2);
    if (t9 != 0)
        goto LAB34;

LAB36:
LAB35:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 4040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 3976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(54, ng0);

LAB39:    t2 = (t0 + 3720);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB40;
    goto LAB1;

LAB31:    goto LAB30;

LAB33:    goto LAB31;

LAB34:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2128U);
    t4 = *((char **)t2);
    t10 = *((int *)t4);
    t11 = (t10 + 1);
    t2 = (t0 + 2128U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    *((int *)t2) = t11;
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 6749);
    xsi_report(t2, 27U, (unsigned char)2);
    goto LAB35;

LAB37:    t4 = (t0 + 3720);
    *((int *)t4) = 0;
    xsi_set_current_line(54, ng0);
    t8 = (2 * 1000LL);
    t2 = (t0 + 3160);
    xsi_process_wait(t2, t8);

LAB43:    *((char **)t1) = &&LAB44;
    goto LAB1;

LAB38:    t3 = (t0 + 992U);
    t7 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB37;
    else
        goto LAB39;

LAB40:    goto LAB38;

LAB41:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t7 = *((unsigned char *)t3);
    t9 = (t7 != (unsigned char)2);
    if (t9 != 0)
        goto LAB45;

LAB47:
LAB46:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 4040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 3976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(59, ng0);

LAB50:    t2 = (t0 + 3736);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB51;
    goto LAB1;

LAB42:    goto LAB41;

LAB44:    goto LAB42;

LAB45:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2128U);
    t4 = *((char **)t2);
    t10 = *((int *)t4);
    t11 = (t10 + 1);
    t2 = (t0 + 2128U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    *((int *)t2) = t11;
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 6776);
    xsi_report(t2, 41U, (unsigned char)2);
    goto LAB46;

LAB48:    t4 = (t0 + 3736);
    *((int *)t4) = 0;
    xsi_set_current_line(59, ng0);
    t8 = (2 * 1000LL);
    t2 = (t0 + 3160);
    xsi_process_wait(t2, t8);

LAB54:    *((char **)t1) = &&LAB55;
    goto LAB1;

LAB49:    t3 = (t0 + 992U);
    t7 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB48;
    else
        goto LAB50;

LAB51:    goto LAB49;

LAB52:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t7 = *((unsigned char *)t3);
    t9 = (t7 != (unsigned char)3);
    if (t9 != 0)
        goto LAB56;

LAB58:
LAB57:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 4040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(64, ng0);

LAB61:    t2 = (t0 + 3752);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB62;
    goto LAB1;

LAB53:    goto LAB52;

LAB55:    goto LAB53;

LAB56:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2128U);
    t4 = *((char **)t2);
    t10 = *((int *)t4);
    t11 = (t10 + 1);
    t2 = (t0 + 2128U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    *((int *)t2) = t11;
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 6817);
    xsi_report(t2, 27U, (unsigned char)2);
    goto LAB57;

LAB59:    t4 = (t0 + 3752);
    *((int *)t4) = 0;
    xsi_set_current_line(64, ng0);
    t8 = (2 * 1000LL);
    t2 = (t0 + 3160);
    xsi_process_wait(t2, t8);

LAB65:    *((char **)t1) = &&LAB66;
    goto LAB1;

LAB60:    t3 = (t0 + 992U);
    t7 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB59;
    else
        goto LAB61;

LAB62:    goto LAB60;

LAB63:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 4040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 3976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 3912);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(66, ng0);

LAB69:    t2 = (t0 + 3768);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB70;
    goto LAB1;

LAB64:    goto LAB63;

LAB66:    goto LAB64;

LAB67:    t4 = (t0 + 3768);
    *((int *)t4) = 0;
    xsi_set_current_line(66, ng0);
    t8 = (2 * 1000LL);
    t2 = (t0 + 3160);
    xsi_process_wait(t2, t8);

LAB73:    *((char **)t1) = &&LAB74;
    goto LAB1;

LAB68:    t3 = (t0 + 992U);
    t7 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB67;
    else
        goto LAB69;

LAB70:    goto LAB68;

LAB71:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t7 = *((unsigned char *)t3);
    t9 = (t7 != (unsigned char)3);
    if (t9 != 0)
        goto LAB75;

LAB77:
LAB76:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2128U);
    t3 = *((char **)t2);
    t10 = *((int *)t3);
    t7 = (t10 == 0);
    if (t7 != 0)
        goto LAB78;

LAB80:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 6920);
    t4 = ((STD_STANDARD) + 384);
    t5 = (t0 + 2128U);
    t6 = *((char **)t5);
    t10 = *((int *)t6);
    t5 = xsi_int_to_mem(t10);
    t13 = xsi_string_variable_get_image(t12, t4, t5);
    t16 = ((STD_STANDARD) + 984);
    t18 = (t17 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 1;
    t19 = (t18 + 4U);
    *((int *)t19) = 44;
    t19 = (t18 + 8U);
    *((int *)t19) = 1;
    t11 = (44 - 1);
    t20 = (t11 * 1);
    t20 = (t20 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t20;
    t14 = xsi_base_array_concat(t14, t15, t16, (char)97, t2, t17, (char)97, t13, t12, (char)101);
    t19 = (t12 + 12U);
    t20 = *((unsigned int *)t19);
    t21 = (44U + t20);
    xsi_report(t14, t21, (unsigned char)2);

LAB79:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 4104);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(75, ng0);

LAB83:    *((char **)t1) = &&LAB84;
    goto LAB1;

LAB72:    goto LAB71;

LAB74:    goto LAB72;

LAB75:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 2128U);
    t4 = *((char **)t2);
    t10 = *((int *)t4);
    t11 = (t10 + 1);
    t2 = (t0 + 2128U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    *((int *)t2) = t11;
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 6844);
    xsi_report(t2, 33U, (unsigned char)2);
    goto LAB76;

LAB78:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 6877);
    xsi_report(t2, 43U, (unsigned char)0);
    goto LAB79;

LAB81:    goto LAB2;

LAB82:    goto LAB81;

LAB84:    goto LAB82;

}


extern void work_a_2326211251_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2326211251_3212880686_p_0,(void *)work_a_2326211251_3212880686_p_1};
	xsi_register_didat("work_a_2326211251_3212880686", "isim/register_1bit_set_tb_isim_beh.exe.sim/work/a_2326211251_3212880686.didat");
	xsi_register_executes(pe);
}
