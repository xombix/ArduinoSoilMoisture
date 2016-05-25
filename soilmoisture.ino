void setup() {
   Serial.begin(9600);
    pinMode(13, OUTPUT);  
}

void loop() {
  sensorValue = analogRead(sensorPin);
  delay(2000); //delay 5 detik
  Serial.print("Moisture Sensor = ");
  Serial.println(sensorValue);
  //jika nilai sensor lebih dari 1000 lampu led akan berkedip
  if(sensorValue >1000){
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);              // wait for a second
}

}
