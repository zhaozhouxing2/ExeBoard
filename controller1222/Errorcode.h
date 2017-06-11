#ifndef _ERROR_CODE_H_
#define _ERROR_CODE_H_

#include "SatError.h"
typedef enum
{
   ERROR_CODE_SUCC = SAT_ERROR_SYSTEM_BASE,
   ERROR_CODE_ALREADY_EXIST,
   ERROR_CODE_UNIMPLEMENTED ,
   ERROR_CODE_INVAID_MODBUS_ADR ,
   ERROR_CODE_INVAID_MODBUS_REG ,
   ERROR_CODE_MEM_ALLOC_FAIL ,
   ERROR_CODE_TIME_OUT,
   ERROR_CODE_STATE_CHECK_FAILURE,
   
}ERROR_CODE_SYSTEM_ENUM;

typedef enum
{
	ERROR_CODE_MSG_BASE = SAT_ERROR_MSG_BASE,
	ERROR_CODE_MSG_ALLOC_MEMORY_FAIL,
	ERROR_CODE_MSG_SEND_INVALID_PARAMETER,
	ERROR_CODE_MSG_SEND_QUEUE_FULL,

	ERROR_CODE_MSG_RCV_INVALID_PARAMETER,

}ERROR_CODE_MSG_ENUM;

// FOR USER
typedef enum
{
	ERROR_CODE_USER_BASE = SAT_ERROR_USER_BASE,

}ERROR_CODE_USER_ENUM;


#endif
