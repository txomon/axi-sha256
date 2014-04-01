##############################################################################
## Filename:          drivers/axi_sha256_sl_v1_00_a/data/axi_sha256_sl_v2_1_0.tcl
## Description:       Microprocess Driver Command (tcl)
## Date:              Tue Mar  4 19:30:40 2014 (by Create and Import Peripheral Wizard)
##############################################################################

#uses "xillib.tcl"

proc generate {drv_handle} {
  xdefine_include_file $drv_handle "xparameters.h" "axi_sha256_sl" "NUM_INSTANCES" "DEVICE_ID" "C_BASEADDR" "C_HIGHADDR" 
}
