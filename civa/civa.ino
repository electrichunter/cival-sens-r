const int sensorPin = 2;  // Civa sensörünün bağlı olduğu pin
const int ledPin = 13;    // Harici LED'in bağlı olduğu pin

void setup() {
  Serial.begin(9600); // Seri iletişimi başlat
  pinMode(sensorPin, INPUT); // Sensör pinini giriş olarak ayarla
  pinMode(ledPin, OUTPUT);   // Harici LED pinini çıkış olarak ayarla
}

void loop() {
  int sensorState = digitalRead(sensorPin); // Sensör pinini oku

  if (sensorState == HIGH) { // Sensör etkinse
    Serial.println("Sensör Açık"); // Seri monitöre "Sensör Açık" yazdır
    digitalWrite(ledPin, HIGH);   // Harici LED'i yak
  } else { // Sensör etkin değilse
    Serial.println("Sensör Kapalı"); // Seri monitöre "Sensör Kapalı" yazdır
    digitalWrite(ledPin, LOW);   // Harici LED'i kapat
  }

  delay(1000); // 1 saniye bekle
}