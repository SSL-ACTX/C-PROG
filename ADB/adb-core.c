#include <stdio.h>
#include <stdlib.h>
#define p printf
#define s scanf
#define sys system

   char ex, cat, mop, wc, exm;

int main() {

    core:
    p("\t\t\t\t\t\t\t\t\t\t\n\n");
    p("\n\n\n\n\n\n\t\t\t\t ADB TOOLS\n\t\t");
    p("\n\t\t\t  Continue?   [Y]  [N] ");
    s("%s", &wc);

    if(wc=='y'||wc=='Y') {
        sub:
        sys("cls");
        p("\n\n\n\n");
        p("\n                                  MENU \n\n");
        p("\n                   [A] ADB Connect       [B] ADB Disconnect");
        p("\n                   [C] Full Dump         [D] Watch Logcat");
        p("\n                   [E] Advance Reboot    [F] Clear All Caches");
        p("\n                   [G] Phone Info's      [H] Help");
        p("\n                   [I] ADB (ROOT)        [J] Exit\n\n");
        s("%s", &cat);
    }
    else if(wc=='N'||wc=='n') {
        p("\nExiting...");
        return 0;
    }
    else {
        printf("\nInvalid! Restarting...");
        sys("cls");
        goto core;
    }

    switch(cat) {

        case 'a': case 'A':
          sys("cls");
          p("\nConnecting... Please wait..\n");
          sys("\nadb start-server");
          sys("\nadb connect 192.168.0.100");
          sys("\nadb connect 192.168.0.101");
          sys("\nadb connect 192.168.0.102");
          sys("\nadb connect 192.168.0.103");
          sys("\nadb connect 192.168.0.104");
          sys("\nadb connect 192.168.0.105");
          sys("cls");
          p("Connected!");
          goto sub;
          break;

        case 'b': case 'B':
          p("\nDisconnecting...\n");
          sys("adb disconnect");
          sys("adb kill-server");
          p("\nDone!");
          break;

        case 'c': case 'C':
          p("\nDump Started...\n");
          sys("adb dumpsys");
          p("\n\tDumpsys saved at adb' directory.");
          break;

        case 'd': case 'D':
          p("\nLogcat Started...\n");
          sys("adb logcat");
          break;

        case 'e': case 'E'://advance reboot
          p("\nAdvance Reboot Activated!");
          sys("E:/Workspaces/C/2-adb/src/reb.exe");
          break;

        case 'f': case 'F':
          p("\nClearing all caches...\n");
          sys("adb shell pm trim-caches 999g");
          p("\nDone!");
          break;

        case 'g': case 'G': //phone infos
          p("\nStarting...\n");
          sys("cls");
          sys("E:/Workspaces/C/2-adb/src/inf.exe");
          break;

        case 'h': case 'H':
          p("\nHelp\n");
          sys("adb help");
          break;

        case 'i': case 'I':
          p("\nRunning as ROOT...\n");
          sys("adb root");
          break;

        case 'j': case 'J':
            return 0; exit(0);

        default:
          p("\nUnknown!");
    }

    p("\n\n [1] Return to Menu");
    p("\n\n [2] Exit\n");
    s("%s", &exm);
    if(exm='1') {
        sys("cls");
        goto sub;
    }
    else if(exm='2') {
        return 0;
    }

  return 0;
}
