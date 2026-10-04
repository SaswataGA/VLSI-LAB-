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
static const char *ng0 = "/home/ise/VLSI/8bit ALU/8 bit ALU/alu_logic_unit_tb.vhd";



static void work_a_3191311868_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int64 t9;
    unsigned char t10;
    unsigned int t11;

LAB0:    t1 = (t0 + 2984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20, ng0);
    t2 = (t0 + 5480);
    t4 = (t0 + 3368);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(20, ng0);
    t2 = (t0 + 5488);
    t4 = (t0 + 3432);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(20, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2792);
    xsi_process_wait(t2, t9);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5496);
    t10 = 1;
    if (8U == 8U)
        goto LAB10;

LAB11:    t10 = 0;

LAB12:    if (t10 == 0)
        goto LAB8;

LAB9:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5519);
    t10 = 1;
    if (8U == 8U)
        goto LAB18;

LAB19:    t10 = 0;

LAB20:    if (t10 == 0)
        goto LAB16;

LAB17:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 5542);
    t10 = 1;
    if (8U == 8U)
        goto LAB26;

LAB27:    t10 = 0;

LAB28:    if (t10 == 0)
        goto LAB24;

LAB25:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t2 = (t0 + 5565);
    t10 = 1;
    if (8U == 8U)
        goto LAB34;

LAB35:    t10 = 0;

LAB36:    if (t10 == 0)
        goto LAB32;

LAB33:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 5585);
    t4 = (t0 + 3368);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(26, ng0);
    t2 = (t0 + 5593);
    t4 = (t0 + 3432);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(26, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2792);
    xsi_process_wait(t2, t9);

LAB42:    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    t7 = (t0 + 5504);
    xsi_report(t7, 15U, (unsigned char)2);
    goto LAB9;

LAB10:    t11 = 0;

LAB13:    if (t11 < 8U)
        goto LAB14;
    else
        goto LAB12;

LAB14:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB11;

LAB15:    t11 = (t11 + 1);
    goto LAB13;

LAB16:    t7 = (t0 + 5527);
    xsi_report(t7, 15U, (unsigned char)2);
    goto LAB17;

LAB18:    t11 = 0;

LAB21:    if (t11 < 8U)
        goto LAB22;
    else
        goto LAB20;

LAB22:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB19;

LAB23:    t11 = (t11 + 1);
    goto LAB21;

LAB24:    t7 = (t0 + 5550);
    xsi_report(t7, 15U, (unsigned char)2);
    goto LAB25;

LAB26:    t11 = 0;

LAB29:    if (t11 < 8U)
        goto LAB30;
    else
        goto LAB28;

LAB30:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB27;

LAB31:    t11 = (t11 + 1);
    goto LAB29;

LAB32:    t7 = (t0 + 5573);
    xsi_report(t7, 12U, (unsigned char)2);
    goto LAB33;

LAB34:    t11 = 0;

LAB37:    if (t11 < 8U)
        goto LAB38;
    else
        goto LAB36;

LAB38:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB35;

LAB39:    t11 = (t11 + 1);
    goto LAB37;

LAB40:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5601);
    t10 = 1;
    if (8U == 8U)
        goto LAB46;

LAB47:    t10 = 0;

LAB48:    if (t10 == 0)
        goto LAB44;

LAB45:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5624);
    t10 = 1;
    if (8U == 8U)
        goto LAB54;

LAB55:    t10 = 0;

LAB56:    if (t10 == 0)
        goto LAB52;

LAB53:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 5647);
    t10 = 1;
    if (8U == 8U)
        goto LAB62;

LAB63:    t10 = 0;

LAB64:    if (t10 == 0)
        goto LAB60;

LAB61:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t2 = (t0 + 5670);
    t10 = 1;
    if (8U == 8U)
        goto LAB70;

LAB71:    t10 = 0;

LAB72:    if (t10 == 0)
        goto LAB68;

LAB69:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 5690);
    t4 = (t0 + 3368);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(32, ng0);
    t2 = (t0 + 5698);
    t4 = (t0 + 3432);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(32, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2792);
    xsi_process_wait(t2, t9);

LAB78:    *((char **)t1) = &&LAB79;
    goto LAB1;

LAB41:    goto LAB40;

LAB43:    goto LAB41;

LAB44:    t7 = (t0 + 5609);
    xsi_report(t7, 15U, (unsigned char)2);
    goto LAB45;

LAB46:    t11 = 0;

LAB49:    if (t11 < 8U)
        goto LAB50;
    else
        goto LAB48;

LAB50:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB47;

LAB51:    t11 = (t11 + 1);
    goto LAB49;

LAB52:    t7 = (t0 + 5632);
    xsi_report(t7, 15U, (unsigned char)2);
    goto LAB53;

LAB54:    t11 = 0;

LAB57:    if (t11 < 8U)
        goto LAB58;
    else
        goto LAB56;

LAB58:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB55;

LAB59:    t11 = (t11 + 1);
    goto LAB57;

LAB60:    t7 = (t0 + 5655);
    xsi_report(t7, 15U, (unsigned char)2);
    goto LAB61;

LAB62:    t11 = 0;

LAB65:    if (t11 < 8U)
        goto LAB66;
    else
        goto LAB64;

LAB66:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB63;

LAB67:    t11 = (t11 + 1);
    goto LAB65;

LAB68:    t7 = (t0 + 5678);
    xsi_report(t7, 12U, (unsigned char)2);
    goto LAB69;

LAB70:    t11 = 0;

LAB73:    if (t11 < 8U)
        goto LAB74;
    else
        goto LAB72;

LAB74:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB71;

LAB75:    t11 = (t11 + 1);
    goto LAB73;

LAB76:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5706);
    t10 = 1;
    if (8U == 8U)
        goto LAB82;

LAB83:    t10 = 0;

LAB84:    if (t10 == 0)
        goto LAB80;

LAB81:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5729);
    t10 = 1;
    if (8U == 8U)
        goto LAB90;

LAB91:    t10 = 0;

LAB92:    if (t10 == 0)
        goto LAB88;

LAB89:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 5752);
    t10 = 1;
    if (8U == 8U)
        goto LAB98;

LAB99:    t10 = 0;

LAB100:    if (t10 == 0)
        goto LAB96;

LAB97:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t2 = (t0 + 5775);
    t10 = 1;
    if (8U == 8U)
        goto LAB106;

LAB107:    t10 = 0;

LAB108:    if (t10 == 0)
        goto LAB104;

LAB105:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 5795);
    xsi_report(t2, 40U, (unsigned char)0);
    xsi_set_current_line(39, ng0);

LAB114:    *((char **)t1) = &&LAB115;
    goto LAB1;

LAB77:    goto LAB76;

LAB79:    goto LAB77;

LAB80:    t7 = (t0 + 5714);
    xsi_report(t7, 15U, (unsigned char)2);
    goto LAB81;

LAB82:    t11 = 0;

LAB85:    if (t11 < 8U)
        goto LAB86;
    else
        goto LAB84;

LAB86:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB83;

LAB87:    t11 = (t11 + 1);
    goto LAB85;

LAB88:    t7 = (t0 + 5737);
    xsi_report(t7, 15U, (unsigned char)2);
    goto LAB89;

LAB90:    t11 = 0;

LAB93:    if (t11 < 8U)
        goto LAB94;
    else
        goto LAB92;

LAB94:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB91;

LAB95:    t11 = (t11 + 1);
    goto LAB93;

LAB96:    t7 = (t0 + 5760);
    xsi_report(t7, 15U, (unsigned char)2);
    goto LAB97;

LAB98:    t11 = 0;

LAB101:    if (t11 < 8U)
        goto LAB102;
    else
        goto LAB100;

LAB102:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB99;

LAB103:    t11 = (t11 + 1);
    goto LAB101;

LAB104:    t7 = (t0 + 5783);
    xsi_report(t7, 12U, (unsigned char)2);
    goto LAB105;

LAB106:    t11 = 0;

LAB109:    if (t11 < 8U)
        goto LAB110;
    else
        goto LAB108;

LAB110:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB107;

LAB111:    t11 = (t11 + 1);
    goto LAB109;

LAB112:    goto LAB2;

LAB113:    goto LAB112;

LAB115:    goto LAB113;

}


extern void work_a_3191311868_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3191311868_3212880686_p_0};
	xsi_register_didat("work_a_3191311868_3212880686", "isim/alu_logic_unit_tb_isim_beh.exe.sim/work/a_3191311868_3212880686.didat");
	xsi_register_executes(pe);
}
