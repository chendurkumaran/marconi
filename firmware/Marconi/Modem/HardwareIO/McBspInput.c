//******************************************************************************
//
//              Copyright (C) 2005.  The Marconi Project
//      All rights reserved.  No part of this program may be reproduced.
//
//     http://www.sgsolutions.ca/marconi
//
//==============================================================================
//
// USAGE:		Enter Description here
//
//
//
//******************************************************************************


#define __MCBSPINPUT_C__


//******************************************************************************
//  I N C L U D E    F I L E S
//******************************************************************************
#include "All.h"

//******************************************************************************
//  L O C A L    D E F I N I T I O N S
//******************************************************************************

//******************************************************************************
//  E X T E R N A L     F U N C T I O N    P R O T O T Y P E S
//******************************************************************************


//******************************************************************************
//  S T A T I C    F U N C T I O N    P R O T O T Y P E S
//******************************************************************************


//******************************************************************************
//  G L O B A L    V A R I A B L E S
//******************************************************************************


//******************************************************************************
//  L O C A L    V A R I A B L E S
//******************************************************************************


//******************************************************************************
//  C O D E
//******************************************************************************

//******************************************************************************
//
//	McBspInput Initialization Block
//
//******************************************************************************
void McBspInputInit(BYTE *BlockInitStruct, BYTE *BlockObjStruct)
{

}

//******************************************************************************
//
//	McBspInput Execution Block
//
//******************************************************************************
WORD McBspInput(WORD *inBuffer, WORD *inSize, WORD *outBuffer, WORD *outSize, BYTE *BlockObjStruct)
{

	//
	// Copies data in the McBsp buffer to the outBuffer
	//
	*outSize = HwCodecRd(outBuffer, *outSize);

	return 0;
}

//******************************************************************************
//
//	McBspInput Ready Check
//
//******************************************************************************
WORD McBspInputReady(WORD *inputSize, WORD *outputSize, BYTE *BlockObjStruct)
{
	if (HwCodecRdAvail() >= 1 && *outputSize >= 1)
	{
		*outputSize = MIN(HwCodecRdAvail(), *outputSize);
		return TRUE;
	}
	
	return FALSE;
}

/***********************************  END  ************************************/
