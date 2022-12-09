#include <stdio.h>
#include <stdlib.h>
#define p printf
#define s scanf
#define st system

    char ex;

int main() {

    p("\nChoose a Function: ");
    p("\n[A] ADB Connect    [B] ADB Disconnect");
    p("\n[C] Full Dump      [D] Battery Status");
    p("\n[E] Watch Logcat   [F] Devices");
    p("\n[G] Private Inf.   [H] Reboot (Advance)");
    p("\n[I] Help           [J] Bug Report");
    p("\n[X] Restart ADB as ROOT");
    p("\n");
    s("%c", &ex);


    switch(ex) {

        case 'a': case 'A':
          p("\nThis will take some time, please wait...");
          st("adb connect 192.168.0.100");
          st("adb connect 192.168.0.101");
          st("adb connect 192.168.0.102");
          st("adb connect 192.168.0.103");
          st("adb connect 192.168.0.104");
          st("adb connect 192.168.0.105");
          st("adb connect 192.168.0.106");
          st("adb connect 192.168.0.107");
          st("cls");
          p("Connected");
          break;

        case 'b': case 'B':
          p("\nDisconnecting...");
          st("adb disconnect");
          st("adb kill-server");
          break;

        case 'c': case 'C':
          p("\nDumping...");
          st("adb shell dumpsys");
          break;

        case 'd': case 'D':
          p("\nBattery Status");
          st("adb shell dumpsys battery");
          break;

        case 'e': case 'E':
          p("\nLogcat");
          st("adb logcat");
          break;

        case 'f': case 'F':
          p("\nDevices");
          st("adb devices");
          break;

        case 'g': case 'G'://dumpsys.exe
          st("X:/c_proj/adb/dumpsys.exe");
          break;

        case 'h': case 'H'://reboot.exe
          st("X:/c_proj/adb/reboot.exe");
          break;

        case 'i': case 'I':
          p("\nHelp");
          st("adb help");
          break;

        case 'j': case 'J':
          p("adb bugreport");
          break;

        case 'x': case 'X':
          p("\nStarting as ROOT...");
          st("adb root");
          break;
    }
  return 0;
}
