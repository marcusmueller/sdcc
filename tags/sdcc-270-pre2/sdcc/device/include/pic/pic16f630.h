//
// Register Declarations for Microchip 16F630 Processor
//
//
// This header file was automatically generated by:
//
//	inc2h.pl V4585
//
//	Copyright (c) 2002, Kevin L. Pauba, All Rights Reserved
//
//	SDCC is licensed under the GNU Public license (GPL) v2.  Note that
//	this license covers the code to the compiler and other executables,
//	but explicitly does not cover any code or objects generated by sdcc.
//	We have not yet decided on a license for the run time libraries, but
//	it will not put any requirements on code linked against it. See:
// 
//	http://www.gnu.org/copyleft/gpl/html
//
//	See http://sdcc.sourceforge.net/ for the latest information on sdcc.
//
// 
#ifndef P16F630_H
#define P16F630_H

//
// Register addresses.
//
#define INDF_ADDR	0x0000
#define TMR0_ADDR	0x0001
#define PCL_ADDR	0x0002
#define STATUS_ADDR	0x0003
#define FSR_ADDR	0x0004
#define PORTA_ADDR	0x0005
#define PORTC_ADDR	0x0007
#define PCLATH_ADDR	0x000A
#define INTCON_ADDR	0x000B
#define PIR1_ADDR	0x000C
#define TMR1L_ADDR	0x000E
#define TMR1H_ADDR	0x000F
#define T1CON_ADDR	0x0010
#define CMCON_ADDR	0x0019
#define OPTION_REG_ADDR	0x0081
#define TRISA_ADDR	0x0085
#define TRISC_ADDR	0x0087
#define PIE1_ADDR	0x008C
#define PCON_ADDR	0x008E
#define OSCCAL_ADDR	0x0090
#define WPUA_ADDR	0x0095
#define WPU_ADDR	0x0095
#define IOCA_ADDR	0x0096
#define IOC_ADDR	0x0096
#define VRCON_ADDR	0x0099
#define EEDATA_ADDR	0x009A
#define EEDAT_ADDR	0x009A
#define EEADR_ADDR	0x009B
#define EECON1_ADDR	0x009C
#define EECON2_ADDR	0x009D

//
// Memory organization.
//



//         LIST
// P16F630.INC  Standard Header File, Version 1.00    Microchip Technology, Inc.
//         NOLIST

// This header file defines configurations, registers, and other useful bits of
// information for the PIC16F630 microcontroller.  These names are taken to match 
// the data sheets as closely as possible.  

// Note that the processor must be selected before this file is 
// included.  The processor may be selected the following ways:

//       1. Command line switch:
//               C:\ MPASM MYFILE.ASM /PIC16F630
//       2. LIST directive in the source file
//               LIST   P=PIC16F630
//       3. Processor Type entry in the MPASM full-screen interface

//==========================================================================
//
//       Revision History
//
//==========================================================================
//1.00   05/13/02 Original

//==========================================================================
//
//       Verify Processor
//
//==========================================================================

//        IFNDEF __16F630
//            MESSG "Processor-header file mismatch.  Verify selected processor."
//         ENDIF

//==========================================================================
//
//       Register Definitions
//
//==========================================================================

#define W                    0x0000
#define F                    0x0001

//----- Register Files------------------------------------------------------

extern __sfr  __at (INDF_ADDR)                    INDF;
extern __sfr  __at (TMR0_ADDR)                    TMR0;
extern __sfr  __at (PCL_ADDR)                     PCL;
extern __sfr  __at (STATUS_ADDR)                  STATUS;
extern __sfr  __at (FSR_ADDR)                     FSR;
extern __sfr  __at (PORTA_ADDR)                   PORTA;
extern __sfr  __at (PORTC_ADDR)                   PORTC;

extern __sfr  __at (PCLATH_ADDR)                  PCLATH;
extern __sfr  __at (INTCON_ADDR)                  INTCON;
extern __sfr  __at (PIR1_ADDR)                    PIR1;

extern __sfr  __at (TMR1L_ADDR)                   TMR1L;		
extern __sfr  __at (TMR1H_ADDR)                   TMR1H;		
extern __sfr  __at (T1CON_ADDR)                   T1CON;		

extern __sfr  __at (CMCON_ADDR)                   CMCON;		

extern __sfr  __at (OPTION_REG_ADDR)              OPTION_REG;

extern __sfr  __at (TRISA_ADDR)                   TRISA;
extern __sfr  __at (TRISC_ADDR)                   TRISC;

extern __sfr  __at (PIE1_ADDR)                    PIE1;

extern __sfr  __at (PCON_ADDR)                    PCON;

extern __sfr  __at (OSCCAL_ADDR)                  OSCCAL;

extern __sfr  __at (WPUA_ADDR)                    WPUA;
extern __sfr  __at (WPU_ADDR)                     WPU;
extern __sfr  __at (IOCA_ADDR)                    IOCA;
extern __sfr  __at (IOC_ADDR)                     IOC;

extern __sfr  __at (VRCON_ADDR)                   VRCON;
extern __sfr  __at (EEDATA_ADDR)                  EEDATA;	
extern __sfr  __at (EEDAT_ADDR)                   EEDAT;	
extern __sfr  __at (EEADR_ADDR)                   EEADR;	
extern __sfr  __at (EECON1_ADDR)                  EECON1;
extern __sfr  __at (EECON2_ADDR)                  EECON2;

//----- STATUS Bits --------------------------------------------------------


//----- INTCON Bits --------------------------------------------------------


//----- PIR1 Bits ----------------------------------------------------------


//----- T1CON Bits ---------------------------------------------------------


//----- COMCON Bits --------------------------------------------------------


//----- OPTION Bits --------------------------------------------------------


//----- PIE1 Bits ----------------------------------------------------------


//----- PCON Bits ----------------------------------------------------------


//----- OSCCAL Bits --------------------------------------------------------


//----- VRCON Bits ---------------------------------------------------------


//----- EECON1 -------------------------------------------------------------


//==========================================================================
//
//       RAM Definition
//
//==========================================================================

//         __MAXRAM H'FF'
//         __BADRAM H'06', H'08'-H'09', H'0D', H'11'-H'18', H'1A'-H'1F', H'60'-H'7F'
//         __BADRAM H'86', H'88'-H'89', H'8D', H'8F', H'91'-H'94', H'97'-H'98', H'9E'-H'9F', H'E0'-H'FF'

//==========================================================================
//
//       Configuration Bits
//
//==========================================================================

#define _CPD                 0x3EFF
#define _CPD_OFF             0x3FFF
#define _CP                  0x3F7F
#define _CP_OFF              0x3FFF
#define _BODEN               0x3FFF
#define _BODEN_OFF           0x3FBF
#define _MCLRE_ON            0x3FFF
#define _MCLRE_OFF           0x3FDF
#define _PWRTE_OFF           0x3FFF
#define _PWRTE_ON            0x3FEF
#define _WDT_ON              0x3FFF
#define _WDT_OFF             0x3FF7
#define _LP_OSC              0x3FF8
#define _XT_OSC              0x3FF9
#define _HS_OSC              0x3FFA
#define _EC_OSC              0x3FFB
#define _INTRC_OSC_NOCLKOUT  0x3FFC
#define _INTRC_OSC_CLKOUT    0x3FFD
#define _EXTRC_OSC_NOCLKOUT  0x3FFE
#define _EXTRC_OSC_CLKOUT    0x3FFF

//         LIST

// ----- CMCON bits --------------------
typedef union {
  struct {
    unsigned char CM0:1;
    unsigned char CM1:1;
    unsigned char CM2:1;
    unsigned char CIS:1;
    unsigned char CINV:1;
    unsigned char :1;
    unsigned char COUT:1;
    unsigned char :1;
  };
} __CMCON_bits_t;
extern volatile __CMCON_bits_t __at(CMCON_ADDR) CMCON_bits;

#define CM0                  CMCON_bits.CM0
#define CM1                  CMCON_bits.CM1
#define CM2                  CMCON_bits.CM2
#define CIS                  CMCON_bits.CIS
#define CINV                 CMCON_bits.CINV
#define COUT                 CMCON_bits.COUT

// ----- EECON1 bits --------------------
typedef union {
  struct {
    unsigned char RD:1;
    unsigned char WR:1;
    unsigned char WREN:1;
    unsigned char WRERR:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
} __EECON1_bits_t;
extern volatile __EECON1_bits_t __at(EECON1_ADDR) EECON1_bits;

#define RD                   EECON1_bits.RD
#define WR                   EECON1_bits.WR
#define WREN                 EECON1_bits.WREN
#define WRERR                EECON1_bits.WRERR

// ----- INTCON bits --------------------
typedef union {
  struct {
    unsigned char RAIF:1;
    unsigned char INTF:1;
    unsigned char T0IF:1;
    unsigned char RAIE:1;
    unsigned char INTE:1;
    unsigned char T0IE:1;
    unsigned char PEIE:1;
    unsigned char GIE:1;
  };
} __INTCON_bits_t;
extern volatile __INTCON_bits_t __at(INTCON_ADDR) INTCON_bits;

#define RAIF                 INTCON_bits.RAIF
#define INTF                 INTCON_bits.INTF
#define T0IF                 INTCON_bits.T0IF
#define RAIE                 INTCON_bits.RAIE
#define INTE                 INTCON_bits.INTE
#define T0IE                 INTCON_bits.T0IE
#define PEIE                 INTCON_bits.PEIE
#define GIE                  INTCON_bits.GIE

// ----- OPTION_REG bits --------------------
typedef union {
  struct {
    unsigned char PS0:1;
    unsigned char PS1:1;
    unsigned char PS2:1;
    unsigned char PSA:1;
    unsigned char T0SE:1;
    unsigned char T0CS:1;
    unsigned char INTEDG:1;
    unsigned char NOT_GPPU:1;
  };
  struct {
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char NOT_RAPU:1;
  };
} __OPTION_REG_bits_t;
extern volatile __OPTION_REG_bits_t __at(OPTION_REG_ADDR) OPTION_REG_bits;

#define PS0                  OPTION_REG_bits.PS0
#define PS1                  OPTION_REG_bits.PS1
#define PS2                  OPTION_REG_bits.PS2
#define PSA                  OPTION_REG_bits.PSA
#define T0SE                 OPTION_REG_bits.T0SE
#define T0CS                 OPTION_REG_bits.T0CS
#define INTEDG               OPTION_REG_bits.INTEDG
#define NOT_GPPU             OPTION_REG_bits.NOT_GPPU
#define NOT_RAPU             OPTION_REG_bits.NOT_RAPU

// ----- OSCCAL bits --------------------
typedef union {
  struct {
    unsigned char :1;
    unsigned char :1;
    unsigned char CAL0:1;
    unsigned char CAL1:1;
    unsigned char CAL2:1;
    unsigned char CAL3:1;
    unsigned char CAL4:1;
    unsigned char CAL5:1;
  };
} __OSCCAL_bits_t;
extern volatile __OSCCAL_bits_t __at(OSCCAL_ADDR) OSCCAL_bits;

#define CAL0                 OSCCAL_bits.CAL0
#define CAL1                 OSCCAL_bits.CAL1
#define CAL2                 OSCCAL_bits.CAL2
#define CAL3                 OSCCAL_bits.CAL3
#define CAL4                 OSCCAL_bits.CAL4
#define CAL5                 OSCCAL_bits.CAL5

// ----- PCON bits --------------------
typedef union {
  struct {
    unsigned char NOT_BOD:1;
    unsigned char NOT_POR:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
} __PCON_bits_t;
extern volatile __PCON_bits_t __at(PCON_ADDR) PCON_bits;

#define NOT_BOD              PCON_bits.NOT_BOD
#define NOT_POR              PCON_bits.NOT_POR

// ----- PIE1 bits --------------------
typedef union {
  struct {
    unsigned char T1IE:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char CMIE:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char ADIE:1;
    unsigned char EEIE:1;
  };
  struct {
    unsigned char TMR1IE:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
} __PIE1_bits_t;
extern volatile __PIE1_bits_t __at(PIE1_ADDR) PIE1_bits;

#define T1IE                 PIE1_bits.T1IE
#define TMR1IE               PIE1_bits.TMR1IE
#define CMIE                 PIE1_bits.CMIE
#define ADIE                 PIE1_bits.ADIE
#define EEIE                 PIE1_bits.EEIE

// ----- PIR1 bits --------------------
typedef union {
  struct {
    unsigned char T1IF:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char CMIF:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char ADIF:1;
    unsigned char EEIF:1;
  };
  struct {
    unsigned char TMR1IF:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
} __PIR1_bits_t;
extern volatile __PIR1_bits_t __at(PIR1_ADDR) PIR1_bits;

#define T1IF                 PIR1_bits.T1IF
#define TMR1IF               PIR1_bits.TMR1IF
#define CMIF                 PIR1_bits.CMIF
#define ADIF                 PIR1_bits.ADIF
#define EEIF                 PIR1_bits.EEIF

// ----- PORTA bits --------------------
typedef union {
  struct {
    unsigned char RA0:1;
    unsigned char RA1:1;
    unsigned char RA2:1;
    unsigned char RA3:1;
    unsigned char RA4:1;
    unsigned char RA5:1;
    unsigned char :1;
    unsigned char :1;
  };
} __PORTA_bits_t;
extern volatile __PORTA_bits_t __at(PORTA_ADDR) PORTA_bits;

#define RA0                  PORTA_bits.RA0
#define RA1                  PORTA_bits.RA1
#define RA2                  PORTA_bits.RA2
#define RA3                  PORTA_bits.RA3
#define RA4                  PORTA_bits.RA4
#define RA5                  PORTA_bits.RA5

// ----- PORTC bits --------------------
typedef union {
  struct {
    unsigned char RC0:1;
    unsigned char RC1:1;
    unsigned char RC2:1;
    unsigned char RC3:1;
    unsigned char RC4:1;
    unsigned char RC5:1;
    unsigned char RC6:1;
    unsigned char RC7:1;
  };
} __PORTC_bits_t;
extern volatile __PORTC_bits_t __at(PORTC_ADDR) PORTC_bits;

#define RC0                  PORTC_bits.RC0
#define RC1                  PORTC_bits.RC1
#define RC2                  PORTC_bits.RC2
#define RC3                  PORTC_bits.RC3
#define RC4                  PORTC_bits.RC4
#define RC5                  PORTC_bits.RC5
#define RC6                  PORTC_bits.RC6
#define RC7                  PORTC_bits.RC7

// ----- STATUS bits --------------------
typedef union {
  struct {
    unsigned char C:1;
    unsigned char DC:1;
    unsigned char Z:1;
    unsigned char NOT_PD:1;
    unsigned char NOT_TO:1;
    unsigned char RP0:1;
    unsigned char RP1:1;
    unsigned char IRP:1;
  };
} __STATUS_bits_t;
extern volatile __STATUS_bits_t __at(STATUS_ADDR) STATUS_bits;

#define C                    STATUS_bits.C
#define DC                   STATUS_bits.DC
#define Z                    STATUS_bits.Z
#define NOT_PD               STATUS_bits.NOT_PD
#define NOT_TO               STATUS_bits.NOT_TO
#define RP0                  STATUS_bits.RP0
#define RP1                  STATUS_bits.RP1
#define IRP                  STATUS_bits.IRP

// ----- T1CON bits --------------------
typedef union {
  struct {
    unsigned char TMR1ON:1;
    unsigned char TMR1CS:1;
    unsigned char NOT_T1SYNC:1;
    unsigned char T1OSCEN:1;
    unsigned char T1CKPS0:1;
    unsigned char T1CKPS1:1;
    unsigned char TMR1GE:1;
    unsigned char :1;
  };
} __T1CON_bits_t;
extern volatile __T1CON_bits_t __at(T1CON_ADDR) T1CON_bits;

#define TMR1ON               T1CON_bits.TMR1ON
#define TMR1CS               T1CON_bits.TMR1CS
#define NOT_T1SYNC           T1CON_bits.NOT_T1SYNC
#define T1OSCEN              T1CON_bits.T1OSCEN
#define T1CKPS0              T1CON_bits.T1CKPS0
#define T1CKPS1              T1CON_bits.T1CKPS1
#define TMR1GE               T1CON_bits.TMR1GE

// ----- TRISA bits --------------------
typedef union {
  struct {
    unsigned char TRISA0:1;
    unsigned char TRISA1:1;
    unsigned char TRISA2:1;
    unsigned char TRISA3:1;
    unsigned char TRISA4:1;
    unsigned char TRISA5:1;
    unsigned char :1;
    unsigned char :1;
  };
} __TRISA_bits_t;
extern volatile __TRISA_bits_t __at(TRISA_ADDR) TRISA_bits;

#define TRISA0               TRISA_bits.TRISA0
#define TRISA1               TRISA_bits.TRISA1
#define TRISA2               TRISA_bits.TRISA2
#define TRISA3               TRISA_bits.TRISA3
#define TRISA4               TRISA_bits.TRISA4
#define TRISA5               TRISA_bits.TRISA5

// ----- TRISC bits --------------------
typedef union {
  struct {
    unsigned char TRISC0:1;
    unsigned char TRISC1:1;
    unsigned char TRISC2:1;
    unsigned char TRISC3:1;
    unsigned char TRISC4:1;
    unsigned char TRISC5:1;
    unsigned char TRISC6:1;
    unsigned char TRISC7:1;
  };
} __TRISC_bits_t;
extern volatile __TRISC_bits_t __at(TRISC_ADDR) TRISC_bits;

#define TRISC0               TRISC_bits.TRISC0
#define TRISC1               TRISC_bits.TRISC1
#define TRISC2               TRISC_bits.TRISC2
#define TRISC3               TRISC_bits.TRISC3
#define TRISC4               TRISC_bits.TRISC4
#define TRISC5               TRISC_bits.TRISC5
#define TRISC6               TRISC_bits.TRISC6
#define TRISC7               TRISC_bits.TRISC7

// ----- VRCON bits --------------------
typedef union {
  struct {
    unsigned char VR0:1;
    unsigned char VR1:1;
    unsigned char VR2:1;
    unsigned char VR3:1;
    unsigned char :1;
    unsigned char VRR:1;
    unsigned char :1;
    unsigned char VREN:1;
  };
} __VRCON_bits_t;
extern volatile __VRCON_bits_t __at(VRCON_ADDR) VRCON_bits;

#define VR0                  VRCON_bits.VR0
#define VR1                  VRCON_bits.VR1
#define VR2                  VRCON_bits.VR2
#define VR3                  VRCON_bits.VR3
#define VRR                  VRCON_bits.VRR
#define VREN                 VRCON_bits.VREN

#endif
