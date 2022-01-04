/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v10.0
processor: MIMXRT1021xxxxx
package_id: MIMXRT1021DAG5A
mcu_data: ksdk2_0
processor_version: 10.0.0
board: MIMXRT1020-EVK
pin_labels:
- {pin_num: '49', pin_signal: ONOFF, label: ONOFF}
- {pin_num: '53', pin_signal: PMIC_ON_REQ, label: PMIC_ON_REQ}
- {pin_num: '51', pin_signal: TEST_MODE, label: GND}
- {pin_num: '63', pin_signal: USB_OTG1_DP, label: OTG1_DP}
- {pin_num: '62', pin_signal: USB_OTG1_DN, label: OTG1_DN}
- {pin_num: '6', pin_signal: VSS0, label: GND}
- {pin_num: '40', pin_signal: VSS1, label: GND}
- {pin_num: '60', pin_signal: VSS2, label: GND}
- {pin_num: '70', pin_signal: VSS3, label: GND}
- {pin_num: '85', pin_signal: VSS4, label: GND}
- {pin_num: '103', pin_signal: VSS5, label: GND}
- {pin_num: '113', pin_signal: VSS6, label: GND}
- {pin_num: '135', pin_signal: VSS7, label: GND}
- {pin_num: '14', pin_signal: GPIO_EMC_04, label: 'SEMC_D4/U14[8]', identifier: SEMC_D4}
- {pin_num: '5', pin_signal: VDD_SOC_IN0, label: VDD_SOC_IN}
- {pin_num: '31', pin_signal: VDD_SOC_IN1, label: VDD_SOC_IN}
- {pin_num: '39', pin_signal: VDD_SOC_IN2, label: VDD_SOC_IN}
- {pin_num: '86', pin_signal: VDD_SOC_IN3, label: VDD_SOC_IN}
- {pin_num: '102', pin_signal: VDD_SOC_IN4, label: VDD_SOC_IN}
- {pin_num: '114', pin_signal: VDD_SOC_IN5, label: VDD_SOC_IN}
- {pin_num: '134', pin_signal: VDD_SOC_IN6, label: VDD_SOC_IN}
- {pin_num: '65', pin_signal: VDD_HIGH_CAP, label: VDDA_2P5_CAP}
- {pin_num: '56', pin_signal: VDD_SNVS_CAP, label: GND}
- {pin_num: '69', pin_signal: VDD_HIGH_IN, label: VDD_HIGH_IN_MCU}
- {pin_num: '55', pin_signal: VDD_SNVS_IN, label: VDD_SNVS_IN}
- {pin_num: '72', pin_signal: NVCC_PLL, label: VDDA_1P1_CAP}
- {pin_num: '11', pin_signal: NVCC_GPIO0, label: NVCC_GPIO_3V3}
- {pin_num: '20', pin_signal: NVCC_GPIO1, label: NVCC_GPIO_3V3}
- {pin_num: '29', pin_signal: NVCC_GPIO2, label: NVCC_GPIO_3V3}
- {pin_num: '144', pin_signal: NVCC_GPIO6, label: NVCC_GPIO_3V3}
- {pin_num: '59', pin_signal: USB_OTG1_VBUS, label: 5V_USB_OTG}
- {pin_num: '64', pin_signal: NGND_KEL0, label: GND}
- {pin_num: '73', pin_signal: VDDA_ADC_3P3, label: VDDA_ADC_3P3_MCU}
- {pin_num: '61', pin_signal: VDD_USB_CAP, label: VDD_USB_3V}
- {pin_num: '38', pin_signal: DCDC_IN_Q, label: MCU_DCDC_IN_3V3}
- {pin_num: '52', pin_signal: WAKEUP, label: USER_BUTTON}
- {pin_num: '34', pin_signal: DCDC_IN, label: MCU_DCDC_IN_3V3}
- {pin_num: '36', pin_signal: DCDC_LP, label: DCDC_OUT}
- {pin_num: '35', pin_signal: DCDC_GND, label: GND}
- {pin_num: '37', pin_signal: DCDC_PSWITCH, label: MCU_DCDC_IN_3V3}
- {pin_num: '54', pin_signal: PMIC_STBY_REQ, label: SD_PWREN}
- {pin_num: '44', pin_signal: NVCC_SD0, label: NVCC_SD}
- {pin_num: '18', pin_signal: GPIO_EMC_00, label: 'SEMC_D0/U14[2]', identifier: SEMC_D0}
- {pin_num: '17', pin_signal: GPIO_EMC_01, label: 'SEMC_D1/U14[4]', identifier: SEMC_D1}
- {pin_num: '16', pin_signal: GPIO_EMC_02, label: 'SEMC_D2/U14[5]', identifier: SEMC_D2}
- {pin_num: '15', pin_signal: GPIO_EMC_03, label: 'SEMC_D3/U14[7]', identifier: SEMC_D3}
- {pin_num: '13', pin_signal: GPIO_EMC_05, label: 'SEMC_D5/U14[10]', identifier: SEMC_D5}
- {pin_num: '12', pin_signal: GPIO_EMC_06, label: 'SEMC_D6/U14[11]', identifier: SEMC_D6}
- {pin_num: '10', pin_signal: GPIO_EMC_07, label: 'SEMC_D7/U14[13]', identifier: SEMC_D7}
- {pin_num: '9', pin_signal: GPIO_EMC_08, label: 'SEMC_DM0/U14[15]', identifier: SEMC_DM0}
- {pin_num: '8', pin_signal: GPIO_EMC_09, label: 'SEMC_WE/U14[16]', identifier: SEMC_WE}
- {pin_num: '7', pin_signal: GPIO_EMC_10, label: 'SEMC_CAS/U14[17]', identifier: SEMC_CAS}
- {pin_num: '4', pin_signal: GPIO_EMC_11, label: 'SEMC_RAS/U14[18]', identifier: SEMC_RAS}
- {pin_num: '3', pin_signal: GPIO_EMC_12, label: 'SEMC_CS0/U14[19]', identifier: SEMC_CS0}
- {pin_num: '2', pin_signal: GPIO_EMC_13, label: 'SEMC_BA0/U14[20]', identifier: SEMC_BA0}
- {pin_num: '1', pin_signal: GPIO_EMC_14, label: 'SEMC_BA1/U14[21]', identifier: SEMC_BA1}
- {pin_num: '143', pin_signal: GPIO_EMC_15, label: 'SEMC_A10/U14[22]', identifier: SEMC_A10}
- {pin_num: '142', pin_signal: GPIO_EMC_16, label: 'SEMC_A0/U14[23]/BOOT_MODE[0]', identifier: SEMC_A0}
- {pin_num: '141', pin_signal: GPIO_EMC_17, label: 'SEMC_A1/U14[24]/BOOT_MODE[1]', identifier: SEMC_A1}
- {pin_num: '140', pin_signal: GPIO_EMC_18, label: 'SEMC_A2/U14[25]/BT_CFG[0]', identifier: SEMC_A2}
- {pin_num: '139', pin_signal: GPIO_EMC_19, label: 'SEMC_A3/U14[26]/BT_CFG[1]', identifier: SEMC_A3}
- {pin_num: '138', pin_signal: GPIO_EMC_20, label: 'SEMC_A4/U14[29]/BT_CFG[2]', identifier: SEMC_A4}
- {pin_num: '137', pin_signal: GPIO_EMC_21, label: 'SEMC_A5/U14[30]/BT_CFG[3]', identifier: SEMC_A5}
- {pin_num: '136', pin_signal: GPIO_EMC_22, label: 'SEMC_A6/U14[31]/BT_CFG[4]', identifier: SEMC_A6}
- {pin_num: '133', pin_signal: GPIO_EMC_23, label: 'SEMC_A7/U14[32]/BT_CFG[5]', identifier: SEMC_A7}
- {pin_num: '132', pin_signal: GPIO_EMC_24, label: 'SEMC_A8/U14[33]/BT_CFG[6]', identifier: SEMC_A8}
- {pin_num: '131', pin_signal: GPIO_EMC_25, label: 'SEMC_A9/U14[34]/BT_CFG[7]', identifier: SEMC_A9}
- {pin_num: '130', pin_signal: GPIO_EMC_26, label: 'SEMC_A11/U14[35]/BT_CFG[8]', identifier: SEMC_A11}
- {pin_num: '129', pin_signal: GPIO_EMC_27, label: 'SEMC_A12/U14[36]/BT_CFG[9]', identifier: SEMC_A12}
- {pin_num: '128', pin_signal: GPIO_EMC_28, label: SEMC_DQS, identifier: SEMC_DQS}
- {pin_num: '127', pin_signal: GPIO_EMC_29, label: 'SEMC_CKE/U14[37]', identifier: SEMC_CKE}
- {pin_num: '126', pin_signal: GPIO_EMC_30, label: 'SEMC_CLK/U14[38]', identifier: SEMC_CLK}
- {pin_num: '125', pin_signal: GPIO_EMC_31, label: 'SEMC_DM1/U14[39]', identifier: SEMC_DM1}
- {pin_num: '124', pin_signal: GPIO_EMC_32, label: 'SEMC_D8/U14[42]', identifier: SEMC_D8}
- {pin_num: '123', pin_signal: GPIO_EMC_33, label: 'SEMC_D9/U14[44]', identifier: SEMC_D9}
- {pin_num: '122', pin_signal: GPIO_EMC_34, label: 'SEMC_D10/U14[45]', identifier: SEMC_D10}
- {pin_num: '121', pin_signal: GPIO_EMC_35, label: 'SEMC_D11/U14[47]', identifier: SEMC_D11}
- {pin_num: '120', pin_signal: GPIO_EMC_36, label: 'SEMC_D12/U14[48]', identifier: SEMC_D12}
- {pin_num: '119', pin_signal: GPIO_EMC_37, label: 'SEMC_D13/U14[50]', identifier: SEMC_D13}
- {pin_num: '118', pin_signal: GPIO_EMC_38, label: 'SEMC_D14/U14[51]', identifier: SEMC_D14}
- {pin_num: '117', pin_signal: GPIO_EMC_39, label: 'SEMC_D15/U14[53]', identifier: SEMC_D15}
- {pin_num: '116', pin_signal: GPIO_EMC_40, label: 'ENET_MDIO/U11[11]', identifier: ENET_MDIO}
- {pin_num: '115', pin_signal: GPIO_EMC_41, label: 'ENET_MDC/U11[12]', identifier: ENET_MDC}
- {pin_num: '112', pin_signal: NVCC_GPIO5, label: NVCC_GPIO_3V3}
- {pin_num: '104', pin_signal: NVCC_GPIO4, label: NVCC_GPIO_3V3}
- {pin_num: '77', pin_signal: NVCC_GPIO3, label: NVCC_GPIO_3V3}
- {pin_num: '111', pin_signal: GPIO_AD_B0_00, label: 'JTAG_TMS/J16[7]/SWD_DIO'}
- {pin_num: '110', pin_signal: GPIO_AD_B0_01, label: 'JTAG_TCK/J16[9]/SWD_CLK'}
- {pin_num: '109', pin_signal: GPIO_AD_B0_02, label: GND}
- {pin_num: '108', pin_signal: GPIO_AD_B0_03, label: 'JTAG_TDI/J16[5]/WDOG_B'}
- {pin_num: '107', pin_signal: GPIO_AD_B0_04, label: 'JTAG_TDO/J16[13]/ENET_RST/U11[32]', identifier: ENET_RST}
- {pin_num: '106', pin_signal: GPIO_AD_B0_05, label: 'JTAG_nTRST/J16[3]/USER_LED/J17[5]'}
- {pin_num: '105', pin_signal: GPIO_AD_B0_06, label: 'UART1_TXD/J17[6]', identifier: UART1_TXD}
- {pin_num: '101', pin_signal: GPIO_AD_B0_07, label: 'UART1_RXD/J17[4]', identifier: UART1_RXD}
- {pin_num: '100', pin_signal: GPIO_AD_B0_08, label: 'ENET_TX_CLK/U11[9]', identifier: ENET_TX_CLK}
- {pin_num: '99', pin_signal: GPIO_AD_B0_09, label: 'ENET_RXD1/U11[15]/J17[3]', identifier: ENET_RXD1}
- {pin_num: '98', pin_signal: GPIO_AD_B0_10, label: 'ENET_RXD0/U11[16]/J19[6]', identifier: ENET_RXD0}
- {pin_num: '97', pin_signal: GPIO_AD_B0_11, label: 'ENET_CRS_DV/U11[18]/J19[3]', identifier: ENET_CRS_DV}
- {pin_num: '96', pin_signal: GPIO_AD_B0_12, label: 'ENET_RXER/U11[20]/J19[4]', identifier: ENET_RXER}
- {pin_num: '95', pin_signal: GPIO_AD_B0_13, label: 'ENET_TXEN/U11[23]/J19[5]', identifier: ENET_TXEN}
- {pin_num: '94', pin_signal: GPIO_AD_B0_14, label: 'ENET_TXD0/U11[24]/J17[7]', identifier: ENET_TXD0}
- {pin_num: '93', pin_signal: GPIO_AD_B0_15, label: 'ENET_TXD1/U11[25]/J19[2]', identifier: ENET_TXD1}
- {pin_num: '92', pin_signal: GPIO_AD_B1_00, label: SAI1_MCLK}
- {pin_num: '91', pin_signal: GPIO_AD_B1_01, label: SAI1_TX_BCLK}
- {pin_num: '90', pin_signal: GPIO_AD_B1_02, label: 'SAI1_TX_SYNC/J19[10]'}
- {pin_num: '89', pin_signal: GPIO_AD_B1_03, label: 'SAI1_TXD/J19[9]'}
- {pin_num: '88', pin_signal: GPIO_AD_B1_04, label: AUD_INT}
- {pin_num: '87', pin_signal: GPIO_AD_B1_05, label: SAI1_RXD}
- {pin_num: '84', pin_signal: GPIO_AD_B1_06, label: 'ENET_INT/U11[21]/J17[8]', identifier: ENET_INT}
- {pin_num: '83', pin_signal: GPIO_AD_B1_07, label: 'SD0_VSELECT/J19[1]'}
- {pin_num: '80', pin_signal: GPIO_AD_B1_10, label: 'USB_OTG1_PWR/J18[1]'}
- {pin_num: '79', pin_signal: GPIO_AD_B1_11, label: 'USB_OTG1_ID/J18[2]'}
- {pin_num: '78', pin_signal: GPIO_AD_B1_12, label: 'USB_OTG1_OC/J18[3]'}
- {pin_num: '76', pin_signal: GPIO_AD_B1_13, label: 'CAN_STBY/J18[4]', identifier: CAN_STBY}
- {pin_num: '75', pin_signal: GPIO_AD_B1_14, label: 'I2C1_SCL/U10[17]/J18[6]'}
- {pin_num: '74', pin_signal: GPIO_AD_B1_15, label: 'I2C1_SDA/U10[18]/J18[5]'}
- {pin_num: '48', pin_signal: GPIO_SD_B0_00, label: 'SD1_D2/J15[1]', identifier: SD1_D2}
- {pin_num: '47', pin_signal: GPIO_SD_B0_01, label: 'SD1_D3/J15[2]', identifier: SD1_D3}
- {pin_num: '46', pin_signal: GPIO_SD_B0_02, label: 'SD1_CMD/J15[3]', identifier: SD1_CMD}
- {pin_num: '45', pin_signal: GPIO_SD_B0_03, label: 'SD1_CLK/J15[5]', identifier: SD1_CLK}
- {pin_num: '43', pin_signal: GPIO_SD_B0_04, label: 'SD1_D0/J15[7]', identifier: SD1_D0}
- {pin_num: '42', pin_signal: GPIO_SD_B0_05, label: 'SD1_D1/J15[8]', identifier: SD1_D1}
- {pin_num: '41', pin_signal: GPIO_SD_B0_06, label: 'SD_CD_SW/J15[9]', identifier: SD_CD_SW}
- {pin_num: '33', pin_signal: GPIO_SD_B1_00, label: 'CAN1_TX/U9[1]', identifier: CAN1_TX}
- {pin_num: '32', pin_signal: GPIO_SD_B1_01, label: 'CAN1_RX/U9[4]', identifier: CAN1_RX}
- {pin_num: '30', pin_signal: GPIO_SD_B1_02, label: I2C4_SCL}
- {pin_num: '25', pin_signal: GPIO_SD_B1_06, label: 'FlexSPI_D3_A/U13[7]', identifier: FlexSPI_D3_A}
- {pin_num: '26', pin_signal: GPIO_SD_B1_05, label: INT2_COMBO}
- {pin_num: '27', pin_signal: GPIO_SD_B1_04, label: INT1_COMBO}
- {pin_num: '28', pin_signal: GPIO_SD_B1_03, label: I2C4_SDA}
- {pin_num: '24', pin_signal: GPIO_SD_B1_07, label: 'FlexSPI_CLK/U13[6]', identifier: FlexSPI_CLK}
- {pin_num: '23', pin_signal: GPIO_SD_B1_08, label: 'FlexSPI_D0_A/U13[5]', identifier: FlexSPI_D0_A}
- {pin_num: '22', pin_signal: GPIO_SD_B1_09, label: 'FlexSPI_D2_A/U13[3]', identifier: FlexSPI_D2_A}
- {pin_num: '21', pin_signal: GPIO_SD_B1_10, label: 'FlexSPI_D1_A/U13[2]', identifier: FlexSPI_D1_A}
- {pin_num: '19', pin_signal: GPIO_SD_B1_11, label: 'FlexSPI_SS0/U13[1]', identifier: FlexSPI_SS0}
- {pin_num: '50', pin_signal: POR_B, label: 'POR_B/J16[5]/RST_TGTMCU_B/J20[3]'}
- {pin_num: '81', pin_signal: GPIO_AD_B1_09, label: 'UART_RX/J17[1]'}
- {pin_num: '82', pin_signal: GPIO_AD_B1_08, label: 'UART_TX/J17[2]'}
- {pin_num: '67', pin_signal: XTALI, label: XTALI}
- {pin_num: '68', pin_signal: XTALO, label: XTALO}
- {pin_num: '57', pin_signal: RTC_XTALI, label: RTC_XTALI}
- {pin_num: '58', pin_signal: RTC_XTALO, label: RTC_XTALO}
power_domains: {NVCC_GPIO: '3.3'}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

#include "fsl_common.h"
#include "fsl_iomuxc.h"
#include "pin_mux.h"

/* FUNCTION ************************************************************************************************************
 * 
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 * 
 * END ****************************************************************************************************************/
void BOARD_InitBootPins(void) {
    BOARD_InitPins();
    BOARD_InitDEBUG_UARTPins();
    BOARD_InitUSDHCPins();
}

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'true', coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '27', peripheral: GPIO3, signal: 'gpio_io, 24', pin_signal: GPIO_SD_B1_04}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitPins(void) {
  CLOCK_EnableClock(kCLOCK_Iomuxc);           

  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_B1_04_GPIO3_IO24, 0U); 
}


/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitDEBUG_UARTPins:
- options: {callFromInitBoot: 'true', coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '101', peripheral: LPUART1, signal: RX, pin_signal: GPIO_AD_B0_07}
  - {pin_num: '105', peripheral: LPUART1, signal: TX, pin_signal: GPIO_AD_B0_06}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitDEBUG_UARTPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitDEBUG_UARTPins(void) {
  CLOCK_EnableClock(kCLOCK_Iomuxc);           

  IOMUXC_SetPinMux(IOMUXC_GPIO_AD_B0_06_LPUART1_TX, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_AD_B0_07_LPUART1_RX, 0U); 
}


/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitSDRAMPins:
- options: {coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '142', peripheral: SEMC, signal: 'ADDR, 00', pin_signal: GPIO_EMC_16}
  - {pin_num: '141', peripheral: SEMC, signal: 'ADDR, 01', pin_signal: GPIO_EMC_17}
  - {pin_num: '140', peripheral: SEMC, signal: 'ADDR, 02', pin_signal: GPIO_EMC_18}
  - {pin_num: '139', peripheral: SEMC, signal: 'ADDR, 03', pin_signal: GPIO_EMC_19}
  - {pin_num: '138', peripheral: SEMC, signal: 'ADDR, 04', pin_signal: GPIO_EMC_20}
  - {pin_num: '136', peripheral: SEMC, signal: 'ADDR, 06', pin_signal: GPIO_EMC_22}
  - {pin_num: '137', peripheral: SEMC, signal: 'ADDR, 05', pin_signal: GPIO_EMC_21}
  - {pin_num: '133', peripheral: SEMC, signal: 'ADDR, 07', pin_signal: GPIO_EMC_23}
  - {pin_num: '132', peripheral: SEMC, signal: 'ADDR, 08', pin_signal: GPIO_EMC_24}
  - {pin_num: '131', peripheral: SEMC, signal: 'ADDR, 09', pin_signal: GPIO_EMC_25}
  - {pin_num: '143', peripheral: SEMC, signal: 'ADDR, 10', pin_signal: GPIO_EMC_15}
  - {pin_num: '130', peripheral: SEMC, signal: 'ADDR, 11', pin_signal: GPIO_EMC_26}
  - {pin_num: '129', peripheral: SEMC, signal: 'ADDR, 12', pin_signal: GPIO_EMC_27}
  - {pin_num: '2', peripheral: SEMC, signal: 'BA, 0', pin_signal: GPIO_EMC_13}
  - {pin_num: '1', peripheral: SEMC, signal: 'BA, 1', pin_signal: GPIO_EMC_14}
  - {pin_num: '7', peripheral: SEMC, signal: semc_cas, pin_signal: GPIO_EMC_10}
  - {pin_num: '127', peripheral: SEMC, signal: semc_cke, pin_signal: GPIO_EMC_29}
  - {pin_num: '126', peripheral: SEMC, signal: semc_clk, pin_signal: GPIO_EMC_30}
  - {pin_num: '3', peripheral: SEMC, signal: 'CS, 0', pin_signal: GPIO_EMC_12}
  - {pin_num: '8', peripheral: SEMC, signal: semc_we, pin_signal: GPIO_EMC_09}
  - {pin_num: '4', peripheral: SEMC, signal: semc_ras, pin_signal: GPIO_EMC_11}
  - {pin_num: '128', peripheral: SEMC, signal: semc_dqs, pin_signal: GPIO_EMC_28}
  - {pin_num: '125', peripheral: SEMC, signal: 'DM, 1', pin_signal: GPIO_EMC_31}
  - {pin_num: '9', peripheral: SEMC, signal: 'DM, 0', pin_signal: GPIO_EMC_08}
  - {pin_num: '117', peripheral: SEMC, signal: 'DATA, 15', pin_signal: GPIO_EMC_39}
  - {pin_num: '118', peripheral: SEMC, signal: 'DATA, 14', pin_signal: GPIO_EMC_38}
  - {pin_num: '119', peripheral: SEMC, signal: 'DATA, 13', pin_signal: GPIO_EMC_37}
  - {pin_num: '120', peripheral: SEMC, signal: 'DATA, 12', pin_signal: GPIO_EMC_36}
  - {pin_num: '122', peripheral: SEMC, signal: 'DATA, 10', pin_signal: GPIO_EMC_34}
  - {pin_num: '121', peripheral: SEMC, signal: 'DATA, 11', pin_signal: GPIO_EMC_35}
  - {pin_num: '123', peripheral: SEMC, signal: 'DATA, 09', pin_signal: GPIO_EMC_33}
  - {pin_num: '124', peripheral: SEMC, signal: 'DATA, 08', pin_signal: GPIO_EMC_32}
  - {pin_num: '10', peripheral: SEMC, signal: 'DATA, 07', pin_signal: GPIO_EMC_07}
  - {pin_num: '12', peripheral: SEMC, signal: 'DATA, 06', pin_signal: GPIO_EMC_06}
  - {pin_num: '13', peripheral: SEMC, signal: 'DATA, 05', pin_signal: GPIO_EMC_05}
  - {pin_num: '14', peripheral: SEMC, signal: 'DATA, 04', pin_signal: GPIO_EMC_04}
  - {pin_num: '15', peripheral: SEMC, signal: 'DATA, 03', pin_signal: GPIO_EMC_03}
  - {pin_num: '16', peripheral: SEMC, signal: 'DATA, 02', pin_signal: GPIO_EMC_02}
  - {pin_num: '17', peripheral: SEMC, signal: 'DATA, 01', pin_signal: GPIO_EMC_01}
  - {pin_num: '18', peripheral: SEMC, signal: 'DATA, 00', pin_signal: GPIO_EMC_00}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitSDRAMPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitSDRAMPins(void) {
  CLOCK_EnableClock(kCLOCK_Iomuxc);           

  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_00_SEMC_DATA00, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_01_SEMC_DATA01, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_02_SEMC_DATA02, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_03_SEMC_DATA03, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_04_SEMC_DATA04, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_05_SEMC_DATA05, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_06_SEMC_DATA06, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_07_SEMC_DATA07, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_08_SEMC_DM00, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_09_SEMC_WE, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_10_SEMC_CAS, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_11_SEMC_RAS, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_12_SEMC_CS0, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_13_SEMC_BA0, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_14_SEMC_BA1, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_15_SEMC_ADDR10, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_16_SEMC_ADDR00, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_17_SEMC_ADDR01, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_18_SEMC_ADDR02, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_19_SEMC_ADDR03, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_20_SEMC_ADDR04, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_21_SEMC_ADDR05, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_22_SEMC_ADDR06, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_23_SEMC_ADDR07, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_24_SEMC_ADDR08, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_25_SEMC_ADDR09, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_26_SEMC_ADDR11, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_27_SEMC_ADDR12, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_28_SEMC_DQS, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_29_SEMC_CKE, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_30_SEMC_CLK, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_31_SEMC_DM01, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_32_SEMC_DATA08, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_33_SEMC_DATA09, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_34_SEMC_DATA10, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_35_SEMC_DATA11, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_36_SEMC_DATA12, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_37_SEMC_DATA13, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_38_SEMC_DATA14, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_39_SEMC_DATA15, 0U); 
}


/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitCANPins:
- options: {coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '32', peripheral: CAN1, signal: RX, pin_signal: GPIO_SD_B1_01}
  - {pin_num: '33', peripheral: CAN1, signal: TX, pin_signal: GPIO_SD_B1_00}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitCANPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitCANPins(void) {
  CLOCK_EnableClock(kCLOCK_Iomuxc);           

  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_B1_00_FLEXCAN1_TX, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_B1_01_FLEXCAN1_RX, 0U); 
}


/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitENETPins:
- options: {coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '97', peripheral: ENET, signal: enet_rx_en, pin_signal: GPIO_AD_B0_11}
  - {pin_num: '84', peripheral: GPIO1, signal: 'gpio_io, 22', pin_signal: GPIO_AD_B1_06}
  - {pin_num: '107', peripheral: GPIO1, signal: 'gpio_io, 04', pin_signal: GPIO_AD_B0_04}
  - {pin_num: '100', peripheral: ENET, signal: enet_tx_clk, pin_signal: GPIO_AD_B0_08}
  - {pin_num: '95', peripheral: ENET, signal: enet_tx_en, pin_signal: GPIO_AD_B0_13}
  - {pin_num: '93', peripheral: ENET, signal: 'enet_tx_data, 1', pin_signal: GPIO_AD_B0_15}
  - {pin_num: '94', peripheral: ENET, signal: 'enet_tx_data, 0', pin_signal: GPIO_AD_B0_14}
  - {pin_num: '96', peripheral: ENET, signal: enet_rx_er, pin_signal: GPIO_AD_B0_12}
  - {pin_num: '99', peripheral: ENET, signal: 'enet_rx_data, 1', pin_signal: GPIO_AD_B0_09}
  - {pin_num: '98', peripheral: ENET, signal: 'enet_rx_data, 0', pin_signal: GPIO_AD_B0_10}
  - {pin_num: '116', peripheral: ENET, signal: enet_mdio, pin_signal: GPIO_EMC_40}
  - {pin_num: '115', peripheral: ENET, signal: enet_mdc, pin_signal: GPIO_EMC_41}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitENETPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitENETPins(void) {
  CLOCK_EnableClock(kCLOCK_Iomuxc);           

  IOMUXC_SetPinMux(IOMUXC_GPIO_AD_B0_04_GPIO1_IO04, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_AD_B0_08_ENET_TX_CLK, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_AD_B0_09_ENET_RDATA01, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_AD_B0_10_ENET_RDATA00, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_AD_B0_11_ENET_RX_EN, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_AD_B0_12_ENET_RX_ER, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_AD_B0_13_ENET_TX_EN, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_AD_B0_14_ENET_TDATA00, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_AD_B0_15_ENET_TDATA01, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_AD_B1_06_GPIO1_IO22, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_40_ENET_MDIO, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_41_ENET_MDC, 0U); 
}


/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitUSDHCPins:
- options: {coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '45', peripheral: USDHC1, signal: usdhc_clk, pin_signal: GPIO_SD_B0_03}
  - {pin_num: '46', peripheral: USDHC1, signal: usdhc_cmd, pin_signal: GPIO_SD_B0_02}
  - {pin_num: '43', peripheral: USDHC1, signal: 'usdhc_data, 0', pin_signal: GPIO_SD_B0_04}
  - {pin_num: '42', peripheral: USDHC1, signal: 'usdhc_data, 1', pin_signal: GPIO_SD_B0_05}
  - {pin_num: '48', peripheral: USDHC1, signal: 'usdhc_data, 2', pin_signal: GPIO_SD_B0_00}
  - {pin_num: '47', peripheral: USDHC1, signal: 'usdhc_data, 3', pin_signal: GPIO_SD_B0_01}
  - {pin_num: '41', peripheral: GPIO3, signal: 'gpio_io, 19', pin_signal: GPIO_SD_B0_06}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitUSDHCPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitUSDHCPins(void) {
  CLOCK_EnableClock(kCLOCK_Iomuxc);           

  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_B0_00_USDHC1_DATA2, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_B0_01_USDHC1_DATA3, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_B0_02_USDHC1_CMD, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_B0_03_USDHC1_CLK, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_B0_04_USDHC1_DATA0, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_B0_05_USDHC1_DATA1, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_B0_06_GPIO3_IO19, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_AD_B1_07_USDHC1_VSELECT, 0U);
  // IOMUXC_SetPinMux(IOMUXC_GPIO_AD_B1_07_GPIO1_IO23, 0U);
}


/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitQSPIPins:
- options: {coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '24', peripheral: FLEXSPI, signal: FLEXSPI_A_SCLK, pin_signal: GPIO_SD_B1_07}
  - {pin_num: '23', peripheral: FLEXSPI, signal: FLEXSPI_A_DATA0, pin_signal: GPIO_SD_B1_08}
  - {pin_num: '21', peripheral: FLEXSPI, signal: FLEXSPI_A_DATA1, pin_signal: GPIO_SD_B1_10}
  - {pin_num: '22', peripheral: FLEXSPI, signal: FLEXSPI_A_DATA2, pin_signal: GPIO_SD_B1_09}
  - {pin_num: '25', peripheral: FLEXSPI, signal: FLEXSPI_A_DATA3, pin_signal: GPIO_SD_B1_06}
  - {pin_num: '19', peripheral: FLEXSPI, signal: FLEXSPI_A_SS0_B, pin_signal: GPIO_SD_B1_11}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitQSPIPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitQSPIPins(void) {
  CLOCK_EnableClock(kCLOCK_Iomuxc);           

  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_B1_06_FLEXSPI_A_DATA03, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_B1_07_FLEXSPI_A_SCLK, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_B1_08_FLEXSPI_A_DATA00, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_B1_09_FLEXSPI_A_DATA02, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_B1_10_FLEXSPI_A_DATA01, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_B1_11_FLEXSPI_A_SS0_B, 0U); 
}

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
