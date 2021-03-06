#include <linux/types.h>
#include <mach/mt_pm_ldo.h>
#include <cust_alsps.h>

static struct alsps_hw ltr553_cust_alsps_hw = {
  .i2c_num    = 2,
  .polling_mode_ps =0,
  .polling_mode_als =1,
  .power_id   = MT65XX_POWER_NONE,    /*LDO is not used*/
  .power_vol  = VOL_DEFAULT,          /*LDO is not used*/
  //.i2c_addr   = {0x0C, 0x48, 0x78, 0x00},
  .als_level  = { 1, 100, 300, 500, 600, 1000, 1500, 2000, 2500, 2800, 3200,  6000, 10000, 20000, 30000},
  .als_value  = { 0,  90,  90,  90,  90,   90,  640,  640,  640,  640,  640, 10240, 10240, 10240, 10240, 10240}, 
  .ps_threshold_high = 113,
  .ps_threshold_low = 96,
};
struct alsps_hw *ltr553_get_cust_alsps_hw(void) {
    return &ltr553_cust_alsps_hw;
}


