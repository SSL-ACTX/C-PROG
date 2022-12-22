#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define s scanf
#define sys system

   char name, mwel, color, ex, cat, inf, wc, rebp, incdec, forl, oprtr, prog;
   char NAMER[50], ADDR[100], BDAY[100], EM[100], CZ[100], FN[100], MN[100], PRI[50], SEC[50], TER[50], FC[50], SC[50], TC[50];
   float quiz, assign, proj, cs, me, grade, C, F, rent, trans, groc, elec, water, med_exp, educ_exp, si, net, dif;
   int exm, mcat, AGE, x, y, z, a, b, c, st, en, fir, sec, thr, sum, product;
   long long int cp;

int main() {

    mwelg:
    printf("\t\t\t\t\t\t\t\t\t\t\n\n");
    printf("\n\n\n\n\n\n\t\t\t\ MULTI-PROGRAM (TESTING)\n\t\t");
    printf("\n\t\t\t  Continue?   [Y]  [N] ");
    s("%c", &mwel);
    if(mwel=='Y'||mwel=='y') {
        choi:
        sys("cls");
        printf("\n\n\n\n");
        printf("\n                                    MENU \n\n");
        printf("\n                 [1] PROG-1 C Programs       [2] ADB Program");
        printf("\n\n                                 [3] Credits\n");
        printf("\n          Choose: ");
        s("%d", &mcat);
    }
    else {
        printf("\n\n\n Invalid!, restarting...\n");
        sys("cls");
        goto mwelg;
    }
//main  prog switch
    switch (mcat) {

        case 1:
        sys("cls");
        printf("\n PROG-1 C Programs \n");
        printf("\n  [1] Grade Computation         [6] Increments & Decrements [M]");
        printf("\n  [2] Color Selection           [7] For-Loops [M]");
        printf("\n  [3] Fahrenheit to Celsius     [8] Midterm Group Project [!]");
        printf("\n  [4] Celsius to Fahrenheit     [9] LAB Exam [!]");
        printf("\n  [5] Registration Form         [10] Operators [E]");
        printf("\n\n\n Legend:  [M] - Menu   [!] - Important   [E] - Examples\n");
        s("%s", &prog);
        /*Choices mechanism*/
        if(prog=='1') { // Grade Computation Program
            printf("\n Grade Computation");
            printf("\n Enter your name: ");
            s("%s", &name);
            printf("\n Enter the Grade of Quiz: ");
            s("%f", &quiz);
            printf("\n Enter the Grade of Assignment: ");
            s("%f", &assign);
            printf("\n Enter the Grade of Project: ");
            s("%f", &proj);
            printf("\n Enter the Grade of Class Standing: ");
            s("%f", &cs);
            printf("\n Enter the Grade of Major Exam: ");
            s("%f", &me);// formula replaced
            grade=(cs*.10)+(quiz*.15)+(assign*.15)+(proj*.20)+(me*.40);
            sys("cls");
            printf("\n Name: %s", name);
            printf("\n Your Grade: %.2f", grade);
            printf("\n");
            if(grade>=75) {
              printf("\n You Passed!\n");\
            }
            else {
              printf("You Failed!\n");
            }
        } // grade computation end
        else if(prog=='2') {
            colselect:
            printf("\n Color Selection\n\n");
            printf("   First letter of a color: ");
            s("%c", &color);
            if(color=='R'||color=='r') {
              printf("\n It's color Red!");
            }
            else if(color=='O'||color=='o') {
              printf("\n It's color Orange!");
            }
            else if(color=='Y'||color=='y') {
              printf("\n It's color Yellow!");
            }
            else if(color=='G'||color=='g') {
              printf("\n It's color Green!");
            }
            else if(color=='B'||color=='b') {
              printf("\n It's color Blue!");
            }
            else if(color=='I'||color=='i') {
              printf("\n It's color Indigo!");
            }
            else if(color=='V'||color=='v') {
              printf("\n It's color Violet!");
            }
            else if(color=='P'||color=='p') {
              printf("\n It's color Pink!");
            }
            else if(color=='T'||color=='t') {
              printf("\n It's color Teal!");
            }
            else if(color=='C'||color=='c') {
              printf("\n It's color Cyan!");
            }
            else if(color=='D'||color=='d') {
              printf("\n It's color Dandelion!");
            }
            else {
              printf("\n Unknown Color!, restarting...");\
              sys("cls"); goto colselect; break;
            }
        } // color selection end
        else if(prog=='3') {
            printf("\n F-C Converter");
            printf("\n Enter temperature in Fahrenheit: ");
            s("%f", &F);
            C=(F-32)*5/9;//Formula
            printf("\n-----Results-----\n");
            printf("\n %.1f Fahrenheit = %.1f Celsius", F, C);
        }
        else if(prog=='4') {
            printf("\n C-F Converter");
            printf("\n");
            printf("Celsius: ");
            s("%f", &C);
            F=(C*9/5)+32;//Formula
            sys("cls");
            printf("\n-----Results-----\n");
            printf("\n %.2f Celsius to %.2f Fahrenheit", C, F);
        } //Converter end
        else if(prog=='5') {
            printf("\n Registration Form");
            printf("\n-------------PROFILE-------------\n");
            printf("\nENTER YOUR NAME: ");
            s(" %[^\n]", NAMER);
            printf("\nENTER YOUR AGE: ");
            s("%d", &AGE);
            printf("\nENTER YOUR BIRTHDAY: ");
            s(" %[^\n]", BDAY);
            printf("\nENTER YOUR ADDRESS: ");
            s(" %[^\n]", ADDR);
            printf("\nENTER YOUR CONTACT NUMBER: ");
            s("%lld", &cp);
            printf("\nENTER YOUR EMAIL: ");
            s(" %[^\n]", EM);
            printf("\nENTER YOUR CITIZENSHIP: ");
            s(" %[^\n]", CZ);
            printf("\nENTER YOUR FATHER'S NAME: ");
            s(" %[^\n]", FN);
            printf("\nENTER YOUR MOTHER'S NAME: ");
            s(" %[^\n]", MN);
            printf("\n------EDUCATIONAL ATTAINMENT------\n");
            printf("\nPRIMARY: ");
            s(" %[^\n]", PRI);
            printf("\nSECONDARY: ");
            s(" %[^\n]", SEC);
            printf("\nTERTIARY: ");
            s(" %[^\n]", TER);
            printf("\n----------COURSE CHOICE-----------\n");
            printf("ENTER YOUR FIRST CHOICE: ");
            s(" %[^\n]", FC);
            printf("ENTER YOUR SECOND CHOICE: ");
            s(" %[^\n]", SC);
            printf("ENTER YOUR THIRD CHOICE: ");
            s(" %[^\n]", TC);
            sys("cls");
            printf("\n-------------PROFILE-------------\n");
            printf("\nNAME: %s", NAMER);
            printf("\nAGE: %d", AGE);
            printf("\nBIRTHDAY: %s", BDAY);
            printf("\nADDRESS: %s", ADDR);
            printf("\nCONTACT NUMBER: 0%lld", cp);
            printf("\nEMAIL: %s", EM);
            printf("\nCITIZENSHIP: %s", CZ);
            printf("\nFATHER'S NAME: %s", FN);
            printf("\nMOTHER'S NAME: %s\n", MN);
            printf("\n------EDUCATIONAL ATTAINMENT------\n");
            printf("\nPRIMARY: %s", PRI);
            printf("\nSECONDARY: %s", SEC);
            printf("\nTERTIARY: %s\n", TER);
            printf("\n----------COURSE CHOICE-----------\n");
            printf("\nFIRST CHOICE: %s", FC);
            printf("\nSECOND CHOICE: %s", SC);
            printf("\nTHIRD CHOICE: %s", TC);
        } // Registration form end
        else if(prog=='6') {
            printf("\nIncrements & Decrements\n");
            printf("\n[1] Pre Increment       [3] Post Increment\n");
            printf("\n[2] Pre Decrement       [4] Post Decrement\n");
            s("%d", &incdec);
            if(incdec=='1') {
              printf("INPUT THE VALUE OF X: ");
              s("%d", &x);
              printf("INPUT THE VALUE OF Y: ");
              s("%d", &y);
              printf("INPUT THE VALUE OF Z: ");
              s("%d", &z);
              ++x;
              ++y;
              ++z;
              printf("\nTHE UPDATED VALUE OF THE X IS: %d", x);
              printf("\nTHE UPDATED VALUE OF THE Y IS: %d", y);
              printf("\nTHE UPDATED VALUE OF THE Z IS: %d", z);
            } // pre increment end
            else if(incdec=='2') {
              printf("INPUT THE VALUE OF X: ");
              s("%d", &x);
              printf("INPUT THE VALUE OF Y: ");
              s("%d", &y);
              printf("INPUT THE VALUE OF Z: ");
              s("%d", &z);
              --x;
              --y;
              --z;
              printf("\nTHE UPDATED VALUE OF THE X IS: %d", x);
              printf("\nTHE UPDATED VALUE OF THE Y IS: %d", y);
              printf("\nTHE UPDATED VALUE OF THE Z IS: %d", z);
            } // pre decrement end
            else if(incdec=='3') {
              printf("INPUT THE VALUE OF X: ");
              s("%d", &x);
              printf("INPUT THE VALUE OF Y: ");
              s("%d", &y);
              printf("INPUT THE VALUE OF Z: ");
              s("%d", &z);
              a = x++;
              b = y++;
              c = z++;
              printf("\nTHE ORIGINAL VALUE OF THE A IS: %d", a);
              printf("\nTHE ORIGINAL VALUE OF THE B IS: %d", b);
              printf("\nTHE ORIGINAL VALUE OF THE C IS: %d", c);
              printf("\n\nTHE UPDATED VALUE OF THE X IS: %d", x);
              printf("\nTHE UPDATED VALUE OF THE Y IS: %d", y);
              printf("\nTHE UPDATED VALUE OF THE Z IS: %d", z);
            }
            else if(incdec=='4') {
              printf("INPUT THE VALUE OF X: ");
              s("%d", &x);
              printf("INPUT THE VALUE OF Y: ");
              s("%d", &y);
              printf("INPUT THE VALUE OF Z: ");
              s("%d", &z);
              a = x--;
              b = y--;
              c = z--;
              printf("\nTHE ORIGINAL VALUE OF THE A IS: %d", a);
              printf("\nTHE ORIGINAL VALUE OF THE B IS: %d", b);
              printf("\nTHE ORIGINAL VALUE OF THE C IS: %d", c);
              printf("\n\nTHE UPDATED VALUE OF THE X IS: %d", x);
              printf("\nTHE UPDATED VALUE OF THE Y IS: %d", y);
              printf("\nTHE UPDATED VALUE OF THE Z IS: %d", z);
            }
        } // Post decrement end
        else if(prog=='7') { // For loop
          printf("\n\n[1] For-Loop Increment\n");
          printf("    [2] For-Loop Decrement\n");
          s("%d", &forl);
          if(forl=='2') {
            printf("\nEnter starting value: \n");
            s("%d", &st);
            printf("\nEnter ending value: \n");
            s("%d", &en);
            for (st; en<=st; st--)
            {
              printf("%d\n", st);
            }
          } // for loop decrement
          else if(forl=='1') {
           printf("\nEnter starting value: \n");
           s("%d", &st);
           printf("\nEnter ending value: \n");
           s("%d", &en);
           for (st; st<=en; st++)
           {
             printf("%d\n", st);
           }
          }
        } // for loop increment
        else if(prog=='8') {
          printf("\nMidterm Group Project\n");
          printf("ENTER YOUR RENT: ");
          s("%f", &rent);
          printf("ENTER YOUR TRANSPORT: ");
          s("%f", &trans);
          printf("ENTER YOUR GROCERIES: ");
          s("%f", &groc);
          printf("ENTER YOUR ELECTRIC BILL: ");
          s("%f", &elec);
          printf("ENTER YOUR WATER BILL: ");
          s("%f", &water);
          printf("ENTER YOUR MEDICAL EXPENSES: ");
          s("%f", &med_exp);
          printf("ENTER YOUR EDUCATIONAL EXPENSES: ");
          s("%f", &educ_exp);
          printf("Your salary: ");
          s("%f", &si);
          net = (rent)+(trans)+(groc)+(elec)+(water)+(med_exp)+(educ_exp)-(si);
          sys("cls");
          printf("NET INCOME\n");
          if(net>=0){
            sys("color 2");
            printf("P%.2f");
          }
          if(net<0){
            sys("color 4");
            printf("YOUR INCOME IS NOT ENOUGH!");
          }
        } //Midterm group proj. end
        else if(prog=='9') {
          printf("\nLAB Exam\n");
          printf("Enter Three Numbers : \n");
          s("%d %d %d",&fir, &sec, &thr);
          sum = fir + sec + thr;
          dif= (float)(thr + sec)/2;
          product= fir * thr;
          printf("\n Sum of 1st, 2nd, and 3rd Numbers is : %d", sum);
          printf("\n The difference of %d and %d is: %.2f", thr, sec, dif);
          printf("\n Product of 1st and 3rd Number: %d", fir, thr, product);
        } //Lab exam end
        else if(prog=='10') {
          printf("\nOperators\n");
          printf("\n[1] Bitwise Operator");
          printf("\n[2] Logical Operator");
          printf("\n[3] Relational Operator");
          s("%d", &oprtr);
          if(oprtr=='1') {
            printf("\nEmpty!");
          }
          else if(oprtr=='2') {
            printf("\nEmpty!");
          }
          else if(oprtr=='3') {
            printf("\nEmpty!");
          }
        } break; // Operator end

        case 2: // Complex code --- idk this code will work..
        /* This program requires ADB(Android Debugging Interface) installed to the system. *
         * ADB should be registered at "PATH" in "Environmental Variables in Windows OS.   *
         * Otherwise, this won't work. :)                                                  *
         *                                                                                 *
         * Note: I'm aware that using "goto" makes the code a "spaghetti", however I'm a   *
         *       newbie in C, forgive me. :(                                               *
         *                                             - SSL-ACTX (Jameel)                 *
         *                                                                                */
        core:
        sys("cls");
        printf("\n\n\n\n");
        printf("\n                                    MENU \n\n");
        printf("\n                   [A] ADB Connect       [F] ADB Disconnect");
        printf("\n                   [B] Full Dump         [G] Watch Logcat");
        printf("\n                   [C] Advance Reboot    [H] Clear All Caches");
        printf("\n                   [D] Phone Info's      [I] Help");
        printf("\n                   [E] ADB (ROOT)        [J] Exit\n\n");
        s("%s", &cat);

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
            goto core; break;
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
            return 0; exit(0);

        default:
          printf("\nUnknown!");
    }
        } // Main switch end bracket

   //Exit menu--commented for now
    printf("\n\n [1] Return to  Main Menu");
    printf("\n\n [2] Exit\n");
    s("%s", &exm);
    if(exm=='1') {
        sys("cls");
        goto choi;
    }
    else if(exm=='2') {
        exit(0);
    }


      return 0;
} // int main end bracket
