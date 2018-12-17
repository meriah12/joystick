int horizontal = A1;
int vertical = A0;

int red_pin1 = 8;
int green_pin1 = 9;
int blue_pin1 = 10;
int red_pin2 = 11;
int green_pin2 = 12;
int blue_pin2 = 13;
int red_pin3 = 25;
int green_pin3 = 26;
int blue_pin3 = 27;
int red_pin4 = 28;
int green_pin4 = 29;
int blue_pin4 = 30;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(horizontal, INPUT);
  pinMode(vertical, INPUT);
 
  pinMode(red_pin1, OUTPUT);
  pinMode(green_pin1, OUTPUT);
  pinMode(blue_pin1, OUTPUT);
  pinMode(red_pin2, OUTPUT);
  pinMode(green_pin2, OUTPUT);
  pinMode(blue_pin2, OUTPUT);
  pinMode(red_pin3, OUTPUT);
  pinMode(green_pin3, OUTPUT);
  pinMode(blue_pin3, OUTPUT);
  pinMode(red_pin4, OUTPUT);
  pinMode(green_pin4, OUTPUT);
  pinMode(blue_pin4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int horz_data = analogRead(horizontal);
  int vert_data = analogRead(vertical);

  int h_map = map(horz_data, 0, 1023, 0, 255);
  int v_map = map(vert_data, 0, 1023, 0, 255); 

  if(h_map == 130 ||131 && v_map == 131){
    digitalWrite(blue_pin1, HIGH);
    digitalWrite(blue_pin2, HIGH);
    digitalWrite(blue_pin3, HIGH);
    digitalWrite(blue_pin4, HIGH);
    digitalWrite(red_pin1, HIGH);
    digitalWrite(red_pin2, HIGH);
    digitalWrite(red_pin3, HIGH);
    digitalWrite(red_pin4, HIGH);
    digitalWrite(green_pin1, LOW);
    digitalWrite(green_pin2, LOW);
    digitalWrite(green_pin3, LOW);
    digitalWrite(green_pin4, LOW);
  }
  if(h_map == 131 && v_map == 125){
    digitalWrite(blue_pin1, HIGH);
    digitalWrite(blue_pin2, HIGH);
    digitalWrite(blue_pin3, HIGH);
    digitalWrite(blue_pin4, HIGH);
    digitalWrite(red_pin1, HIGH);
    digitalWrite(red_pin2, HIGH);
    digitalWrite(red_pin3, HIGH);
    digitalWrite(red_pin4, HIGH);
    digitalWrite(green_pin1, LOW);
    digitalWrite(green_pin2, LOW);
    digitalWrite(green_pin3, LOW);
    digitalWrite(green_pin4, LOW);
  }
  if(h_map == 131 ||131 && v_map == 133){
    digitalWrite(blue_pin1, HIGH);
    digitalWrite(blue_pin2, HIGH);
    digitalWrite(blue_pin3, HIGH);
    digitalWrite(blue_pin4, HIGH);
    digitalWrite(red_pin1, HIGH);
    digitalWrite(red_pin2, HIGH);
    digitalWrite(red_pin3, HIGH);
    digitalWrite(red_pin4, HIGH);
    digitalWrite(green_pin1, LOW);
    digitalWrite(green_pin2, LOW);
    digitalWrite(green_pin3, LOW);
    digitalWrite(green_pin4, LOW);
  }
  if(h_map == 3 ||131 && v_map == 113){
    digitalWrite(blue_pin1, LOW);
    digitalWrite(blue_pin2, LOW);
    digitalWrite(blue_pin3, LOW);
    digitalWrite(blue_pin4, LOW);
    digitalWrite(red_pin1, HIGH);
    digitalWrite(red_pin2, HIGH);
    digitalWrite(red_pin3, HIGH);
    digitalWrite(red_pin4, HIGH);
    digitalWrite(green_pin1, LOW);
    digitalWrite(green_pin2, LOW);
    digitalWrite(green_pin3, LOW);
    digitalWrite(green_pin4, LOW);
  }
  if(h_map == 255){
    digitalWrite(blue_pin1, HIGH);
    digitalWrite(blue_pin2, HIGH);
    digitalWrite(blue_pin3, HIGH);
    digitalWrite(blue_pin4, HIGH);
    digitalWrite(red_pin1, LOW);
    digitalWrite(red_pin2, LOW);
    digitalWrite(red_pin3, LOW);
    digitalWrite(red_pin4, LOW);
    digitalWrite(green_pin1, LOW);
    digitalWrite(green_pin2, LOW);
    digitalWrite(green_pin3, LOW);
    digitalWrite(green_pin4, LOW);
  }
  if(h_map == 0){
    digitalWrite(blue_pin1, LOW);
    digitalWrite(blue_pin2, LOW);
    digitalWrite(blue_pin3, LOW);
    digitalWrite(blue_pin4, LOW);
    digitalWrite(red_pin1, HIGH);
    digitalWrite(red_pin2, HIGH);
    digitalWrite(red_pin3, HIGH);
    digitalWrite(red_pin4, HIGH);
    digitalWrite(green_pin1, LOW);
    digitalWrite(green_pin2, LOW);
    digitalWrite(green_pin3, LOW);
    digitalWrite(green_pin4, LOW);
  }
  if(v_map == 0){
    digitalWrite(blue_pin1, LOW);
    digitalWrite(blue_pin2, LOW);
    digitalWrite(blue_pin3, LOW);
    digitalWrite(blue_pin4, LOW);
    digitalWrite(red_pin1, LOW);
    digitalWrite(red_pin2, LOW);
    digitalWrite(red_pin3, LOW);
    digitalWrite(red_pin4, LOW);
    digitalWrite(green_pin1, HIGH);
    digitalWrite(green_pin2, HIGH);
    digitalWrite(green_pin3, HIGH);
    digitalWrite(green_pin4, HIGH);
  }
  if(v_map == 255){
    digitalWrite(blue_pin1, HIGH);
    digitalWrite(blue_pin2, HIGH);
    digitalWrite(blue_pin3, HIGH);
    digitalWrite(blue_pin4, HIGH);
    digitalWrite(red_pin1, HIGH);
    digitalWrite(red_pin2, HIGH);
    digitalWrite(red_pin3, HIGH);
    digitalWrite(red_pin4, HIGH);
    digitalWrite(green_pin1, HIGH);
    digitalWrite(green_pin2, HIGH);
    digitalWrite(green_pin3, HIGH);
    digitalWrite(green_pin4, HIGH);
  }
