// C++ code
//int tialization
int RedLED = 11;
int BlueLED = 6;
int GreenLED = 2;
int dt = 1500;

//Setup code to run once
void setup() {
  //setup pins as output
  pinMode(RedLED, OUTPUT);
  pinMode(BlueLED, OUTPUT);
  pinMode(GreenLED, OUTPUT);

  //initial serial communication @9600 baud rate
  Serial.begin(9600);
}

//loop to run continuously
void loop() {
  // Red color
  RGB_color(255, 0, 0); 
  Serial.println("Red Light");
  delay(dt);

// Green color
  RGB_color(0, 255, 0); 
  Serial.println("Green color");
  delay(dt);

// Blue color
  RGB_color(0, 0, 255); 
  Serial.println("Blue color");
  delay(dt);
 
  // Raspberry color
  RGB_color(255, 255, 125); 
  Serial.println("Raspberry color");
  delay(dt);

 // Cyan color
  RGB_color(0, 255, 255); 
  Serial.println("Cyan color");
  delay(dt);

 // Magenta color
  RGB_color(255, 0, 255); 
  Serial.println("Magenta color");
  delay(dt);

 // Yellow color
  RGB_color(255, 255, 0); 
  Serial.println("Yellow color");
  delay(dt);

 // White color
  RGB_color(255, 255, 255); 
  Serial.println("White color");
  delay(dt);
}
void RGB_color(int Red_LED_Value, int Blue_LED_Value, int Green_LED_Value)
 {
  analogWrite(RedLED, Red_LED_Value);
  analogWrite(BlueLED, Blue_LED_Value);
  analogWrite(GreenLED, Green_LED_Value);
  
}