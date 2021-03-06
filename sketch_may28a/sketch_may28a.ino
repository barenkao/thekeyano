// Rotary Encoder Inputs
#define CLK 4
#define DT 7
#define SW 8
#define joyX A0
#define joyY A1
#define joy_SW 2

int counter = 0;
int currentStateCLK;
int lastStateCLK;
int maxi = 11;
int mini = 0;
int currentDir;
unsigned long lastButtonPress = 0;
int prevX = 0;
int prevY = 0;
void setup() {
  
  // Set encoder pins as inputs
  pinMode(CLK,INPUT);
  pinMode(DT,INPUT);
  pinMode(SW, INPUT_PULLUP);

  // Setup Serial Monitor
  Serial.begin(115200);

  // Read the initial state of CLK
  lastStateCLK = digitalRead(CLK);
}

void loop() {
  
  // Read the current state of CLK
  currentStateCLK = digitalRead(CLK);
  int xValue = analogRead(joyX);
  int yValue = analogRead(joyY);
  if (abs(prevX - xValue) > 2 || abs(prevY - yValue) > 2) {
    Serial.write(xValue);
    Serial.write(yValue);
    prevX = xValue;
    prevY = yValue;
  }

  // If last and current state of CLK are different, then pulse occurred
  // React to only 1 state change to avoid double count
  if (currentStateCLK != lastStateCLK  && currentStateCLK == 1){
    

    // If the DT state is different than the CLK state then
    // the encoder is rotating CCW so decrement
    if (digitalRead(DT) != currentStateCLK) {
      if (counter > mini) {
        counter --;
      }
      currentDir =0;
    } else {
      // Encoder is rotating CW so increment
      if (counter < maxi) {
        counter ++;
      }
      currentDir =1;
    }
    Serial.write(currentDir);
    Serial.write(counter);
    
  }

  // Remember last CLK state
  lastStateCLK = currentStateCLK;



  // Put in a slight delay to help debounce the reading
  delay(1);
}
