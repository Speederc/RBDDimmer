#ifndef RBDMCUESP32_H
#define RBDMCUESP32_H

#include "Arduino.h"
#include "RBDdimmer.h"
#include <stdio.h>
#include <esp32-hal-gpio.h>
#include "rom/ets_sys.h"
#include "esp_attr.h"

// ESP_IDF_VERSION_MAJOR is defined in ESP-IDF v3.3 or later
#if defined(ESP_IDF_VERSION_MAJOR) && ESP_IDF_VERSION_MAJOR > 3
#include "esp_intr_alloc.h"
#else
#include "esp_intr.h"
#endif

#include "rom/gpio.h"
#include "soc/gpio_reg.h"
#include "soc/io_mux_reg.h"
#include "soc/gpio_struct.h"
#include "soc/rtc_io_reg.h"

static const uint8_t powerBuf[] = {
    100,94, 91, 89, 87, 86, 84, 83, 82, 81,
	80, 78, 77, 77, 76, 75, 74, 73, 72, 71,
	70, 70, 69, 68, 67, 67, 66, 65, 65, 64,
	63, 62, 62, 61, 60, 60, 59, 58, 58, 57,
	56, 56, 55, 54, 54, 53, 53, 52, 51, 51,
	50, 49, 49, 48, 47, 47, 46, 46, 45, 44,
	44, 43, 42, 42, 41, 40, 40, 39, 38, 38,
	37, 36, 35, 35, 34, 33, 33, 32, 31, 30,
	30, 29, 28, 27, 26, 25, 24, 23, 23, 22,
	20, 19, 18, 17, 16, 14, 13, 11,  9,  6 	
};

void isr_ext();
void onTimerISR();

#endif
