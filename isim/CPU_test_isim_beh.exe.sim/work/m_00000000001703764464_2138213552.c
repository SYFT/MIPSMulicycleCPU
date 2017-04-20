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
static const char *ng0 = "F:/workspace/FinishedProjects/MulticycleCPU/InstructionMemory.v";
static const char *ng1 = "instructions.txt";
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};



static void Initial_29_0(char *t0)
{
    char *t1;

LAB0:    xsi_set_current_line(29, ng0);

LAB2:    xsi_set_current_line(30, ng0);
    t1 = (t0 + 1104);
    xsi_vlogfile_readmemb(ng1, 0, t1, 0, 0, 0, 0);

LAB1:    return;
}

static void Cont_33_1(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;

LAB0:    t1 = (t0 + 1772U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1104);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t6 = (t0 + 1104);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t9 = (t0 + 1104);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    t12 = (t0 + 600U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 8, t4, t8, t11, 2, 1, t13, 32, 2);
    t12 = (t0 + 2468);
    t14 = (t12 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    memset(t17, 0, 8);
    t18 = 255U;
    t19 = t18;
    t20 = (t5 + 4);
    t21 = *((unsigned int *)t5);
    t18 = (t18 & t21);
    t22 = *((unsigned int *)t20);
    t19 = (t19 & t22);
    t23 = (t17 + 4);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t24 | t18);
    t25 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t25 | t19);
    xsi_driver_vfirst_trans(t12, 24, 31);
    t26 = (t0 + 2400);
    *((int *)t26) = 1;

LAB1:    return;
}

static void Cont_34_2(char *t0)
{
    char t5[8];
    char t14[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;

LAB0:    t1 = (t0 + 1916U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1104);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t6 = (t0 + 1104);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t9 = (t0 + 1104);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    t12 = (t0 + 600U);
    t13 = *((char **)t12);
    t12 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t13, 32, t12, 32);
    xsi_vlog_generic_get_array_select_value(t5, 8, t4, t8, t11, 2, 1, t14, 32, 2);
    t15 = (t0 + 2504);
    t16 = (t15 + 32U);
    t17 = *((char **)t16);
    t18 = (t17 + 40U);
    t19 = *((char **)t18);
    memset(t19, 0, 8);
    t20 = 255U;
    t21 = t20;
    t22 = (t5 + 4);
    t23 = *((unsigned int *)t5);
    t20 = (t20 & t23);
    t24 = *((unsigned int *)t22);
    t21 = (t21 & t24);
    t25 = (t19 + 4);
    t26 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t26 | t20);
    t27 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t27 | t21);
    xsi_driver_vfirst_trans(t15, 16, 23);
    t28 = (t0 + 2408);
    *((int *)t28) = 1;

LAB1:    return;
}

static void Cont_35_3(char *t0)
{
    char t5[8];
    char t14[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;

LAB0:    t1 = (t0 + 2060U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1104);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t6 = (t0 + 1104);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t9 = (t0 + 1104);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    t12 = (t0 + 600U);
    t13 = *((char **)t12);
    t12 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t13, 32, t12, 32);
    xsi_vlog_generic_get_array_select_value(t5, 8, t4, t8, t11, 2, 1, t14, 32, 2);
    t15 = (t0 + 2540);
    t16 = (t15 + 32U);
    t17 = *((char **)t16);
    t18 = (t17 + 40U);
    t19 = *((char **)t18);
    memset(t19, 0, 8);
    t20 = 255U;
    t21 = t20;
    t22 = (t5 + 4);
    t23 = *((unsigned int *)t5);
    t20 = (t20 & t23);
    t24 = *((unsigned int *)t22);
    t21 = (t21 & t24);
    t25 = (t19 + 4);
    t26 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t26 | t20);
    t27 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t27 | t21);
    xsi_driver_vfirst_trans(t15, 8, 15);
    t28 = (t0 + 2416);
    *((int *)t28) = 1;

LAB1:    return;
}

static void Cont_36_4(char *t0)
{
    char t5[8];
    char t14[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;

LAB0:    t1 = (t0 + 2204U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1104);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t6 = (t0 + 1104);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t9 = (t0 + 1104);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    t12 = (t0 + 600U);
    t13 = *((char **)t12);
    t12 = ((char*)((ng4)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t13, 32, t12, 32);
    xsi_vlog_generic_get_array_select_value(t5, 8, t4, t8, t11, 2, 1, t14, 32, 2);
    t15 = (t0 + 2576);
    t16 = (t15 + 32U);
    t17 = *((char **)t16);
    t18 = (t17 + 40U);
    t19 = *((char **)t18);
    memset(t19, 0, 8);
    t20 = 255U;
    t21 = t20;
    t22 = (t5 + 4);
    t23 = *((unsigned int *)t5);
    t20 = (t20 & t23);
    t24 = *((unsigned int *)t22);
    t21 = (t21 & t24);
    t25 = (t19 + 4);
    t26 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t26 | t20);
    t27 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t27 | t21);
    xsi_driver_vfirst_trans(t15, 0, 7);
    t28 = (t0 + 2424);
    *((int *)t28) = 1;

LAB1:    return;
}


extern void work_m_00000000001703764464_2138213552_init()
{
	static char *pe[] = {(void *)Initial_29_0,(void *)Cont_33_1,(void *)Cont_34_2,(void *)Cont_35_3,(void *)Cont_36_4};
	xsi_register_didat("work_m_00000000001703764464_2138213552", "isim/CPU_test_isim_beh.exe.sim/work/m_00000000001703764464_2138213552.didat");
	xsi_register_executes(pe);
}
