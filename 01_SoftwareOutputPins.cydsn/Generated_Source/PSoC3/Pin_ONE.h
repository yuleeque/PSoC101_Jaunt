/*******************************************************************************
* File Name: Pin_ONE.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Pin_ONE_H) /* Pins Pin_ONE_H */
#define CY_PINS_Pin_ONE_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Pin_ONE_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Pin_ONE_Write(uint8 value) ;
void    Pin_ONE_SetDriveMode(uint8 mode) ;
uint8   Pin_ONE_ReadDataReg(void) ;
uint8   Pin_ONE_Read(void) ;
void    Pin_ONE_SetInterruptMode(uint16 position, uint16 mode) ;
uint8   Pin_ONE_ClearInterrupt(void) ;
/** @} general */

/***************************************
*           API Constants        
***************************************/

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Pin_ONE_SetDriveMode() function.
     *  @{
     */
        /* Drive Modes */
        #define Pin_ONE_DM_ALG_HIZ         PIN_DM_ALG_HIZ   /**< \brief High Impedance Analog   */
        #define Pin_ONE_DM_DIG_HIZ         PIN_DM_DIG_HIZ   /**< \brief High Impedance Digital  */
        #define Pin_ONE_DM_RES_UP          PIN_DM_RES_UP    /**< \brief Resistive Pull Up       */
        #define Pin_ONE_DM_RES_DWN         PIN_DM_RES_DWN   /**< \brief Resistive Pull Down     */
        #define Pin_ONE_DM_OD_LO           PIN_DM_OD_LO     /**< \brief Open Drain, Drives Low  */
        #define Pin_ONE_DM_OD_HI           PIN_DM_OD_HI     /**< \brief Open Drain, Drives High */
        #define Pin_ONE_DM_STRONG          PIN_DM_STRONG    /**< \brief Strong Drive            */
        #define Pin_ONE_DM_RES_UPDWN       PIN_DM_RES_UPDWN /**< \brief Resistive Pull Up/Down  */
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Pin_ONE_MASK               Pin_ONE__MASK
#define Pin_ONE_SHIFT              Pin_ONE__SHIFT
#define Pin_ONE_WIDTH              1u

/* Interrupt constants */
#if defined(Pin_ONE__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Pin_ONE_SetInterruptMode() function.
     *  @{
     */
        #define Pin_ONE_INTR_NONE      (uint16)(0x0000u)   /**< \brief Disabled             */
        #define Pin_ONE_INTR_RISING    (uint16)(0x0001u)   /**< \brief Rising edge trigger  */
        #define Pin_ONE_INTR_FALLING   (uint16)(0x0002u)   /**< \brief Falling edge trigger */
        #define Pin_ONE_INTR_BOTH      (uint16)(0x0003u)   /**< \brief Both edge trigger    */
        /** @} intrMode */
/** @} group_constants */

    #define Pin_ONE_INTR_MASK      (0x01u)
#endif /* (Pin_ONE__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Pin_ONE_PS                     (* (reg8 *) Pin_ONE__PS)
/* Data Register */
#define Pin_ONE_DR                     (* (reg8 *) Pin_ONE__DR)
/* Port Number */
#define Pin_ONE_PRT_NUM                (* (reg8 *) Pin_ONE__PRT) 
/* Connect to Analog Globals */                                                  
#define Pin_ONE_AG                     (* (reg8 *) Pin_ONE__AG)                       
/* Analog MUX bux enable */
#define Pin_ONE_AMUX                   (* (reg8 *) Pin_ONE__AMUX) 
/* Bidirectional Enable */                                                        
#define Pin_ONE_BIE                    (* (reg8 *) Pin_ONE__BIE)
/* Bit-mask for Aliased Register Access */
#define Pin_ONE_BIT_MASK               (* (reg8 *) Pin_ONE__BIT_MASK)
/* Bypass Enable */
#define Pin_ONE_BYP                    (* (reg8 *) Pin_ONE__BYP)
/* Port wide control signals */                                                   
#define Pin_ONE_CTL                    (* (reg8 *) Pin_ONE__CTL)
/* Drive Modes */
#define Pin_ONE_DM0                    (* (reg8 *) Pin_ONE__DM0) 
#define Pin_ONE_DM1                    (* (reg8 *) Pin_ONE__DM1)
#define Pin_ONE_DM2                    (* (reg8 *) Pin_ONE__DM2) 
/* Input Buffer Disable Override */
#define Pin_ONE_INP_DIS                (* (reg8 *) Pin_ONE__INP_DIS)
/* LCD Common or Segment Drive */
#define Pin_ONE_LCD_COM_SEG            (* (reg8 *) Pin_ONE__LCD_COM_SEG)
/* Enable Segment LCD */
#define Pin_ONE_LCD_EN                 (* (reg8 *) Pin_ONE__LCD_EN)
/* Slew Rate Control */
#define Pin_ONE_SLW                    (* (reg8 *) Pin_ONE__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Pin_ONE_PRTDSI__CAPS_SEL       (* (reg8 *) Pin_ONE__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Pin_ONE_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Pin_ONE__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Pin_ONE_PRTDSI__OE_SEL0        (* (reg8 *) Pin_ONE__PRTDSI__OE_SEL0) 
#define Pin_ONE_PRTDSI__OE_SEL1        (* (reg8 *) Pin_ONE__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Pin_ONE_PRTDSI__OUT_SEL0       (* (reg8 *) Pin_ONE__PRTDSI__OUT_SEL0) 
#define Pin_ONE_PRTDSI__OUT_SEL1       (* (reg8 *) Pin_ONE__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Pin_ONE_PRTDSI__SYNC_OUT       (* (reg8 *) Pin_ONE__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Pin_ONE__SIO_CFG)
    #define Pin_ONE_SIO_HYST_EN        (* (reg8 *) Pin_ONE__SIO_HYST_EN)
    #define Pin_ONE_SIO_REG_HIFREQ     (* (reg8 *) Pin_ONE__SIO_REG_HIFREQ)
    #define Pin_ONE_SIO_CFG            (* (reg8 *) Pin_ONE__SIO_CFG)
    #define Pin_ONE_SIO_DIFF           (* (reg8 *) Pin_ONE__SIO_DIFF)
#endif /* (Pin_ONE__SIO_CFG) */

/* Interrupt Registers */
#if defined(Pin_ONE__INTSTAT)
    #define Pin_ONE_INTSTAT             (* (reg8 *) Pin_ONE__INTSTAT)
    #define Pin_ONE_SNAP                (* (reg8 *) Pin_ONE__SNAP)
    
	#define Pin_ONE_0_INTTYPE_REG 		(* (reg8 *) Pin_ONE__0__INTTYPE)
#endif /* (Pin_ONE__INTSTAT) */

#endif /* End Pins Pin_ONE_H */


/* [] END OF FILE */
