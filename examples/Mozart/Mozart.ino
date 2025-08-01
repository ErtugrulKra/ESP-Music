#include "ESP_Music.h"  // ESP-Music kütüphanesini dahil et

#define BUZZER_PIN D1

Note melody[] = {
  {NOTE_B4, N8}, {NOTE_A4, N8}, {NOTE_GS4, N8}, {NOTE_A4, N8}, {NOTE_C5, N2},
  {NOTE_D5, N8}, {NOTE_C5, N8}, {NOTE_B4, N8}, {NOTE_C5, N8}, {NOTE_E5, N2},
  {NOTE_F5, N8}, {NOTE_E5, N8}, {NOTE_DS5, N8}, {NOTE_E5, N8}, {NOTE_B5, N8}, 
  {NOTE_A5, N8}, {NOTE_GS5, N8}, {NOTE_A5, N8}, {NOTE_B5, N8}, {NOTE_A5, N8}, 
  {NOTE_GS5, N8}, {NOTE_A5, N8}, {NOTE_C6, N2}, {NOTE_A5, N4}, {NOTE_C6, N4}, 
  {NOTE_G5, N16}, {NOTE_A5, N16}, {NOTE_B5, N16}, {NOTE_A5, N4}, {NOTE_G5, N4}, 
  {NOTE_A5, N16}, {NOTE_G5, N16}, {NOTE_A5, N16}, {NOTE_B5, N4}, {NOTE_A5, N4}, 
  {NOTE_G5, N4}, {NOTE_A5, N16},  {NOTE_G5, N16}, {NOTE_A5, N16}, {NOTE_B5, N4}, 
  {NOTE_A5, N4}, {NOTE_G5, N4}, {NOTE_FS5, N4}, {NOTE_E5, N2}, {NOTE_E5, N4}, 
  {NOTE_F5, N4}, {NOTE_G5, N4}, {NOTE_G5, N4}, {NOTE_A5, N8}, {NOTE_G5, N8}, 
  {NOTE_F5, N8}, {NOTE_E5, N8}, {NOTE_D5, N2}, {NOTE_E5, N4}, {NOTE_F5, N4}, 
  {NOTE_G5, N4}, {NOTE_G5, N4}, {NOTE_A5, N8}, {NOTE_G5, N8}, {NOTE_F5, N8}, 
  {NOTE_E5, N8}, {NOTE_D5, N2}, {NOTE_C5, N4}, {NOTE_D5, N4}, {NOTE_E5, N4}, 
  {NOTE_E5, N4}, {NOTE_F5, N8}, {NOTE_E5, N8}, {NOTE_D5, N8}, {NOTE_C5, N8}, 
  {NOTE_B4, N2}, {NOTE_C5, N4}, {NOTE_D5, N4}, {NOTE_E5, N4}, {NOTE_E5, N4}, 
  {NOTE_F5, N8}, {NOTE_E5, N8}, {NOTE_D5, N8}, {NOTE_C5, N8}, {NOTE_B4, N2},
  {NOTE_B4, N8}, {NOTE_A4, N8}, {NOTE_GS4, N8}, {NOTE_A4, N8}, {NOTE_C5, N2},
  {NOTE_D5, N8}, {NOTE_C5, N8}, {NOTE_B4, N8}, {NOTE_C5, N8}, {NOTE_E5, N2},
  {NOTE_F5, N8}, {NOTE_E5, N8}, {NOTE_DS5, N8}, {NOTE_E5, N8}, {NOTE_B5, N8}, 
  {NOTE_A5, N8}, {NOTE_GS5, N8}, {NOTE_A5, N8}, {NOTE_B5, N8}, {NOTE_A5, N8}, 
  {NOTE_GS5, N8}, {NOTE_A5, N8}, {NOTE_C6, N2}, {NOTE_A5, N4}, {NOTE_B5, N4}, 
  {NOTE_C6, N4}, {NOTE_B5, N4},  {NOTE_A5, N4}, {NOTE_GS5, N4}, {NOTE_A5, N4}, 
  {NOTE_E5, N4}, {NOTE_F5, N4}, {NOTE_D5, N4}, {NOTE_C5, N4}, {NOTE_B4, N4}, 
  {NOTE_A4, N4}, {NOTE_B4, N8}, {NOTE_A4, N8}, {NOTE_A4, N2}, {NOTE_A5, N4}, 
  {NOTE_B5, N4}, {NOTE_CS6, N2}, {NOTE_A5, N4}, {NOTE_B5, N4}, {NOTE_CS6, N4}, 
  {NOTE_B5, N4}, {NOTE_A5, N4}, {NOTE_GS5, N4}, {NOTE_FS5, N4}, {NOTE_GS5, N4}, 
  {NOTE_A5, N4}, {NOTE_B5, N4}, {NOTE_GS5, N4}, {NOTE_E5, N4}, {NOTE_A5, N4}, 
  {NOTE_B5, N4}, {NOTE_CS6, N2}, {NOTE_A5, N4}, {NOTE_B5, N4}, {NOTE_CS6, N4}, 
  {NOTE_B5, N4}, {NOTE_A5, N4},  {NOTE_GS5, N4}, {NOTE_FS5, N4}, {NOTE_B5, N4}, 
  {NOTE_GS5, N4}, {NOTE_E5, N4}, {NOTE_A5, N2}, {NOTE_A5, N4}, {NOTE_B5, N4}, 
  {NOTE_CS6, N2}, {NOTE_A5, N4}, {NOTE_B5, N4}, {NOTE_CS6, N4}, {NOTE_B5, N4}, 
  {NOTE_A5, N4}, {NOTE_GS5, N4}, {NOTE_FS5, N4}, {NOTE_GS5, N4}, {NOTE_A5, N4},
  {NOTE_B5, N4}, {NOTE_GS5, N4}, {NOTE_E5, N4}, {NOTE_A5, N4}, {NOTE_B5, N4}, 
  {NOTE_CS6, N2}, {NOTE_A5, N4}, {NOTE_B5, N4}, {NOTE_CS6, N4}, {NOTE_B5, N4}, 
  {NOTE_A5, N4}, {NOTE_GS5, N4}, {NOTE_FS5, N4}, {NOTE_B5, N4}, {NOTE_GS5, N4}, 
  {NOTE_E5, N4}, {NOTE_A5, N2},
};

const int melodyLength = sizeof(melody) / sizeof(Note);

MusicPlayer player(BUZZER_PIN, 200); 

void setup() {
  player.play(melody, melodyLength);
}

void loop() {
  // delay(5000);
  // player.play(melody, melodyLength);
}
