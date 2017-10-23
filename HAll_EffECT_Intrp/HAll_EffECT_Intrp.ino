/* Working in Branch */
int FlowFrequency=0;
void setup() 
{
  Serial.begin(9600);
  pinMode(2,INPUT_PULLUP);
  attachInterrupt(0, check,FALLING);

}
void check()
{
  FlowFrequency++; 
}
void loop()
{
  delay(5000);
  int a =FlowFrequency;
  Serial.println(a);
  FlowFrequency=0;
}
