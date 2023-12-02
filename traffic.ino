int Red1=0;
int Yellowl=1;
int Greenl=2;
int Red2=3;
int Yellow2=4;
int Green2=5;
int Red3=6;
int Yellow3=7;
int Green3=8;
int Red4=9;
int Yellow4=10;
int Green4=11;

void setup() {
pinMode (Red1, OUTPUT); 
pinMode (Greenl, OUTPUT); 
pinMode (Yellowl, OUTPUT); 
pinMode (Red2, OUTPUT); 
pinMode (Green2, OUTPUT); 
pinMode (Yellow2, OUTPUT); 
pinMode (Red3, OUTPUT); 
pinMode (Green3, OUTPUT); 
pinMode (Yellow3, OUTPUT); 
pinMode (Red4, OUTPUT); 
pinMode (Green4, OUTPUT); 
pinMode (Yellow4, OUTPUT);
}

void loop() {
//Traffic 1 and 3
digitalWrite (Greenl, HIGH);
digitalWrite (Green3, HIGH);
digitalWrite (Red2, HIGH);
digitalWrite (Red4, HIGH); 
delay(2000);

digitalWrite (Yellowl, HIGH);
digitalWrite (Yellow3, HIGH);
digitalWrite (Greenl, LOW);
digitalWrite (Green3, LOW);
delay(1000);

digitalWrite (Yellowl, LOW);
digitalWrite (Yellow3, LOW);
digitalWrite (Greenl, LOW); 
delay(100);

//Traffic 2
digitalWrite (Yellow2, HIGH);
digitalWrite (Red1, HIGH);
digitalWrite (Red3, HIGH);
digitalWrite (Red2, LOW);
delay(1000);
digitalWrite (Green2, HIGH);
digitalWrite (Yellow2, LOW);
digitalWrite (Red1, HIGH);
digitalWrite (Red3, HIGH);
digitalWrite (Red2, LOW);
delay(2000);

digitalWrite (Yellow2, HIGH);
digitalWrite (Green2, LOW);
digitalWrite (Red3, HIGH);
delay(1000);

digitalWrite (Yellow4, HIGH);
digitalWrite (Red2, HIGH);
digitalWrite (Yellow2, LOW);
digitalWrite (Red4, LOW);
delay(1000);

digitalWrite (Yellow2, LOW);
digitalWrite(Yellow3, LOW);
delay(100);

//Traffic 4
digitalWrite (Green4, HIGH);
digitalWrite (Red2, HIGH);
digitalWrite (Red3, HIGH);
digitalWrite (Red4, LOW);
digitalWrite (Yellow4, LOW);
delay(2000);

digitalWrite (Yellow4, HIGH);
digitalWrite (Green4, LOW);
delay(1000);

digitalWrite (Yellow4, LOW);
digitalWrite (Yellowl, LOW);
digitalWrite (Green4, LOW);
digitalWrite (Red1, LOW);
digitalWrite(Red3, LOW);
delay(100);
}
