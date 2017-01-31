int myVar;
float myFloat;
int * myPtr;
float * myFPtr;

void setup() {
  Serial.begin(115200);
  Serial.println("Starting test...");
  myVar = 33;
  myPtr = &myVar;          // myPtr is the address of the variable myVar
  Serial.println(*myPtr);  // Print the value pointed to by myPTR
  *myPtr = 44;             // The variable pointed-to by myPtr = 44
  Serial.println(*myPtr);  // Print the value pointed to by myPTR
  myFloat = 22.2;
  myFPtr  = &myFloat;      // myFPtr is the address of the variable myFloat
  *myFPtr = 44.4;          // The variable pointed to by myFPtr = 44.4
  Serial.println(*myFPtr); // Print the value pointed to by myFPTR
}

void loop() {
  int Total_Score;
  Total_Score = 7;
  totalise(1, 2, &Total_Score);
  Serial.println("Total is now: "+String(Total_Score));
  delay(5000);
}

void totalise(int value1, int value2, int *Data_To_Total){
  *Data_To_Total = *Data_To_Total + value1 + value2;
}

