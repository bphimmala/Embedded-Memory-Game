/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : PE_Error.h
**     Project     : MemoryGame
**     Processor   : MK64FN1M0VLL12
**     Component   : PE_Error
**     Version     : Driver 01.00
**     Compiler    : GNU C Compiler
**     Date/Time   : 2025-06-04, 16:46, # CodeGen: 0
**     Abstract    :
**         This component "PE_Error" contains internal definitions
**         of the error constants.
**     Contents    :
**         No public methods
**
**     Copyright : 1997 - 2015 Freescale Semiconductor, Inc. 
**     All Rights Reserved.
**     
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**     
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**     
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**     
**     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**     
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**     
**     http: www.freescale.com
**     mail: support@freescale.com
** ###################################################################*/
/*!
** @file PE_Error.h
** @version 01.00
** @brief
**         This component "PE_Error" contains internal definitions
**         of the error constants.
*/         
/*!
**  @addtogroup PE_Error_module PE_Error module documentation
**  @{
*/         

#ifndef __PE_Error_H
#define __PE_Error_H

#define ERR_OK                          0x00U /*!< OK */
#define ERR_SPEED                       0x01U /*!< This device does not work in the active speed mode. */
#define ERR_RANGE                       0x02U /*!< Parameter out of range. */
#define ERR_VALUE                       0x03U /*!< Parameter of incorrect value. */
#define ERR_OVERFLOW                    0x04U /*!< Timer overflow. */
#define ERR_MATH                        0x05U /*!< Overflow during evaluation. */
#define ERR_ENABLED                     0x06U /*!< Device is enabled. */
#define ERR_DISABLED                    0x07U /*!< Device is disabled. */
#define ERR_BUSY                        0x08U /*!< Device is busy. */
#define ERR_NOTAVAIL                    0x09U /*!< Requested value or method not available. */
#define ERR_RXEMPTY                     0x0AU /*!< No data in receiver. */
#define ERR_TXFULL                      0x0BU /*!< Transmitter is full. */
#define ERR_BUSOFF                      0x0CU /*!< Bus not available. */
#define ERR_OVERRUN                     0x0DU /*!< Overrun error is detected. */
#define ERR_FRAMING                     0x0EU /*!< Framing error is detected. */
#define ERR_PARITY                      0x0FU /*!< Parity error is detected. */
#define ERR_NOISE                       0x10U /*!< Noise error is detected. */
#define ERR_IDLE                        0x11U /*!< Idle error is detected. */
#define ERR_FAULT                       0x12U /*!< Fault error is detected. */
#define ERR_BREAK                       0x13U /*!< Break char is received during communication. */
#define ERR_CRC                         0x14U /*!< CRC error is detected. */
#define ERR_ARBITR                      0x15U /*!< A node losts arbitration. This error occurs if two nodes start transmission at the same time. */
#define ERR_PROTECT                     0x16U /*!< Protection error is detected. */
#define ERR_UNDERFLOW                   0x17U /*!< Underflow error is detected. */
#define ERR_UNDERRUN                    0x18U /*!< Underrun error is detected. */
#define ERR_COMMON                      0x19U /*!< Common error of a device. */
#define ERR_LINSYNC                     0x1AU /*!< LIN synchronization error is detected. */
#define ERR_FAILED                      0x1BU /*!< Requested functionality or process failed. */
#define ERR_QFULL                       0x1CU /*!< Queue is full. */
#define ERR_PARAM_MASK                  0x80U /*!< Invalid mask. */
#define ERR_PARAM_MODE                  0x81U /*!< Invalid mode. */
#define ERR_PARAM_INDEX                 0x82U /*!< Invalid index. */
#define ERR_PARAM_DATA                  0x83U /*!< Invalid data. */
#define ERR_PARAM_SIZE                  0x84U /*!< Invalid size. */
#define ERR_PARAM_VALUE                 0x85U /*!< Invalid value. */
#define ERR_PARAM_RANGE                 0x86U /*!< Invalid parameter's range or parameters' combination. */
#define ERR_PARAM_LOW_VALUE             0x87U /*!< Invalid value (LOW part). */
#define ERR_PARAM_HIGH_VALUE            0x88U /*!< Invalid value (HIGH part). */
#define ERR_PARAM_ADDRESS               0x89U /*!< Invalid address. */
#define ERR_PARAM_PARITY                0x8AU /*!< Invalid parity. */
#define ERR_PARAM_WIDTH                 0x8BU /*!< Invalid width. */
#define ERR_PARAM_LENGTH                0x8CU /*!< Invalid length. */
#define ERR_PARAM_ADDRESS_TYPE          0x8DU /*!< Invalid address type. */
#define ERR_PARAM_COMMAND_TYPE          0x8EU /*!< Invalid command type. */
#define ERR_PARAM_COMMAND               0x8FU /*!< Invalid command. */
#define ERR_PARAM_RECIPIENT             0x90U /*!< Invalid recipient. */
#define ERR_PARAM_BUFFER_COUNT          0x91U /*!< Invalid buffer count. */
#define ERR_PARAM_ID                    0x92U /*!< Invalid ID. */
#define ERR_PARAM_GROUP                 0x93U /*!< Invalid group. */
#define ERR_PARAM_CHIP_SELECT           0x94U /*!< Invalid chip select. */
#define ERR_PARAM_ATTRIBUTE_SET         0x95U /*!< Invalid set of attributes. */
#define ERR_PARAM_SAMPLE_COUNT          0x96U /*!< Invalid sample count. */
#define ERR_PARAM_CONDITION             0x97U /*!< Invalid condition. */
#define ERR_PARAM_TICKS                 0x98U /*!< Invalid ticks parameter. */

#endif /* __PE_Error_H */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.5 [05.21]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
