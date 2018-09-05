/*
 * Copyright � 2011 St�phane Raimbault <stephane.raimbault@gmail.com>
 *
 * License ISC, see LICENSE for more details.

 * This library implements the Modbus protocol.
 * http://libmodbus.org/
 *
 */

#pragma once

#include <stdint.h>

#define MB_CHAR_TIMEOUT   (1)  //max ms between chars
#define MB_PACKET_TIMEOUT (3)  //max ms between chars
#define MB_BROADCAST_ADDR (0)
#define MB_RX_BUFFER_SIZE (128)
#define MB_SLAVE_ID       (0x07) // avoid common characters - this is BEL

/* Protocol exceptions */
typedef enum
{
  mb_ok               = 0,
  mb_illegal_func     = 1,
  mb_illegal_address  = 2,
  mb_illegal_value    = 3,
  mb_timeout          = 4
} mb_exception_t;

int mb_update();
