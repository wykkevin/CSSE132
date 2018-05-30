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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    unisims_ver_m_00000000002549801008_4245414866_init();
    unisims_ver_m_00000000001461499759_1414817250_init();
    unisims_ver_m_00000000002123152668_0970595058_init();
    work_m_00000000001340165503_3486556445_init();
    unisims_ver_m_00000000001844249156_0107986864_init();
    work_m_00000000001260522511_2621556985_init();
    unisims_ver_m_00000000003510477262_2316096324_init();
    unisims_ver_m_00000000001762375489_3501834183_init();
    unisims_ver_m_00000000000236260522_2449448540_init();
    unisims_ver_m_00000000001162476414_1323117156_init();
    work_m_00000000002626414714_0895588204_init();
    unisims_ver_m_00000000003960923341_1435897813_init();
    work_m_00000000001942977832_0609166380_init();
    unisims_ver_m_00000000003927721830_1593237687_init();
    work_m_00000000004246044250_1873409541_init();
    work_m_00000000004043672720_2725559894_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000004043672720_2725559894");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
