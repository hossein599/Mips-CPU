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
static const char *ng0 = "C:/CPU/CPU/CPU/instruction_memory.v";
static int ng1[] = {0, 0};
static int ng2[] = {256, 0};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {939589637U, 0U};
static unsigned int ng6[] = {939655169U, 0U};
static unsigned int ng7[] = {2234374U, 0U};
static int ng8[] = {2, 0};
static unsigned int ng9[] = {2301965U, 0U};
static int ng10[] = {3, 0};
static unsigned int ng11[] = {6432774U, 0U};
static int ng12[] = {4, 0};
static unsigned int ng13[] = {10950662U, 0U};
static int ng14[] = {5, 0};
static unsigned int ng15[] = {811728899U, 0U};
static int ng16[] = {6, 0};
static unsigned int ng17[] = {8597517U, 0U};
static int ng18[] = {7, 0};
static unsigned int ng19[] = {13049862U, 0U};
static int ng20[] = {8, 0};
static unsigned int ng21[] = {268435460U, 0U};
static int ng22[] = {9, 0};



static void Always_28_0(char *t0)
{
    char t13[8];
    char t15[8];
    char t16[8];
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
    char *t14;
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
    unsigned int t27;
    int t28;
    char *t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    int t35;
    int t36;

LAB0:    t1 = (t0 + 1720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1916);
    *((int *)t2) = 1;
    t3 = (t0 + 1748);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1104);
    t4 = (t0 + 1104);
    t5 = (t4 + 44U);
    t11 = *((char **)t5);
    t12 = (t0 + 1104);
    t14 = (t12 + 40U);
    t17 = *((char **)t14);
    t18 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t13, t15, t11, t17, 2, 1, t18, 32, 1);
    t19 = (t13 + 4);
    t6 = *((unsigned int *)t19);
    t28 = (!(t6));
    t20 = (t15 + 4);
    t7 = *((unsigned int *)t20);
    t31 = (!(t7));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB16;

LAB17:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1104);
    t4 = (t0 + 1104);
    t5 = (t4 + 44U);
    t11 = *((char **)t5);
    t12 = (t0 + 1104);
    t14 = (t12 + 40U);
    t17 = *((char **)t14);
    t18 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t13, t15, t11, t17, 2, 1, t18, 32, 1);
    t19 = (t13 + 4);
    t6 = *((unsigned int *)t19);
    t28 = (!(t6));
    t20 = (t15 + 4);
    t7 = *((unsigned int *)t20);
    t31 = (!(t7));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1104);
    t4 = (t0 + 1104);
    t5 = (t4 + 44U);
    t11 = *((char **)t5);
    t12 = (t0 + 1104);
    t14 = (t12 + 40U);
    t17 = *((char **)t14);
    t18 = ((char*)((ng8)));
    xsi_vlog_generic_convert_array_indices(t13, t15, t11, t17, 2, 1, t18, 32, 1);
    t19 = (t13 + 4);
    t6 = *((unsigned int *)t19);
    t28 = (!(t6));
    t20 = (t15 + 4);
    t7 = *((unsigned int *)t20);
    t31 = (!(t7));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB20;

LAB21:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1104);
    t4 = (t0 + 1104);
    t5 = (t4 + 44U);
    t11 = *((char **)t5);
    t12 = (t0 + 1104);
    t14 = (t12 + 40U);
    t17 = *((char **)t14);
    t18 = ((char*)((ng10)));
    xsi_vlog_generic_convert_array_indices(t13, t15, t11, t17, 2, 1, t18, 32, 1);
    t19 = (t13 + 4);
    t6 = *((unsigned int *)t19);
    t28 = (!(t6));
    t20 = (t15 + 4);
    t7 = *((unsigned int *)t20);
    t31 = (!(t7));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB22;

LAB23:    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1104);
    t4 = (t0 + 1104);
    t5 = (t4 + 44U);
    t11 = *((char **)t5);
    t12 = (t0 + 1104);
    t14 = (t12 + 40U);
    t17 = *((char **)t14);
    t18 = ((char*)((ng12)));
    xsi_vlog_generic_convert_array_indices(t13, t15, t11, t17, 2, 1, t18, 32, 1);
    t19 = (t13 + 4);
    t6 = *((unsigned int *)t19);
    t28 = (!(t6));
    t20 = (t15 + 4);
    t7 = *((unsigned int *)t20);
    t31 = (!(t7));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB24;

LAB25:    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 1104);
    t4 = (t0 + 1104);
    t5 = (t4 + 44U);
    t11 = *((char **)t5);
    t12 = (t0 + 1104);
    t14 = (t12 + 40U);
    t17 = *((char **)t14);
    t18 = ((char*)((ng14)));
    xsi_vlog_generic_convert_array_indices(t13, t15, t11, t17, 2, 1, t18, 32, 1);
    t19 = (t13 + 4);
    t6 = *((unsigned int *)t19);
    t28 = (!(t6));
    t20 = (t15 + 4);
    t7 = *((unsigned int *)t20);
    t31 = (!(t7));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB26;

LAB27:    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 1104);
    t4 = (t0 + 1104);
    t5 = (t4 + 44U);
    t11 = *((char **)t5);
    t12 = (t0 + 1104);
    t14 = (t12 + 40U);
    t17 = *((char **)t14);
    t18 = ((char*)((ng16)));
    xsi_vlog_generic_convert_array_indices(t13, t15, t11, t17, 2, 1, t18, 32, 1);
    t19 = (t13 + 4);
    t6 = *((unsigned int *)t19);
    t28 = (!(t6));
    t20 = (t15 + 4);
    t7 = *((unsigned int *)t20);
    t31 = (!(t7));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB28;

LAB29:    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 1104);
    t4 = (t0 + 1104);
    t5 = (t4 + 44U);
    t11 = *((char **)t5);
    t12 = (t0 + 1104);
    t14 = (t12 + 40U);
    t17 = *((char **)t14);
    t18 = ((char*)((ng18)));
    xsi_vlog_generic_convert_array_indices(t13, t15, t11, t17, 2, 1, t18, 32, 1);
    t19 = (t13 + 4);
    t6 = *((unsigned int *)t19);
    t28 = (!(t6));
    t20 = (t15 + 4);
    t7 = *((unsigned int *)t20);
    t31 = (!(t7));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB30;

LAB31:    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 1104);
    t4 = (t0 + 1104);
    t5 = (t4 + 44U);
    t11 = *((char **)t5);
    t12 = (t0 + 1104);
    t14 = (t12 + 40U);
    t17 = *((char **)t14);
    t18 = ((char*)((ng20)));
    xsi_vlog_generic_convert_array_indices(t13, t15, t11, t17, 2, 1, t18, 32, 1);
    t19 = (t13 + 4);
    t6 = *((unsigned int *)t19);
    t28 = (!(t6));
    t20 = (t15 + 4);
    t7 = *((unsigned int *)t20);
    t31 = (!(t7));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB32;

LAB33:    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 1104);
    t4 = (t0 + 1104);
    t5 = (t4 + 44U);
    t11 = *((char **)t5);
    t12 = (t0 + 1104);
    t14 = (t12 + 40U);
    t17 = *((char **)t14);
    t18 = ((char*)((ng22)));
    xsi_vlog_generic_convert_array_indices(t13, t15, t11, t17, 2, 1, t18, 32, 1);
    t19 = (t13 + 4);
    t6 = *((unsigned int *)t19);
    t28 = (!(t6));
    t20 = (t15 + 4);
    t7 = *((unsigned int *)t20);
    t31 = (!(t7));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB34;

LAB35:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1104);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1104);
    t11 = (t5 + 44U);
    t12 = *((char **)t11);
    t14 = (t0 + 1104);
    t17 = (t14 + 40U);
    t18 = *((char **)t17);
    t19 = (t0 + 600U);
    t20 = *((char **)t19);
    xsi_vlog_generic_get_array_select_value(t13, 32, t4, t12, t18, 2, 1, t20, 8, 2);
    t19 = (t0 + 1012);
    xsi_vlogvar_assign_value(t19, t13, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(32, ng0);

LAB9:    xsi_set_current_line(34, ng0);
    xsi_set_current_line(34, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1196);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);

LAB10:    t2 = (t0 + 1196);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_signed_less(t13, 32, t4, 32, t5, 32);
    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:    goto LAB8;

LAB11:    xsi_set_current_line(35, ng0);

LAB13:    xsi_set_current_line(37, ng0);
    t12 = ((char*)((ng3)));
    t14 = (t0 + 1104);
    t17 = (t0 + 1104);
    t18 = (t17 + 44U);
    t19 = *((char **)t18);
    t20 = (t0 + 1104);
    t21 = (t20 + 40U);
    t22 = *((char **)t21);
    t23 = (t0 + 1196);
    t24 = (t23 + 36U);
    t25 = *((char **)t24);
    xsi_vlog_generic_convert_array_indices(t15, t16, t19, t22, 2, 1, t25, 32, 1);
    t26 = (t15 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (!(t27));
    t29 = (t16 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1196);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 1196);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    goto LAB10;

LAB14:    t33 = *((unsigned int *)t15);
    t34 = *((unsigned int *)t16);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t14, t12, 0, *((unsigned int *)t16), t36);
    goto LAB15;

LAB16:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t15);
    t35 = (t8 - t9);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t15), t36);
    goto LAB17;

LAB18:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t15);
    t35 = (t8 - t9);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t15), t36);
    goto LAB19;

LAB20:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t15);
    t35 = (t8 - t9);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t15), t36);
    goto LAB21;

LAB22:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t15);
    t35 = (t8 - t9);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t15), t36);
    goto LAB23;

LAB24:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t15);
    t35 = (t8 - t9);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t15), t36);
    goto LAB25;

LAB26:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t15);
    t35 = (t8 - t9);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t15), t36);
    goto LAB27;

LAB28:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t15);
    t35 = (t8 - t9);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t15), t36);
    goto LAB29;

LAB30:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t15);
    t35 = (t8 - t9);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t15), t36);
    goto LAB31;

LAB32:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t15);
    t35 = (t8 - t9);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t15), t36);
    goto LAB33;

LAB34:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t15);
    t35 = (t8 - t9);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t15), t36);
    goto LAB35;

}


extern void work_m_00000000002140406797_0610666722_init()
{
	static char *pe[] = {(void *)Always_28_0};
	xsi_register_didat("work_m_00000000002140406797_0610666722", "isim/CPU_TB_isim_beh.exe.sim/work/m_00000000002140406797_0610666722.didat");
	xsi_register_executes(pe);
}
