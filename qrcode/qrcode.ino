void setup() {
  Serial.begin(9600);
    pinMode(13  , OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);  
  Serial.print("qr0.txt=");
  Serial.print('"');
  Serial.print("This is demo for QR code!!!");
  Serial.print('"');
  Serial.write(0xff);
  Serial.write(0xff);
  Serial.write(0xff);
  delay(2000);

  digitalWrite(13, LOW);   
  Serial.print("qr0.txt=");
  Serial.print('"');
  Serial.print("viola, got change after 2sec.");
  Serial.print('"');
  Serial.write(0xff);
  Serial.write(0xff);
  Serial.write(0xff);
  delay(2000);

  digitalWrite(13, HIGH);   
  Serial.print("qr0.txt=");
  Serial.print('"');
  Serial.print("ohh...yess...It is working....");
  Serial.print('"');
  Serial.write(0xff);
  Serial.write(0xff);
  Serial.write(0xff);
  delay(2000);

  digitalWrite(13, LOW);   
  Serial.print("qr0.txt=");
  Serial.print('"');
  Serial.print("abcdefghijklmnopqrstuvwxyz");
  Serial.print('"');
  Serial.write(0xff);
  Serial.write(0xff);
  Serial.write(0xff);
  delay(2000);

  digitalWrite(13, HIGH); 
  Serial.print("qr0.txt=");
  Serial.print('"');
  Serial.print("!@#$%^&*()_+=-");
  Serial.print('"');
  Serial.write(0xff);
  Serial.write(0xff);
  Serial.write(0xff);
  delay(2000);

  digitalWrite(13, LOW); 
  Serial.print("qr0.txt=");
  Serial.print('"');
  Serial.print("1234567890");
  Serial.print('"');
  Serial.write(0xff);
  Serial.write(0xff);
  Serial.write(0xff);
  delay(2000);

  
  
   
}
