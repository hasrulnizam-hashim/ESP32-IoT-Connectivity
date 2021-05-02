// UART Receiving example

void setup() {                                                  
  // Define and start serial monitor
  Serial.begin(115200);
}

void loop() {
 while (Serial.available()) {              // Wait for the Receiver to get the characters
    Serial.println(char(Serial.read()));   // Display the result on the serial monitor
  }
}
