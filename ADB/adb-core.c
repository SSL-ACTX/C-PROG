/* This program requires ADB(Android Debugging Interface) installed to the system. *
 * ADB should be registered at "PATH" in "Environmental Variables in Windows OS.   *
 * Otherwise, this won't work. :)                                                  *
 *                                                                                 *
 * Note: I'm aware that using "goto" makes the code a "spaghetti", however I'm a   *
 *       newbie in C, forgive me. :(                                               *
 *                                             - SSL-ACTX (Jameel)                 *
 */
#include <stdio.h>
#include <stdlib.h>

#define s scanf
#define sys system

   char ex, cat, inf, wc, rebp;
   int exm;

int main() {

    core:
    printf("\t\t\t\t\t\t\t\t\t\t\n\n");
    printf("\n\n\n\n\n\n\t\t\t\t ADB TOOLS\n\t\t");
    printf("\n\t\t\t  Continue?   [Y]  [N] ");
    s("%s", &wc);

    if(wc=='y'||wc=='Y') {
        sub:
        sys("cls");
        printf("\n\n\n\n");
        printf("\n                                    MENU \n\n");
        printf("\n                   [A] ADB Connect       [F] ADB Disconnect");
        printf("\n                   [B] Full Dump         [G] Watch Logcat");
        printf("\n                   [C] Advance Reboot    [H] Clear All Caches");
        printf("\n                   [D] Phone Info's      [I] Help");
        printf("\n                   [E] ADB (ROOT)        [J] Exit\n\n");
        s("%s", &cat);
    }
    else if(wc=='N'||wc=='n') {
        printf("\nExiting...");
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
          printf("\nConnecting... Please wait..\n");
          sys("\nadb start-server");
          sys("\nadb connect 192.168.0.100");
          sys("\nadb connect 192.168.0.101");
          sys("\nadb connect 192.168.0.102");
          sys("\nadb connect 192.168.0.103");
          sys("\nadb connect 192.168.0.104");
          sys("\nadb connect 192.168.0.105");
          sys("cls");
          printf("Connected!");
          break;

        case 'f': case 'F':
          printf("\nDisconnecting...\n");
          sys("adb disconnect");
          sys("adb kill-server");
          printf("\nDone!");
          break;

        case 'b': case 'B':
          printf("\nDump Started...\n");
          sys("adb dumpsys");
          printf("\n\tDumpsys saved at adb' directory.");
          break;

        case 'g': case 'G':
          printf("\nLogcat Started...\n");
          sys("adb logcat");
          break;
//Case E
        case 'c': case 'C'://advance reboot
          printf("\nAdvance Reboot \n");
          printf("\nChoose:");
          printf("\n[A] Reboot");
          printf("\n[B] Reboot to Recovery");
          printf("\n[C] Reboot to Bootloader");
          printf("\n[D] Power Off\n");
          s("%s", &rebp);
          //Option mechanism
          if(rebp=='a' || rebp=='A') {
            printf("Rebooting...\n");
            sys("adb reboot");
            printf("\nDone!\n");
          }
          else if(rebp=='b' || rebp=='B') {
            printf("Rebooting to recovery...\n");
            sys("adb reboot recovery");
            printf("\nDone!\n");
          }
          else if(rebp=='c' || rebp=='C') {
            printf("Rebooting to bootloader(fastboot)...\n");
            sys("adb reboot bootloader");
            printf("\nDone!\n");
          }
          else if(rebp=='d' || rebp=='D') {
            printf("Powering off...\n");
            sys("adb shell reboot -p");
            printf("\nDone!\n");
          }
          else {
            printf("Invalid!\n");
          } break;
//Case E end
        case 'h': case 'H':
          printf("\nClearing all caches...\n");
          sys("adb shell pm trim-caches 999g");
          printf("\nDone!");
          break;

        case 'd': case 'D': //phone infos
          inf:
          sys("cls");
          printf("\n\n\n\n");
          printf("\n                             PHONE INFORMATION \n\n");
          printf("\n                 [A] Battery Status      [F] Netstat");
          printf("\n                 [B] Features            [G] Services");
          printf("\n                 [C] Serial No.'s        [H] Screen Size");
          printf("\n                 [D] Process Status      [I] List Root Directories");
          printf("\n                 [E] List All Packages   [J] Main Menu\n");
          s("%s", &inf);
          //Option Mechanism
          if(inf=='a'||inf=='A') {
            printf("\nBattery Status\n");
            sys("adb shell dumpsys battery");
          }
          else if(inf=='f'||inf=='F') {
            printf("\nNetstat\n");
            sys("adb shell netstat");
          }
          else if(inf=='b'||inf=='B') {
            printf("\nFeatures\n");
            sys("adb shell pm list features");
          }
          else if(inf=='g'||inf=='G') {
            printf("\nServices\n");
            sys("adb shell service list");
          }
          else if(inf=='c'||inf=='C') {
            printf("\nSerial No.'s\n");
            sys("adb shell get-state");
            sys("adb shell get-serialno");
          }
          else if(inf=='h'||inf=='H') {
            printf("\nScreen Size\n");
            sys("adb shell wm size");
          }
          else if(inf=='d'||inf=='D') {
            printf("\nProcess Status\n");
            sys("adb shell ps");
          }
          else if(inf=='i'||inf=='I') {
            printf("\nRoot Directories\n");
            sys("adb shell ls");
          }
          else if(inf=='i'||inf=='I') {
            printf("\nList All Packages\n");
            sys("adb shell list packages");
          }
          else if(inf=='j'||inf=='J') {
            goto sub; break;
          }
          else {
            printf("Invalid!\n"); goto inf;

          }

          break;

        case 'i': case 'I':
          printf("\nHelp\n");
          sys("adb help");
          break;

        case 'e': case 'E':
          printf("\nRunning as ROOT...\n");
          sys("adb root");
          break;

        case 'j': case 'J':
            return 0;

        default:
          printf("\nUnknown!");
    }

    printf("\n\n [1] Return to Menu");
    printf("\n\n [2] Exit\n");
    s("%s", &exm);
    if(exm=='1') {
        sys("cls");
        goto sub;
    }
    else if(exm=='2') {
        exit(0);
    }

  return 0;
}
