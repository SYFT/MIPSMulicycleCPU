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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "F:/workspace/MulticycleCPU/DataMemory.v";
static int ng1[] = {31, 0};
static int ng2[] = {24, 0};
static int ng3[] = {1, 0};
static int ng4[] = {23, 0};
static int ng5[] = {16, 0};
static int ng6[] = {2, 0};
static int ng7[] = {15, 0};
static int ng8[] = {8, 0};
static int ng9[] = {3, 0};
static int ng10[] = {7, 0};
static int ng11[] = {0, 0};
static unsigned int ng12[] = {0U, 2147483647U};
static int ng13[] = {127, 0};



static void Cont_33_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 1904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2448);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 2388);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Always_35_1(char *t0)
{
    char t14[8];
    char t23[8];
    char t24[8];
    char t25[8];
    char t48[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    int t33;
    char *t34;
    unsigned int t35;
    int t36;
    int t37;
    char *t38;
    unsigned int t39;
    int t40;
    int t41;
    unsigned int t42;
    int t43;
    unsigned int t44;
    unsigned int t45;
    int t46;
    int t47;

LAB0:    t1 = (t0 + 2048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 2396);
    *((int *)t2) = 1;
    t3 = (t0 + 2076);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(41, ng0);

LAB17:    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 1380);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(36, ng0);

LAB8:    xsi_set_current_line(37, ng0);
    t11 = (t0 + 1288);
    t12 = (t11 + 36U);
    t13 = *((char **)t12);
    t15 = (t0 + 1288);
    t16 = (t15 + 44U);
    t17 = *((char **)t16);
    t18 = (t0 + 1288);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    t21 = (t0 + 876U);
    t22 = *((char **)t21);
    xsi_vlog_generic_get_array_select_value(t14, 8, t13, t17, t20, 2, 1, t22, 32, 2);
    t21 = (t0 + 1380);
    t26 = (t0 + 1380);
    t27 = (t26 + 44U);
    t28 = *((char **)t27);
    t29 = ((char*)((ng1)));
    t30 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t23, t24, t25, ((int*)(t28)), 2, t29, 32, 1, t30, 32, 1);
    t31 = (t23 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (!(t32));
    t34 = (t24 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (!(t35));
    t37 = (t33 && t36);
    t38 = (t25 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (!(t39));
    t41 = (t37 && t40);
    if (t41 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1288);
    t11 = (t5 + 44U);
    t12 = *((char **)t11);
    t13 = (t0 + 1288);
    t15 = (t13 + 40U);
    t16 = *((char **)t15);
    t17 = (t0 + 876U);
    t18 = *((char **)t17);
    t17 = ((char*)((ng3)));
    memset(t23, 0, 8);
    xsi_vlog_unsigned_add(t23, 32, t18, 32, t17, 32);
    xsi_vlog_generic_get_array_select_value(t14, 8, t4, t12, t16, 2, 1, t23, 32, 2);
    t19 = (t0 + 1380);
    t20 = (t0 + 1380);
    t21 = (t20 + 44U);
    t22 = *((char **)t21);
    t26 = ((char*)((ng4)));
    t27 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t24, t25, t48, ((int*)(t22)), 2, t26, 32, 1, t27, 32, 1);
    t28 = (t24 + 4);
    t6 = *((unsigned int *)t28);
    t33 = (!(t6));
    t29 = (t25 + 4);
    t7 = *((unsigned int *)t29);
    t36 = (!(t7));
    t37 = (t33 && t36);
    t30 = (t48 + 4);
    t8 = *((unsigned int *)t30);
    t40 = (!(t8));
    t41 = (t37 && t40);
    if (t41 == 1)
        goto LAB11;

LAB12:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1288);
    t11 = (t5 + 44U);
    t12 = *((char **)t11);
    t13 = (t0 + 1288);
    t15 = (t13 + 40U);
    t16 = *((char **)t15);
    t17 = (t0 + 876U);
    t18 = *((char **)t17);
    t17 = ((char*)((ng6)));
    memset(t23, 0, 8);
    xsi_vlog_unsigned_add(t23, 32, t18, 32, t17, 32);
    xsi_vlog_generic_get_array_select_value(t14, 8, t4, t12, t16, 2, 1, t23, 32, 2);
    t19 = (t0 + 1380);
    t20 = (t0 + 1380);
    t21 = (t20 + 44U);
    t22 = *((char **)t21);
    t26 = ((char*)((ng7)));
    t27 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t24, t25, t48, ((int*)(t22)), 2, t26, 32, 1, t27, 32, 1);
    t28 = (t24 + 4);
    t6 = *((unsigned int *)t28);
    t33 = (!(t6));
    t29 = (t25 + 4);
    t7 = *((unsigned int *)t29);
    t36 = (!(t7));
    t37 = (t33 && t36);
    t30 = (t48 + 4);
    t8 = *((unsigned int *)t30);
    t40 = (!(t8));
    t41 = (t37 && t40);
    if (t41 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1288);
    t11 = (t5 + 44U);
    t12 = *((char **)t11);
    t13 = (t0 + 1288);
    t15 = (t13 + 40U);
    t16 = *((char **)t15);
    t17 = (t0 + 876U);
    t18 = *((char **)t17);
    t17 = ((char*)((ng9)));
    memset(t23, 0, 8);
    xsi_vlog_unsigned_add(t23, 32, t18, 32, t17, 32);
    xsi_vlog_generic_get_array_select_value(t14, 8, t4, t12, t16, 2, 1, t23, 32, 2);
    t19 = (t0 + 1380);
    t20 = (t0 + 1380);
    t21 = (t20 + 44U);
    t22 = *((char **)t21);
    t26 = ((char*)((ng10)));
    t27 = ((char*)((ng11)));
    xsi_vlog_convert_partindices(t24, t25, t48, ((int*)(t22)), 2, t26, 32, 1, t27, 32, 1);
    t28 = (t24 + 4);
    t6 = *((unsigned int *)t28);
    t33 = (!(t6));
    t29 = (t25 + 4);
    t7 = *((unsigned int *)t29);
    t36 = (!(t7));
    t37 = (t33 && t36);
    t30 = (t48 + 4);
    t8 = *((unsigned int *)t30);
    t40 = (!(t8));
    t41 = (t37 && t40);
    if (t41 == 1)
        goto LAB15;

LAB16:    goto LAB7;

LAB9:    t42 = *((unsigned int *)t25);
    t43 = (t42 + 0);
    t44 = *((unsigned int *)t23);
    t45 = *((unsigned int *)t24);
    t46 = (t44 - t45);
    t47 = (t46 + 1);
    xsi_vlogvar_wait_assign_value(t21, t14, t43, *((unsigned int *)t24), t47, 0LL);
    goto LAB10;

LAB11:    t9 = *((unsigned int *)t48);
    t43 = (t9 + 0);
    t10 = *((unsigned int *)t24);
    t32 = *((unsigned int *)t25);
    t46 = (t10 - t32);
    t47 = (t46 + 1);
    xsi_vlogvar_wait_assign_value(t19, t14, t43, *((unsigned int *)t25), t47, 0LL);
    goto LAB12;

LAB13:    t9 = *((unsigned int *)t48);
    t43 = (t9 + 0);
    t10 = *((unsigned int *)t24);
    t32 = *((unsigned int *)t25);
    t46 = (t10 - t32);
    t47 = (t46 + 1);
    xsi_vlogvar_wait_assign_value(t19, t14, t43, *((unsigned int *)t25), t47, 0LL);
    goto LAB14;

LAB15:    t9 = *((unsigned int *)t48);
    t43 = (t9 + 0);
    t10 = *((unsigned int *)t24);
    t32 = *((unsigned int *)t25);
    t46 = (t10 - t32);
    t47 = (t46 + 1);
    xsi_vlogvar_wait_assign_value(t19, t14, t43, *((unsigned int *)t25), t47, 0LL);
    goto LAB16;

}

static void Always_45_2(char *t0)
{
    char t7[8];
    char t10[8];
    char t24[8];
    char t28[8];
    char t36[8];
    char t81[8];
    char t92[8];
    char t93[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    char *t27;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    int t60;
    int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t82;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    char *t94;
    char *t95;
    char *t96;
    char *t97;
    char *t98;
    char *t99;
    char *t100;
    char *t101;
    unsigned int t102;
    int t103;
    char *t104;
    unsigned int t105;
    int t106;
    int t107;
    unsigned int t108;
    unsigned int t109;
    int t110;
    int t111;

LAB0:    t1 = (t0 + 2192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2404);
    *((int *)t2) = 1;
    t3 = (t0 + 2220);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(46, ng0);
    t4 = ((char*)((ng11)));
    t5 = (t0 + 876U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB6;

LAB5:    t8 = (t6 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB6;

LAB9:    if (*((unsigned int *)t4) > *((unsigned int *)t6))
        goto LAB8;

LAB7:    *((unsigned int *)t7) = 1;

LAB8:    memset(t10, 0, 8);
    t11 = (t7 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (~(t12));
    t14 = *((unsigned int *)t7);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t11) != 0)
        goto LAB12;

LAB13:    t18 = (t10 + 4);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t18);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB14;

LAB15:    memcpy(t36, t10, 8);

LAB16:    t68 = (t36 + 4);
    t69 = *((unsigned int *)t68);
    t70 = (~(t69));
    t71 = *((unsigned int *)t36);
    t72 = (t71 & t70);
    t73 = (t72 != 0);
    if (t73 > 0)
        goto LAB29;

LAB30:
LAB31:    goto LAB2;

LAB6:    t9 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB8;

LAB10:    *((unsigned int *)t10) = 1;
    goto LAB13;

LAB12:    t17 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB13;

LAB14:    t22 = (t0 + 876U);
    t23 = *((char **)t22);
    t22 = ((char*)((ng13)));
    memset(t24, 0, 8);
    t25 = (t23 + 4);
    if (*((unsigned int *)t25) != 0)
        goto LAB18;

LAB17:    t26 = (t22 + 4);
    if (*((unsigned int *)t26) != 0)
        goto LAB18;

LAB21:    if (*((unsigned int *)t23) > *((unsigned int *)t22))
        goto LAB20;

LAB19:    *((unsigned int *)t24) = 1;

LAB20:    memset(t28, 0, 8);
    t29 = (t24 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t24);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t29) != 0)
        goto LAB24;

LAB25:    t37 = *((unsigned int *)t10);
    t38 = *((unsigned int *)t28);
    t39 = (t37 & t38);
    *((unsigned int *)t36) = t39;
    t40 = (t10 + 4);
    t41 = (t28 + 4);
    t42 = (t36 + 4);
    t43 = *((unsigned int *)t40);
    t44 = *((unsigned int *)t41);
    t45 = (t43 | t44);
    *((unsigned int *)t42) = t45;
    t46 = *((unsigned int *)t42);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB26;

LAB27:
LAB28:    goto LAB16;

LAB18:    t27 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB20;

LAB22:    *((unsigned int *)t28) = 1;
    goto LAB25;

LAB24:    t35 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB25;

LAB26:    t48 = *((unsigned int *)t36);
    t49 = *((unsigned int *)t42);
    *((unsigned int *)t36) = (t48 | t49);
    t50 = (t10 + 4);
    t51 = (t28 + 4);
    t52 = *((unsigned int *)t10);
    t53 = (~(t52));
    t54 = *((unsigned int *)t50);
    t55 = (~(t54));
    t56 = *((unsigned int *)t28);
    t57 = (~(t56));
    t58 = *((unsigned int *)t51);
    t59 = (~(t58));
    t60 = (t53 & t55);
    t61 = (t57 & t59);
    t62 = (~(t60));
    t63 = (~(t61));
    t64 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t64 & t62);
    t65 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t65 & t63);
    t66 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t66 & t62);
    t67 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t67 & t63);
    goto LAB28;

LAB29:    xsi_set_current_line(46, ng0);

LAB32:    xsi_set_current_line(47, ng0);
    t74 = (t0 + 784U);
    t75 = *((char **)t74);
    t74 = (t75 + 4);
    t76 = *((unsigned int *)t74);
    t77 = (~(t76));
    t78 = *((unsigned int *)t75);
    t79 = (t78 & t77);
    t80 = (t79 != 0);
    if (t80 > 0)
        goto LAB33;

LAB34:
LAB35:    goto LAB31;

LAB33:    xsi_set_current_line(47, ng0);

LAB36:    xsi_set_current_line(48, ng0);
    t82 = (t0 + 968U);
    t83 = *((char **)t82);
    memset(t81, 0, 8);
    t82 = (t81 + 4);
    t84 = (t83 + 4);
    t85 = *((unsigned int *)t83);
    t86 = (t85 >> 24);
    *((unsigned int *)t81) = t86;
    t87 = *((unsigned int *)t84);
    t88 = (t87 >> 24);
    *((unsigned int *)t82) = t88;
    t89 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t89 & 255U);
    t90 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t90 & 255U);
    t91 = (t0 + 1288);
    t94 = (t0 + 1288);
    t95 = (t94 + 44U);
    t96 = *((char **)t95);
    t97 = (t0 + 1288);
    t98 = (t97 + 40U);
    t99 = *((char **)t98);
    t100 = (t0 + 876U);
    t101 = *((char **)t100);
    xsi_vlog_generic_convert_array_indices(t92, t93, t96, t99, 2, 1, t101, 32, 2);
    t100 = (t92 + 4);
    t102 = *((unsigned int *)t100);
    t103 = (!(t102));
    t104 = (t93 + 4);
    t105 = *((unsigned int *)t104);
    t106 = (!(t105));
    t107 = (t103 && t106);
    if (t107 == 1)
        goto LAB37;

LAB38:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 968U);
    t3 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t4 = (t3 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (t12 >> 16);
    *((unsigned int *)t7) = t13;
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 16);
    *((unsigned int *)t2) = t15;
    t16 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t16 & 255U);
    t19 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t19 & 255U);
    t5 = (t0 + 1288);
    t6 = (t0 + 1288);
    t8 = (t6 + 44U);
    t9 = *((char **)t8);
    t11 = (t0 + 1288);
    t17 = (t11 + 40U);
    t18 = *((char **)t17);
    t22 = (t0 + 876U);
    t23 = *((char **)t22);
    t22 = ((char*)((ng3)));
    memset(t28, 0, 8);
    xsi_vlog_unsigned_add(t28, 32, t23, 32, t22, 32);
    xsi_vlog_generic_convert_array_indices(t10, t24, t9, t18, 2, 1, t28, 32, 2);
    t25 = (t10 + 4);
    t20 = *((unsigned int *)t25);
    t60 = (!(t20));
    t26 = (t24 + 4);
    t21 = *((unsigned int *)t26);
    t61 = (!(t21));
    t103 = (t60 && t61);
    if (t103 == 1)
        goto LAB39;

LAB40:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 968U);
    t3 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t4 = (t3 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (t12 >> 8);
    *((unsigned int *)t7) = t13;
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 8);
    *((unsigned int *)t2) = t15;
    t16 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t16 & 255U);
    t19 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t19 & 255U);
    t5 = (t0 + 1288);
    t6 = (t0 + 1288);
    t8 = (t6 + 44U);
    t9 = *((char **)t8);
    t11 = (t0 + 1288);
    t17 = (t11 + 40U);
    t18 = *((char **)t17);
    t22 = (t0 + 876U);
    t23 = *((char **)t22);
    t22 = ((char*)((ng6)));
    memset(t28, 0, 8);
    xsi_vlog_unsigned_add(t28, 32, t23, 32, t22, 32);
    xsi_vlog_generic_convert_array_indices(t10, t24, t9, t18, 2, 1, t28, 32, 2);
    t25 = (t10 + 4);
    t20 = *((unsigned int *)t25);
    t60 = (!(t20));
    t26 = (t24 + 4);
    t21 = *((unsigned int *)t26);
    t61 = (!(t21));
    t103 = (t60 && t61);
    if (t103 == 1)
        goto LAB41;

LAB42:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 968U);
    t3 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t4 = (t3 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (t12 >> 0);
    *((unsigned int *)t7) = t13;
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 0);
    *((unsigned int *)t2) = t15;
    t16 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t16 & 255U);
    t19 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t19 & 255U);
    t5 = (t0 + 1288);
    t6 = (t0 + 1288);
    t8 = (t6 + 44U);
    t9 = *((char **)t8);
    t11 = (t0 + 1288);
    t17 = (t11 + 40U);
    t18 = *((char **)t17);
    t22 = (t0 + 876U);
    t23 = *((char **)t22);
    t22 = ((char*)((ng9)));
    memset(t28, 0, 8);
    xsi_vlog_unsigned_add(t28, 32, t23, 32, t22, 32);
    xsi_vlog_generic_convert_array_indices(t10, t24, t9, t18, 2, 1, t28, 32, 2);
    t25 = (t10 + 4);
    t20 = *((unsigned int *)t25);
    t60 = (!(t20));
    t26 = (t24 + 4);
    t21 = *((unsigned int *)t26);
    t61 = (!(t21));
    t103 = (t60 && t61);
    if (t103 == 1)
        goto LAB43;

LAB44:    goto LAB35;

LAB37:    t108 = *((unsigned int *)t92);
    t109 = *((unsigned int *)t93);
    t110 = (t108 - t109);
    t111 = (t110 + 1);
    xsi_vlogvar_wait_assign_value(t91, t81, 0, *((unsigned int *)t93), t111, 0LL);
    goto LAB38;

LAB39:    t30 = *((unsigned int *)t10);
    t31 = *((unsigned int *)t24);
    t106 = (t30 - t31);
    t107 = (t106 + 1);
    xsi_vlogvar_wait_assign_value(t5, t7, 0, *((unsigned int *)t24), t107, 0LL);
    goto LAB40;

LAB41:    t30 = *((unsigned int *)t10);
    t31 = *((unsigned int *)t24);
    t106 = (t30 - t31);
    t107 = (t106 + 1);
    xsi_vlogvar_wait_assign_value(t5, t7, 0, *((unsigned int *)t24), t107, 0LL);
    goto LAB42;

LAB43:    t30 = *((unsigned int *)t10);
    t31 = *((unsigned int *)t24);
    t106 = (t30 - t31);
    t107 = (t106 + 1);
    xsi_vlogvar_wait_assign_value(t5, t7, 0, *((unsigned int *)t24), t107, 0LL);
    goto LAB44;

}


extern void work_m_00000000001267497276_2461264495_init()
{
	static char *pe[] = {(void *)Cont_33_0,(void *)Always_35_1,(void *)Always_45_2};
	xsi_register_didat("work_m_00000000001267497276_2461264495", "isim/CPU_test_isim_beh.exe.sim/work/m_00000000001267497276_2461264495.didat");
	xsi_register_executes(pe);
}
