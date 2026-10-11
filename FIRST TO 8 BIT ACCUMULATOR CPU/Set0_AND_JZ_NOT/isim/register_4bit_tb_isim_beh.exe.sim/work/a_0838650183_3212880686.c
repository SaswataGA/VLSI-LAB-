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
static const char *ng0 = "/home/ise/VLSI/8bit_CPU_Project/8bit_CPU_Project/Set0_AND_JZ_NOT/register_4bit_tb.vhd";
extern char *IEEE_P_2592010699;
extern char *STD_STANDARD;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_0838650183_3212880686_p_0(char *t0)
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
    t2 = (t0 + 3832);
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
    t2 = (t0 + 3832);
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

static void work_a_0838650183_3212880686_p_1(char *t0)
{
    char t15[16];
    char t16[16];
    char t17[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    int64 t10;
    unsigned int t11;
    int t12;
    int t13;
    char *t14;
    char *t18;
    char *t19;
    unsigned int t20;

LAB0:    t1 = (t0 + 3352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 3896);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 3960);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 6640);
    t4 = (t0 + 4024);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(37, ng0);

LAB6:    t2 = (t0 + 3672);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t4 = (t0 + 3672);
    *((int *)t4) = 0;
    xsi_set_current_line(37, ng0);
    t10 = (2 * 1000LL);
    t2 = (t0 + 3160);
    xsi_process_wait(t2, t10);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    t3 = (t0 + 992U);
    t9 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t9 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 6644);
    t9 = 1;
    if (4U == 4U)
        goto LAB15;

LAB16:    t9 = 0;

LAB17:    if ((!(t9)) != 0)
        goto LAB12;

LAB14:
LAB13:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 3896);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 6682);
    t4 = (t0 + 4024);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 3960);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(44, ng0);

LAB23:    t2 = (t0 + 3688);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(38, ng0);
    t7 = (t0 + 2128U);
    t8 = *((char **)t7);
    t12 = *((int *)t8);
    t13 = (t12 + 1);
    t7 = (t0 + 2128U);
    t14 = *((char **)t7);
    t7 = (t14 + 0);
    *((int *)t7) = t13;
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 6648);
    xsi_report(t2, 34U, (unsigned char)2);
    goto LAB13;

LAB15:    t11 = 0;

LAB18:    if (t11 < 4U)
        goto LAB19;
    else
        goto LAB17;

LAB19:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB16;

LAB20:    t11 = (t11 + 1);
    goto LAB18;

LAB21:    t4 = (t0 + 3688);
    *((int *)t4) = 0;
    xsi_set_current_line(44, ng0);
    t10 = (2 * 1000LL);
    t2 = (t0 + 3160);
    xsi_process_wait(t2, t10);

LAB27:    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB22:    t3 = (t0 + 992U);
    t9 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t9 == 1)
        goto LAB21;
    else
        goto LAB23;

LAB24:    goto LAB22;

LAB25:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 6686);
    t9 = 1;
    if (4U == 4U)
        goto LAB32;

LAB33:    t9 = 0;

LAB34:    if ((!(t9)) != 0)
        goto LAB29;

LAB31:
LAB30:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 6718);
    t4 = (t0 + 4024);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 3960);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(49, ng0);

LAB40:    t2 = (t0 + 3704);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB41;
    goto LAB1;

LAB26:    goto LAB25;

LAB28:    goto LAB26;

LAB29:    xsi_set_current_line(45, ng0);
    t7 = (t0 + 2128U);
    t8 = *((char **)t7);
    t12 = *((int *)t8);
    t13 = (t12 + 1);
    t7 = (t0 + 2128U);
    t14 = *((char **)t7);
    t7 = (t14 + 0);
    *((int *)t7) = t13;
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 6690);
    xsi_report(t2, 28U, (unsigned char)2);
    goto LAB30;

LAB32:    t11 = 0;

LAB35:    if (t11 < 4U)
        goto LAB36;
    else
        goto LAB34;

LAB36:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB33;

LAB37:    t11 = (t11 + 1);
    goto LAB35;

LAB38:    t4 = (t0 + 3704);
    *((int *)t4) = 0;
    xsi_set_current_line(49, ng0);
    t10 = (2 * 1000LL);
    t2 = (t0 + 3160);
    xsi_process_wait(t2, t10);

LAB44:    *((char **)t1) = &&LAB45;
    goto LAB1;

LAB39:    t3 = (t0 + 992U);
    t9 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t9 == 1)
        goto LAB38;
    else
        goto LAB40;

LAB41:    goto LAB39;

LAB42:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 6722);
    t9 = 1;
    if (4U == 4U)
        goto LAB49;

LAB50:    t9 = 0;

LAB51:    if ((!(t9)) != 0)
        goto LAB46;

LAB48:
LAB47:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 6754);
    t4 = (t0 + 4024);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(53, ng0);

LAB57:    t2 = (t0 + 3720);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB58;
    goto LAB1;

LAB43:    goto LAB42;

LAB45:    goto LAB43;

LAB46:    xsi_set_current_line(50, ng0);
    t7 = (t0 + 2128U);
    t8 = *((char **)t7);
    t12 = *((int *)t8);
    t13 = (t12 + 1);
    t7 = (t0 + 2128U);
    t14 = *((char **)t7);
    t7 = (t14 + 0);
    *((int *)t7) = t13;
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 6726);
    xsi_report(t2, 28U, (unsigned char)2);
    goto LAB47;

LAB49:    t11 = 0;

LAB52:    if (t11 < 4U)
        goto LAB53;
    else
        goto LAB51;

LAB53:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB50;

LAB54:    t11 = (t11 + 1);
    goto LAB52;

LAB55:    t4 = (t0 + 3720);
    *((int *)t4) = 0;
    xsi_set_current_line(53, ng0);
    t10 = (2 * 1000LL);
    t2 = (t0 + 3160);
    xsi_process_wait(t2, t10);

LAB61:    *((char **)t1) = &&LAB62;
    goto LAB1;

LAB56:    t3 = (t0 + 992U);
    t9 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t9 == 1)
        goto LAB55;
    else
        goto LAB57;

LAB58:    goto LAB56;

LAB59:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 6758);
    t9 = 1;
    if (4U == 4U)
        goto LAB66;

LAB67:    t9 = 0;

LAB68:    if ((!(t9)) != 0)
        goto LAB63;

LAB65:
LAB64:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 6790);
    t4 = (t0 + 4024);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 3960);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(58, ng0);

LAB74:    t2 = (t0 + 3736);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB75;
    goto LAB1;

LAB60:    goto LAB59;

LAB62:    goto LAB60;

LAB63:    xsi_set_current_line(54, ng0);
    t7 = (t0 + 2128U);
    t8 = *((char **)t7);
    t12 = *((int *)t8);
    t13 = (t12 + 1);
    t7 = (t0 + 2128U);
    t14 = *((char **)t7);
    t7 = (t14 + 0);
    *((int *)t7) = t13;
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 6762);
    xsi_report(t2, 28U, (unsigned char)2);
    goto LAB64;

LAB66:    t11 = 0;

LAB69:    if (t11 < 4U)
        goto LAB70;
    else
        goto LAB68;

LAB70:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB67;

LAB71:    t11 = (t11 + 1);
    goto LAB69;

LAB72:    t4 = (t0 + 3736);
    *((int *)t4) = 0;
    xsi_set_current_line(58, ng0);
    t10 = (2 * 1000LL);
    t2 = (t0 + 3160);
    xsi_process_wait(t2, t10);

LAB78:    *((char **)t1) = &&LAB79;
    goto LAB1;

LAB73:    t3 = (t0 + 992U);
    t9 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t9 == 1)
        goto LAB72;
    else
        goto LAB74;

LAB75:    goto LAB73;

LAB76:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 6794);
    t9 = 1;
    if (4U == 4U)
        goto LAB83;

LAB84:    t9 = 0;

LAB85:    if ((!(t9)) != 0)
        goto LAB80;

LAB82:
LAB81:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 6839);
    t4 = (t0 + 4024);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 3960);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 3896);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(63, ng0);

LAB91:    t2 = (t0 + 3752);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB92;
    goto LAB1;

LAB77:    goto LAB76;

LAB79:    goto LAB77;

LAB80:    xsi_set_current_line(59, ng0);
    t7 = (t0 + 2128U);
    t8 = *((char **)t7);
    t12 = *((int *)t8);
    t13 = (t12 + 1);
    t7 = (t0 + 2128U);
    t14 = *((char **)t7);
    t7 = (t14 + 0);
    *((int *)t7) = t13;
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 6798);
    xsi_report(t2, 41U, (unsigned char)2);
    goto LAB81;

LAB83:    t11 = 0;

LAB86:    if (t11 < 4U)
        goto LAB87;
    else
        goto LAB85;

LAB87:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB84;

LAB88:    t11 = (t11 + 1);
    goto LAB86;

LAB89:    t4 = (t0 + 3752);
    *((int *)t4) = 0;
    xsi_set_current_line(63, ng0);
    t10 = (2 * 1000LL);
    t2 = (t0 + 3160);
    xsi_process_wait(t2, t10);

LAB95:    *((char **)t1) = &&LAB96;
    goto LAB1;

LAB90:    t3 = (t0 + 992U);
    t9 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t9 == 1)
        goto LAB89;
    else
        goto LAB91;

LAB92:    goto LAB90;

LAB93:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 6843);
    t9 = 1;
    if (4U == 4U)
        goto LAB100;

LAB101:    t9 = 0;

LAB102:    if ((!(t9)) != 0)
        goto LAB97;

LAB99:
LAB98:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2128U);
    t3 = *((char **)t2);
    t12 = *((int *)t3);
    t9 = (t12 == 0);
    if (t9 != 0)
        goto LAB106;

LAB108:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 6919);
    t4 = ((STD_STANDARD) + 384);
    t5 = (t0 + 2128U);
    t6 = *((char **)t5);
    t12 = *((int *)t6);
    t5 = xsi_int_to_mem(t12);
    t7 = xsi_string_variable_get_image(t15, t4, t5);
    t14 = ((STD_STANDARD) + 984);
    t18 = (t17 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 1;
    t19 = (t18 + 4U);
    *((int *)t19) = 40;
    t19 = (t18 + 8U);
    *((int *)t19) = 1;
    t13 = (40 - 1);
    t11 = (t13 * 1);
    t11 = (t11 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t11;
    t8 = xsi_base_array_concat(t8, t16, t14, (char)97, t2, t17, (char)97, t7, t15, (char)101);
    t19 = (t15 + 12U);
    t11 = *((unsigned int *)t19);
    t20 = (40U + t11);
    xsi_report(t8, t20, (unsigned char)2);

LAB107:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 4088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(72, ng0);

LAB111:    *((char **)t1) = &&LAB112;
    goto LAB1;

LAB94:    goto LAB93;

LAB96:    goto LAB94;

LAB97:    xsi_set_current_line(64, ng0);
    t7 = (t0 + 2128U);
    t8 = *((char **)t7);
    t12 = *((int *)t8);
    t13 = (t12 + 1);
    t7 = (t0 + 2128U);
    t14 = *((char **)t7);
    t7 = (t14 + 0);
    *((int *)t7) = t13;
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 6847);
    xsi_report(t2, 33U, (unsigned char)2);
    goto LAB98;

LAB100:    t11 = 0;

LAB103:    if (t11 < 4U)
        goto LAB104;
    else
        goto LAB102;

LAB104:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB101;

LAB105:    t11 = (t11 + 1);
    goto LAB103;

LAB106:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 6880);
    xsi_report(t2, 39U, (unsigned char)0);
    goto LAB107;

LAB109:    goto LAB2;

LAB110:    goto LAB109;

LAB112:    goto LAB110;

}


extern void work_a_0838650183_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0838650183_3212880686_p_0,(void *)work_a_0838650183_3212880686_p_1};
	xsi_register_didat("work_a_0838650183_3212880686", "isim/register_4bit_tb_isim_beh.exe.sim/work/a_0838650183_3212880686.didat");
	xsi_register_executes(pe);
}
