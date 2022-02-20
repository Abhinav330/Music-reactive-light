int x ,y,a,b,c ;
int z = 8;
void setup() {
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);

  pinMode(5,OUTPUT);
  
 Serial.begin(9600);

}

void loop() {
 x = analogRead(A0);
 a = analogRead(A1);
y = map(x,970,985,150,240);
b = map(a,0,1023,0,180);
c = map(a,0,1023,25,80);
if (x <= 978 +z && x >= 978 - z ){
  analogWrite(5,b);
}
else {
analogWrite(5,y);  
}

Serial.println(b);
delay(c);


}
