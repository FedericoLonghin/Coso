#include "settings.h";

void setup(){
  Serial.begin(115200);
}

void loop(){
  findForAudio();


Serial.print("Audio: ");
    Serial.println(analogRead(AUDIO_PIN));
Serial.print("\t IsMusic:");
    Serial.print(40*isMusic);
    Serial.println("");

}
