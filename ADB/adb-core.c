#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char choice[10];
    char sub_choice[10];
    char reboot_choice[10];
    char ip_address[20];

    while (1)
    {
        printf("\n\n\n\n\n\n\t\t\t\t ADB TOOLS\n\t\t");
        printf("\n\t\t\t  Continue?   [Y]  [N] ");

        if (fgets(choice, sizeof(choice), stdin) == NULL)
        {
            printf("\nExiting...");
            return 0;
        }

        if (strcasecmp(choice, "y\n") == 0)
        {
            while (1)
            {
                system("cls");
                printf("\n                                    MENU \n\n");
                printf("\n                   [A] ADB Connect       [F] ADB Disconnect");
                printf("\n                   [B] Full Dump         [G] Watch Logcat");
                printf("\n                   [C] Advance Reboot    [H] Clear All Caches");
                printf("\n                   [D] Phone Info's      [I] Help");
                printf("\n                   [E] ADB (ROOT)        [J] Exit\n\n");

                if (fgets(sub_choice, sizeof(sub_choice), stdin) == NULL)
                {
                    break;
                }

                switch (tolower(sub_choice[0]))
                {
                case 'a':
                case 'A':
                    printf("Enter IP address: ");
                    fgets(ip_address, 20, stdin);
                    ip_address[strcspn(ip_address, "\n")] = 0; // remove trailing newline

                    printf("\nConnecting to %s... Please wait..\n", ip_address);
                    char adb_cmd[50];
                    sprintf(adb_cmd, "adb connect %s", ip_address);
                    system("adb start-server");
                    system(adb_cmd);
                    printf("Connected!");
                    break;

                case 'f':
                case 'F':
                    printf("\nDisconnecting...\n");
                    system("adb disconnect");
                    system("adb kill-server");
                    printf("\nDone!");
                    break;

                case 'b':
                case 'B':
                    printf("\nDump Started...\n");
                    system("adb dumpsys");
                    printf("\n\tDumpsys saved at adb' directory.");
                    break;

                case 'g':
                case 'G':
                    printf("\nLogcat Started...\n");
                    system("adb logcat");
                    break;

                case 'c':
                case 'C':
                    system("cls");
                    printf("\nAdvance Reboot \n");
                    printf("\nChoose:");
                    printf("\n[A] Reboot");
                    printf("\n[B] Reboot to Recovery");
                    printf("\n[C] Reboot to Bootloader");
                    printf("\n[D] Power Off\n");
                    if (fgets(reboot_choice, sizeof(reboot_choice), stdin) == NULL)
                    {
                        break;
                    }
                    switch (tolower(reboot_choice[0]))
                    {
                    case 'a':
                    case 'A':
                        printf("Rebooting...\n");
                        system("adb reboot");
                        printf("\nDone!\n");
                        break;

                    case 'b':
                    case 'B':
                        printf("Rebooting to recovery...\n");
                        system("adb reboot recovery");
                        printf("\nDone!\n");
                        break;

                    case 'c':
                    case 'C':
                        printf("Rebooting to bootloader...\n");
                        system("adb reboot bootloader");
                        printf("\nDone!\n");
                        break;

                    case 'd':
                        printf("Powering off...\n");
                        system("adb shell poweroff");
                        printf("\nDone!\n");
                        break;

                    default:
                        printf("\nInvalid choice!\n");
                        break;
                    }
                    break;

                case 'h':
                case 'H':
                    printf("\nClearing caches...\n");
                    system("adb shell su -c 'sync; echo 3 > /proc/sys/vm/drop_caches'");
                    printf("\nDone!\n");
                    break;

                case 'd':
                case 'D':
                    printf("\nPhone Info's\n");
                    system("adb shell dumpsys iphonesubinfo");
                    break;

                case 'e':
                case 'E':
                    printf("\nADB (ROOT)\n");
                    printf("\nCommand: ");
                    system("adb root");
                    break;

                case 'i':
                case 'I':
                    printf("\nHelp");
                    printf("\n[A] ADB Connect - Connects to ADB over Wi-Fi\n");
                    printf("[B] Full Dump - Dumps device information to a file\n");
                    printf("[C] Advance Reboot - Reboots the device in different modes\n");
                    printf("[D] Phone Info's - Displays various phone information\n");
                    printf("[E] ADB (ROOT) - Executes a custom command on the device\n");
                    printf("[F] ADB Disconnect - Disconnects from ADB\n");
                    printf("[G] Watch Logcat - Shows the device log\n");
                    printf("[H] Clear All Caches - Clears all device caches\n");
                    printf("[J] Exit - Exits the program\n");
                    break;

                case 'j':
                case 'J':
                    printf("\nExiting...");
                    return 0;

                default:
                    printf("\nInvalid choice!");
                    break;
                }
            }
        }
        else if (strcasecmp(choice, "n\n") == 0)
        {
            printf("\nExiting...");
            return 0;
        }
        else
        {
            system("cls");
            printf("\nInvalid choice!");
        }
    }
    return 0;
}
