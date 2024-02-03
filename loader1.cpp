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
