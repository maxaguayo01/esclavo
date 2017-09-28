int m,n;
void setup() {
  // put your setup code here, to run once:
Serial1.begin(9600);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()>0) {
  delay(10);
  String b="";
  }
  while (Serial1.available()>0) {
    b+= (char)Serial1.read()
     n=b.toInt ();
  m=n;
}
}
