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

static void _loader_1_setup(void)
{
    Serial.begin();
}

static void _loader_1_loop(void)
{
    Serial.println("loader1 loop() is running...");
    delay(700);
}

RTDUINO_SKETCH_LOADER("loader1", _loader_1_setup, _loader_1_loop);
