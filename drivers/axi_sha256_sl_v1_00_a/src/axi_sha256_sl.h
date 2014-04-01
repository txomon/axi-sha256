/*****************************************************************************
* Filename:          drivers/axi_sha256_sl_v1_00_a/src/axi_sha256_sl.h
* Version:           1.00.a
* Description:       axi_sha256_sl Driver Header File
* Date:              Tue Mar  4 19:30:40 2014 (by Create and Import Peripheral Wizard)
*****************************************************************************/

#ifndef AXI_SHA256_SL_H
#define AXI_SHA256_SL_H

/***************************** Include Files *******************************/

#include "xbasic_types.h"
#include "xstatus.h"
#include "xil_io.h"

/************************** Constant Definitions ***************************/


/**
 * User Logic Slave Space Offsets
 * -- SLV_REG0 : user logic slave module register 0
 * -- SLV_REG1 : user logic slave module register 1
 * -- SLV_REG2 : user logic slave module register 2
 * -- SLV_REG3 : user logic slave module register 3
 * -- SLV_REG4 : user logic slave module register 4
 * -- SLV_REG5 : user logic slave module register 5
 * -- SLV_REG6 : user logic slave module register 6
 * -- SLV_REG7 : user logic slave module register 7
 * -- SLV_REG8 : user logic slave module register 8
 * -- SLV_REG9 : user logic slave module register 9
 * -- SLV_REG10 : user logic slave module register 10
 * -- SLV_REG11 : user logic slave module register 11
 * -- SLV_REG12 : user logic slave module register 12
 * -- SLV_REG13 : user logic slave module register 13
 * -- SLV_REG14 : user logic slave module register 14
 * -- SLV_REG15 : user logic slave module register 15
 * -- SLV_REG16 : user logic slave module register 16
 * -- SLV_REG17 : user logic slave module register 17
 * -- SLV_REG18 : user logic slave module register 18
 * -- SLV_REG19 : user logic slave module register 19
 * -- SLV_REG20 : user logic slave module register 20
 * -- SLV_REG21 : user logic slave module register 21
 * -- SLV_REG22 : user logic slave module register 22
 * -- SLV_REG23 : user logic slave module register 23
 * -- SLV_REG24 : user logic slave module register 24
 * -- SLV_REG25 : user logic slave module register 25
 * -- SLV_REG26 : user logic slave module register 26
 * -- SLV_REG27 : user logic slave module register 27
 * -- SLV_REG28 : user logic slave module register 28
 * -- SLV_REG29 : user logic slave module register 29
 * -- SLV_REG30 : user logic slave module register 30
 * -- SLV_REG31 : user logic slave module register 31
 */
#define AXI_SHA256_SL_USER_SLV_SPACE_OFFSET (0x00000000)
#define AXI_SHA256_SL_SLV_REG0_OFFSET (AXI_SHA256_SL_USER_SLV_SPACE_OFFSET + 0x00000000)
#define AXI_SHA256_SL_SLV_REG1_OFFSET (AXI_SHA256_SL_USER_SLV_SPACE_OFFSET + 0x00000004)
#define AXI_SHA256_SL_SLV_REG2_OFFSET (AXI_SHA256_SL_USER_SLV_SPACE_OFFSET + 0x00000008)
#define AXI_SHA256_SL_SLV_REG3_OFFSET (AXI_SHA256_SL_USER_SLV_SPACE_OFFSET + 0x0000000C)
#define AXI_SHA256_SL_SLV_REG4_OFFSET (AXI_SHA256_SL_USER_SLV_SPACE_OFFSET + 0x00000010)
#define AXI_SHA256_SL_SLV_REG5_OFFSET (AXI_SHA256_SL_USER_SLV_SPACE_OFFSET + 0x00000014)
#define AXI_SHA256_SL_SLV_REG6_OFFSET (AXI_SHA256_SL_USER_SLV_SPACE_OFFSET + 0x00000018)
#define AXI_SHA256_SL_SLV_REG7_OFFSET (AXI_SHA256_SL_USER_SLV_SPACE_OFFSET + 0x0000001C)
#define AXI_SHA256_SL_SLV_REG8_OFFSET (AXI_SHA256_SL_USER_SLV_SPACE_OFFSET + 0x00000020)
#define AXI_SHA256_SL_SLV_REG9_OFFSET (AXI_SHA256_SL_USER_SLV_SPACE_OFFSET + 0x00000024)
#define AXI_SHA256_SL_SLV_REG10_OFFSET (AXI_SHA256_SL_USER_SLV_SPACE_OFFSET + 0x00000028)
#define AXI_SHA256_SL_SLV_REG11_OFFSET (AXI_SHA256_SL_USER_SLV_SPACE_OFFSET + 0x0000002C)
#define AXI_SHA256_SL_SLV_REG12_OFFSET (AXI_SHA256_SL_USER_SLV_SPACE_OFFSET + 0x00000030)
#define AXI_SHA256_SL_SLV_REG13_OFFSET (AXI_SHA256_SL_USER_SLV_SPACE_OFFSET + 0x00000034)
#define AXI_SHA256_SL_SLV_REG14_OFFSET (AXI_SHA256_SL_USER_SLV_SPACE_OFFSET + 0x00000038)
#define AXI_SHA256_SL_SLV_REG15_OFFSET (AXI_SHA256_SL_USER_SLV_SPACE_OFFSET + 0x0000003C)
#define AXI_SHA256_SL_SLV_REG16_OFFSET (AXI_SHA256_SL_USER_SLV_SPACE_OFFSET + 0x00000040)
#define AXI_SHA256_SL_SLV_REG17_OFFSET (AXI_SHA256_SL_USER_SLV_SPACE_OFFSET + 0x00000044)
#define AXI_SHA256_SL_SLV_REG18_OFFSET (AXI_SHA256_SL_USER_SLV_SPACE_OFFSET + 0x00000048)
#define AXI_SHA256_SL_SLV_REG19_OFFSET (AXI_SHA256_SL_USER_SLV_SPACE_OFFSET + 0x0000004C)
#define AXI_SHA256_SL_SLV_REG20_OFFSET (AXI_SHA256_SL_USER_SLV_SPACE_OFFSET + 0x00000050)
#define AXI_SHA256_SL_SLV_REG21_OFFSET (AXI_SHA256_SL_USER_SLV_SPACE_OFFSET + 0x00000054)
#define AXI_SHA256_SL_SLV_REG22_OFFSET (AXI_SHA256_SL_USER_SLV_SPACE_OFFSET + 0x00000058)
#define AXI_SHA256_SL_SLV_REG23_OFFSET (AXI_SHA256_SL_USER_SLV_SPACE_OFFSET + 0x0000005C)
#define AXI_SHA256_SL_SLV_REG24_OFFSET (AXI_SHA256_SL_USER_SLV_SPACE_OFFSET + 0x00000060)
#define AXI_SHA256_SL_SLV_REG25_OFFSET (AXI_SHA256_SL_USER_SLV_SPACE_OFFSET + 0x00000064)
#define AXI_SHA256_SL_SLV_REG26_OFFSET (AXI_SHA256_SL_USER_SLV_SPACE_OFFSET + 0x00000068)
#define AXI_SHA256_SL_SLV_REG27_OFFSET (AXI_SHA256_SL_USER_SLV_SPACE_OFFSET + 0x0000006C)
#define AXI_SHA256_SL_SLV_REG28_OFFSET (AXI_SHA256_SL_USER_SLV_SPACE_OFFSET + 0x00000070)
#define AXI_SHA256_SL_SLV_REG29_OFFSET (AXI_SHA256_SL_USER_SLV_SPACE_OFFSET + 0x00000074)
#define AXI_SHA256_SL_SLV_REG30_OFFSET (AXI_SHA256_SL_USER_SLV_SPACE_OFFSET + 0x00000078)
#define AXI_SHA256_SL_SLV_REG31_OFFSET (AXI_SHA256_SL_USER_SLV_SPACE_OFFSET + 0x0000007C)

/**************************** Type Definitions *****************************/


/***************** Macros (Inline Functions) Definitions *******************/

/**
 *
 * Write a value to a AXI_SHA256_SL register. A 32 bit write is performed.
 * If the component is implemented in a smaller width, only the least
 * significant data is written.
 *
 * @param   BaseAddress is the base address of the AXI_SHA256_SL device.
 * @param   RegOffset is the register offset from the base to write to.
 * @param   Data is the data written to the register.
 *
 * @return  None.
 *
 * @note
 * C-style signature:
 * 	void AXI_SHA256_SL_mWriteReg(Xuint32 BaseAddress, unsigned RegOffset, Xuint32 Data)
 *
 */
#define AXI_SHA256_SL_mWriteReg(BaseAddress, RegOffset, Data) \
 	Xil_Out32((BaseAddress) + (RegOffset), (Xuint32)(Data))

/**
 *
 * Read a value from a AXI_SHA256_SL register. A 32 bit read is performed.
 * If the component is implemented in a smaller width, only the least
 * significant data is read from the register. The most significant data
 * will be read as 0.
 *
 * @param   BaseAddress is the base address of the AXI_SHA256_SL device.
 * @param   RegOffset is the register offset from the base to write to.
 *
 * @return  Data is the data from the register.
 *
 * @note
 * C-style signature:
 * 	Xuint32 AXI_SHA256_SL_mReadReg(Xuint32 BaseAddress, unsigned RegOffset)
 *
 */
#define AXI_SHA256_SL_mReadReg(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (RegOffset))


/**
 *
 * Write/Read 32 bit value to/from AXI_SHA256_SL user logic slave registers.
 *
 * @param   BaseAddress is the base address of the AXI_SHA256_SL device.
 * @param   RegOffset is the offset from the slave register to write to or read from.
 * @param   Value is the data written to the register.
 *
 * @return  Data is the data from the user logic slave register.
 *
 * @note
 * C-style signature:
 * 	void AXI_SHA256_SL_mWriteSlaveRegn(Xuint32 BaseAddress, unsigned RegOffset, Xuint32 Value)
 * 	Xuint32 AXI_SHA256_SL_mReadSlaveRegn(Xuint32 BaseAddress, unsigned RegOffset)
 *
 */
#define AXI_SHA256_SL_mWriteSlaveReg0(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (AXI_SHA256_SL_SLV_REG0_OFFSET) + (RegOffset), (Xuint32)(Value))
#define AXI_SHA256_SL_mWriteSlaveReg1(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (AXI_SHA256_SL_SLV_REG1_OFFSET) + (RegOffset), (Xuint32)(Value))
#define AXI_SHA256_SL_mWriteSlaveReg2(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (AXI_SHA256_SL_SLV_REG2_OFFSET) + (RegOffset), (Xuint32)(Value))
#define AXI_SHA256_SL_mWriteSlaveReg3(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (AXI_SHA256_SL_SLV_REG3_OFFSET) + (RegOffset), (Xuint32)(Value))
#define AXI_SHA256_SL_mWriteSlaveReg4(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (AXI_SHA256_SL_SLV_REG4_OFFSET) + (RegOffset), (Xuint32)(Value))
#define AXI_SHA256_SL_mWriteSlaveReg5(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (AXI_SHA256_SL_SLV_REG5_OFFSET) + (RegOffset), (Xuint32)(Value))
#define AXI_SHA256_SL_mWriteSlaveReg6(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (AXI_SHA256_SL_SLV_REG6_OFFSET) + (RegOffset), (Xuint32)(Value))
#define AXI_SHA256_SL_mWriteSlaveReg7(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (AXI_SHA256_SL_SLV_REG7_OFFSET) + (RegOffset), (Xuint32)(Value))
#define AXI_SHA256_SL_mWriteSlaveReg8(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (AXI_SHA256_SL_SLV_REG8_OFFSET) + (RegOffset), (Xuint32)(Value))
#define AXI_SHA256_SL_mWriteSlaveReg9(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (AXI_SHA256_SL_SLV_REG9_OFFSET) + (RegOffset), (Xuint32)(Value))
#define AXI_SHA256_SL_mWriteSlaveReg10(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (AXI_SHA256_SL_SLV_REG10_OFFSET) + (RegOffset), (Xuint32)(Value))
#define AXI_SHA256_SL_mWriteSlaveReg11(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (AXI_SHA256_SL_SLV_REG11_OFFSET) + (RegOffset), (Xuint32)(Value))
#define AXI_SHA256_SL_mWriteSlaveReg12(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (AXI_SHA256_SL_SLV_REG12_OFFSET) + (RegOffset), (Xuint32)(Value))
#define AXI_SHA256_SL_mWriteSlaveReg13(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (AXI_SHA256_SL_SLV_REG13_OFFSET) + (RegOffset), (Xuint32)(Value))
#define AXI_SHA256_SL_mWriteSlaveReg14(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (AXI_SHA256_SL_SLV_REG14_OFFSET) + (RegOffset), (Xuint32)(Value))
#define AXI_SHA256_SL_mWriteSlaveReg15(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (AXI_SHA256_SL_SLV_REG15_OFFSET) + (RegOffset), (Xuint32)(Value))
#define AXI_SHA256_SL_mWriteSlaveReg16(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (AXI_SHA256_SL_SLV_REG16_OFFSET) + (RegOffset), (Xuint32)(Value))
#define AXI_SHA256_SL_mWriteSlaveReg17(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (AXI_SHA256_SL_SLV_REG17_OFFSET) + (RegOffset), (Xuint32)(Value))
#define AXI_SHA256_SL_mWriteSlaveReg18(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (AXI_SHA256_SL_SLV_REG18_OFFSET) + (RegOffset), (Xuint32)(Value))
#define AXI_SHA256_SL_mWriteSlaveReg19(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (AXI_SHA256_SL_SLV_REG19_OFFSET) + (RegOffset), (Xuint32)(Value))
#define AXI_SHA256_SL_mWriteSlaveReg20(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (AXI_SHA256_SL_SLV_REG20_OFFSET) + (RegOffset), (Xuint32)(Value))
#define AXI_SHA256_SL_mWriteSlaveReg21(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (AXI_SHA256_SL_SLV_REG21_OFFSET) + (RegOffset), (Xuint32)(Value))
#define AXI_SHA256_SL_mWriteSlaveReg22(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (AXI_SHA256_SL_SLV_REG22_OFFSET) + (RegOffset), (Xuint32)(Value))
#define AXI_SHA256_SL_mWriteSlaveReg23(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (AXI_SHA256_SL_SLV_REG23_OFFSET) + (RegOffset), (Xuint32)(Value))
#define AXI_SHA256_SL_mWriteSlaveReg24(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (AXI_SHA256_SL_SLV_REG24_OFFSET) + (RegOffset), (Xuint32)(Value))
#define AXI_SHA256_SL_mWriteSlaveReg25(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (AXI_SHA256_SL_SLV_REG25_OFFSET) + (RegOffset), (Xuint32)(Value))
#define AXI_SHA256_SL_mWriteSlaveReg26(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (AXI_SHA256_SL_SLV_REG26_OFFSET) + (RegOffset), (Xuint32)(Value))
#define AXI_SHA256_SL_mWriteSlaveReg27(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (AXI_SHA256_SL_SLV_REG27_OFFSET) + (RegOffset), (Xuint32)(Value))
#define AXI_SHA256_SL_mWriteSlaveReg28(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (AXI_SHA256_SL_SLV_REG28_OFFSET) + (RegOffset), (Xuint32)(Value))
#define AXI_SHA256_SL_mWriteSlaveReg29(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (AXI_SHA256_SL_SLV_REG29_OFFSET) + (RegOffset), (Xuint32)(Value))
#define AXI_SHA256_SL_mWriteSlaveReg30(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (AXI_SHA256_SL_SLV_REG30_OFFSET) + (RegOffset), (Xuint32)(Value))
#define AXI_SHA256_SL_mWriteSlaveReg31(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (AXI_SHA256_SL_SLV_REG31_OFFSET) + (RegOffset), (Xuint32)(Value))

#define AXI_SHA256_SL_mReadSlaveReg0(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (AXI_SHA256_SL_SLV_REG0_OFFSET) + (RegOffset))
#define AXI_SHA256_SL_mReadSlaveReg1(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (AXI_SHA256_SL_SLV_REG1_OFFSET) + (RegOffset))
#define AXI_SHA256_SL_mReadSlaveReg2(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (AXI_SHA256_SL_SLV_REG2_OFFSET) + (RegOffset))
#define AXI_SHA256_SL_mReadSlaveReg3(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (AXI_SHA256_SL_SLV_REG3_OFFSET) + (RegOffset))
#define AXI_SHA256_SL_mReadSlaveReg4(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (AXI_SHA256_SL_SLV_REG4_OFFSET) + (RegOffset))
#define AXI_SHA256_SL_mReadSlaveReg5(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (AXI_SHA256_SL_SLV_REG5_OFFSET) + (RegOffset))
#define AXI_SHA256_SL_mReadSlaveReg6(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (AXI_SHA256_SL_SLV_REG6_OFFSET) + (RegOffset))
#define AXI_SHA256_SL_mReadSlaveReg7(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (AXI_SHA256_SL_SLV_REG7_OFFSET) + (RegOffset))
#define AXI_SHA256_SL_mReadSlaveReg8(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (AXI_SHA256_SL_SLV_REG8_OFFSET) + (RegOffset))
#define AXI_SHA256_SL_mReadSlaveReg9(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (AXI_SHA256_SL_SLV_REG9_OFFSET) + (RegOffset))
#define AXI_SHA256_SL_mReadSlaveReg10(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (AXI_SHA256_SL_SLV_REG10_OFFSET) + (RegOffset))
#define AXI_SHA256_SL_mReadSlaveReg11(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (AXI_SHA256_SL_SLV_REG11_OFFSET) + (RegOffset))
#define AXI_SHA256_SL_mReadSlaveReg12(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (AXI_SHA256_SL_SLV_REG12_OFFSET) + (RegOffset))
#define AXI_SHA256_SL_mReadSlaveReg13(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (AXI_SHA256_SL_SLV_REG13_OFFSET) + (RegOffset))
#define AXI_SHA256_SL_mReadSlaveReg14(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (AXI_SHA256_SL_SLV_REG14_OFFSET) + (RegOffset))
#define AXI_SHA256_SL_mReadSlaveReg15(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (AXI_SHA256_SL_SLV_REG15_OFFSET) + (RegOffset))
#define AXI_SHA256_SL_mReadSlaveReg16(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (AXI_SHA256_SL_SLV_REG16_OFFSET) + (RegOffset))
#define AXI_SHA256_SL_mReadSlaveReg17(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (AXI_SHA256_SL_SLV_REG17_OFFSET) + (RegOffset))
#define AXI_SHA256_SL_mReadSlaveReg18(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (AXI_SHA256_SL_SLV_REG18_OFFSET) + (RegOffset))
#define AXI_SHA256_SL_mReadSlaveReg19(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (AXI_SHA256_SL_SLV_REG19_OFFSET) + (RegOffset))
#define AXI_SHA256_SL_mReadSlaveReg20(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (AXI_SHA256_SL_SLV_REG20_OFFSET) + (RegOffset))
#define AXI_SHA256_SL_mReadSlaveReg21(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (AXI_SHA256_SL_SLV_REG21_OFFSET) + (RegOffset))
#define AXI_SHA256_SL_mReadSlaveReg22(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (AXI_SHA256_SL_SLV_REG22_OFFSET) + (RegOffset))
#define AXI_SHA256_SL_mReadSlaveReg23(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (AXI_SHA256_SL_SLV_REG23_OFFSET) + (RegOffset))
#define AXI_SHA256_SL_mReadSlaveReg24(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (AXI_SHA256_SL_SLV_REG24_OFFSET) + (RegOffset))
#define AXI_SHA256_SL_mReadSlaveReg25(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (AXI_SHA256_SL_SLV_REG25_OFFSET) + (RegOffset))
#define AXI_SHA256_SL_mReadSlaveReg26(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (AXI_SHA256_SL_SLV_REG26_OFFSET) + (RegOffset))
#define AXI_SHA256_SL_mReadSlaveReg27(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (AXI_SHA256_SL_SLV_REG27_OFFSET) + (RegOffset))
#define AXI_SHA256_SL_mReadSlaveReg28(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (AXI_SHA256_SL_SLV_REG28_OFFSET) + (RegOffset))
#define AXI_SHA256_SL_mReadSlaveReg29(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (AXI_SHA256_SL_SLV_REG29_OFFSET) + (RegOffset))
#define AXI_SHA256_SL_mReadSlaveReg30(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (AXI_SHA256_SL_SLV_REG30_OFFSET) + (RegOffset))
#define AXI_SHA256_SL_mReadSlaveReg31(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (AXI_SHA256_SL_SLV_REG31_OFFSET) + (RegOffset))

/************************** Function Prototypes ****************************/


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
XStatus AXI_SHA256_SL_SelfTest(void * baseaddr_p);
/**
*  Defines the number of registers available for read and write*/
#define TEST_AXI_LITE_USER_NUM_REG 32


#endif /** AXI_SHA256_SL_H */
