/* THE SOURCE CODE AND ITS
 * RELATED DOCUMENTATION IS PROVIDED "AS IS". TOSHIBA CORPORATION MAKES NO OTHER
 * WARRANTY OF ANY KIND, WHETHER EXPRESS, IMPLIED OR, STATUTORY AND DISCLAIMS ANY
 * AND ALL IMPLIED WARRANTIES OF MERCHANTABILITY, SATISFACTORY QUALITY, NON
 * INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE. THE SOURCE CODE AND
 * DOCUMENTATION MAY INCLUDE ERRORS. TOSHIBA CORPORATION RESERVES THE RIGHT TO
 * INCORPORATE MODIFICATIONS TO THE SOURCE CODE IN LATER REVISIONS OF IT, AND TO
 * MAKE IMPROVEMENTS OR CHANGES IN THE DOCUMENTATION OR THE PRODUCTS OR
 * TECHNOLOGIES DESCRIBED THEREIN AT ANY TIME. TOSHIBA CORPORATION SHALL NOT BE
 * LIABLE FOR ANY DIRECT, INDIRECT OR CONSEQUENTIAL DAMAGE OR LIABILITY ARISING
 * FROM YOUR USE OF THE SOURCE CODE OR ANY DOCUMENTATION, INCLUDING BUT NOT
 * LIMITED TO, LOST REVENUES, DATA OR PROFITS, DAMAGES OF ANY SPECIAL, INCIDENTAL
 * OR CONSEQUENTIAL NATURE, PUNITIVE DAMAGES, LOSS OF PROPERTY OR LOSS OF PROFITS
 * ARISING OUT OF OR IN CONNECTION WITH THIS AGREEMENT, OR BEING UNUSABLE, EVEN IF
 * ADVISED OF THE POSSIBILITY OR PROBABILITY OF SUCH DAMAGES AND WHETHER A CLAIM
 * FOR SUCH DAMAGE IS BASED UPON WARRANTY, CONTRACT, TORT, NEGLIGENCE OR
 * OTHERWISE. (C)Copyright TOSHIBA CORPORATION 2011 All rights reserved
 */
#ifndef _MOTOR_DEFINE_H_
#define _MOTOR_DEFINE_H_

#include "motorctrl.h"

#define MOTOR_POLE_PAIRS 4
#define MOTOR_DIRECTION 3
#define MOTOR_ENCODER_TYPE 0
#define MOTOR_ENCODER_RESOLUTION 0
#define MOTOR_RESOLUTION_MULT 0
#define MOTOR_ANGULAR_ACC_MAX 400 /* rad/sec^2 */
#define MOTOR_TORQUE_MAX 51 /* mNm/A */
#define MOTOR_RESISTANCE 6850 /* mOhm */
#define MOTOR_INDUCTANCE 3865 /* uH */
#define MOTOR_HZ_LIMIT 300 /* Hz */
#define MOTOR_HZ_CHANGE 25 /* Hz */
#define MOTOR_INIT_DELAY 100 /* ms */
#define MOTOR_IQ_START 500 /* mA */
#define MOTOR_ID_START 500 /* mA */
#define MOTOR_IQ_LIM 1800 /* mA */
#define MOTOR_ID_LIM 1800 /* mA */
#define MOTORID "Maxxon EC"

#define CONTROL_ID_KI 30 /* V/As */
#define CONTROL_ID_KP 15 /* V/A */
#define CONTROL_IQ_KI 30 /* V/As */
#define CONTROL_IQ_KP 15 /* V/A */
#define CONTROL_POSITION_KI 2 /* Hz/Vs */
#define CONTROL_POSITION_KP 10 /* Hz/V */
#define CONTROL_SPEED_KI 5 /* mA/Hz*s */
#define CONTROL_SPEED_KP 15 /* mA/Hz */

#define SYSTEM_PWM_FREQUENCY 12500 /* HZ */
#define SYSTEM_SHUTDOWN_MODE 2
#define SYSTEM_RESTART_MODE 1
#define SYSTEM_STALL_VALUE 620
#define SYSTEM_OVERTEMP_VALUE 0
#define SYSTEM_SPEED_CONTROL_MODE 0                     /* NONE             - 0 - No speed control / 1 - ADC / 2 - PWM */

#endif
