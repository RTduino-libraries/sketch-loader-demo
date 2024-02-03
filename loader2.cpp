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
