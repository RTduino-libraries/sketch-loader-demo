/*
 * Copyright (c) 2021-2022, RTduino Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * https://github.com/RTduino/RTduino
 * https://gitee.com/rtduino/RTduino
 *
 * Change Logs:
 * Date           Author            Notes
 * 2024-02-03     Meco Man          First version
 */
#include <RTduino.h>

static void _loader_2_setup(void)
{
    Serial.begin();
}

static void _loader_2_loop(void)
{
    Serial.println("loader2 loop() is running...");
    delay(300);
}

RTDUINO_SKETCH_LOADER("loader2", _loader_2_setup, _loader_2_loop);
