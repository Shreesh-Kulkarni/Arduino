int led=9;
int b=0;
int fade=5;

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(led,b);
  b=b+fade;
  if(b<=0 || b>=255){
    fade=-fade;
  }
  delay(30);
}
