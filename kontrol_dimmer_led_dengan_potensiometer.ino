// kontrol led dimmer dengan menggunakan potensiometer dan arduino
// powered by Iqbal Nurpauzi
// view more video and subscribe my chanel on : https://www.youtube.com/channel/UCzUwZ_qQoMndVua6Tqh7K0Q
//untuk tutorial dapat dilihat di video : https://www.youtube.com/watch?v=ATvz2j8oG8Q

int pinpotensio = A0;                   //pin Analog untuk VR
int potval;                             // tempat menyimpan pembacaan tegangan dari potensiometer
int led = 9;                            // tempat led dihubungkan dengan led

void setup() {
  pinMode(led, OUTPUT);                 // setting led sebagai output
}

void loop() {
  potval = analogRead(pinpotensio);     // membaca tegangan analog di potensio dengan data dari 0 - 1023 (0-5v)
  potval = map(potval, 0, 1023, 0, 255);// merubah data pengukuran dari 0-1023 menjadi 0-255
  analogWrite(led);                     // data pengukuran dikirimkan ke led
  delay(15);                            // pembacaan setiap 15mS
}
