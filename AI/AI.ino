String input1;
String input2;
String result;
int con1;
int con2;
int res1;
int sel;
void setup() {
  sel=0;
Serial.begin(115200);

}

void loop() {    
if(Serial.available()>0){ 
if(sel==0){  
Serial.println("input1: ");  
Serial.println(input1=Serial.readString());
sel=1;
}
if(sel==1){
if(Serial.available()>0){
 Serial.println("input2: ");  
Serial.println(input2=Serial.readString());
sel=2;
  }
}
if(sel==2){
if(Serial.available()>0){
 Serial.println("result: ");  
Serial.println(result=Serial.readString());
sel=3;
  }
}
if (sel==3){
Serial.println("your entered information ");
Serial.print("input1: ");
Serial.println(input1);
Serial.print("input2: ");
Serial.println(input2);
Serial.print("result: ");
Serial.println(result);
sel=4;  
  }
if (sel==4){
con1=input1.toInt();
con2=input2.toInt(); 
res1=result.toInt();
if(res1==con1+con2){
Serial.println("we can do addition here");  
  }
if(res1==con1-con2){
Serial.println("we can do subraction here");  
  }
if(res1==con1*con2){
Serial.println("we can do multiplication here");  
  }
if(res1==con1/con2){
Serial.println("we can do division here");  
  }
  if(res1==pow(con1,con2)){
Serial.println("we can do input2 as exponent and input1 as the power here");  
  }
    if(res1==pow(con2,con1)){
Serial.println("we can do input1 as exponent and input 2 as the power here");  
  }
Serial.println("not getting any idea than this");
sel=0;         
  }       
  }  
}  
