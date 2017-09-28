#include <Arduino_FreeRTOS.h>
#include <Servo.h>

void Task1( void *pvParameters );
void Task2( void *pvParameters );
void Task3( void *pvParameters );
void Task4( void *pvParameters );
void Task5( void *pvParameters );
void Task6( void *pvParameters );
void Task7( void *pvParameters );
void Task8( void *pvParameters );
void Task9( void *pvParameters );
void Task10( void *pvParameters );
void Task11( void *pvParameters );
void Task12( void *pvParameters );

Servo servo2, servo3, servo4, servo5, servo6, servo7, servo8, servo9, servo10, servo11, servo12, servo13;

void setup() {
  // put your setup code here, to run once:
  servo2.attach(2);
  servo3.attach(3);
  servo4.attach(4);
  servo5.attach(5);
  servo6.attach(6);
  servo7.attach(7);
  servo8.attach(8);
  servo9.attach(9);
  servo10.attach(10);
  servo11.attach(11);
  servo12.attach(12);
  servo13.attach(13);

  //start point
  startPoint();
  //create task
  xTaskCreate(
    Task1
    , (const portCHAR *)"Task1"
    , 128
    , NULL
    , 1
    , NULL );

  xTaskCreate(
    Task2
    , (const portCHAR *)"Task2"
    , 128
    , NULL
    , 1
    , NULL );

  xTaskCreate(
    Task3
    , (const portCHAR *)"Task3"
    , 128
    , NULL
    , 1
    , NULL );

  xTaskCreate(
    Task4
    , (const portCHAR *)"Task4"
    , 128
    , NULL
    , 1
    , NULL );
    
    xTaskCreate(
    Task5
    , (const portCHAR *)"Task5"
    , 128
    , NULL
    , 1
    , NULL );

  xTaskCreate(
    Task6
    , (const portCHAR *)"Task6"
    , 128
    , NULL
    , 1
    , NULL );

  xTaskCreate(
    Task7
    , (const portCHAR *)"Task7"
    , 128
    , NULL
    , 1
    , NULL );

  xTaskCreate(
    Task8
    , (const portCHAR *)"Task8"
    , 128
    , NULL
    , 1
    , NULL );

    xTaskCreate(
    Task9
    , (const portCHAR *)"Task5"
    , 128
    , NULL
    , 1
    , NULL );

  xTaskCreate(
    Task10
    , (const portCHAR *)"Task6"
    , 128
    , NULL
    , 1
    , NULL );

  xTaskCreate(
    Task11
    , (const portCHAR *)"Task7"
    , 128
    , NULL
    , 1
    , NULL );

  xTaskCreate(
    Task12
    , (const portCHAR *)"Task8"
    , 128
    , NULL
    , 1
    , NULL );
}
void loop() {
  // put your main code here, to run repeatedly:
}
//Task for leg 1: servo 2, servo 3, servo 4
void Task1(void *pvParamaters) {
  (void) pvParamaters;
  //loop here
  for (;;) {
    //servo 2
    //servo_pos(2, 90);
    delay(1000);
    //servo2.write(10);
    servo_pos(2, 10);
    delay(1000);
    servo_pos(2, 50);
    servo2.write(50);
    delay(1000000);
  }
}
void Task2(void *pvParamaters) {
  (void) pvParamaters;
  //setup here
  //loop here
  for (;;) {
    //servo 5
    //servo_pos(5, 90);
    delay(1000);
    servo_pos(5, 180-10);
    delay(1000);
    servo_pos(5, 180-50);
    servo5.write(180-50);
    delay(1000000);
  }
}
void Task3(void *pvParamaters) {
  (void) pvParamaters;
  //setup here
  //loop here
  for (;;) {
    //servo 8
    //servo_pos(8, 90);
    delay(1000);
    servo_pos(8, 10);
    delay(1000);
    servo_pos(8, 50);
    servo8.write(50);
    delay(1000000);
  }
}
void Task4(void *pvParamaters) {
  (void) pvParamaters;
  //setup here
  //loop here
  for (;;) {
    //servo 11
    //servo_pos(11, 90);
    delay(1000);
    servo_pos(11, 180-10);
    delay(1000);
    servo_pos(11, 180-50);
    servo11.write(180-50);
    delay(1000000);
  }
}
void Task5(void *pvParamaters) {
  (void) pvParamaters;
  //setup here
  //loop here
  for (;;) {
    //servo 2
    //servo_pos(4, 90);
    delay(1000);
    servo_pos(4, 120);
    delay(1000);
  }
}
void Task6(void *pvParamaters) {
  (void) pvParamaters;
  //setup here
  //loop here
  for (;;) {
    //servo 2
    //servo_pos(7, 90);
    delay(1000);
    servo_pos(7, 60);
    delay(1000);
  }
}
void Task7(void *pvParamaters) {
  (void) pvParamaters;
  //setup here
  //loop here
  for (;;) {
    //servo 2
    //servo_pos(10, 90);
    delay(1000);
    servo_pos(10, 120);
    delay(1000);
  }
}
void Task8(void *pvParamaters) {
  (void) pvParamaters;
  //setup here
  //loop here
  for (;;) {
    //servo 2
    //servo_pos(13, 90);
    delay(1000);
    servo_pos(13, 60);
    delay(1000);
  }
}
void Task9(void *pvParamaters) {
  (void) pvParamaters;
  //setup here
  //loop here
  for (;;) {
    //servo 3
    //servo_pos(3, 180-10);
    delay(1000);
    servo_pos(3, 90);
    delay(1000);
    //servo_pos(3, 50);
    servo3.write(50);
    delay(1000000);
  }
}
void Task10(void *pvParamaters) {
  (void) pvParamaters;
  //setup here
  //loop here
  for (;;) {
    //servo 2
    //servo_pos(6, 10);
    delay(1000);
    servo_pos(6, 90);
    delay(1000);
    //servo_pos(6, 180-50);
    servo6.write(180-50);
    delay(1000000);
  }
}
void Task11(void *pvParamaters) {
  (void) pvParamaters;
  //setup here
  //loop here
  for (;;) {
    //servo 2
    //servo_pos(9, 180-10);
    delay(1000);
    servo_pos(9, 60);
    delay(1000);
    //servo_pos(9, 40);
    servo9.write(40);
    delay(1000000);
  }
}
void Task12(void *pvParamaters) {
  (void) pvParamaters;
  //setup here
  //loop here
  for (;;) {
    //servo 12
    //servo_pos(12, 10);
    delay(1000);
    servo_pos(12, 90);
    delay(1000);
    //servo_pos(12, 180-40);
    servo12.write(180-40);
    delay(100000);
  }
}
void servo_pos(int servo, int pos) {
  int delay_time = 27;
  int step_servo = 1;
  //servo 2
  if (servo == 2) {
    int servo_pos_2 = servo2.read();
    if (servo_pos_2 < pos) {
      for (int i = servo_pos_2; i <= pos; i += step_servo) {
        servo2.write(i);
        delay(delay_time);
      }
    }
    if (servo_pos_2 > pos) {
      for (int i = servo_pos_2; i >= pos; i -= step_servo) {
        servo2.write(i);
        delay(delay_time);
      }
    }
  }
  //servo 5
  if (servo == 5) {
    int servo_pos_5 = servo5.read();
    if (servo_pos_5 < pos) {
      for (int i = servo_pos_5; i <= pos; i += step_servo) {
        servo5.write(i);
        delay(delay_time);
      }
    }
    if (servo_pos_5 > pos) {
      for (int i = servo_pos_5; i >= pos; i -= step_servo) {
        servo5.write(i);
        delay(delay_time);
      }
    }
  }
  //servo 8
  if (servo == 8) {
    int servo_pos_8 = servo8.read();
    if (servo_pos_8 < pos) {
      for (int i = servo_pos_8; i <= pos; i += step_servo) {
        servo8.write(i);
        delay(delay_time);
      }
    }
    if (servo_pos_8 > pos) {
      for (int i = servo_pos_8; i >= pos; i -= step_servo) {
        servo8.write(i);
        delay(delay_time);
      }
    }
  }
  //servo 11
  if (servo == 11) {
    int servo_pos_11 = servo11.read();
    if (servo_pos_11 < pos) {
      for (int i = servo_pos_11; i <= pos; i += step_servo) {
        servo11.write(i);
        delay(delay_time);
      }
    }
    if (servo_pos_11 > pos) {
      for (int i = servo_pos_11; i >= pos; i -= step_servo) {
        servo11.write(i);
        delay(delay_time);
      }
    }
  }
  //servo 4
  if (servo == 4) {
    int servo_pos_4 = servo4.read();
    if (servo_pos_4 < pos) {
      for (int i = servo_pos_4; i <= pos; i += step_servo) {
        servo4.write(i);
        delay(delay_time);
      }
    }
    if (servo_pos_4 > pos) {
      for (int i = servo_pos_4; i >= pos; i -= step_servo) {
        servo4.write(i);
        delay(delay_time);
      }
    }
  }
  //servo 7
  if (servo == 7) {
    int servo_pos_7 = servo7.read();
    if (servo_pos_7 < pos) {
      for (int i = servo_pos_7; i <= pos; i += step_servo) {
        servo7.write(i);
        delay(delay_time);
      }
    }
    if (servo_pos_7 > pos) {
      for (int i = servo_pos_7; i >= pos; i -= step_servo) {
        servo7.write(i);
        delay(delay_time);
      }
    }
  }
  //servo 10
  if (servo == 10) {
    int servo_pos_10 = servo10.read();
    if (servo_pos_10 < pos) {
      for (int i = servo_pos_10; i <= pos; i += step_servo) {
        servo10.write(i);
        delay(delay_time);
      }
    }
    if (servo_pos_10 > pos) {
      for (int i = servo_pos_10; i >= pos; i -= step_servo) {
        servo10.write(i);
        delay(delay_time);
      }
    }
  }
  //servo 13
  if (servo == 13) {
    int servo_pos_13 = servo13.read();
    if (servo_pos_13 < pos) {
      for (int i = servo_pos_13; i <= pos; i += step_servo) {
        servo13.write(i);
        delay(delay_time);
      }
    }
    if (servo_pos_13 > pos) {
      for (int i = servo_pos_13; i >= pos; i -= step_servo) {
        servo13.write(i);
        delay(delay_time);
      }
    }
  }
  //servo 3
  if (servo == 3) {
    int servo_pos_3 = servo3.read();
    if (servo_pos_3 < pos) {
      for (int i = servo_pos_3; i <= pos; i += step_servo) {
        servo3.write(i);
        delay(delay_time);
      }
    }
    if (servo_pos_3 > pos) {
      for (int i = servo_pos_3; i >= pos; i -= step_servo) {
        servo3.write(i);
        delay(delay_time);
      }
    }
  }
  //servo 6
  if (servo == 6) {
    int servo_pos_6 = servo6.read();
    if (servo_pos_6 < pos) {
      for (int i = servo_pos_6; i <= pos; i += step_servo) {
        servo6.write(i);
        delay(delay_time);
      }
    }
    if (servo_pos_6 > pos) {
      for (int i = servo_pos_6; i >= pos; i -= step_servo) {
        servo6.write(i);
        delay(delay_time);
      }
    }
  }
  //servo 9
  if (servo == 9) {
    int servo_pos_9 = servo9.read();
    if (servo_pos_9 < pos) {
      for (int i = servo_pos_9; i <= pos; i += step_servo) {
        servo9.write(i);
        delay(delay_time);
      }
    }
    if (servo_pos_9 > pos) {
      for (int i = servo_pos_9; i >= pos; i -= step_servo) {
        servo9.write(i);
        delay(delay_time);
      }
    }
  }
  //servo 12
  if (servo == 12) {
    int servo_pos_12 = servo12.read();
    if (servo_pos_12 < pos) {
      for (int i = servo_pos_12; i <= pos; i += step_servo) {
        servo12.write(i);
        delay(delay_time);
      }
    }
    if (servo_pos_12 > pos) {
      for (int i = servo_pos_12; i >= pos; i -= step_servo) {
        servo12.write(i);
        delay(delay_time);
      }
    }
  }
}
void startPoint(){
  servo4.write(120);
  servo7.write(180-120);
  servo10.write(120);
  servo13.write(180-120);

  servo2.write(60);
  servo5.write(180-60);
  servo8.write(60);
  servo11.write(180-60);
  
  servo3.write(175);
  servo6.write(180-175);
  servo9.write(175);
  servo12.write(180-175);
  
}

