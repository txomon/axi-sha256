/*****************************************************************************
 * Filename:          drivers/axi_sha256_sl_v1_00_a/src/axi_sha256_sl_selftest.c
 * Version:           1.00.a
 * Description:       Contains a diagnostic self-test function for the axi_sha256_sl driver
 * Date:              Tue Mar  4 19:30:40 2014 (by Create and Import Peripheral Wizard)
 *****************************************************************************/

/***************************** Include Files *******************************/

#include "axi_sha256_sl.h"
#include "stdio.h"
#include "xio.h"
#include "xparameters.h"

/************************** Constant Definitions ***************************/

#define READ_WRITE_MUL_FACTOR 0x10

/************************** Variable Definitions ****************************/

/************************** Function Definitions ***************************/

/**
 *
 * Run a self-test on the driver/device. Note this may be a destructive test if
 * resets of the device are performed.
 *
 * If the hardware system is not built correctly, this function may never
 * return to the caller.
 *
 * @param   baseaddr_p is the base address of the AXI_SHA256_SL instance to be worked on.
 *
 * @return
 *
 *    - XST_SUCCESS   if all self-test code passed
 *    - XST_FAILURE   if any self-test code failed
 *
 * @note    Caching must be turned off for this function to work.
 * @note    Self test may fail if data memory and device are not on the same bus.
 *
 */
XStatus AXI_SHA256_SL_SelfTest(void * baseaddr_p) {

	Xuint32 base;
	Xuint32 read_value;
	int errors = 0;

	base = (Xuint32) baseaddr_p;

	xil_printf("******************************\n\r");
	xil_printf("* SHA256 Module Self Test\n\r");
	xil_printf("******************************\n\n\r");

	/**
	 * Test for hashing "abcd" and checking output
	 */

	/*
	 * We first write all the data into the input
	 */

	AXI_SHA256_SL_mWriteSlaveReg0(base, 0, (Xuint32)0x61626380);
	AXI_SHA256_SL_mWriteSlaveReg1(base, 0, (Xuint32)0);
	AXI_SHA256_SL_mWriteSlaveReg2(base, 0, (Xuint32)0);
	AXI_SHA256_SL_mWriteSlaveReg3(base, 0, (Xuint32)0);
	AXI_SHA256_SL_mWriteSlaveReg4(base, 0, (Xuint32)0);
	AXI_SHA256_SL_mWriteSlaveReg5(base, 0, (Xuint32)0);
	AXI_SHA256_SL_mWriteSlaveReg6(base, 0, (Xuint32)0);
	AXI_SHA256_SL_mWriteSlaveReg7(base, 0, (Xuint32)0);
	AXI_SHA256_SL_mWriteSlaveReg8(base, 0, (Xuint32)0);
	AXI_SHA256_SL_mWriteSlaveReg9(base, 0, (Xuint32)0);
	AXI_SHA256_SL_mWriteSlaveReg10(base, 0, (Xuint32)0);
	AXI_SHA256_SL_mWriteSlaveReg11(base, 0, (Xuint32)0);
	AXI_SHA256_SL_mWriteSlaveReg12(base, 0, (Xuint32)0);
	AXI_SHA256_SL_mWriteSlaveReg13(base, 0, (Xuint32)0);
	AXI_SHA256_SL_mWriteSlaveReg14(base, 0, (Xuint32)0);
	AXI_SHA256_SL_mWriteSlaveReg15(base, 0, (Xuint32)0x00000018);

	/*
	 * We set the hash input to 0
	 */AXI_SHA256_SL_mWriteSlaveReg16(base, 0, (Xuint32)0);
	AXI_SHA256_SL_mWriteSlaveReg17(base, 0, (Xuint32)0);
	AXI_SHA256_SL_mWriteSlaveReg18(base, 0, (Xuint32)0);
	AXI_SHA256_SL_mWriteSlaveReg19(base, 0, (Xuint32)0);
	AXI_SHA256_SL_mWriteSlaveReg20(base, 0, (Xuint32)0);
	AXI_SHA256_SL_mWriteSlaveReg21(base, 0, (Xuint32)0);
	AXI_SHA256_SL_mWriteSlaveReg22(base, 0, (Xuint32)0);
	AXI_SHA256_SL_mWriteSlaveReg23(base, 0, (Xuint32)0);

	/*
	 * Taken from echo -n "abcd" | sha256sum
	 *
	 * 88d4266fd4e6338d13b845fcf289579d209c897823b9217da3e161936f031589
	 *
	 */
	/*
	 * We read the hash output
	 */
	/*
	 * 88d4266f
	 */
	if (0x88d4266f != AXI_SHA256_SL_mReadSlaveReg24(base, 0)) {
		read_value = AXI_SHA256_SL_mReadSlaveReg24(base,0);
		xil_printf("Val 1: 0x88d4266f != (%x)\n", read_value);
		errors++;
	} else {
		xil_printf("Val 1: 0x88d4266f\n");
	}
	/*
	 * d4e6338d
	 */
	if (0xd4e6338d != AXI_SHA256_SL_mReadSlaveReg25(base, 0)) {
		read_value = AXI_SHA256_SL_mReadSlaveReg25(base,0);
		xil_printf("Val 2: 0xd4e6338d != (%x)\n", read_value);
		errors++;
	} else {
		xil_printf("Val 1: 0xd4e6338d\n");
	}
	/*
	 * 13b845fc
	 */
	if (0x13b845fc != AXI_SHA256_SL_mReadSlaveReg26(base, 0)) {
		read_value = AXI_SHA256_SL_mReadSlaveReg26(base,0);
		xil_printf("Val 3: 0x13b845fc != (%x)\n", read_value);
		errors++;
	} else {
		xil_printf("Val 3: 0x13b845fc\n");
	}
	/*
	 * f289579d
	 */
	if (0xf289579d != AXI_SHA256_SL_mReadSlaveReg27(base, 0)) {
		read_value = AXI_SHA256_SL_mReadSlaveReg27(base,0);
		xil_printf("Val 4: 0xf289579d != (%x)\n", read_value);
		errors++;
	} else {
		xil_printf("Val 4: 0xf289579d\n");
	}
	/*
	 * 209c8978
	 */
	if (0x209c8978 != AXI_SHA256_SL_mReadSlaveReg28(base, 0)) {
		read_value = AXI_SHA256_SL_mReadSlaveReg28(base,0);
		xil_printf("Val 5: 0x209c8978 != (%x)\n", read_value);
		errors++;
	} else {
		xil_printf("Val 5: 0x209c8978\n");
	}
	/*
	 * 23b9217d
	 */
	if (0x23b9217d != AXI_SHA256_SL_mReadSlaveReg29(base, 0)) {
		read_value = AXI_SHA256_SL_mReadSlaveReg29(base,0);
		xil_printf("Val 6: 0x23b9217d != (%x)\n", read_value);
		errors++;
	} else {
		xil_printf("Val 6: 0x23b9217d\n");
	}
	/*
	 * a3e16193
	 */
	if (0xa3e16193 != AXI_SHA256_SL_mReadSlaveReg30(base, 0)) {
		read_value = AXI_SHA256_SL_mReadSlaveReg30(base,0);
		xil_printf("Val 7: 0xa3e16193 != (%x)\n", read_value);
		errors++;
	} else {
		xil_printf("Val 7: 0xa3e16193\n");
	}
	/*
	 * 6f031589
	 */
	if (0x6f031589 != AXI_SHA256_SL_mReadSlaveReg31(base, 0)) {
		read_value = AXI_SHA256_SL_mReadSlaveReg31(base,0);
		xil_printf("Val 8: 0x6f031589 != (%x)\n", read_value);
		errors++;
	} else {
		xil_printf("Val 8: 0x6f031589\n");
	}

	if(errors > 0)
		return XST_FAILURE;
	return XST_SUCCESS;
}
