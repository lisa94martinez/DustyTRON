//Pololu Motor Drivers

void victor(int c, int A, int B){
       if (c == 0) // OFF
{
            digitalWrite(A,LOW);
            digitalWrite(B, LOW);
       }
       if (c == 1) // Foward or clockwise
{
            digitalWrite(A,HIGH);
            digitalWrite(B, LOW);
       }
       if (c == 2) // Back or counterclockwise
{ 
            digitalWrite(A,LOW);
            digitalWrite(B, HIGH);
       }
  }

void wheelSpeed(int CASE, int SPEED, int PWM){
  switch(CASE){
    case 0://increment speed
      if(SPEED == 255){
      analogWrite(PWM, SPEED);
      }else{
      spd += 15; //Speed increment of 85 (3 times)
      SPEED = spd;
      analogWrite(PWM, SPEED);
      }
      break;
      
    case 1://decrement speed
      if(SPEED == 0){
      analogWrite(PWM, SPEED);
      }else{
      spd -= 15;
      SPEED = spd;//Speed decrement of 85 (3 times)
      
      analogWrite(PWM, SPEED);
      }
      break; 

    case 2: //decrement speed , I AM NOT SURE WHY IT SAYS decrement speed, might be a mistake
      analogWrite(PWM, SPEED);
      Serial.print(SPEED);
      break; 
    }
  }
  



