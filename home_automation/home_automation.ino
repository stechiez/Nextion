#include "Nextion.h"

/*
*
 * Declare a button object [page id:0,component id:1, component name: "b0"]. 
 */
NexText t0 = NexText(0, 2, "t0");
NexText t01 = NexText(5, 3, "t0");
NexText t1 = NexText(5, 4, "t1");
NexText t2 = NexText(5, 6, "t2");
NexText t3 = NexText(5, 8, "t3");
NexText t4 = NexText(5, 10, "t4");
NexText t5 = NexText(5, 12, "t5");
NexText t6 = NexText(5, 14, "t6");
NexText t7 = NexText(5, 16, "t7");

NexButton b0 = NexButton(1, 2, "b0");
NexButton b1 = NexButton(1, 3, "b1");
NexButton b2 = NexButton(1, 4, "b2");
NexButton b3 = NexButton(1, 5, "b3");
NexButton b4 = NexButton(1, 6, "b4");
NexButton b5 = NexButton(1, 7, "b5");
NexButton b6 = NexButton(1, 8, "b6");
NexButton b7 = NexButton(1, 9, "b7");
NexButton b8 = NexButton(1, 10, "b8");
NexButton b9 = NexButton(1, 11, "b9");
NexButton b10 = NexButton(1, 12, "b10");
NexButton b11 = NexButton(1, 13, "b11");
NexButton b12 = NexButton(1, 14, "b12");
NexButton b13 = NexButton(1, 15, "b13");
NexButton b14 = NexButton(1, 16, "b14");
NexButton b15 = NexButton(1, 17, "b15");

//NexTimer tm0 = NexTimer(2, 2, "tm0");

NexPage page2    = NexPage(2, 0, "page2");
NexPage page3    = NexPage(3, 0, "page3");

char buffer[64] = {0};
char pwdbuff[5];
int key_pressed_count=0;
int isPwdSShow=0;
/*
 * Register a button object to the touch event list.  
 */
NexTouch *nex_listen_list[] = 
{
    &b0,
    &b1,
    &b2,
    &b3,
    &b4,
    &b5,
    &b6,
    &b7,
    &b8,
    &b9,
    &b10,
    &b11,
    &b12,
    &b13,
    &b14,
    &b15,
    &t0,
    &t01,
    &t1,
    &t2,
    &t3,
    &t4,
    &t5,
    &t6,
    &t7,
//  &tm0,
    NULL
};

void ManagePwd(void)
{
  int i;
  memset(buffer, 0, sizeof(buffer));
  for(i=0;i<key_pressed_count;i++)
  {
    buffer[i] = '*';
  }
  t0.setText(buffer);
  if(isPwdSShow==1)
  {
    return;
  }
  if((pwdbuff[0] == 2) && (pwdbuff[1] == 3) && (pwdbuff[2] == 4) && (pwdbuff[3] == 5) && (pwdbuff[4] == 6)) 
  {
    delay(100);
    {
      page2.show();
      isPwdSShow = 1;
    }
  }
}

/*
 * Button component pop callback function. 
 * In this example,the button's text value will plus one every time when it is released. 
 */
void b0PopCallback(void *ptr)
{
    if(key_pressed_count >= 5)
    {
      page3.show();
      key_pressed_count = 0;
    }
    else
    {
      pwdbuff[key_pressed_count++] = 0;
    }
    ManagePwd();
      //memset(buffer, 0, sizeof(buffer));
//    t0.getText(buffer, sizeof(buffer));   
}

void b1PopCallback(void *ptr)
{
    if(key_pressed_count > 5)
    {
      page3.show();
      key_pressed_count = 0;
    }
    else
    {
      pwdbuff[key_pressed_count++] = 1;
    }
    ManagePwd();
}

void b2PopCallback(void *ptr)
{
    if(key_pressed_count > 5)
    {
      page3.show();
      key_pressed_count = 0;
    }
    else
    {
      pwdbuff[key_pressed_count++] = 2;
    }
    ManagePwd();
}

void b3PopCallback(void *ptr)
{
    if(key_pressed_count > 5)
    {
      page3.show();
      key_pressed_count = 0;
    }
    else
    {
      pwdbuff[key_pressed_count++] = 3;
    }
    ManagePwd();
}

void b4PopCallback(void *ptr)
{
    if(key_pressed_count > 5)
    {
      page3.show();
      key_pressed_count = 0;
    }
    else
    {
      pwdbuff[key_pressed_count++] = 4;
    }
    ManagePwd();
}

void b5PopCallback(void *ptr)
{
    if(key_pressed_count > 5)
    {
      key_pressed_count = 0;
      page3.show();
    }
    else
    {
      pwdbuff[key_pressed_count++] = 5;
    }
    ManagePwd();
}

void b6PopCallback(void *ptr)
{
    if(key_pressed_count > 5)
    {
      page3.show();
      key_pressed_count = 0;
    }
    else
    {
      pwdbuff[key_pressed_count++] = 6;
    }
    ManagePwd();
}

void b7PopCallback(void *ptr)
{
    if(key_pressed_count > 5)
    {
      page3.show();
      key_pressed_count = 0;
    }
    else
    {
      pwdbuff[key_pressed_count++] = 7;
    }
    ManagePwd();
  
}

void b8PopCallback(void *ptr)
{
    if(key_pressed_count > 5)
    {
      page3.show();
      key_pressed_count = 0;
    }
    else
    {
      pwdbuff[key_pressed_count++] = 8;
    }
  
    ManagePwd();
}

void b9PopCallback(void *ptr)
{
    if(key_pressed_count > 5)
    {
      page3.show();
      key_pressed_count = 0;
    }
    else
    {
      pwdbuff[key_pressed_count++] = 9;
    }
  
    ManagePwd();
}

void b10PopCallback(void *ptr)
{
  
}

void b11PopCallback(void *ptr)
{
  
}

void b12PopCallback(void *ptr)
{
  
}

void b13PopCallback(void *ptr)
{
  
}

void b14PopCallback(void *ptr)
{
  if(key_pressed_count>0)
  {
    key_pressed_count--;
  }
    ManagePwd();
}

void b15PopCallback(void *ptr)
{
  
}

void page2PopCallback(void *ptr)
{
//    page2.show();
}

void page3PopCallback(void *ptr)
{
//    page3.show();
}

void t0PopCallback(void *ptr)
{
//    page3.show();
}

void t01PopCallback(void *ptr)
{
  t01.getText(buffer, sizeof(buffer));
  if((buffer[0]=='O') && (buffer[1]=='F') && (buffer[2]=='F'))
  {
    digitalWrite(1, HIGH); 
  }
  else if((buffer[0]=='O') && (buffer[1]=='N'))
  {
    digitalWrite(1, LOW); 
  }
}
void t1PopCallback(void *ptr)
{
  t1.getText(buffer, sizeof(buffer));
  if((buffer[0]=='O') && (buffer[1]=='F') && (buffer[2]=='F'))
  {
    digitalWrite(2, LOW);       
  }
  else if((buffer[0]=='O') && (buffer[1]=='N'))
  {
    digitalWrite(2, HIGH); 
  }
}
void t2PopCallback(void *ptr)
{
  t2.getText(buffer, sizeof(buffer));
  if((buffer[0]=='O') && (buffer[1]=='F') && (buffer[2]=='F'))
  {
    digitalWrite(3, LOW); 
  }
  else if((buffer[0]=='O') && (buffer[1]=='N'))
  {
    digitalWrite(3, HIGH); 
  }
}
void t3PopCallback(void *ptr)
{
  t3.getText(buffer, sizeof(buffer));
  if((buffer[0]=='O') && (buffer[1]=='F') && (buffer[2]=='F'))
  {
    digitalWrite(4, LOW); 
  }
  else if((buffer[0]=='O') && (buffer[1]=='N'))
  {
    digitalWrite(4, HIGH); 
  }
}
void t4PopCallback(void *ptr)
{
  t4.getText(buffer, sizeof(buffer));
  if((buffer[0]=='O') && (buffer[1]=='F') && (buffer[2]=='F'))
  {
    digitalWrite(5, LOW); 
  }
  else if((buffer[0]=='O') && (buffer[1]=='N'))
  {
    digitalWrite(5, HIGH); 
  }
}
void t5PopCallback(void *ptr)
{
  t5.getText(buffer, sizeof(buffer));
  if((buffer[0]=='O') && (buffer[1]=='F') && (buffer[2]=='F'))
  {
    digitalWrite(6, LOW); 
  }
  else if((buffer[0]=='O') && (buffer[1]=='N'))
  {
    digitalWrite(6, HIGH); 
  }
}
void t6PopCallback(void *ptr)
{
  t6.getText(buffer, sizeof(buffer));
  if((buffer[0]=='O') && (buffer[1]=='F') && (buffer[2]=='F'))
  {
    digitalWrite(7, LOW); 
  }
  else if((buffer[0]=='O') && (buffer[1]=='N'))
  {
    digitalWrite(7, HIGH); 
  }
}
void t7PopCallback(void *ptr)
{
  t7.getText(buffer, sizeof(buffer));
  if((buffer[0]=='O') && (buffer[1]=='F') && (buffer[2]=='F'))
  {
    digitalWrite(8, LOW); 
  }
  else if((buffer[0]=='O') && (buffer[1]=='N'))
  {
    digitalWrite(8, HIGH); 
  }
}

void setup(void)
{    
    /* Set the baudrate which is for debug and communicate with Nextion screen. */
    nexInit();
//    Serial.print("Initilization");
    isPwdSShow = 0;
    /* Register the pop event callback function of the current button component. */
    b0.attachPop(b0PopCallback, &b0);
    b1.attachPop(b1PopCallback, &b1);
    b2.attachPop(b2PopCallback, &b2);
    b3.attachPop(b3PopCallback, &b3);
    b4.attachPop(b4PopCallback, &b4);
    b5.attachPop(b5PopCallback, &b5);
    b6.attachPop(b6PopCallback, &b6);
    b7.attachPop(b7PopCallback, &b7);
    b8.attachPop(b8PopCallback, &b8);
    b9.attachPop(b9PopCallback, &b9);
    b10.attachPop(b10PopCallback, &b10);
    b11.attachPop(b11PopCallback, &b11);
    b12.attachPop(b12PopCallback, &b12);
    b13.attachPop(b13PopCallback, &b13);
    b14.attachPop(b14PopCallback, &b14);
    b15.attachPop(b15PopCallback, &b15);
  page2.attachPop(page2PopCallback);
  page3.attachPop(page3PopCallback);
  t0.attachPop(t0PopCallback);
  t01.attachPop(t01PopCallback);
  t1.attachPop(t1PopCallback);
  t2.attachPop(t2PopCallback);
  t3.attachPop(t3PopCallback);
  t4.attachPop(t4PopCallback);
  t5.attachPop(t5PopCallback);
  t6.attachPop(t6PopCallback);
  t7.attachPop(t7PopCallback);
//    dbSerialPrintln("setup done"); 

/*  pinMode(1, OUTPUT);  
  pinMode(2, OUTPUT);  
  pinMode(3, OUTPUT);  
  pinMode(4, OUTPUT);  
  pinMode(5, OUTPUT);  
  pinMode(6, OUTPUT);  
  pinMode(7, OUTPUT);  
  pinMode(8, OUTPUT);  */
}

void loop(void)
{   
    /*
     * When a pop or push event occured every time,
     * the corresponding component[right page id and component id] in touch event list will be asked.
     */
    nexLoop(nex_listen_list);
  
}
