AnalogOut EnA(PB_6);
AnalogOut EnB(PB_4);
DigitalOut In1(PC_7;
DigitalOut In2(PA_9);
DigitalOut In3(PA_8);
DigitalOut In4(PB_10);

void goStraight()   //run both motors in the same direction
{
  // turn on motor A
  In1 = 1;
  In2 = 0;
  // set speed of motor A to 70% of maximum
  EnA = 0.7;
  // turn on motor B
  In3 = 1;
  In4 = 0;
  // set speed of motor B to 70% of maximum
  EnB = 0.7;
  wait(1.0);
  // now turn off motors
  In1 = 0;
  In2 = 0;  
  In3 = 0;
  In4 = 0;
}

void goLeft()   //run both motors in the same direction
{
  // turn on motor A
  In1 = 1;
  In2 = 0;
  // set speed of motor A to 70% of maximum
  EnA = 0.7;
  // turn off motor B
  In3 = 0;
  In4 = 0;
  EnB = 0.0;
  wait(1.0);
}

void goRight()   //run both motors in the same direction
{
  // turn on motor B
  In3 = 1;
  In4 = 0;
  // set speed of motor A to 70% of maximum
  EnB = 0.7;
  // turn off motor A
  In1 = 0;
  In2 = 0;
  EnA = 0.0;
  wait(1.0);
}

void fastLeft()   //run both motors in the same direction
{
  // turn on motor A
  In1 = 1;
  In2 = 0;
  // turn on motor B on reverse
  In3 = 0;
  In4 = 1;
  // set speed of motor A and B to 70% of maximum
  EnA = 0.7;
  EnB = 0.7;
  wait(1.0);
}

void goRight()   //run both motors in the same direction
{
  // turn on motor A
  In1 = 1;
  In2 = 0;
  // set speed of motor A to 70% of maximum
  EnA = 0.7;
  // turn on motor B
  In3 = 1;
  In4 = 0;
  // set speed of motor B to 70% of maximum
  EnB = 0.7;
  wait(2.0);
  // now turn off motors
  In1 = 0;
  In2 = 0;  
  In3 = 0;
  In4 = 0;
}

void fastRight()   //run both motors in the same direction
{
  // turn on motor B
  In3 = 1;
  In4 = 0;
  // turn on motor A on reverse
  In1 = 0;
  In2 = 1;
  // set speed of motor A and B to 70% of maximum
  EnA = 0.7;
  EnB = 0.7;
  wait(1.0);
}

int main()
{
  goStraight();
  //goLeft();
  //goRight();
  //fastLeft();
  //fastRight();
  wait(1.0);
}