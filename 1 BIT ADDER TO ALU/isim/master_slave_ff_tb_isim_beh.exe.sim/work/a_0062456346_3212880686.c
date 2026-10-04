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
static const char *ng0 = "/home/ise/VLSI/8bit ALU/8 bit ALU/master_slave_ff_tb.vhd";



static void work_a_0062456346_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    unsigned char t8;
    unsigned char t9;

LAB0:    t1 = (t0 + 2664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(21, ng0);
    t2 = (t0 + 3112);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(21, ng0);
    t7 = (10 * 1000LL);
    t2 = (t0 + 2472);
    xsi_process_wait(t2, t7);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(22, ng0);
    t7 = (10 * 1000LL);
    t2 = (t0 + 2472);
    xsi_process_wait(t2, t7);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t8 = *((unsigned char *)t3);
    t9 = (t8 == (unsigned char)2);
    if (t9 == 0)
        goto LAB12;

LAB13:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(24, ng0);
    t7 = (10 * 1000LL);
    t2 = (t0 + 2472);
    xsi_process_wait(t2, t7);

LAB16:    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    t2 = (t0 + 4964);
    xsi_report(t2, 44U, (unsigned char)2);
    goto LAB13;

LAB14:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 3112);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(27, ng0);
    t7 = (10 * 1000LL);
    t2 = (t0 + 2472);
    xsi_process_wait(t2, t7);

LAB20:    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB15:    goto LAB14;

LAB17:    goto LAB15;

LAB18:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t8 = *((unsigned char *)t3);
    t9 = (t8 == (unsigned char)2);
    if (t9 == 0)
        goto LAB22;

LAB23:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(31, ng0);
    t7 = (10 * 1000LL);
    t2 = (t0 + 2472);
    xsi_process_wait(t2, t7);

LAB26:    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB19:    goto LAB18;

LAB21:    goto LAB19;

LAB22:    t2 = (t0 + 5008);
    xsi_report(t2, 39U, (unsigned char)2);
    goto LAB23;

LAB24:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t8 = *((unsigned char *)t3);
    t9 = (t8 == (unsigned char)3);
    if (t9 == 0)
        goto LAB28;

LAB29:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 3112);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(35, ng0);
    t7 = (10 * 1000LL);
    t2 = (t0 + 2472);
    xsi_process_wait(t2, t7);

LAB32:    *((char **)t1) = &&LAB33;
    goto LAB1;

LAB25:    goto LAB24;

LAB27:    goto LAB25;

LAB28:    t2 = (t0 + 5047);
    xsi_report(t2, 40U, (unsigned char)2);
    goto LAB29;

LAB30:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t8 = *((unsigned char *)t3);
    t9 = (t8 == (unsigned char)3);
    if (t9 == 0)
        goto LAB34;

LAB35:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(39, ng0);
    t7 = (10 * 1000LL);
    t2 = (t0 + 2472);
    xsi_process_wait(t2, t7);

LAB38:    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB31:    goto LAB30;

LAB33:    goto LAB31;

LAB34:    t2 = (t0 + 5087);
    xsi_report(t2, 45U, (unsigned char)2);
    goto LAB35;

LAB36:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t8 = *((unsigned char *)t3);
    t9 = (t8 == (unsigned char)3);
    if (t9 == 0)
        goto LAB40;

LAB41:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(43, ng0);
    t7 = (10 * 1000LL);
    t2 = (t0 + 2472);
    xsi_process_wait(t2, t7);

LAB44:    *((char **)t1) = &&LAB45;
    goto LAB1;

LAB37:    goto LAB36;

LAB39:    goto LAB37;

LAB40:    t2 = (t0 + 5132);
    xsi_report(t2, 48U, (unsigned char)2);
    goto LAB41;

LAB42:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t8 = *((unsigned char *)t3);
    t9 = (t8 == (unsigned char)2);
    if (t9 == 0)
        goto LAB46;

LAB47:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 5226);
    xsi_report(t2, 41U, (unsigned char)0);
    xsi_set_current_line(47, ng0);

LAB50:    *((char **)t1) = &&LAB51;
    goto LAB1;

LAB43:    goto LAB42;

LAB45:    goto LAB43;

LAB46:    t2 = (t0 + 5180);
    xsi_report(t2, 46U, (unsigned char)2);
    goto LAB47;

LAB48:    goto LAB2;

LAB49:    goto LAB48;

LAB51:    goto LAB49;

}


extern void work_a_0062456346_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0062456346_3212880686_p_0};
	xsi_register_didat("work_a_0062456346_3212880686", "isim/master_slave_ff_tb_isim_beh.exe.sim/work/a_0062456346_3212880686.didat");
	xsi_register_executes(pe);
}
