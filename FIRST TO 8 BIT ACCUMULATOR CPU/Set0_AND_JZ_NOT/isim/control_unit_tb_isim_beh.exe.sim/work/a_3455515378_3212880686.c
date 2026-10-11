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
static const char *ng0 = "/home/ise/VLSI/8bit_CPU_Project/8bit_CPU_Project/Set0_AND_JZ_NOT/control_unit_tb.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;
extern char *STD_STANDARD;

char *ieee_p_1242562249_sub_10420449594411817395_1035706684(char *, char *, int , int );


static void work_a_3455515378_3212880686_p_0(char *t0)
{
    char t6[16];
    char t11[16];
    char t16[16];
    char t21[16];
    char t26[16];
    char t31[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t12;
    char *t13;
    char *t14;
    unsigned char t15;
    char *t17;
    char *t18;
    char *t19;
    unsigned char t20;
    char *t22;
    char *t23;
    char *t24;
    unsigned char t25;
    char *t27;
    char *t28;
    char *t29;
    unsigned char t30;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned char t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;

LAB0:    xsi_set_current_line(58, ng0);

LAB3:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 1512U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t7 = ((IEEE_P_2592010699) + 4000);
    t1 = xsi_base_array_concat(t1, t6, t7, (char)99, t3, (char)99, t5, (char)101);
    t8 = (t0 + 1672U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    t12 = ((IEEE_P_2592010699) + 4000);
    t8 = xsi_base_array_concat(t8, t11, t12, (char)97, t1, t6, (char)99, t10, (char)101);
    t13 = (t0 + 1832U);
    t14 = *((char **)t13);
    t15 = *((unsigned char *)t14);
    t17 = ((IEEE_P_2592010699) + 4000);
    t13 = xsi_base_array_concat(t13, t16, t17, (char)97, t8, t11, (char)99, t15, (char)101);
    t18 = (t0 + 1992U);
    t19 = *((char **)t18);
    t20 = *((unsigned char *)t19);
    t22 = ((IEEE_P_2592010699) + 4000);
    t18 = xsi_base_array_concat(t18, t21, t22, (char)97, t13, t16, (char)99, t20, (char)101);
    t23 = (t0 + 2152U);
    t24 = *((char **)t23);
    t25 = *((unsigned char *)t24);
    t27 = ((IEEE_P_2592010699) + 4000);
    t23 = xsi_base_array_concat(t23, t26, t27, (char)97, t18, t21, (char)99, t25, (char)101);
    t28 = (t0 + 2312U);
    t29 = *((char **)t28);
    t30 = *((unsigned char *)t29);
    t32 = ((IEEE_P_2592010699) + 4000);
    t28 = xsi_base_array_concat(t28, t31, t32, (char)97, t23, t26, (char)99, t30, (char)101);
    t33 = (1U + 1U);
    t34 = (t33 + 1U);
    t35 = (t34 + 1U);
    t36 = (t35 + 1U);
    t37 = (t36 + 1U);
    t38 = (t37 + 1U);
    t39 = (7U != t38);
    if (t39 == 1)
        goto LAB5;

LAB6:    t40 = (t0 + 4512);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    memcpy(t44, t28, 7U);
    xsi_driver_first_trans_fast(t40);

LAB2:    t45 = (t0 + 4432);
    *((int *)t45) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(7U, t38, 0);
    goto LAB6;

}

static void work_a_3455515378_3212880686_p_1(char *t0)
{
    char t10[16];
    char t31[16];
    char t32[16];
    char t34[16];
    char t36[16];
    char t39[16];
    char t44[16];
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    char *t6;
    char *t7;
    int t8;
    int t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    int t18;
    unsigned char t19;
    int64 t20;
    int t21;
    int t22;
    int t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    int t29;
    int t30;
    char *t33;
    char *t35;
    char *t37;
    char *t38;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;

LAB0:    t1 = (t0 + 4112U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 8280);
    *((int *)t2) = 0;
    t3 = (t0 + 8284);
    *((int *)t3) = 15;
    t4 = 0;
    t5 = 15;

LAB4:    if (t4 <= t5)
        goto LAB5;

LAB7:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 2888U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t19 = (t4 == 0);
    if (t19 != 0)
        goto LAB30;

LAB32:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 8368);
    t6 = ((STD_STANDARD) + 384);
    t7 = (t0 + 2888U);
    t11 = *((char **)t7);
    t4 = *((int *)t11);
    t7 = xsi_int_to_mem(t4);
    t12 = xsi_string_variable_get_image(t10, t6, t7);
    t14 = ((STD_STANDARD) + 984);
    t15 = (t32 + 0U);
    t16 = (t15 + 0U);
    *((int *)t16) = 1;
    t16 = (t15 + 4U);
    *((int *)t16) = 39;
    t16 = (t15 + 8U);
    *((int *)t16) = 1;
    t5 = (39 - 1);
    t25 = (t5 * 1);
    t25 = (t25 + 1);
    t16 = (t15 + 12U);
    *((unsigned int *)t16) = t25;
    t13 = xsi_base_array_concat(t13, t31, t14, (char)97, t2, t32, (char)97, t12, t10, (char)101);
    t16 = (t10 + 12U);
    t25 = *((unsigned int *)t16);
    t26 = (39U + t25);
    xsi_report(t13, t26, (unsigned char)2);

LAB31:    xsi_set_current_line(81, ng0);

LAB35:    *((char **)t1) = &&LAB36;

LAB1:    return;
LAB5:    xsi_set_current_line(64, ng0);
    t6 = (t0 + 8288);
    *((int *)t6) = 0;
    t7 = (t0 + 8292);
    *((int *)t7) = 1;
    t8 = 0;
    t9 = 1;

LAB8:    if (t8 <= t9)
        goto LAB9;

LAB11:
LAB6:    t2 = (t0 + 8280);
    t4 = *((int *)t2);
    t3 = (t0 + 8284);
    t5 = *((int *)t3);
    if (t4 == t5)
        goto LAB7;

LAB29:    t8 = (t4 + 1);
    t4 = t8;
    t6 = (t0 + 8280);
    *((int *)t6) = t4;
    goto LAB4;

LAB9:    xsi_set_current_line(65, ng0);
    t11 = (t0 + 8280);
    t12 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t10, *((int *)t11), 4);
    t13 = (t0 + 4576);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t12, 4U);
    xsi_driver_first_trans_fast(t13);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 8288);
    t18 = *((int *)t2);
    t19 = (t18 == 1);
    if (t19 != 0)
        goto LAB12;

LAB14:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 4640);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB13:    xsi_set_current_line(67, ng0);
    t20 = (10 * 1000LL);
    t2 = (t0 + 3920);
    xsi_process_wait(t2, t20);

LAB17:    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB10:    t2 = (t0 + 8288);
    t8 = *((int *)t2);
    t3 = (t0 + 8292);
    t9 = *((int *)t3);
    if (t8 == t9)
        goto LAB11;

LAB28:    t18 = (t8 + 1);
    t8 = t18;
    t6 = (t0 + 8288);
    *((int *)t6) = t8;
    goto LAB8;

LAB12:    xsi_set_current_line(66, ng0);
    t3 = (t0 + 4640);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t3);
    goto LAB13;

LAB15:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 2472U);
    t3 = *((char **)t2);
    t2 = (t0 + 2768U);
    t6 = *((char **)t2);
    t2 = (t0 + 8280);
    t18 = *((int *)t2);
    t21 = (2 * t18);
    t7 = (t0 + 8288);
    t22 = *((int *)t7);
    t23 = (t21 + t22);
    t24 = (t23 - 0);
    t25 = (t24 * 1);
    xsi_vhdl_check_range_of_index(0, 31, 1, t23);
    t26 = (7U * t25);
    t27 = (0 + t26);
    t11 = (t6 + t27);
    t19 = 1;
    if (7U == 7U)
        goto LAB22;

LAB23:    t19 = 0;

LAB24:    if ((!(t19)) != 0)
        goto LAB19;

LAB21:
LAB20:    goto LAB10;

LAB16:    goto LAB15;

LAB18:    goto LAB16;

LAB19:    xsi_set_current_line(69, ng0);
    t14 = (t0 + 2888U);
    t15 = *((char **)t14);
    t29 = *((int *)t15);
    t30 = (t29 + 1);
    t14 = (t0 + 2888U);
    t16 = *((char **)t14);
    t14 = (t16 + 0);
    *((int *)t14) = t30;
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 8296);
    t6 = ((STD_STANDARD) + 384);
    t7 = (t0 + 8280);
    t11 = xsi_int_to_mem(*((int *)t7));
    t12 = xsi_string_variable_get_image(t10, t6, t11);
    t14 = ((STD_STANDARD) + 984);
    t15 = (t32 + 0U);
    t16 = (t15 + 0U);
    *((int *)t16) = 1;
    t16 = (t15 + 4U);
    *((int *)t16) = 31;
    t16 = (t15 + 8U);
    *((int *)t16) = 1;
    t18 = (31 - 1);
    t25 = (t18 * 1);
    t25 = (t25 + 1);
    t16 = (t15 + 12U);
    *((unsigned int *)t16) = t25;
    t13 = xsi_base_array_concat(t13, t31, t14, (char)97, t2, t32, (char)97, t12, t10, (char)101);
    t16 = (t0 + 8327);
    t35 = ((STD_STANDARD) + 984);
    t37 = (t36 + 0U);
    t38 = (t37 + 0U);
    *((int *)t38) = 1;
    t38 = (t37 + 4U);
    *((int *)t38) = 3;
    t38 = (t37 + 8U);
    *((int *)t38) = 1;
    t21 = (3 - 1);
    t25 = (t21 * 1);
    t25 = (t25 + 1);
    t38 = (t37 + 12U);
    *((unsigned int *)t38) = t25;
    t33 = xsi_base_array_concat(t33, t34, t35, (char)97, t13, t31, (char)97, t16, t36, (char)101);
    t38 = ((STD_STANDARD) + 384);
    t40 = (t0 + 8288);
    t41 = xsi_int_to_mem(*((int *)t40));
    t42 = xsi_string_variable_get_image(t39, t38, t41);
    t45 = ((STD_STANDARD) + 984);
    t43 = xsi_base_array_concat(t43, t44, t45, (char)97, t33, t34, (char)97, t42, t39, (char)101);
    t46 = (t10 + 12U);
    t25 = *((unsigned int *)t46);
    t26 = (31U + t25);
    t27 = (t26 + 3U);
    t47 = (t39 + 12U);
    t28 = *((unsigned int *)t47);
    t48 = (t27 + t28);
    xsi_report(t43, t48, (unsigned char)2);
    goto LAB20;

LAB22:    t28 = 0;

LAB25:    if (t28 < 7U)
        goto LAB26;
    else
        goto LAB24;

LAB26:    t12 = (t3 + t28);
    t13 = (t11 + t28);
    if (*((unsigned char *)t12) != *((unsigned char *)t13))
        goto LAB23;

LAB27:    t28 = (t28 + 1);
    goto LAB25;

LAB30:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 8330);
    xsi_report(t2, 38U, (unsigned char)0);
    goto LAB31;

LAB33:    goto LAB2;

LAB34:    goto LAB33;

LAB36:    goto LAB34;

}


extern void work_a_3455515378_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3455515378_3212880686_p_0,(void *)work_a_3455515378_3212880686_p_1};
	xsi_register_didat("work_a_3455515378_3212880686", "isim/control_unit_tb_isim_beh.exe.sim/work/a_3455515378_3212880686.didat");
	xsi_register_executes(pe);
}
