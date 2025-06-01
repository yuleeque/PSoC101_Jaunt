/*******************************************************************************
* File Name: Pin_TWO.h  
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

#if !defined(CY_PINS_Pin_TWO_H) /* Pins Pin_TWO_H */
#define CY_PINS_Pin_TWO_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Pin_TWO_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Pin_TWO_Write(uint8 value) ;
void    Pin_TWO_SetDriveMode(uint8 mode) ;
uint8   Pin_TWO_ReadDataReg(void) ;
uint8   Pin_TWO_Read(void) ;
void    Pin_TWO_SetInterruptMode(uint16 position, uint16 mode) ;
uint8   Pin_TWO_ClearInterrupt(void) ;
/** @} general */

/***************************************
*           API Constants        
***************************************/

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Pin_TWO_SetDriveMode() function.
     *  @{
     */
        /* Drive Modes */
        #define Pin_TWO_DM_ALG_HIZ         PIN_DM_ALG_HIZ   /**< \brief High Impedance Analog   */
        #define Pin_TWO_DM_DIG_HIZ         PIN_DM_DIG_HIZ   /**< \brief High Impedance Digital  */
        #define Pin_TWO_DM_RES_UP          PIN_DM_RES_UP    /**< \brief Resistive Pull Up       */
        #define Pin_TWO_DM_RES_DWN         PIN_DM_RES_DWN   /**< \brief Resistive Pull Down     */
        #define Pin_TWO_DM_OD_LO           PIN_DM_OD_LO     /**< \brief Open Drain, Drives Low  */
        #define Pin_TWO_DM_OD_HI           PIN_DM_OD_HI     /**< \brief Open Drain, Drives High */
        #define Pin_TWO_DM_STRONG          PIN_DM_STRONG    /**< \brief Strong Drive            */
        #define Pin_TWO_DM_RES_UPDWN       PIN_DM_RES_UPDWN /**< \brief Resistive Pull Up/Down  */
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Pin_TWO_MASK               Pin_TWO__MASK
#define Pin_TWO_SHIFT              Pin_TWO__SHIFT
#define Pin_TWO_WIDTH              1u

/* Interrupt constants */
#if defined(Pin_TWO__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Pin_TWO_SetInterruptMode() function.
     *  @{
     */
        #define Pin_TWO_INTR_NONE      (uint16)(0x0000u)   /**< \brief Disabled             */
        #define Pin_TWO_INTR_RISING    (uint16)(0x0001u)   /**< \brief Rising edge trigger  */
        #define Pin_TWO_INTR_FALLING   (uint16)(0x0002u)   /**< \brief Falling edge trigger */
        #define Pin_TWO_INTR_BOTH      (uint16)(0x0003u)   /**< \brief Both edge trigger    */
        /** @} intrMode */
/** @} group_constants */

    #define Pin_TWO_INTR_MASK      (0x01u)
#endif /* (Pin_TWO__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Pin_TWO_PS                     (* (reg8 *) Pin_TWO__PS)
/* Data Register */
#define Pin_TWO_DR                     (* (reg8 *) Pin_TWO__DR)
/* Port Number */
#define Pin_TWO_PRT_NUM                (* (reg8 *) Pin_TWO__PRT) 
/* Connect to Analog Globals */                                                  
#define Pin_TWO_AG                     (* (reg8 *) Pin_TWO__AG)                       
/* Analog MUX bux enable */
#define Pin_TWO_AMUX                   (* (reg8 *) Pin_TWO__AMUX) 
/* Bidirectional Enable */                                                        
#define Pin_TWO_BIE                    (* (reg8 *) Pin_TWO__BIE)
/* Bit-mask for Aliased Register Access */
#define Pin_TWO_BIT_MASK               (* (reg8 *) Pin_TWO__BIT_MASK)
/* Bypass Enable */
#define Pin_TWO_BYP                    (* (reg8 *) Pin_TWO__BYP)
/* Port wide control signals */                                                   
#define Pin_TWO_CTL                    (* (reg8 *) Pin_TWO__CTL)
/* Drive Modes */
#define Pin_TWO_DM0                    (* (reg8 *) Pin_TWO__DM0) 
#define Pin_TWO_DM1                    (* (reg8 *) Pin_TWO__DM1)
#define Pin_TWO_DM2                    (* (reg8 *) Pin_TWO__DM2) 
/* Input Buffer Disable Override */
#define Pin_TWO_INP_DIS                (* (reg8 *) Pin_TWO__INP_DIS)
/* LCD Common or Segment Drive */
#define Pin_TWO_LCD_COM_SEG            (* (reg8 *) Pin_TWO__LCD_COM_SEG)
/* Enable Segment LCD */
#define Pin_TWO_LCD_EN                 (* (reg8 *) Pin_TWO__LCD_EN)
/* Slew Rate Control */
#define Pin_TWO_SLW                    (* (reg8 *) Pin_TWO__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Pin_TWO_PRTDSI__CAPS_SEL       (* (reg8 *) Pin_TWO__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Pin_TWO_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Pin_TWO__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Pin_TWO_PRTDSI__OE_SEL0        (* (reg8 *) Pin_TWO__PRTDSI__OE_SEL0) 
#define Pin_TWO_PRTDSI__OE_SEL1        (* (reg8 *) Pin_TWO__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Pin_TWO_PRTDSI__OUT_SEL0       (* (reg8 *) Pin_TWO__PRTDSI__OUT_SEL0) 
#define Pin_TWO_PRTDSI__OUT_SEL1       (* (reg8 *) Pin_TWO__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Pin_TWO_PRTDSI__SYNC_OUT       (* (reg8 *) Pin_TWO__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Pin_TWO__SIO_CFG)
    #define Pin_TWO_SIO_HYST_EN        (* (reg8 *) Pin_TWO__SIO_HYST_EN)
    #define Pin_TWO_SIO_REG_HIFREQ     (* (reg8 *) Pin_TWO__SIO_REG_HIFREQ)
    #define Pin_TWO_SIO_CFG            (* (reg8 *) Pin_TWO__SIO_CFG)
    #define Pin_TWO_SIO_DIFF           (* (reg8 *) Pin_TWO__SIO_DIFF)
#endif /* (Pin_TWO__SIO_CFG) */

/* Interrupt Registers */
#if defined(Pin_TWO__INTSTAT)
    #define Pin_TWO_INTSTAT             (* (reg8 *) Pin_TWO__INTSTAT)
    #define Pin_TWO_SNAP                (* (reg8 *) Pin_TWO__SNAP)
    
	#define Pin_TWO_0_INTTYPE_REG 		(* (reg8 *) Pin_TWO__0__INTTYPE)
#endif /* (Pin_TWO__INTSTAT) */

#endif /* End Pins Pin_TWO_H */


/* [] END OF FILE */
