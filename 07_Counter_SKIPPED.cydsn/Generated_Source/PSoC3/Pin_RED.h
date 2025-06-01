/*******************************************************************************
* File Name: Pin_RED.h  
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

#if !defined(CY_PINS_Pin_RED_H) /* Pins Pin_RED_H */
#define CY_PINS_Pin_RED_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Pin_RED_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Pin_RED_Write(uint8 value) ;
void    Pin_RED_SetDriveMode(uint8 mode) ;
uint8   Pin_RED_ReadDataReg(void) ;
uint8   Pin_RED_Read(void) ;
void    Pin_RED_SetInterruptMode(uint16 position, uint16 mode) ;
uint8   Pin_RED_ClearInterrupt(void) ;
/** @} general */

/***************************************
*           API Constants        
***************************************/

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Pin_RED_SetDriveMode() function.
     *  @{
     */
        /* Drive Modes */
        #define Pin_RED_DM_ALG_HIZ         PIN_DM_ALG_HIZ   /**< \brief High Impedance Analog   */
        #define Pin_RED_DM_DIG_HIZ         PIN_DM_DIG_HIZ   /**< \brief High Impedance Digital  */
        #define Pin_RED_DM_RES_UP          PIN_DM_RES_UP    /**< \brief Resistive Pull Up       */
        #define Pin_RED_DM_RES_DWN         PIN_DM_RES_DWN   /**< \brief Resistive Pull Down     */
        #define Pin_RED_DM_OD_LO           PIN_DM_OD_LO     /**< \brief Open Drain, Drives Low  */
        #define Pin_RED_DM_OD_HI           PIN_DM_OD_HI     /**< \brief Open Drain, Drives High */
        #define Pin_RED_DM_STRONG          PIN_DM_STRONG    /**< \brief Strong Drive            */
        #define Pin_RED_DM_RES_UPDWN       PIN_DM_RES_UPDWN /**< \brief Resistive Pull Up/Down  */
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Pin_RED_MASK               Pin_RED__MASK
#define Pin_RED_SHIFT              Pin_RED__SHIFT
#define Pin_RED_WIDTH              1u

/* Interrupt constants */
#if defined(Pin_RED__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Pin_RED_SetInterruptMode() function.
     *  @{
     */
        #define Pin_RED_INTR_NONE      (uint16)(0x0000u)   /**< \brief Disabled             */
        #define Pin_RED_INTR_RISING    (uint16)(0x0001u)   /**< \brief Rising edge trigger  */
        #define Pin_RED_INTR_FALLING   (uint16)(0x0002u)   /**< \brief Falling edge trigger */
        #define Pin_RED_INTR_BOTH      (uint16)(0x0003u)   /**< \brief Both edge trigger    */
        /** @} intrMode */
/** @} group_constants */

    #define Pin_RED_INTR_MASK      (0x01u)
#endif /* (Pin_RED__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Pin_RED_PS                     (* (reg8 *) Pin_RED__PS)
/* Data Register */
#define Pin_RED_DR                     (* (reg8 *) Pin_RED__DR)
/* Port Number */
#define Pin_RED_PRT_NUM                (* (reg8 *) Pin_RED__PRT) 
/* Connect to Analog Globals */                                                  
#define Pin_RED_AG                     (* (reg8 *) Pin_RED__AG)                       
/* Analog MUX bux enable */
#define Pin_RED_AMUX                   (* (reg8 *) Pin_RED__AMUX) 
/* Bidirectional Enable */                                                        
#define Pin_RED_BIE                    (* (reg8 *) Pin_RED__BIE)
/* Bit-mask for Aliased Register Access */
#define Pin_RED_BIT_MASK               (* (reg8 *) Pin_RED__BIT_MASK)
/* Bypass Enable */
#define Pin_RED_BYP                    (* (reg8 *) Pin_RED__BYP)
/* Port wide control signals */                                                   
#define Pin_RED_CTL                    (* (reg8 *) Pin_RED__CTL)
/* Drive Modes */
#define Pin_RED_DM0                    (* (reg8 *) Pin_RED__DM0) 
#define Pin_RED_DM1                    (* (reg8 *) Pin_RED__DM1)
#define Pin_RED_DM2                    (* (reg8 *) Pin_RED__DM2) 
/* Input Buffer Disable Override */
#define Pin_RED_INP_DIS                (* (reg8 *) Pin_RED__INP_DIS)
/* LCD Common or Segment Drive */
#define Pin_RED_LCD_COM_SEG            (* (reg8 *) Pin_RED__LCD_COM_SEG)
/* Enable Segment LCD */
#define Pin_RED_LCD_EN                 (* (reg8 *) Pin_RED__LCD_EN)
/* Slew Rate Control */
#define Pin_RED_SLW                    (* (reg8 *) Pin_RED__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Pin_RED_PRTDSI__CAPS_SEL       (* (reg8 *) Pin_RED__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Pin_RED_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Pin_RED__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Pin_RED_PRTDSI__OE_SEL0        (* (reg8 *) Pin_RED__PRTDSI__OE_SEL0) 
#define Pin_RED_PRTDSI__OE_SEL1        (* (reg8 *) Pin_RED__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Pin_RED_PRTDSI__OUT_SEL0       (* (reg8 *) Pin_RED__PRTDSI__OUT_SEL0) 
#define Pin_RED_PRTDSI__OUT_SEL1       (* (reg8 *) Pin_RED__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Pin_RED_PRTDSI__SYNC_OUT       (* (reg8 *) Pin_RED__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Pin_RED__SIO_CFG)
    #define Pin_RED_SIO_HYST_EN        (* (reg8 *) Pin_RED__SIO_HYST_EN)
    #define Pin_RED_SIO_REG_HIFREQ     (* (reg8 *) Pin_RED__SIO_REG_HIFREQ)
    #define Pin_RED_SIO_CFG            (* (reg8 *) Pin_RED__SIO_CFG)
    #define Pin_RED_SIO_DIFF           (* (reg8 *) Pin_RED__SIO_DIFF)
#endif /* (Pin_RED__SIO_CFG) */

/* Interrupt Registers */
#if defined(Pin_RED__INTSTAT)
    #define Pin_RED_INTSTAT             (* (reg8 *) Pin_RED__INTSTAT)
    #define Pin_RED_SNAP                (* (reg8 *) Pin_RED__SNAP)
    
	#define Pin_RED_0_INTTYPE_REG 		(* (reg8 *) Pin_RED__0__INTTYPE)
#endif /* (Pin_RED__INTSTAT) */

#endif /* End Pins Pin_RED_H */


/* [] END OF FILE */
