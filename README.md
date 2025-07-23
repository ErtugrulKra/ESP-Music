 
# ESP-Music 🎶
Lightweight music playback library for ESP8266/ESP32 with support for standard note durations.

`ESP-Music` is a lightweight Arduino-compatible library for ESP8266 and ESP32 boards that allows you to play melodies using piezo buzzers. It supports common Western music note durations like 1/4, 1/8, 1/16 notes and can be used without any external dependencies.

## Features

- 🎵 Supports standard music notes from B0 to D8
- 🕒 Supports durations: whole, half, quarter, eighth, sixteenth
- 🔧 Adjustable BPM (beats per minute)
- 🧩 Easy to use `play()` function with pitch and duration

## Example

```cpp
#include "ESP_Music.h"

Note melody[] = {
  { NOTE_C4, N4 },
  { NOTE_D4, N4 },
  { NOTE_E4, N4 },
  { NOTE_F4, N4 },
  { NOTE_G4, N2 },
  { NOTE_REST, N4 },
};

MusicPlayer player(8); // buzzer connected to D8 (GPIO15)

void setup() {
  player.play(melody, sizeof(melody) / sizeof(Note));
}

void loop() {

}
```