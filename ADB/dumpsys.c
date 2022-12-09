#include <stdio.h>
#define p printf
#define s scanf
#define st system

   char ch;

int main() {

    p("\nOther Features");
    p("\n[1] Device State    [2] Serial No.");
    p("\n[3] IMEI            [4] Netstat");
    p("\n[5] Phone Features  [6] Services");
    p("\n[7] Process Status  [8] Screen Resolution");
    p("\n[9] Backup ALL      [10] List Packages (10-10.5)");
    p("\n");
    s("%c", &ch);

    switch(ch) {

        case '1':
        st("adb get-state");
        break;

        case '2':
        st("adb get-serialno");
        break;

        case '3':
        st("adb shell dumpsys iphonesybinfo");
        break;

        case '4':
        st("adb shell netstat");
        break;

        case '5':
        st("adb shell pm list features");
        break;

        case '6':
        st("adb shell service list");
        break;

        case '7':
        st("adb shell ps");
        break;

        case '8':
        st("adb shell wm size");
        break;

        case '9':
        st("adb backup");
        break;

        case '10':
        st("adb list packages");
        break;

        case '10.1':
        st("adb list packages -r");
        break;

        case '10.2':
        st("adb list packages -3");
        break;

        case '10.3':
        st("adb list packages -s");
        break;

        case '10.4':
        st("adb list packages -u");
        break;

        case '10.5':
        st("adb shell dumpsys package packages");
        break;
    }
    return 0;
}
