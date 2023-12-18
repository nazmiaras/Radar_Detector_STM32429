/*
 * pwm_driver.h
 *
 *  Created on: Dec 10, 2023
 *      Author: nazmi
 */

#ifndef INC_SERVO_DRIVER_H_
#define INC_SERVO_DRIVER_H_

#include <stdint.h>

typedef enum CHANNELS{
	CHANNEL1,
	CHANNEL2,
	CHANNEL3,
	CHANNEL4
}Channels_e;
void servo_init(void);

void servo_enable(void);
void servo_disable(void);

void servo_set_duty_cycle(uint32_t duty, Channels_e channel);

#endif /* INC_SERVO_DRIVER_H_ */
