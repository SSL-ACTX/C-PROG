/* All codes here may or may not change as time pass by. This program is done. Bye!                  *
 * I'm planning to add graphics which uses "graphics.h" header for the welcome screen, though I'm    *
 * hesitating because MinGW and Code::Blocks "gcc" compilers doesn't have it. Have a good day!       *
 *                                                                     --SSL ACTX                   */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <time.h>

#define WIDTH 80
#define HEIGHT 40
#define idx(x, y)((x) + WIDTH * (y))
#define s scanf
#define sys system

struct trail
{
    float start;
    float end;
    float speed;
}
trails[WIDTH];

void init_trail(struct trail * trail)
{
    trail -> start = -(float)(rand() % HEIGHT);
    trail -> end = 0;
    trail -> speed = (rand() % 5) / 10.0f + 0.2f;
}

void update(CHAR_INFO consoleBuffer[])
{
    CHAR_INFO space =
    {
        .Char.AsciiChar = ' ',
        .Attributes = 0
    };

    for (int x = 0; x < WIDTH; x++)
    {
        for (int y = 0; y < HEIGHT; y++)
            consoleBuffer[idx(x, y)] = space;

        int start = trails[x].start < 0 ? 0 : (int) trails[x].start;
        int end = trails[x].end > HEIGHT ? HEIGHT : (int) trails[x].end;

        for (int y = start; y < end; y++)
            consoleBuffer[idx(x, y)] = (CHAR_INFO)
        {
            .Char.AsciiChar = rand() % 256,
            .Attributes = FOREGROUND_GREEN |
                          (y < (int) trails[x].end - 1 ? 0 :
                           FOREGROUND_RED | FOREGROUND_BLUE)
        };

        trails[x].start += trails[x].speed;
        trails[x].end += trails[x].speed;

        if (trails[x].start >= HEIGHT)
            init_trail( & trails[x]);
    }
}

void loadingBar()
{

    char a = 177, b = 219;

    printf("\n\n\n\n");
    printf("\n\n\n\n\t\t        Loading...\n\n");
    printf("\t\t\t");

    for (int i = 0; i < 26; i++)
        printf("%c", a);

    printf("\r");
    printf("\t\t\t");

    for (int i = 0; i < 26; i++)
    {
        printf("%c", b);

        Sleep(30);
    }
}

void endloadingbar()
{

    char a = 177, b = 219;

    printf("\n\n\n\n");
    printf("\n\n\n\n\t\t        Loading...\n\n");
    printf("\t\t\t");

    for (int i = 0; i < 26; i++)
        printf("%c", a);

    printf("\r");
    printf("\t\t\t");

    for (int i = 0; i < 26; i++)
    {
        printf("%c", b);

        Sleep(20);
    }
}

void fastloadbar()
{

    char a = 177, b = 219;

    printf("\n\n\n\n");
    printf("\n\n\n\n\t\t        Loading...\n\n");
    printf("\t\t\t");

    for (int i = 0; i < 26; i++)
        printf("%c", a);

    printf("\r");
    printf("\t\t\t");

    for (int i = 0; i < 26; i++)
    {
        printf("%c", b);

        Sleep(1);
    }
}

char name, nameg[30], mwel, color, ex, cat, inf, wc, rebp, incdec, forl, prog, oprtr;
char NAMER[50], ADDR[100], BDAY[100], EM[100], CZ[100], FN[100], MN[100], PRI[50], SEC[50], TER[50], FC[50], SC[50], TC[50];
float quiz, assign, proj, cs, me, grade, C, F, rent, trans, groc, elec, water, med_exp, educ_exp, si, net, dif;
int exm, mcat, AGE, x, y, z, a, b, c, st, en, fir, sec, thr, sum, product;
long long int cp;

int main()
{

mwelg:
    SetConsoleTitle(TEXT("C Program (Testing)"));
    loadingBar();
    system("cls");
    printf("\t\t\t\t\t\t\t\t\t\t\n\n");
    printf("\n\n\n\n\n\n\t\t\t    PROGRAM (TESTING)\n\t\t");
    printf("\n\t\t\t  Continue?   [Y]  [N] ");
    s("%c", & mwel);
    if (mwel == 'Y' || mwel == 'y')
    {
choi:
        sys("cls");
        SetConsoleTitle(TEXT("Menu"));
        printf("\n\n\n\n\n\n");
        printf("\n                                    MENU \n\n");
        printf("\n                 [1] PROG-1 C Programs       [2] ADB Program");
        printf("\n                 [3] Credits                 [4] Exit\n");
        printf("\n          Choice: ");
        s("%d", & mcat);
    }
    else if (mwel == 'N' || mwel == 'n')
    {
        printf("\n Terminating process...\n");
        sleep(3);
        return 0;
    }
    else
    {
        printf("\n\n\n Invalid!, restarting...\n");
        sleep(2);
        sys("cls");
        goto mwelg;
    }
    //main  prog switch
    switch (mcat)
    {

    case 1:
        SetConsoleTitle(TEXT("PROG-1"));
        sys("cls");
        fastloadbar();
        sys("cls");
        printf("\n\n\n\n");
        printf("\n                             *  PROG-1 C Programs  *\n");
        printf("\n           [1] Grade Computation         [6] Increments & Decrements [M]");
        printf("\n           [2] Color Selection           [7] For-Loops [M]");
        printf("\n           [3] Fahrenheit to Celsius     [8] Midterm Group Project [!]");
        printf("\n           [4] Celsius to Fahrenheit     [9] LAB Exam [!]");
        printf("\n           [5] Registration Form         [X] Operators [E]");
        printf("\n\n\n            Legend:  [M] - Menu   [!] - Important   [E] - Examples\n");
        s("%s", & prog);
        /*Choices mechanism*/
        if (prog == '1')
        {
            sys("cls");
            fastloadbar();
            sys("cls");
            printf("\n Grade Computation\n");
            printf("\n Enter your Name: ");
            s("%s", & nameg);
            printf("\n Enter the Grade of Quiz: ");
            s("%f", & quiz);
            printf("\n Enter the Grade of Assignment: ");
            s("%f", & assign);
            printf("\n Enter the Grade of Project: ");
            s("%f", & proj);
            printf("\n Enter the Grade of Class Standing: ");
            s("%f", & cs);
            printf("\n Enter the Grade of Major Exam: ");
            s("%f", & me);
            grade = (cs * .10) + (quiz * .15) + (assign * .15) + (proj * .20) + (me * .40);
            sys("cls");
            printf("\n Name: %s", nameg);
            printf("\n Your Grade: %.2f", grade);
            printf("\n");
            if (grade >= 75)
            {
                printf("\n You Passed!\n");
            }
            else
            {
                printf("\n You Failed!\n");
            }
        } // grade computation end
        else if (prog == '2')
        {
colselect:
            sys("cls");
            fastloadbar();
            sys("cls");
            printf("\n Color Selection\n\n");
            printf("   First letter of a color: ");
            s("%c", & color);
            if (color == 'R' || color == 'r')
            {
                printf("\n It's color Red!");
            }
            else if (color == 'O' || color == 'o')
            {
                printf("\n It's color Orange!");
            }
            else if (color == 'Y' || color == 'y')
            {
                printf("\n It's color Yellow!");
            }
            else if (color == 'G' || color == 'g')
            {
                printf("\n It's color Green!");
            }
            else if (color == 'B' || color == 'b')
            {
                printf("\n It's color Blue!");
            }
            else if (color == 'I' || color == 'i')
            {
                printf("\n It's color Indigo!");
            }
            else if (color == 'V' || color == 'v')
            {
                printf("\n It's color Violet!");
            }
            else if (color == 'P' || color == 'p')
            {
                printf("\n It's color Pink!");
            }
            else if (color == 'T' || color == 't')
            {
                printf("\n It's color Teal!");
            }
            else if (color == 'C' || color == 'c')
            {
                printf("\n It's color Cyan!");
            }
            else if (color == 'D' || color == 'd')
            {
                printf("\n It's color Dandelion!");
            }
            else
            {
                printf("\n Unknown Color!, restarting...");
                \
                sys("cls");
                goto colselect;
                break;
            }
        } // color selection end
        else if (prog == '3')
        {
            sys("cls");
            fastloadbar();
            sys("cls");
            printf("\n F-C Converter");
            printf("\n Enter temperature in Fahrenheit: ");
            s("%f", & F);
            C = (F - 32) * 5 / 9; //Formula
            printf("\n-----Results-----\n");
            printf("\n %.1f Fahrenheit = %.1f Celsius", F, C);
        }
        else if (prog == '4')
        {
            sys("cls");
            fastloadbar();
            sys("cls");
            printf("\n C-F Converter");
            printf("\n");
            printf("Celsius: ");
            s("%f", & C);
            F = (C * 9 / 5) + 32; //Formula
            sys("cls");
            printf("\n-----Results-----\n");
            printf("\n %.2f Celsius to %.2f Fahrenheit", C, F);
        } //Converter end
        else if (prog == '5')
        {
            sys("cls");
            fastloadbar();
            sys("cls");
            printf("\n Registration Form");
            printf("\n-------------PROFILE-------------\n");
            printf("\nENTER YOUR NAME: ");
            s(" %[^\n]", NAMER);
            printf("\nENTER YOUR AGE: ");
            s("%d", & AGE);
            printf("\nENTER YOUR BIRTHDAY: ");
            s(" %[^\n]", BDAY);
            printf("\nENTER YOUR ADDRESS: ");
            s(" %[^\n]", ADDR);
            printf("\nENTER YOUR CONTACT NUMBER: ");
            s("%lld", & cp);
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
            printf("\nCONTACT NUMBER: %lld", cp);
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
        else if (prog == '6')
        {
            sys("cls");
            fastloadbar();
            sys("cls");
            printf("\nIncrements & Decrements\n");
            printf("\n[1] Pre Increment       [3] Post Increment\n");
            printf("\n[2] Pre Decrement       [4] Post Decrement\n");
            s("%s", & incdec);
            if (incdec == '1')
            {
                printf("INPUT THE VALUE OF X: ");
                s("%d", & x);
                printf("INPUT THE VALUE OF Y: ");
                s("%d", & y);
                printf("INPUT THE VALUE OF Z: ");
                s("%d", & z);
                ++x;
                ++y;
                ++z;
                printf("\nTHE UPDATED VALUE OF THE X IS: %d", x);
                printf("\nTHE UPDATED VALUE OF THE Y IS: %d", y);
                printf("\nTHE UPDATED VALUE OF THE Z IS: %d", z);
            } // pre increment end
            else if (incdec == '2')
            {
                sys("cls");
                printf("INPUT THE VALUE OF X: ");
                s("%d", & x);
                printf("INPUT THE VALUE OF Y: ");
                s("%d", & y);
                printf("INPUT THE VALUE OF Z: ");
                s("%d", & z);
                --x;
                --y;
                --z;
                printf("\nTHE UPDATED VALUE OF THE X IS: %d", x);
                printf("\nTHE UPDATED VALUE OF THE Y IS: %d", y);
                printf("\nTHE UPDATED VALUE OF THE Z IS: %d", z);
            } // pre decrement end
            else if (incdec == '3')
            {
                sys("cls");
                printf("INPUT THE VALUE OF X: ");
                s("%d", & x);
                printf("INPUT THE VALUE OF Y: ");
                s("%d", & y);
                printf("INPUT THE VALUE OF Z: ");
                s("%d", & z);
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
            else if (incdec == '4')
            {
                sys("cls");
                printf("INPUT THE VALUE OF X: ");
                s("%d", & x);
                printf("INPUT THE VALUE OF Y: ");
                s("%d", & y);
                printf("INPUT THE VALUE OF Z: ");
                s("%d", & z);
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
        else if (prog == '7') // For loop
        {
            sys("cls");
            fastloadbar();
            sys("cls");
            printf("\n  [1] For-Loop Decrement\n");
            printf("\n  [2] For-Loop Increment\n");
            s("%s", & forl);
            if (forl == '1')
            {
                sys("cls");
                printf("\n Enter starting value: \n");
                s("%d", & st);
                printf("\n Enter ending value: \n");
                s("%d", & en);
                sys("cls");
                printf("\n\n Starting value:  %d   Ending Value:  %d \n\n", st, en);
                for (st; en <= st; st--)
                {
                    printf(" %d\n", st);
                }
            } // for loop decrement
            else if (forl == '2')
            {
                sys("cls");
                printf("\n Enter starting value: \n");
                s("%d", & st);
                printf("\n Enter ending value: \n");
                s("%d", & en);
                sys("cls");
                printf("\n\n Starting value:  %d   Ending Value:  %d \n\n", st, en);
                for (st; st <= en; st++)
                {
                    printf(" %d\n", st);
                }
            }
        } // for loop increment
        else if (prog == '8')
        {
            sys("cls");
            fastloadbar();
            sys("cls");
            printf("\nMidterm Group Project\n\n");
            printf("ENTER YOUR RENT: ");
            s("%f", & rent);
            printf("ENTER YOUR TRANSPORT: ");
            s("%f", & trans);
            printf("ENTER YOUR GROCERIES: ");
            s("%f", & groc);
            printf("ENTER YOUR ELECTRIC BILL: ");
            s("%f", & elec);
            printf("ENTER YOUR WATER BILL: ");
            s("%f", & water);
            printf("ENTER YOUR MEDICAL EXPENSES: ");
            s("%f", & med_exp);
            printf("ENTER YOUR EDUCATIONAL EXPENSES: ");
            s("%f", & educ_exp);
            printf("Your salary: ");
            s("%f", & si);
            net = (rent) + (trans) + (groc) + (elec) + (water) + (med_exp) + (educ_exp) - (si);
            sys("cls");
            printf("NET INCOME\n");
            if (net >= 0)
            {
                sys("color 2");
                printf("P%.2f");
            }
            if (net < 0)
            {
                sys("color 4");
                printf("YOUR INCOME IS NOT ENOUGH!");
            }
        } //Midterm group proj. end
        else if (prog == '9')
        {
            sys("cls");
            fastloadbar();
            sys("cls");
            printf("\n LAB Exam\n");
            printf("\n Enter Three Numbers : \n");
            s(" %d %d %d", & fir, & sec, & thr);
            sum = fir + sec + thr;
            dif = (float)(thr + sec) / 2;
            product = fir * thr;
            printf("\n Sum of 1st, 2nd, and 3rd Numbers is : %d", sum);
            printf("\n The difference of %d and %d is: %.2f", thr, sec, dif);
            printf("\n Product of 1st and 3rd Number: %d", fir, thr, product);
        } //Lab exam end
        else if (prog == 'X' || prog == 'x')
        {
            sys("cls");
            fastloadbar();
            sys("cls");
            printf("\nOperators\n");
            printf("\n[1] Bitwise Operator");
            printf("\n[2] Logical Operator");
            printf("\n[3] Relational Operator");
            s("%s", & oprtr);
            if (oprtr == '1')
            {
                sys("cls");
                printf("\nEmpty!");
            }
            else if (oprtr == '2')
            {
                sys("cls");
                printf("\nEmpty!");
            }
            else if (oprtr == '3')
            {
                sys("cls");
                printf("\nEmpty!");
            }
        }
        break; // Operator end

    case 3:
        SetConsoleTitle(TEXT("Credits"));
        sys("cls");
        endloadingbar();
        sys("cls");
        printf("\n\n\t  Credits\n");
        printf("\n\n");
        printf("\t\t\t        *- SSL ACTX -*\n");
        sleep(1);
        printf("\n Matrix begins... ");
        sleep(1);
        printf("In 3");
        sleep(1);
        printf("...2");
        sleep(1);
        printf("...1");
        sleep(1);

        srand((unsigned) time(NULL)); //matrix
        HANDLE wHnd = GetStdHandle(STD_OUTPUT_HANDLE); //console window

        SMALL_RECT windowSize =
        {
            0,
            0,
            WIDTH - 1,
            HEIGHT - 1
        };
        SetConsoleWindowInfo(wHnd, TRUE, & windowSize);

        COORD bufferSize =
        {
            WIDTH,
            HEIGHT
        };
        SetConsoleScreenBufferSize(wHnd, bufferSize);

        CHAR_INFO consoleBuffer[WIDTH * HEIGHT];
        COORD charBufSize =
        {
            WIDTH,
            HEIGHT
        };
        COORD characterPos =
        {
            0,
            0
        };
        SMALL_RECT writeArea =
        {
            0,
            0,
            WIDTH - 1,
            HEIGHT - 1
        };

        SetConsoleTitle(TEXT("Credits (Matrix)"));

        for (int i = 0; i < WIDTH; i++) //trails
            init_trail( & trails[i]);
        for (;;) //matrix
        {
            update(consoleBuffer);
            WriteConsoleOutputA(wHnd, consoleBuffer,
                                charBufSize, characterPos, & writeArea);
            Sleep(5);

        }
        break;

    case 4:
        printf("\n  Thank You!    Exiting....\n");
        sleep(1);
        sys("cls");
        return 0;
        break;

    case 2:
core:
        SetConsoleTitle(TEXT("ADB Programs (NOT working)"));
        sys("cls");
        fastloadbar();
        sys("cls");
        printf("\n\n\n\n");
        printf("\n                                    MENU \n\n");
        printf("\n                   [A] ADB Connect       [F] ADB Disconnect");
        printf("\n                   [B] Full Dump         [G] Watch Logcat");
        printf("\n                   [C] Advance Reboot    [H] Clear All Caches");
        printf("\n                   [D] Phone Info's      [I] Help");
        printf("\n                   [E] ADB (ROOT)        [J] Exit\n\n");
        s("%s", & cat);

        switch (cat)
        {

        case 'a':
        case 'A':
            sys("cls");
            printf("\nConnecting... Please wait..\n");
            printf("\nStarting server...");
            sys("adb start-server");
            sleep(1);
            printf("\nStarted successfully\n");
            sys("adb connect 192.168.0.100");
            sys("adb connect 192.168.0.101");
            sys("adb connect 192.168.0.102");
            sys("adb connect 192.168.0.103");
            sys("adb connect 192.168.0.104");
            sys("adb connect 192.168.0.105");
            sys("cls");
            printf("Connected!");
            break;

        case 'f':
        case 'F':
            printf("\nDisconnecting...\n");
            sys("adb disconnect");
            sys("adb kill-server");
            printf("\nDone!");
            break;

        case 'b':
        case 'B':
            printf("\nDump Started...\n");
            sys("adb shell dumpsys");
            printf("\n Dumpsys saved at adb' directory.");
            break;

        case 'g':
        case 'G':
            printf("\nLogcat Started...\n");
            sys("adb logcat");
            break;
        //Case E
        case 'c':
        case 'C': //advance reboot
            printf("\nAdvance Reboot \n");
            printf("\nChoose:");
            printf("\n[A] Reboot");
            printf("\n[B] Reboot to Recovery");
            printf("\n[C] Reboot to Bootloader");
            printf("\n[D] Power Off\n");
            s("%s", & rebp);
            //Option mechanism
            if (rebp == 'a' || rebp == 'A')
            {
                printf("Rebooting...\n");
                sys("adb reboot");
                printf("\nDone!\n");
            }
            else if (rebp == 'b' || rebp == 'B')
            {
                printf("Rebooting to recovery...\n");
                sys("adb reboot recovery");
                printf("\nDone!\n");
            }
            else if (rebp == 'c' || rebp == 'C')
            {
                printf("Rebooting to bootloader(fastboot)...\n");
                sys("adb reboot bootloader");
                printf("\nDone!\n");
            }
            else if (rebp == 'd' || rebp == 'D')
            {
                printf("Powering off...\n");
                sys("adb shell reboot -p");
                printf("\nDone!\n");
            }
            else
            {
                printf("Invalid!\n");
            }
            break;
        //Case E end
        case 'h':
        case 'H':
            printf("\nClearing all caches...\n");
            sys("adb shell pm trim-caches 999g");
            printf("\nDone!");
            break;

        case 'd':
        case 'D': //phone infos
inf:
            sys("cls");
            printf("\n\n\n\n");
            printf("\n                             PHONE INFORMATION \n\n");
            printf("\n                 [A] Battery Status      [F] Netstat");
            printf("\n                 [B] Features            [G] Services");
            printf("\n                 [C] Serial No.'s        [H] Screen Size");
            printf("\n                 [D] Process Status      [I] List Root Directories");
            printf("\n                 [E] List All Packages   [J] Main Menu\n");
            s("%s", & inf);
            //Option Mechanism
            if (inf == 'a' || inf == 'A')
            {
                printf("\nBattery Status\n");
                sys("adb shell dumpsys battery");
            }
            else if (inf == 'f' || inf == 'F')
            {
                printf("\nNetstat\n");
                sys("adb shell netstat");
            }
            else if (inf == 'b' || inf == 'B')
            {
                printf("\nFeatures\n");
                sys("adb shell pm list features");
            }
            else if (inf == 'g' || inf == 'G')
            {
                printf("\nServices\n");
                sys("adb shell service list");
            }
            else if (inf == 'c' || inf == 'C')
            {
                printf("\nSerial No.'s\n");
                sys("adb shell get-state");
                sys("adb shell get-serialno");
            }
            else if (inf == 'h' || inf == 'H')
            {
                printf("\nScreen Size\n");
                sys("adb shell wm size");
            }
            else if (inf == 'd' || inf == 'D')
            {
                printf("\nProcess Status\n");
                sys("adb shell ps");
            }
            else if (inf == 'i' || inf == 'I')
            {
                printf("\nRoot Directories\n");
                sys("adb shell ls");
            }
            else if (inf == 'e' || inf == 'E')
            {
                printf("\nList All Packages\n");
                sys("adb shell list packages");
            }
            else if (inf == 'j' || inf == 'J')
            {
                goto core;
                break;
            }
            else
            {
                printf("Invalid!\n");
                goto inf;

            }
            break;

        case 'i':
        case 'I':
            printf("\nHelp\n");
            sys("adb help");
            break;

        case 'e':
        case 'E':
            printf("\nRunning as ROOT...\n");
            sys("adb root");
            break;

        case 'j':
        case 'J':
            return 0;
            exit(0);

        default:
            printf("\nUnknown!");

        }
    } // Main switch end bracket

    printf("\n\n [1] Return to  Main Menu");
    printf("\n\n [2] Exit\n");
    s("%s", & exm);
    if (exm == '1')
    {
        sys("cls");
        fastloadbar();
        sys("cls");
        goto choi;
    }
    else if (exm == '2')
    {
        sleep(1);
        exit(0);
    }

    return 0;
} // int main end bracket
