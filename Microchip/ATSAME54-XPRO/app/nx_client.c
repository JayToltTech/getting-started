/* Copyright (c) Microsoft Corporation.
   Licensed under the MIT License. */

#include "nx_client.h"

#include <stdio.h>
#include <stdbool.h>

#include "atmel_start.h"


void set_led_state(bool level)
{
    if (level)
    {
        // Pin level set to "low" state
        printf("LED is turned ON\r\n");
    }
    else
    {
        // Pin level set to "high" state
        printf("LED is turned OFF\r\n");
    }

    gpio_set_pin_level(PC18, !level);
}b