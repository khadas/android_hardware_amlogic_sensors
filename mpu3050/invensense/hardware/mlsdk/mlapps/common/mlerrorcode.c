/*
 $License:
    Copyright (C) 2010 InvenSense Corporation, All Rights Reserved.
 $
 */
/*******************************************************************************
 *
 * $Id: mlerrorcode.c 3863 2010-10-08 22:05:31Z nroyer $
 *
 *******************************************************************************/

#include <stdio.h>
#include <string.h>

#include "mltypes.h"
#include "mlerrorcode.h"

#define ERROR_CODE_CASE( CODE ) case CODE: return #CODE

/**
 *  @brief  return a string containing the label assigned to the error code.
 *  
 *  @param  errorcode   
 *              The errorcode value of which the label has to be returned.
 *
 *  @return A string containing the error code label.
**/
#define ERROR_CODE_CASE( CODE ) case CODE: return #CODE

char* MLErrorCode(tMLError errorcode) 
{
    switch(errorcode) {
        ERROR_CODE_CASE( ML_SUCCESS );
        ERROR_CODE_CASE( ML_ERROR );
        ERROR_CODE_CASE( ML_ERROR_INVALID_PARAMETER );
        ERROR_CODE_CASE( ML_ERROR_FEATURE_NOT_ENABLED );
        ERROR_CODE_CASE( ML_ERROR_FEATURE_NOT_IMPLEMENTED );
        ERROR_CODE_CASE( ML_ERROR_DMP_NOT_STARTED );
        ERROR_CODE_CASE( ML_ERROR_DMP_STARTED );
        ERROR_CODE_CASE( ML_ERROR_NOT_OPENED );
        ERROR_CODE_CASE( ML_ERROR_OPENED );
        ERROR_CODE_CASE( ML_ERROR_INVALID_MODULE );
        ERROR_CODE_CASE( ML_ERROR_MEMORY_EXAUSTED );
        ERROR_CODE_CASE( ML_ERROR_DIVIDE_BY_ZERO );
        ERROR_CODE_CASE( ML_ERROR_ASSERTION_FAILURE );
        ERROR_CODE_CASE( ML_ERROR_FILE_OPEN );
        ERROR_CODE_CASE( ML_ERROR_FILE_READ );
        ERROR_CODE_CASE( ML_ERROR_FILE_WRITE );

        ERROR_CODE_CASE( ML_ERROR_SERIAL_CLOSED );
        ERROR_CODE_CASE( ML_ERROR_SERIAL_OPEN_ERROR );
        ERROR_CODE_CASE( ML_ERROR_SERIAL_READ );
        ERROR_CODE_CASE( ML_ERROR_SERIAL_WRITE );
        ERROR_CODE_CASE( ML_ERROR_SERIAL_DEVICE_NOT_RECOGNIZED );

        ERROR_CODE_CASE( ML_ERROR_SM_TRANSITION );
        ERROR_CODE_CASE( ML_ERROR_SM_IMPROPER_STATE );

        ERROR_CODE_CASE( ML_ERROR_FIFO_OVERFLOW );
        ERROR_CODE_CASE( ML_ERROR_FIFO_FOOTER );
        ERROR_CODE_CASE( ML_ERROR_FIFO_READ_COUNT );
        ERROR_CODE_CASE( ML_ERROR_FIFO_READ_DATA );
        ERROR_CODE_CASE( ML_ERROR_MEMORY_SET );

        ERROR_CODE_CASE( ML_ERROR_LOG_MEMORY_ERROR );
        ERROR_CODE_CASE( ML_ERROR_LOG_OUTPUT_ERROR );

        ERROR_CODE_CASE( ML_ERROR_OS_BAD_PTR);
        ERROR_CODE_CASE( ML_ERROR_OS_BAD_HANDLE);
        ERROR_CODE_CASE( ML_ERROR_OS_CREATE_FAILED);
        ERROR_CODE_CASE( ML_ERROR_OS_LOCK_FAILED);

        ERROR_CODE_CASE( ML_ERROR_COMPASS_DATA_OVERFLOW);
        ERROR_CODE_CASE( ML_ERROR_COMPASS_DATA_UNDERFLOW);
        ERROR_CODE_CASE( ML_ERROR_COMPASS_DATA_NOT_READY);

        default:
        {
            #define UNKNOWN_ERROR_CODE 1234
            return ERROR_NAME(UNKNOWN_ERROR_CODE);
            break;
        }

    }
}

/**
 *  @}
**/
