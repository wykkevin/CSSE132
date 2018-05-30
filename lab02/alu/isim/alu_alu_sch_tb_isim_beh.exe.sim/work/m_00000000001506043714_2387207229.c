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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Administrator/Documents/Classes/FR3/CSSE132/Lab/Lab2/alu/alu_tb_0.v";
static int ng1[] = {0, 0};
static int ng2[] = {4, 0};
static int ng3[] = {2, 0};
static int ng4[] = {6, 0};
static const char *ng5 = "okay 1";
static const char *ng6 = "fail 1";
static int ng7[] = {5, 0};
static int ng8[] = {1, 0};
static int ng9[] = {3, 0};
static int ng10[] = {7, 0};



static void Initial_33_0(char *t0)
{
    char t4[8];
    char t20[8];
    char t34[8];
    char t50[8];
    char t58[8];
    char t96[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;

LAB0:    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);

LAB4:    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 3136);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 3136);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB10;

LAB7:    if (t16 != 0)
        goto LAB9;

LAB8:    *((unsigned int *)t4) = 1;

LAB10:    memset(t20, 0, 8);
    t21 = (t4 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t4);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t21) != 0)
        goto LAB13;

LAB14:    t28 = (t20 + 4);
    t29 = *((unsigned int *)t20);
    t30 = *((unsigned int *)t28);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB15;

LAB16:    memcpy(t58, t20, 8);

LAB17:    t90 = (t58 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (~(t91));
    t93 = *((unsigned int *)t58);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB29;

LAB30:    xsi_set_current_line(48, ng0);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t0);

LAB31:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 3136);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB32;
    goto LAB1;

LAB9:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB10;

LAB11:    *((unsigned int *)t20) = 1;
    goto LAB14;

LAB13:    t27 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB14;

LAB15:    t32 = (t0 + 1368U);
    t33 = *((char **)t32);
    t32 = ((char*)((ng1)));
    memset(t34, 0, 8);
    t35 = (t33 + 4);
    t36 = (t32 + 4);
    t37 = *((unsigned int *)t33);
    t38 = *((unsigned int *)t32);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t36);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB21;

LAB18:    if (t46 != 0)
        goto LAB20;

LAB19:    *((unsigned int *)t34) = 1;

LAB21:    memset(t50, 0, 8);
    t51 = (t34 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (~(t52));
    t54 = *((unsigned int *)t34);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t51) != 0)
        goto LAB24;

LAB25:    t59 = *((unsigned int *)t20);
    t60 = *((unsigned int *)t50);
    t61 = (t59 & t60);
    *((unsigned int *)t58) = t61;
    t62 = (t20 + 4);
    t63 = (t50 + 4);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB26;

LAB27:
LAB28:    goto LAB17;

LAB20:    t49 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB21;

LAB22:    *((unsigned int *)t50) = 1;
    goto LAB25;

LAB24:    t57 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB25;

LAB26:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t58) = (t70 | t71);
    t72 = (t20 + 4);
    t73 = (t50 + 4);
    t74 = *((unsigned int *)t20);
    t75 = (~(t74));
    t76 = *((unsigned int *)t72);
    t77 = (~(t76));
    t78 = *((unsigned int *)t50);
    t79 = (~(t78));
    t80 = *((unsigned int *)t73);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t86 & t84);
    t87 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t87 & t85);
    t88 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t88 & t84);
    t89 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t89 & t85);
    goto LAB28;

LAB29:    xsi_set_current_line(46, ng0);
    xsi_vlogfile_write(1, 0, 0, ng5, 1, t0);
    goto LAB31;

LAB32:    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 3136);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB33;
    goto LAB1;

LAB33:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng9)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB37;

LAB34:    if (t16 != 0)
        goto LAB36;

LAB35:    *((unsigned int *)t4) = 1;

LAB37:    memset(t20, 0, 8);
    t21 = (t4 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t4);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t21) != 0)
        goto LAB40;

LAB41:    t28 = (t20 + 4);
    t29 = *((unsigned int *)t20);
    t30 = *((unsigned int *)t28);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB42;

LAB43:    memcpy(t58, t20, 8);

LAB44:    t90 = (t58 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (~(t91));
    t93 = *((unsigned int *)t58);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB56;

LAB57:    xsi_set_current_line(60, ng0);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t0);

LAB58:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3136);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB59;
    goto LAB1;

LAB36:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB37;

LAB38:    *((unsigned int *)t20) = 1;
    goto LAB41;

LAB40:    t27 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB41;

LAB42:    t32 = (t0 + 1368U);
    t33 = *((char **)t32);
    t32 = ((char*)((ng8)));
    memset(t34, 0, 8);
    t35 = (t33 + 4);
    t36 = (t32 + 4);
    t37 = *((unsigned int *)t33);
    t38 = *((unsigned int *)t32);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t36);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB48;

LAB45:    if (t46 != 0)
        goto LAB47;

LAB46:    *((unsigned int *)t34) = 1;

LAB48:    memset(t50, 0, 8);
    t51 = (t34 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (~(t52));
    t54 = *((unsigned int *)t34);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t51) != 0)
        goto LAB51;

LAB52:    t59 = *((unsigned int *)t20);
    t60 = *((unsigned int *)t50);
    t61 = (t59 & t60);
    *((unsigned int *)t58) = t61;
    t62 = (t20 + 4);
    t63 = (t50 + 4);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB53;

LAB54:
LAB55:    goto LAB44;

LAB47:    t49 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB48;

LAB49:    *((unsigned int *)t50) = 1;
    goto LAB52;

LAB51:    t57 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB52;

LAB53:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t58) = (t70 | t71);
    t72 = (t20 + 4);
    t73 = (t50 + 4);
    t74 = *((unsigned int *)t20);
    t75 = (~(t74));
    t76 = *((unsigned int *)t72);
    t77 = (~(t76));
    t78 = *((unsigned int *)t50);
    t79 = (~(t78));
    t80 = *((unsigned int *)t73);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t86 & t84);
    t87 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t87 & t85);
    t88 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t88 & t84);
    t89 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t89 & t85);
    goto LAB55;

LAB56:    xsi_set_current_line(58, ng0);
    xsi_vlogfile_write(1, 0, 0, ng5, 1, t0);
    goto LAB58;

LAB59:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 3136);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB60;
    goto LAB1;

LAB60:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_unary_minus(t4, 32, t2, 32);
    memset(t20, 0, 8);
    t5 = (t3 + 4);
    t6 = (t4 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t4);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB64;

LAB61:    if (t16 != 0)
        goto LAB63;

LAB62:    *((unsigned int *)t20) = 1;

LAB64:    memset(t34, 0, 8);
    t21 = (t20 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t20);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t21) != 0)
        goto LAB67;

LAB68:    t28 = (t34 + 4);
    t29 = *((unsigned int *)t34);
    t30 = *((unsigned int *)t28);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB69;

LAB70:    memcpy(t96, t34, 8);

LAB71:    t90 = (t96 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (~(t91));
    t93 = *((unsigned int *)t96);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB83;

LAB84:    xsi_set_current_line(72, ng0);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t0);

LAB85:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 3136);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB86;
    goto LAB1;

LAB63:    t19 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB64;

LAB65:    *((unsigned int *)t34) = 1;
    goto LAB68;

LAB67:    t27 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB68;

LAB69:    t32 = (t0 + 1368U);
    t33 = *((char **)t32);
    t32 = ((char*)((ng1)));
    memset(t50, 0, 8);
    t35 = (t33 + 4);
    t36 = (t32 + 4);
    t37 = *((unsigned int *)t33);
    t38 = *((unsigned int *)t32);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t36);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB75;

LAB72:    if (t46 != 0)
        goto LAB74;

LAB73:    *((unsigned int *)t50) = 1;

LAB75:    memset(t58, 0, 8);
    t51 = (t50 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (~(t52));
    t54 = *((unsigned int *)t50);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t51) != 0)
        goto LAB78;

LAB79:    t59 = *((unsigned int *)t34);
    t60 = *((unsigned int *)t58);
    t61 = (t59 & t60);
    *((unsigned int *)t96) = t61;
    t62 = (t34 + 4);
    t63 = (t58 + 4);
    t64 = (t96 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB80;

LAB81:
LAB82:    goto LAB71;

LAB74:    t49 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB75;

LAB76:    *((unsigned int *)t58) = 1;
    goto LAB79;

LAB78:    t57 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB79;

LAB80:    t70 = *((unsigned int *)t96);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t96) = (t70 | t71);
    t72 = (t34 + 4);
    t73 = (t58 + 4);
    t74 = *((unsigned int *)t34);
    t75 = (~(t74));
    t76 = *((unsigned int *)t72);
    t77 = (~(t76));
    t78 = *((unsigned int *)t58);
    t79 = (~(t78));
    t80 = *((unsigned int *)t73);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t86 & t84);
    t87 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t87 & t85);
    t88 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t88 & t84);
    t89 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t89 & t85);
    goto LAB82;

LAB83:    xsi_set_current_line(70, ng0);
    xsi_vlogfile_write(1, 0, 0, ng5, 1, t0);
    goto LAB85;

LAB86:    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 3136);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB87;
    goto LAB1;

LAB87:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng8)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_unary_minus(t4, 32, t2, 32);
    memset(t20, 0, 8);
    t5 = (t3 + 4);
    t6 = (t4 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t4);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB91;

LAB88:    if (t16 != 0)
        goto LAB90;

LAB89:    *((unsigned int *)t20) = 1;

LAB91:    memset(t34, 0, 8);
    t21 = (t20 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t20);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB92;

LAB93:    if (*((unsigned int *)t21) != 0)
        goto LAB94;

LAB95:    t28 = (t34 + 4);
    t29 = *((unsigned int *)t34);
    t30 = *((unsigned int *)t28);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB96;

LAB97:    memcpy(t96, t34, 8);

LAB98:    t90 = (t96 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (~(t91));
    t93 = *((unsigned int *)t96);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB110;

LAB111:    xsi_set_current_line(84, ng0);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t0);

LAB112:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 3136);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB113;
    goto LAB1;

LAB90:    t19 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB91;

LAB92:    *((unsigned int *)t34) = 1;
    goto LAB95;

LAB94:    t27 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB95;

LAB96:    t32 = (t0 + 1368U);
    t33 = *((char **)t32);
    t32 = ((char*)((ng1)));
    memset(t50, 0, 8);
    t35 = (t33 + 4);
    t36 = (t32 + 4);
    t37 = *((unsigned int *)t33);
    t38 = *((unsigned int *)t32);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t36);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB102;

LAB99:    if (t46 != 0)
        goto LAB101;

LAB100:    *((unsigned int *)t50) = 1;

LAB102:    memset(t58, 0, 8);
    t51 = (t50 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (~(t52));
    t54 = *((unsigned int *)t50);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB103;

LAB104:    if (*((unsigned int *)t51) != 0)
        goto LAB105;

LAB106:    t59 = *((unsigned int *)t34);
    t60 = *((unsigned int *)t58);
    t61 = (t59 & t60);
    *((unsigned int *)t96) = t61;
    t62 = (t34 + 4);
    t63 = (t58 + 4);
    t64 = (t96 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB107;

LAB108:
LAB109:    goto LAB98;

LAB101:    t49 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB102;

LAB103:    *((unsigned int *)t58) = 1;
    goto LAB106;

LAB105:    t57 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB106;

LAB107:    t70 = *((unsigned int *)t96);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t96) = (t70 | t71);
    t72 = (t34 + 4);
    t73 = (t58 + 4);
    t74 = *((unsigned int *)t34);
    t75 = (~(t74));
    t76 = *((unsigned int *)t72);
    t77 = (~(t76));
    t78 = *((unsigned int *)t58);
    t79 = (~(t78));
    t80 = *((unsigned int *)t73);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t86 & t84);
    t87 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t87 & t85);
    t88 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t88 & t84);
    t89 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t89 & t85);
    goto LAB109;

LAB110:    xsi_set_current_line(82, ng0);
    xsi_vlogfile_write(1, 0, 0, ng5, 1, t0);
    goto LAB112;

LAB113:    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 3136);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB114;
    goto LAB1;

LAB114:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_unary_minus(t4, 32, t2, 32);
    memset(t20, 0, 8);
    t5 = (t3 + 4);
    t6 = (t4 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t4);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB118;

LAB115:    if (t16 != 0)
        goto LAB117;

LAB116:    *((unsigned int *)t20) = 1;

LAB118:    memset(t34, 0, 8);
    t21 = (t20 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t20);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB119;

LAB120:    if (*((unsigned int *)t21) != 0)
        goto LAB121;

LAB122:    t28 = (t34 + 4);
    t29 = *((unsigned int *)t34);
    t30 = *((unsigned int *)t28);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB123;

LAB124:    memcpy(t96, t34, 8);

LAB125:    t90 = (t96 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (~(t91));
    t93 = *((unsigned int *)t96);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB137;

LAB138:    xsi_set_current_line(96, ng0);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t0);

LAB139:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 3136);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB140;
    goto LAB1;

LAB117:    t19 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB118;

LAB119:    *((unsigned int *)t34) = 1;
    goto LAB122;

LAB121:    t27 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB122;

LAB123:    t32 = (t0 + 1208U);
    t33 = *((char **)t32);
    t32 = ((char*)((ng8)));
    memset(t50, 0, 8);
    t35 = (t33 + 4);
    t36 = (t32 + 4);
    t37 = *((unsigned int *)t33);
    t38 = *((unsigned int *)t32);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t36);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB129;

LAB126:    if (t46 != 0)
        goto LAB128;

LAB127:    *((unsigned int *)t50) = 1;

LAB129:    memset(t58, 0, 8);
    t51 = (t50 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (~(t52));
    t54 = *((unsigned int *)t50);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB130;

LAB131:    if (*((unsigned int *)t51) != 0)
        goto LAB132;

LAB133:    t59 = *((unsigned int *)t34);
    t60 = *((unsigned int *)t58);
    t61 = (t59 & t60);
    *((unsigned int *)t96) = t61;
    t62 = (t34 + 4);
    t63 = (t58 + 4);
    t64 = (t96 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB134;

LAB135:
LAB136:    goto LAB125;

LAB128:    t49 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB129;

LAB130:    *((unsigned int *)t58) = 1;
    goto LAB133;

LAB132:    t57 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB133;

LAB134:    t70 = *((unsigned int *)t96);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t96) = (t70 | t71);
    t72 = (t34 + 4);
    t73 = (t58 + 4);
    t74 = *((unsigned int *)t34);
    t75 = (~(t74));
    t76 = *((unsigned int *)t72);
    t77 = (~(t76));
    t78 = *((unsigned int *)t58);
    t79 = (~(t78));
    t80 = *((unsigned int *)t73);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t86 & t84);
    t87 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t87 & t85);
    t88 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t88 & t84);
    t89 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t89 & t85);
    goto LAB136;

LAB137:    xsi_set_current_line(94, ng0);
    xsi_vlogfile_write(1, 0, 0, ng5, 1, t0);
    goto LAB139;

LAB140:    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 3136);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB141;
    goto LAB1;

LAB141:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB145;

LAB142:    if (t16 != 0)
        goto LAB144;

LAB143:    *((unsigned int *)t4) = 1;

LAB145:    memset(t20, 0, 8);
    t21 = (t4 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t4);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB146;

LAB147:    if (*((unsigned int *)t21) != 0)
        goto LAB148;

LAB149:    t28 = (t20 + 4);
    t29 = *((unsigned int *)t20);
    t30 = *((unsigned int *)t28);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB150;

LAB151:    memcpy(t58, t20, 8);

LAB152:    t90 = (t58 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (~(t91));
    t93 = *((unsigned int *)t58);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB164;

LAB165:    xsi_set_current_line(108, ng0);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t0);

LAB166:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 3136);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB167;
    goto LAB1;

LAB144:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB145;

LAB146:    *((unsigned int *)t20) = 1;
    goto LAB149;

LAB148:    t27 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB149;

LAB150:    t32 = (t0 + 1208U);
    t33 = *((char **)t32);
    t32 = ((char*)((ng1)));
    memset(t34, 0, 8);
    t35 = (t33 + 4);
    t36 = (t32 + 4);
    t37 = *((unsigned int *)t33);
    t38 = *((unsigned int *)t32);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t36);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB156;

LAB153:    if (t46 != 0)
        goto LAB155;

LAB154:    *((unsigned int *)t34) = 1;

LAB156:    memset(t50, 0, 8);
    t51 = (t34 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (~(t52));
    t54 = *((unsigned int *)t34);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB157;

LAB158:    if (*((unsigned int *)t51) != 0)
        goto LAB159;

LAB160:    t59 = *((unsigned int *)t20);
    t60 = *((unsigned int *)t50);
    t61 = (t59 & t60);
    *((unsigned int *)t58) = t61;
    t62 = (t20 + 4);
    t63 = (t50 + 4);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB161;

LAB162:
LAB163:    goto LAB152;

LAB155:    t49 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB156;

LAB157:    *((unsigned int *)t50) = 1;
    goto LAB160;

LAB159:    t57 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB160;

LAB161:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t58) = (t70 | t71);
    t72 = (t20 + 4);
    t73 = (t50 + 4);
    t74 = *((unsigned int *)t20);
    t75 = (~(t74));
    t76 = *((unsigned int *)t72);
    t77 = (~(t76));
    t78 = *((unsigned int *)t50);
    t79 = (~(t78));
    t80 = *((unsigned int *)t73);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t86 & t84);
    t87 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t87 & t85);
    t88 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t88 & t84);
    t89 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t89 & t85);
    goto LAB163;

LAB164:    xsi_set_current_line(106, ng0);
    xsi_vlogfile_write(1, 0, 0, ng5, 1, t0);
    goto LAB166;

LAB167:    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(116, ng0);
    t2 = (t0 + 3136);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB168;
    goto LAB1;

LAB168:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng8)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB172;

LAB169:    if (t16 != 0)
        goto LAB171;

LAB170:    *((unsigned int *)t4) = 1;

LAB172:    memset(t20, 0, 8);
    t21 = (t4 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t4);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB173;

LAB174:    if (*((unsigned int *)t21) != 0)
        goto LAB175;

LAB176:    t28 = (t20 + 4);
    t29 = *((unsigned int *)t20);
    t30 = *((unsigned int *)t28);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB177;

LAB178:    memcpy(t58, t20, 8);

LAB179:    t90 = (t58 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (~(t91));
    t93 = *((unsigned int *)t58);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB191;

LAB192:    xsi_set_current_line(120, ng0);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t0);

LAB193:    xsi_set_current_line(123, ng0);
    t2 = (t0 + 3136);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB194;
    goto LAB1;

LAB171:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB172;

LAB173:    *((unsigned int *)t20) = 1;
    goto LAB176;

LAB175:    t27 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB176;

LAB177:    t32 = (t0 + 1208U);
    t33 = *((char **)t32);
    t32 = ((char*)((ng1)));
    memset(t34, 0, 8);
    t35 = (t33 + 4);
    t36 = (t32 + 4);
    t37 = *((unsigned int *)t33);
    t38 = *((unsigned int *)t32);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t36);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB183;

LAB180:    if (t46 != 0)
        goto LAB182;

LAB181:    *((unsigned int *)t34) = 1;

LAB183:    memset(t50, 0, 8);
    t51 = (t34 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (~(t52));
    t54 = *((unsigned int *)t34);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB184;

LAB185:    if (*((unsigned int *)t51) != 0)
        goto LAB186;

LAB187:    t59 = *((unsigned int *)t20);
    t60 = *((unsigned int *)t50);
    t61 = (t59 & t60);
    *((unsigned int *)t58) = t61;
    t62 = (t20 + 4);
    t63 = (t50 + 4);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB188;

LAB189:
LAB190:    goto LAB179;

LAB182:    t49 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB183;

LAB184:    *((unsigned int *)t50) = 1;
    goto LAB187;

LAB186:    t57 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB187;

LAB188:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t58) = (t70 | t71);
    t72 = (t20 + 4);
    t73 = (t50 + 4);
    t74 = *((unsigned int *)t20);
    t75 = (~(t74));
    t76 = *((unsigned int *)t72);
    t77 = (~(t76));
    t78 = *((unsigned int *)t50);
    t79 = (~(t78));
    t80 = *((unsigned int *)t73);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t86 & t84);
    t87 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t87 & t85);
    t88 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t88 & t84);
    t89 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t89 & t85);
    goto LAB190;

LAB191:    xsi_set_current_line(118, ng0);
    xsi_vlogfile_write(1, 0, 0, ng5, 1, t0);
    goto LAB193;

LAB194:    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng8)));
    memset(t4, 0, 8);
    xsi_vlog_signed_unary_minus(t4, 32, t2, 32);
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 4);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(128, ng0);
    t2 = (t0 + 3136);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB195;
    goto LAB1;

LAB195:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng8)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_unary_minus(t4, 32, t2, 32);
    memset(t20, 0, 8);
    t5 = (t3 + 4);
    t6 = (t4 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t4);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB199;

LAB196:    if (t16 != 0)
        goto LAB198;

LAB197:    *((unsigned int *)t20) = 1;

LAB199:    memset(t34, 0, 8);
    t21 = (t20 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t20);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB200;

LAB201:    if (*((unsigned int *)t21) != 0)
        goto LAB202;

LAB203:    t28 = (t34 + 4);
    t29 = *((unsigned int *)t34);
    t30 = *((unsigned int *)t28);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB204;

LAB205:    memcpy(t96, t34, 8);

LAB206:    t90 = (t96 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (~(t91));
    t93 = *((unsigned int *)t96);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB218;

LAB219:    xsi_set_current_line(132, ng0);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t0);

LAB220:    xsi_set_current_line(135, ng0);
    t2 = (t0 + 3136);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB221;
    goto LAB1;

LAB198:    t19 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB199;

LAB200:    *((unsigned int *)t34) = 1;
    goto LAB203;

LAB202:    t27 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB203;

LAB204:    t32 = (t0 + 1208U);
    t33 = *((char **)t32);
    t32 = ((char*)((ng8)));
    memset(t50, 0, 8);
    t35 = (t33 + 4);
    t36 = (t32 + 4);
    t37 = *((unsigned int *)t33);
    t38 = *((unsigned int *)t32);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t36);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB210;

LAB207:    if (t46 != 0)
        goto LAB209;

LAB208:    *((unsigned int *)t50) = 1;

LAB210:    memset(t58, 0, 8);
    t51 = (t50 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (~(t52));
    t54 = *((unsigned int *)t50);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB211;

LAB212:    if (*((unsigned int *)t51) != 0)
        goto LAB213;

LAB214:    t59 = *((unsigned int *)t34);
    t60 = *((unsigned int *)t58);
    t61 = (t59 & t60);
    *((unsigned int *)t96) = t61;
    t62 = (t34 + 4);
    t63 = (t58 + 4);
    t64 = (t96 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB215;

LAB216:
LAB217:    goto LAB206;

LAB209:    t49 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB210;

LAB211:    *((unsigned int *)t58) = 1;
    goto LAB214;

LAB213:    t57 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB214;

LAB215:    t70 = *((unsigned int *)t96);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t96) = (t70 | t71);
    t72 = (t34 + 4);
    t73 = (t58 + 4);
    t74 = *((unsigned int *)t34);
    t75 = (~(t74));
    t76 = *((unsigned int *)t72);
    t77 = (~(t76));
    t78 = *((unsigned int *)t58);
    t79 = (~(t78));
    t80 = *((unsigned int *)t73);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t86 & t84);
    t87 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t87 & t85);
    t88 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t88 & t84);
    t89 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t89 & t85);
    goto LAB217;

LAB218:    xsi_set_current_line(130, ng0);
    xsi_vlogfile_write(1, 0, 0, ng5, 1, t0);
    goto LAB220;

LAB221:    xsi_set_current_line(136, ng0);
    t2 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_signed_unary_minus(t4, 32, t2, 32);
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 4);
    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_signed_unary_minus(t4, 32, t2, 32);
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 4);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(140, ng0);
    t2 = (t0 + 3136);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB222;
    goto LAB1;

LAB222:    xsi_set_current_line(141, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB226;

LAB223:    if (t16 != 0)
        goto LAB225;

LAB224:    *((unsigned int *)t4) = 1;

LAB226:    memset(t20, 0, 8);
    t21 = (t4 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t4);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB227;

LAB228:    if (*((unsigned int *)t21) != 0)
        goto LAB229;

LAB230:    t28 = (t20 + 4);
    t29 = *((unsigned int *)t20);
    t30 = *((unsigned int *)t28);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB231;

LAB232:    memcpy(t58, t20, 8);

LAB233:    t90 = (t58 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (~(t91));
    t93 = *((unsigned int *)t58);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB245;

LAB246:    xsi_set_current_line(144, ng0);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t0);

LAB247:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 3136);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB248;
    goto LAB1;

LAB225:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB226;

LAB227:    *((unsigned int *)t20) = 1;
    goto LAB230;

LAB229:    t27 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB230;

LAB231:    t32 = (t0 + 1208U);
    t33 = *((char **)t32);
    t32 = ((char*)((ng1)));
    memset(t34, 0, 8);
    t35 = (t33 + 4);
    t36 = (t32 + 4);
    t37 = *((unsigned int *)t33);
    t38 = *((unsigned int *)t32);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t36);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB237;

LAB234:    if (t46 != 0)
        goto LAB236;

LAB235:    *((unsigned int *)t34) = 1;

LAB237:    memset(t50, 0, 8);
    t51 = (t34 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (~(t52));
    t54 = *((unsigned int *)t34);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB238;

LAB239:    if (*((unsigned int *)t51) != 0)
        goto LAB240;

LAB241:    t59 = *((unsigned int *)t20);
    t60 = *((unsigned int *)t50);
    t61 = (t59 & t60);
    *((unsigned int *)t58) = t61;
    t62 = (t20 + 4);
    t63 = (t50 + 4);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB242;

LAB243:
LAB244:    goto LAB233;

LAB236:    t49 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB237;

LAB238:    *((unsigned int *)t50) = 1;
    goto LAB241;

LAB240:    t57 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB241;

LAB242:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t58) = (t70 | t71);
    t72 = (t20 + 4);
    t73 = (t50 + 4);
    t74 = *((unsigned int *)t20);
    t75 = (~(t74));
    t76 = *((unsigned int *)t72);
    t77 = (~(t76));
    t78 = *((unsigned int *)t50);
    t79 = (~(t78));
    t80 = *((unsigned int *)t73);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t86 & t84);
    t87 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t87 & t85);
    t88 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t88 & t84);
    t89 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t89 & t85);
    goto LAB244;

LAB245:    xsi_set_current_line(142, ng0);
    xsi_vlogfile_write(1, 0, 0, ng5, 1, t0);
    goto LAB247;

LAB248:    xsi_set_current_line(148, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(150, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(151, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(152, ng0);
    t2 = (t0 + 3136);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB249;
    goto LAB1;

LAB249:    xsi_set_current_line(153, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng8)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB253;

LAB250:    if (t16 != 0)
        goto LAB252;

LAB251:    *((unsigned int *)t4) = 1;

LAB253:    memset(t20, 0, 8);
    t21 = (t4 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t4);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB254;

LAB255:    if (*((unsigned int *)t21) != 0)
        goto LAB256;

LAB257:    t28 = (t20 + 4);
    t29 = *((unsigned int *)t20);
    t30 = *((unsigned int *)t28);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB258;

LAB259:    memcpy(t58, t20, 8);

LAB260:    t90 = (t58 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (~(t91));
    t93 = *((unsigned int *)t58);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB272;

LAB273:    xsi_set_current_line(156, ng0);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t0);

LAB274:    xsi_set_current_line(159, ng0);
    t2 = (t0 + 3136);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB275;
    goto LAB1;

LAB252:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB253;

LAB254:    *((unsigned int *)t20) = 1;
    goto LAB257;

LAB256:    t27 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB257;

LAB258:    t32 = (t0 + 1368U);
    t33 = *((char **)t32);
    t32 = ((char*)((ng1)));
    memset(t34, 0, 8);
    t35 = (t33 + 4);
    t36 = (t32 + 4);
    t37 = *((unsigned int *)t33);
    t38 = *((unsigned int *)t32);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t36);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB264;

LAB261:    if (t46 != 0)
        goto LAB263;

LAB262:    *((unsigned int *)t34) = 1;

LAB264:    memset(t50, 0, 8);
    t51 = (t34 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (~(t52));
    t54 = *((unsigned int *)t34);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB265;

LAB266:    if (*((unsigned int *)t51) != 0)
        goto LAB267;

LAB268:    t59 = *((unsigned int *)t20);
    t60 = *((unsigned int *)t50);
    t61 = (t59 & t60);
    *((unsigned int *)t58) = t61;
    t62 = (t20 + 4);
    t63 = (t50 + 4);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB269;

LAB270:
LAB271:    goto LAB260;

LAB263:    t49 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB264;

LAB265:    *((unsigned int *)t50) = 1;
    goto LAB268;

LAB267:    t57 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB268;

LAB269:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t58) = (t70 | t71);
    t72 = (t20 + 4);
    t73 = (t50 + 4);
    t74 = *((unsigned int *)t20);
    t75 = (~(t74));
    t76 = *((unsigned int *)t72);
    t77 = (~(t76));
    t78 = *((unsigned int *)t50);
    t79 = (~(t78));
    t80 = *((unsigned int *)t73);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t86 & t84);
    t87 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t87 & t85);
    t88 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t88 & t84);
    t89 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t89 & t85);
    goto LAB271;

LAB272:    xsi_set_current_line(154, ng0);
    xsi_vlogfile_write(1, 0, 0, ng5, 1, t0);
    goto LAB274;

LAB275:    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(162, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(163, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(164, ng0);
    t2 = (t0 + 3136);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB276;
    goto LAB1;

LAB276:    xsi_set_current_line(165, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng8)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB280;

LAB277:    if (t16 != 0)
        goto LAB279;

LAB278:    *((unsigned int *)t4) = 1;

LAB280:    memset(t20, 0, 8);
    t21 = (t4 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t4);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB281;

LAB282:    if (*((unsigned int *)t21) != 0)
        goto LAB283;

LAB284:    t28 = (t20 + 4);
    t29 = *((unsigned int *)t20);
    t30 = *((unsigned int *)t28);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB285;

LAB286:    memcpy(t58, t20, 8);

LAB287:    t90 = (t58 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (~(t91));
    t93 = *((unsigned int *)t58);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB299;

LAB300:    xsi_set_current_line(168, ng0);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t0);

LAB301:    goto LAB1;

LAB279:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB280;

LAB281:    *((unsigned int *)t20) = 1;
    goto LAB284;

LAB283:    t27 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB284;

LAB285:    t32 = (t0 + 1368U);
    t33 = *((char **)t32);
    t32 = ((char*)((ng1)));
    memset(t34, 0, 8);
    t35 = (t33 + 4);
    t36 = (t32 + 4);
    t37 = *((unsigned int *)t33);
    t38 = *((unsigned int *)t32);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t36);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB291;

LAB288:    if (t46 != 0)
        goto LAB290;

LAB289:    *((unsigned int *)t34) = 1;

LAB291:    memset(t50, 0, 8);
    t51 = (t34 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (~(t52));
    t54 = *((unsigned int *)t34);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB292;

LAB293:    if (*((unsigned int *)t51) != 0)
        goto LAB294;

LAB295:    t59 = *((unsigned int *)t20);
    t60 = *((unsigned int *)t50);
    t61 = (t59 & t60);
    *((unsigned int *)t58) = t61;
    t62 = (t20 + 4);
    t63 = (t50 + 4);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB296;

LAB297:
LAB298:    goto LAB287;

LAB290:    t49 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB291;

LAB292:    *((unsigned int *)t50) = 1;
    goto LAB295;

LAB294:    t57 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB295;

LAB296:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t58) = (t70 | t71);
    t72 = (t20 + 4);
    t73 = (t50 + 4);
    t74 = *((unsigned int *)t20);
    t75 = (~(t74));
    t76 = *((unsigned int *)t72);
    t77 = (~(t76));
    t78 = *((unsigned int *)t50);
    t79 = (~(t78));
    t80 = *((unsigned int *)t73);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t86 & t84);
    t87 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t87 & t85);
    t88 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t88 & t84);
    t89 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t89 & t85);
    goto LAB298;

LAB299:    xsi_set_current_line(166, ng0);
    xsi_vlogfile_write(1, 0, 0, ng5, 1, t0);
    goto LAB301;

}


extern void work_m_00000000001506043714_2387207229_init()
{
	static char *pe[] = {(void *)Initial_33_0};
	xsi_register_didat("work_m_00000000001506043714_2387207229", "isim/alu_alu_sch_tb_isim_beh.exe.sim/work/m_00000000001506043714_2387207229.didat");
	xsi_register_executes(pe);
}
