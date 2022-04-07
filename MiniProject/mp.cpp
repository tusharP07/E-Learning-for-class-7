#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <fstream>
#include<iomanip>

int science();
int maths();
int ss();
int english();
void clrscr();
int hc();
int tah();

void clrscr()
{
        system("cls");
}

using namespace std;
int main()
{

        clrscr();
        std::cout<<endl;
        std::cout<< " WELCOME TO CLASS 7th" << endl;
        std::cout<<endl;
        char ch;
        
        std::cout << " Class 7th subjects:" << endl;
        std::cout<<endl;
        std::cout << " A : SCIENCE" << endl;
        std::cout << " B : MATHS" << endl;
        std::cout << " C : SOCIAL SCIENCE" << endl;
        std::cout << " D : ENGLISH" << endl;
        std::cout << " E : exit" << endl;
        std::cout<<endl;

LOOP:
        std::cout << " Choose above subject code= ";
        std::cin >> ch;
        std::cout << endl;
        std::cout<<endl;
        switch (ch)
        {
        case 'A':
                science();
                break;

        case 'B':
                maths();
                break;

        case 'C':
                ss();
                break;

        case 'D':
                english();
                break;

        case 'E':
                exit(0);
                clrscr();
                break;

        default:
                std::cout << " Enter valid choice" << endl;
                ;
                goto LOOP;
                break;
        }

        goto LOOP;
        getch();
        return 0;
}

int science()
{
        int s;
        std::cout << "                ///  SCIENCE  ///" << endl;
        std::cout << endl;
        std::cout << "    In SCIENCE total 18 chapters" << endl
                  << endl;

        std::cout << "        | CHAPTER 1: NUTRITION IN PLANTS \\" << endl;
        std::cout << "        | CHAPTER 2: NUTRITION IN ANIMAL \\" << endl;
        std::cout << "        | CHAPTER 3: FIBRE TO FABRIC \\" << endl;
        std::cout << "        | CHAPTER 4: HEAT \\" << endl;
        std::cout << "        | CHAPTER 5: ACID,BASIS AND SALTS \\" << endl;
        std::cout << "        | CHAPTER 6: PHYSICAL AND CHEMICAL CHANGES \\" << endl;
        std::cout << "        | CHAPTER 7: WEATHER,CLIMATE AND ADAPTATION OF ANIMAL OF CLIMATE \\" << endl;
        std::cout << "        | CHAPTER 8: WINDS,STORMS AND CYCLONES \\" << endl;
        std::cout << "        | CHAPTER 9: SOIL \\" << endl;
        std::cout << "        | CHAPTER 10: RESPIRATION IN ORGANISM \\" << endl;
        std::cout << "        | CHAPTER 11: TRANSPORTATION IN ANIMAL AND PLANTS \\" << endl;
        std::cout << "        | CHAPTER 12: REPRODUCTION IN PLANTS \\" << endl;
        std::cout << "        | CHAPTER 13: MOTION AND TIME \\" << endl;
        std::cout << "        | CHAPTER 14: ELECTRIC CURRENT AND ITS EFFECTS \\" << endl;
        std::cout << "        | CHAPTER 15: LIGHT \\" << endl;
        std::cout << "        | CHAPTER 16: WATER- A PRECIOUS RESOURCE \\" << endl;
        std::cout << "        | CHAPTER 17: FORESTS- OUR LIFELINE \\" << endl;
        std::cout << "        | CHAPTER 18: WASTEWATER STORY \\" << endl;
        std::cout << endl;
        std::cout << "    we will study about all chapters";
        std::cout << endl;

CHOICE:

        std::cout << endl;
        std::cout << "    [ NOTE:For close SCIENCE session enter 0 ]" << endl;
        std::cout << "    Enter CHAPTER NO. from above chapter's to study= ";
        std::cin >> s;
        std::cout << endl;

        if (s == 0)
        {
                main();
        }
        else
        {
                do
                {
                        switch (s)
                        {
                        case 1:
                        {
                                string a = " https://youtu.be/aEYovzjp9_o";
                                std::cout << "    SCIENCE Chapter 1 link= " << a << endl;
                                system(std::string("start" + a).c_str());
                        }
                                goto CHOICE;
                                break;

                        case 2:
                        {
                                string b = " https://youtu.be/GLHSzvBASac";
                                std::cout << "    SCIENCE Chapter 2 link= " << b << endl;
                                system(std::string("start" + b).c_str());
                        }

                                goto CHOICE;
                                break;

                        case 3:
                        {
                                string c = " https://youtu.be/-2282VbwuMA";

                                std::cout << "    SCIENCE Chapter 3 link= " << c << endl;
                                system(std::string("start" + c).c_str());
                        }
                                goto CHOICE;
                                break;

                        case 4:
                        {
                                string d = " https://youtu.be/1gECkyj0VQg";
                                std::cout << "    SCIENCE Chapter 4 link= " << d << endl;
                                system(std::string("start" + d).c_str());
                        }
                                goto CHOICE;
                                break;

                        case 5:
                        {
                                string e = " https://youtu.be/2nvjxNVEGe8";
                                std::cout << "    SCIENCE Chapter 5 link= " << e << endl;
                                system(std::string("start" + e).c_str());
                        }
                                goto CHOICE;
                                break;

                        case 6:
                        {
                                string f = " https://youtu.be/zbKXTJ22Mvc";
                                std::cout << "    SCIENCE Chapter 6 link= " << f << endl;
                                system(std::string("start" + f).c_str());
                        }
                                goto CHOICE;
                                break;

                        case 7:
                        {
                                string g = " https://youtu.be/1l7lxW2XxdM";
                                std::cout << "    SCIENCE Chapter 7 link= " << g << endl;
                                system(std::string("start" + g).c_str());
                        }
                                goto CHOICE;
                                break;

                        case 8:
                        {
                                string h = " https://youtu.be/HEAqnvOBG-k";
                                std::cout << "    SCIENCE Chapter 8 link= " << h << endl;
                                system(std::string("start" + h).c_str());
                        }
                                goto CHOICE;
                                break;

                        case 9:
                        {
                                string i = " https://youtu.be/kLo5hvPZWRQ";
                                std::cout << "    SCIENCE Chapter 9 link= " << i << endl;
                                system(std::string("start" + i).c_str());
                        }
                                goto CHOICE;
                                break;

                        case 10:
                        {
                                string j = " https://youtu.be/QGiqFmqYv0Y";
                                std::cout << "    SCIENCE Chapter 10 link= " << j << endl;
                                system(std::string("start" + j).c_str());
                        }
                                goto CHOICE;
                                break;

                        case 11:
                        {
                                string k = " https://youtu.be/ZiuVy3X6JKI";
                                std::cout << "    SCIENCE Chapter 11 link= " << k << endl;
                                system(std::string("start" + k).c_str());
                        }
                                goto CHOICE;
                                break;

                        case 12:
                        {
                                string l = " https://youtu.be/6jIl71OUeJQ";
                                std::cout << "    SCIENCE Chapter 12 link= " << l << endl;
                                system(std::string("start" + l).c_str());
                        }
                                goto CHOICE;
                                break;

                        case 13:
                        {
                                string m = " https://youtu.be/2oOOap8AIKI";
                                std::cout << "    SCIENCE Chapter 13 link= " << m << endl;
                                system(std::string("start" + m).c_str());
                        }
                                goto CHOICE;
                                break;

                        case 14:
                        {
                                string n = " https://youtu.be/-Pzf7A_FOlc";
                                std::cout << "    SCIENCE Chapter 14 link= " << n << endl;
                                system(std::string("start" + n).c_str());
                        }
                                goto CHOICE;
                                break;

                        case 15:
                        {
                                string o = " https://youtu.be/14kFDnRb68U";
                                std::cout << "    SCIENCE Chapter 15 link= " << o << endl;
                                system(std::string("start" + o).c_str());
                        }
                                goto CHOICE;
                                break;

                        case 16:
                        {
                                string p = " https://youtu.be/C26IOaROtPE";
                                std::cout << "    SCIENCE Chapter 16 link= " << p << endl;
                                system(std::string("start" + p).c_str());
                        }
                                goto CHOICE;
                                break;

                        case 17:
                        {
                                string q = " https://youtu.be/22ADWbltHL0";
                                std::cout << "    SCIENCE Chapter 17 link= " << q << endl;
                                system(std::string("start" + q).c_str());
                        }
                                goto CHOICE;
                                break;

                        case 18:
                        {
                                string r = " https://youtu.be/g0It2j8Rrsw";
                                std::cout << "    SCIENCE Chapter 18 link= " << r << endl;
                                system(std::string("start" + r).c_str());
                        }
                                goto CHOICE;
                                break;

                        default:
                                std::cout << "   Enter valid choice" << endl;
                                goto CHOICE;
                                break;
                        }
                } while (s <= 18);
        }

        std::cout << endl;

        return 0;
}

int maths()
{
        int m;
        std::cout << "                        ///     MATHEMATIC$     ///" << endl;
        std::cout << endl;
        std::cout << " There are total 10 chapters in MATHEMATICS" << endl
                  << endl;

        std::cout << "         | Chapter 1: INTEGERS \\" << endl;
        std::cout << "         | Chapter 2: FRACTIONS AND DECIMAL \\" << endl;
        std::cout << "         | Chapter 3: DATA HANDLING \\" << endl;
        std::cout << "         | Chapter 4: SIMPLE EQUETIONS \\" << endl;
        std::cout << "         | Chapter 5: LINES AND ANGLE \\" << endl;
        std::cout << "         | Chapter 6: THE TRIANGLE AND ITS PROPERTIES \\" << endl;
        std::cout << "         | Chapter 7: CONGRUENCE OF TRIANGLE \\" << endl;
        std::cout << "         | Chapter 8: COMPAIRING QUANTITIES \\" << endl;
        std::cout << "         | Chapter 9: RATIONAL NUMBERS \\" << endl;
        std::cout << "         | Chapter 10: PRACTICAL GEOMETRY \\" << endl;
        std::cout << "         | Chapter 11: PERIMETER AND AREA \\" << endl;
        std::cout << "         | Chapter 12: ALGEBRIC EXPRESSIONS \\" << endl;
        std::cout << "         | Chapter 13: EXPONENTS AND POWER \\" << endl;
        std::cout << "         | Chapter 14: SYMMERTY \\" << endl;
        std::cout << "         | Chapter 15: VISUALISING SOLID SHAPES \\" << endl;
        std::cout << endl;

CAL:

        std::cout << endl;
        std::cout << "    [ NOTE:For close MATHS session enter 0 ]" << endl;
        std::cout << "    Enter CHAPTER NO. from above chapter's to study= ";
        std::cin >> m;
        std::cout << endl;

        if (m == 0)
        {
                main();
        }

        else
        {
                do
                {
                        switch (m)
                        {
                        case 1:
                        {
                                string a = " https://www.youtube.com/watch?v=w-pCV3dLr7c&list=PL5aQFo5utHdfdWteCqv9uu2MVXx-l-M6O";
                                std::cout << "    MATHS Chapter 1 link= " << a << endl;
                                system(std::string("start" + a).c_str());
                        }
                                goto CAL;
                                break;

                        case 2:
                        {
                                string b = " https://www.youtube.com/watch?v=0vuHnTWs-VY&list=PL5aQFo5utHdeLxfJ6G_gAJpJ999RHha11";
                                std::cout << "    MATHS Chapter 2 link= " << b << endl;
                                system(std::string("start" + b).c_str());
                        }

                                goto CAL;
                                break;

                        case 3:
                        {
                                string c = " https://www.youtube.com/watch?v=4Hkz7Fc5zTM&list=PL5aQFo5utHdfe1ucJnHo_l8YdvSks96uM";

                                std::cout << "    MATHS Chapter 3 link= " << c << endl;
                                system(std::string("start" + c).c_str());
                        }
                                goto CAL;
                                break;

                        case 4:
                        {
                                string d = " https://www.youtube.com/watch?v=DxrmJOqUVjQ&list=PL5aQFo5utHdcfl9dtkeDGbKk96HXWjUFO";
                                std::cout << "    MATHS Chapter 4 link= " << d << endl;
                                system(std::string("start" + d).c_str());
                        }
                                goto CAL;
                                break;

                        case 5:
                        {
                                string e = " https://youtu.be/2nvjxNVEGe8";
                                std::cout << "    MATHS Chapter 5 link= " << e << endl;
                                system(std::string("start" + e).c_str());
                        }
                                goto CAL;
                                break;

                        case 6:
                        {
                                string f = " https://youtu.be/zbKXTJ22Mvc";
                                std::cout << "    MATHS Chapter 6 link= " << f << endl;
                                system(std::string("start" + f).c_str());
                        }
                                goto CAL;
                                break;

                        case 7:
                        {
                                string g = " https://youtu.be/1l7lxW2XxdM";
                                std::cout << "    MATHS Chapter 7 link= " << g << endl;
                                system(std::string("start" + g).c_str());
                        }
                                goto CAL;
                                break;

                        case 8:
                        {
                                string h = " https://youtu.be/HEAqnvOBG-k";
                                std::cout << "    MATHS Chapter 8 link= " << h << endl;
                                system(std::string("start" + h).c_str());
                        }
                                goto CAL;
                                break;

                        case 9:
                        {
                                string i = " https://youtu.be/kLo5hvPZWRQ";
                                std::cout << "    MATHS Chapter 9 link= " << i << endl;
                                system(std::string("start" + i).c_str());
                        }
                                goto CAL;
                                break;

                        case 10:
                        {
                                string j = " https://youtu.be/QGiqFmqYv0Y";
                                std::cout << "    MATHS Chapter 10 link= " << j << endl;
                                system(std::string("start" + j).c_str());
                        }
                                goto CAL;
                                break;

                        case 11:
                        {
                                string k = " https://youtu.be/ZiuVy3X6JKI";
                                std::cout << "    MATHS Chapter 11 link= " << k << endl;
                                system(std::string("start" + k).c_str());
                        }
                                goto CAL;
                                break;

                        case 12:
                        {
                                string l = " https://youtu.be/6jIl71OUeJQ";
                                std::cout << "    MATHS Chapter 12 link= " << l << endl;
                                system(std::string("start" + l).c_str());
                        }
                                goto CAL;
                                break;

                        case 13:
                        {
                                string m = " https://youtu.be/2oOOap8AIKI";
                                std::cout << "    MATHS Chapter 13 link= " << m << endl;
                                system(std::string("start" + m).c_str());
                        }
                                goto CAL;
                                break;

                        case 14:
                        {
                                string n = " https://youtu.be/-Pzf7A_FOlc";
                                std::cout << "    MATHS Chapter 14 link= " << n << endl;
                                system(std::string("start" + n).c_str());
                        }
                                goto CAL;
                                break;

                        case 15:
                        {
                                string o = " https://youtu.be/14kFDnRb68U";
                                std::cout << "    MATHS Chapter 15 link= " << o << endl;
                                system(std::string("start" + o).c_str());
                        }
                                goto CAL;
                                break;

                        default:
                                std::cout << "   Enter valid choice" << endl;
                                goto CAL;
                                break;
                        }
                } while (m <= 15);
        }

        std::cout << endl;

        return 0;
}

int ss()
{
SOC:
        int st;
        std::cout << endl;
        std::cout << "                           ///      SOCIAL SCIENCE        ///" << endl;
        std::cout << endl;
        std::cout << " total 3 parts";
        std::cout << endl;

        std::cout << endl;

        std::cout << " 1: HISTORY (PAST II)" << endl;
        std::cout << " 2: POLITICAL SCIENCE" << endl;
        std::cout << " 3: GEOGRAPHY (ENVIRONMENT)" << endl;
        std::cout << endl;

        std::cout << "    NOTE:For close SS session enter 0" << endl;
        std::cout << "    Enter PART NO. from above part's to study= ";
        std::cin >> st;
        std::cout << endl;

        if (st == 0)
        {
                main();
        }

        else
        {
                switch (st)
                {
                case 1:
                        std::cout << "  | HISTORY \\\\ " << endl;
                        std::cout << "           | CHAPTER 1: TRACING CHANGES THROUGH A THOUSAND YEARS \\" << endl;
                        std::cout << "           | CHAPTER 2: NEW KINGS & KINGDOMS \\" << endl;
                        std::cout << "           | CHAPTER 3: THE DEHLI SULTANS \\" << endl;
                        std::cout << "           | CHAPTER 4: THE MUGHAL EMPIRE \\" << endl;
                        std::cout << "           | CHAPTER 5: RULERS AND BUILDINGS \\" << endl;
                        std::cout << "           | CHAPTER 6: TOWNS,TRADERS & CRAFTSPERSONS \\" << endl;
                        std::cout << "           | CHAPTER 7: TRIBES,NOMADS & SETTLED COMMUNITIES \\" << endl;
                        std::cout << "           | CHAPTER 8: DEVOTIONAL PATHS TO THE DIVINE \\" << endl;
                        std::cout << "           | CHAPTER 9: THE MAKING OF REGIONAL CULTURES \\" << endl;
                        std::cout << "           | CHAPTER 10: EIGHTEETH CENTURY POLITICAL FORMATION \\" << endl;
                        std::cout << endl;

                HS:
                        int h;
                        std::cout << endl;
                        std::cout << "          NOTE:For close HISTORY session enter 0" << endl;
                        std::cout << "          Enter CHAPTER NO. from above chapter's to study= ";
                        std::cin >> h;
                        std::cout << endl;

                        if (h == 0)
                        {
                                goto SOC;
                        }
                        else
                        {
                                switch (h)
                                {
                                case 1:
                                {
                                        string a = " https://youtu.be/AcJzSFwCfWs";
                                        std::cout << "    HISTORY Chapter 1 link= " << a << endl;
                                        system(std::string("start" + a).c_str());
                                }
                                        goto HS;
                                        break;

                                case 2:
                                {
                                        string b = " https://youtu.be/LADNv3VlA_Y";
                                        std::cout << "    HISTORY Chapter 2 link= " << b << endl;
                                        system(std::string("start" + b).c_str());
                                }
                                        goto HS;
                                        break;

                                case 3:
                                {
                                        string c = " https://youtu.be/V6Pb2cuerk4";
                                        std::cout << "    HISTORY Chapter 3 link= " << c << endl;
                                        system(std::string("start" + c).c_str());
                                }
                                        goto HS;
                                        break;

                                case 4:
                                {
                                        string d = " https://youtu.be/HCumu07LtTo";
                                        std::cout << "    HISTORY Chapter 4 link= " << d << endl;
                                        system(std::string("start" + d).c_str());
                                }
                                        goto HS;
                                        break;

                                case 5:
                                {
                                        string e = " https://youtu.be/adWNMbaknXo";
                                        std::cout << "    HISTORY Chapter 5 link= " << e << endl;
                                        system(std::string("start" + e).c_str());
                                }
                                        goto HS;
                                        break;

                                case 6:
                                {
                                        string f = " https://youtu.be/uSv4CwDyjIs";
                                        std::cout << "    HISTORY Chapter 6 link= " << f << endl;
                                        system(std::string("start" + f).c_str());
                                }
                                        goto HS;
                                        break;

                                case 7:
                                {
                                        string g = " https://youtu.be/AL3JeXPoj3E";
                                        std::cout << "    HISTORY Chapter 7 link= " << g << endl;
                                        system(std::string("start" + g).c_str());
                                }
                                        goto HS;
                                        break;

                                case 8:
                                {
                                        string h = " https://youtu.be/0t--M5Y2hh0";
                                        std::cout << "    HISTORY Chapter 8 link= " << h << endl;
                                        system(std::string("start" + h).c_str());
                                }
                                        goto HS;
                                        break;

                                case 9:
                                {
                                        string i = " https://youtu.be/e_a3j4PYDG8";
                                        std::cout << "    HISTORY Chapter 9 link= " << i << endl;
                                        system(std::string("start" + i).c_str());
                                }
                                        goto HS;
                                        break;

                                case 10:
                                {
                                        string j = " https://youtu.be/9ToZUxyTiOA";
                                        std::cout << "    HISTORY Chapter 10 link= " << j << endl;
                                        system(std::string("start" + j).c_str());
                                }
                                        goto HS;
                                        break;

                                default:
                                        std::cout << "  Enter valid choice" << endl;
                                        goto HS;
                                        break;
                                }
                        }
                        goto SOC;
                        break;

                case 2:
                        std::cout << "  | POLITICAL SCIENCE \\\\" << endl;
                        std::cout << "           | CHAPTER 1: ON EQIETY \\" << endl;
                        std::cout << "           | CHAPTER 2: ROLE OF THE GOVERNMENT IN HEALTH \\" << endl;
                        std::cout << "           | CHAPTER 3: HOW THE STATE GOVERNMENT WORKS \\" << endl;
                        std::cout << "           | CHAPTER 4: GROWING UP AS BOYS & GIRLS \\" << endl;
                        std::cout << "           | CHAPTER 5: WOMEN CHANGE THE WORLD \\" << endl;
                        std::cout << "           | CHAPTER 6: UNDERSTANDING MEDIA \\" << endl;
                        std::cout << "           | CHAPTER 7: MARKETS AROUND US \\" << endl;
                        std::cout << "           | CHAPTER 8: A SHIRT IN THE MARKET \\" << endl;
                        std::cout << "           | CHAPTER 9: STRUGGLES OF EQUALITY \\" << endl;
                        std::cout << endl;

                PS:
                        int p;
                        std::cout << endl;
                        std::cout << "          NOTE:For close POLITICAL SCIENCE session enter 0" << endl;
                        std::cout << "          Enter CHAPTER NO. from above chapter's to study= ";
                        std::cin >> p;
                        std::cout << endl;

                        if (p == 0)
                        {
                                goto SOC;
                        }
                        else
                        {
                                switch (p)
                                {
                                case 1:
                                {
                                        string a = " https://youtu.be/h-7TCb-Eat0";
                                        std::cout << "    HISTORY Chapter 10 link= " << a << endl;
                                        system(std::string("start" + a).c_str());
                                }
                                        goto PS;
                                        break;

                                case 2:
                                {
                                        string b = " https://www.youtube.com/watch?v=w-pCV3dLr7c&list=PL5aQFo5utHdfdWteCqv9uu2MVXx-l-M6O";
                                        std::cout << "    HISTORY Chapter 10 link= " << b << endl;
                                        system(std::string("start" + b).c_str());
                                }
                                        goto PS;
                                        break;

                                case 3:
                                {
                                        string c = " https://youtu.be/PdhNBNIgSoM";
                                        std::cout << "    HISTORY Chapter 10 link= " << c << endl;
                                        system(std::string("start" + c).c_str());
                                }
                                        goto PS;
                                        break;

                                case 4:
                                {
                                        string d = " https://youtu.be/NIEHxF12TH0";
                                        std::cout << "    HISTORY Chapter 10 link= " << d << endl;
                                        system(std::string("start" + d).c_str());
                                }
                                        goto PS;
                                        break;

                                case 5:
                                {
                                        string e = " https://youtu.be/YlUQWzYrkS0S";
                                        std::cout << "    HISTORY Chapter 10 link= " << e << endl;
                                        system(std::string("start" + e).c_str());
                                }
                                        goto PS;
                                        break;

                                case 6:
                                {
                                        string f = " https://youtu.be/t_SvvYKELXc";
                                        std::cout << "    HISTORY Chapter 10 link= " << f << endl;
                                        system(std::string("start" + f).c_str());
                                }
                                        goto PS;
                                        break;

                                case 7:
                                {
                                        string g = " https://youtu.be/0twyx2r3-zo";
                                        std::cout << "    HISTORY Chapter 10 link= " << g << endl;
                                        system(std::string("start" + g).c_str());
                                }
                                        goto PS;
                                        break;

                                case 8:
                                {
                                        string h = " https://youtu.be/uXBtuPDhnuU";
                                        std::cout << "    HISTORY Chapter 10 link= " << h << endl;
                                        system(std::string("start" + h).c_str());
                                }
                                        goto PS;
                                        break;

                                case 9:
                                {
                                        string i = " https://youtu.be/EGEI-THMS-k";
                                        std::cout << "    HISTORY Chapter 10 link= " << i << endl;
                                        system(std::string("start" + i).c_str());
                                }
                                        goto PS;
                                        break;

                                default:
                                        std::cout << "  Enter valid choice" << endl;
                                        goto PS;
                                        break;
                                }
                        }
                        goto SOC;
                        break;

                case 3:
                        std::cout << "  | GEOGRAPHY \\\\" << endl;
                        std::cout << "           | CHAPTER 1: ENVIRONMENT \\" << endl;
                        std::cout << "           | CHAPTER 2: INSIDE OUR CHANGE \\" << endl;
                        std::cout << "           | CHAPTER 3: OUR CHANGING EARTH \\" << endl;
                        std::cout << "           | CHAPTER 4: AIR \\" << endl;
                        std::cout << "           | CHAPTER 5: WATER \\" << endl;
                        std::cout << "           | CHAPTER 6: NATURAL VEGITATION & WILDLIFE \\" << endl;
                        std::cout << "           | CHAPTER 7: HUMAN ENVIRONMENT- SETTLEMENT,TRANSPORT & COMMUNICATION \\" << endl;
                        std::cout << "           | CHAPTER 8: HUMAN ENVIRONMENT INTERACTION- THE TROPICAL & SUBTROPICAL REGION \\" << endl;
                        std::cout << "           | CHAPTER 9: LIFE IN THE DESERTS \\" << endl;

                        std::cout << endl;

                GE:
                        int g;
                        std::cout << endl;
                        std::cout << "          NOTE:For close GEOGRAPHY session enter 0" << endl;
                        std::cout << "          Enter CHAPTER NO. from above chapter's to study= ";
                        std::cin >> g;
                        std::cout << endl;

                        if (g == 0)
                        {
                                goto SOC;
                        }
                        else
                        {
                                switch (g)
                                {
                                case 1:
                                {
                                        string a = " https://www.youtube.com/watch?v=w-pCV3dLr7c&list=PL5aQFo5utHdfdWteCqv9uu2MVXx-l-M6O";
                                        std::cout << "    GEOGRAPHY Chapter 10 link= " << a << endl;
                                        system(std::string("start" + a).c_str());
                                }
                                        goto GE;
                                        break;

                                case 2:
                                {
                                        string b = " https://youtu.be/zQOB3zr4ks8";
                                        std::cout << "    GEOGRAPHY Chapter 10 link= " << b << endl;
                                        system(std::string("start" + b).c_str());
                                }
                                        goto GE;
                                        break;

                                case 3:
                                {
                                        string c = " https://youtu.be/zKv-A_YvJ5w";
                                        std::cout << "    GEOGRAPHY Chapter 10 link= " << c << endl;
                                        system(std::string("start" + c).c_str());
                                }
                                        goto GE;
                                        break;

                                case 4:
                                {
                                        string d = " https://youtu.be/qggk5vMBxLY";
                                        std::cout << "    GEOGRAPHY Chapter 10 link= " << d << endl;
                                        system(std::string("start" + d).c_str());
                                }
                                        goto GE;
                                        break;

                                case 5:
                                {
                                        string e = " https://youtu.be/Pu5QPfK-ask";
                                        std::cout << "    GEOGRAPHY Chapter 10 link= " << e << endl;
                                        system(std::string("start" + e).c_str());
                                }
                                        goto GE;
                                        break;

                                case 6:
                                {
                                        string f = " https://youtu.be/8kbOEhb0hho";
                                        std::cout << "    GEOGRAPHY Chapter 10 link= " << f << endl;
                                        system(std::string("start" + f).c_str());
                                }
                                        goto GE;
                                        break;

                                case 7:
                                {
                                        string g = " https://youtu.be/LJ5dMmQKL8c";
                                        std::cout << "    GEOGRAPHY Chapter 10 link= " << g << endl;
                                        system(std::string("start" + g).c_str());
                                }
                                        goto GE;
                                        break;

                                case 8:
                                {
                                        string h = " https://youtu.be/3GOgrdftf98";
                                        std::cout << "    GEOGRAPHY Chapter 10 link= " << h << endl;
                                        system(std::string("start" + h).c_str());
                                }
                                        goto GE;
                                        break;

                                case 9:
                                {
                                        string i = " https://youtu.be/51DQJn6uLHU";
                                        std::cout << "    GEOGRAPHY Chapter 10 link= " << i << endl;
                                        system(std::string("start" + i).c_str());
                                }
                                        goto GE;
                                        break;

                                default:
                                        std::cout << "  Enter valid choice" << endl;
                                        goto GE;
                                        break;
                                }
                        }
                        goto SOC;
                        break;

                default:
                        std::cout << " Enter valid choice" << endl;
                        goto SOC;
                        break;
                }
        }

        std::cout << endl;

        return 0;
}

int english()
{
        int e;
        std::cout << endl;
        std::cout << "                      ///      ENGLISH         ///" << endl;
        std::cout << endl;
        std::cout << endl;

ENG:
        std::cout << " In ENGLISH there are two parts:";
        std::cout << endl;
        std::cout << " 1: HONEY COMB" << endl;
        std::cout << " 2: THE ALIEN HAND" << endl;
        std::cout << endl;

        std::cout << "    NOTE:For close ENGLISH session enter 0" << endl;
        std::cout << "    Enter PART NO. from above part's to study= ";
        std::cin >> e;
        std::cout << endl;

        if (e == 0)
        {
                main();
        }
        else
        {
                switch (e)
                {
                case 1:
                        hc();
                        goto ENG;
                        break;

                case 2:
                        tah();
                        goto ENG;
                        break;

                default:
                        std::cout << "  Enter valid choice" << endl;
                        goto ENG;
                        break;
                }
        }

        return 0;
}

int hc()
{
        std::cout << endl;

        std::cout << "   | HONEYCOMB \\\\";
        std::cout << endl;

        std::cout << endl;
        std::cout << "           | CHAPTER 1: THREE QUESTIONS AND THE SQUIRREL \\" << endl;
        std::cout << "           | CHAPTER 2: A GIFT OF CHAPPALS AND THE REBELL \\" << endl;
        std::cout << "           | CHAPTER 3: GOPAL AND THE HILSA FISH AND THE SHED \\" << endl;
        std::cout << "           | CHAPTER 4: THE ASHESH THAT MADE TREES BLOOM AND CHIVVY \\" << endl;
        std::cout << "           | CHAPTER 5: QUALITY AND TREES \\" << endl;
        std::cout << "           | CHAPTER 6: EXPERT DETECTIVES AND MYSTRY OF THE TALKING FAN \\" << endl;
        std::cout << "           | CHAPTER 7: THE INVENTION OF VITA-WONK AND DAD AND THE CAT AND THE TREE \\" << endl;
        std::cout << "           | CHAPTER 8: FIRE-FRIEND AND MEADOW SURPRISE \\" << endl;
        std::cout << "           | CHAPTER 9: A BICYCLE IN GOOD REPAIR AND GARDEN SNAKE \\" << endl;
        std::cout << "           | CHAPTER 10: THE STORY OF CRICKET \\" << endl;
        std::cout << endl;
        std::cout << endl;

CH:
        int c;
        std::cout << endl;
        std::cout << "          NOTE:For close HONEYCOMB session enter 0" << endl;
        std::cout << "          Enter CHAPTER NO. from above CHAPTERS to study= ";
        std::cin >> c;
        std::cout << endl;

        if (c == 0)
        {
                english();
        }

        else
        {
                do
                {
                        switch (c)
                        {
                        case 1:
                        {
                                string a = " https://www.youtube.com/watch?v=5NBbo6gHJqM";
                                std::cout << "    HONEYCOMB Chapter 1 link= " << a << endl;
                                system(std::string("start" + a).c_str());
                        }
                                goto CH;
                                break;

                        case 2:
                        {
                                string b = " https://www.youtube.com/watch?v=gqFCNQi66RI";
                                std::cout << "    HONEYCOMB Chapter 2 link= " << b << endl;
                                system(std::string("start" + b).c_str());
                        }

                                goto CH;
                                break;

                        case 3:
                        {
                                string c = " https://www.youtube.com/watch?v=l8nIyeoQI1Q";

                                std::cout << "    HONEYCOMB Chapter 3 link= " << c << endl;
                                system(std::string("start" + c).c_str());
                        }
                                goto CH;
                                break;

                        case 4:
                        {
                                string d = " https://www.youtube.com/watch?v=LPsFQ2vNAwA";
                                std::cout << "    HONEYCOMB Chapter 4 link= " << d << endl;
                                system(std::string("start" + d).c_str());
                        }
                                goto CH;
                                break;

                        case 5:
                        {
                                string e = " https://www.youtube.com/watch?v=KnACVaClKHQ";
                                std::cout << "    HONEYCOMB Chapter 5 link= " << e << endl;
                                system(std::string("start" + e).c_str());
                        }
                                goto CH;
                                break;

                        case 6:
                        {
                                string f = " https://www.youtube.com/watch?v=cFClXgQI9wo";
                                std::cout << "    HONEYCOMB Chapter 6 link= " << f << endl;
                                system(std::string("start" + f).c_str());
                        }
                                goto CH;
                                break;

                        case 7:
                        {
                                string g = " https://www.youtube.com/watch?v=VZxPQsR6m68";
                                std::cout << "    HONEYCOMB Chapter 7 link= " << g << endl;
                                system(std::string("start" + g).c_str());
                        }
                                goto CH;
                                break;

                        case 8:
                        {
                                string h = " https://www.youtube.com/watch?v=y9v_4BUzkPc";
                                std::cout << "    HONEYCOMB Chapter 8 link= " << h << endl;
                                system(std::string("start" + h).c_str());
                        }
                                goto CH;
                                break;

                        case 9:
                        {
                                string i = " https://www.youtube.com/watch?v=PutTUx5H9Z0";
                                std::cout << "    HONEYCOMB Chapter 9 link= " << i << endl;
                                system(std::string("start" + i).c_str());
                        }
                                goto CH;
                                break;

                        case 10:
                        {
                                string j = " https://www.youtube.com/watch?v=hmftMIsLmOs";
                                std::cout << "    HONEYCOMB Chapter 10 link= " << j << endl;
                                system(std::string("start" + j).c_str());
                        }
                                goto CH;
                                break;

                        default:
                                std::cout << "   Enter valid choice" << endl;
                                goto CH;
                                break;
                        }

                } while (c <= 10);
        }

        return 0;
}

int tah()
{
        int t;
        std::cout << endl;

        std::cout << "   | THE ALIEN HAND \\\\";
        std::cout << endl;
        std::cout << endl;
        std::cout << "          | CHAPTER 1: THE TINY TEACHER \\" << endl;
        std::cout << "          | CHAPTER 2: BRINGING UP KARI \\" << endl;
        std::cout << "          | CHAPTER 3: THE DESERT \\" << endl;
        std::cout << "          | CHAPTER 4: THE COP AND THE ANTHEM \\" << endl;
        std::cout << "          | CHAPTER 5: GOLU GROWS A NOSE \\" << endl;
        std::cout << "          | CHAPTER 6: I WANT SOMETHING IN A CAGE \\" << endl;
        std::cout << "          | CHAPTER 7: CHANDNI \\" << endl;
        std::cout << "          | CHAPTER 8: THE BEAR STORY \\" << endl;
        std::cout << "          | CHAPTER 9: A TIGER IN THE HOUSE \\" << endl;
        std::cout << "          | CHAPTER 10: AN ALIEN HAND ENGLISH \\" << endl;
        std::cout << endl;
        std::cout << endl;

TA:
        
        std::cout << endl;
        std::cout << "          NOTE:For close THE ALIEN HAND session enter 0" << endl;
        std::cout << "          Enter your choice from above part's to study= ";
        std::cin >> t;
        std::cout << endl;

        if (t == 0)
        {
                english();
        }

        else
        {
                do
                {

                        switch (t)
                        {
                        case 1:
                        {
                                string a = " https://www.youtube.com/watch?v=HLVB4JRCD8M";
                                std::cout << "    THE ALIEN HAND Chapter 1 link= " << a << endl;
                                system(std::string("start" + a).c_str());
                        }
                                goto TA;
                                break;

                        case 2:
                        {
                                string b = " https://www.youtube.com/watch?v=wMeBGMu3n6I";
                                std::cout << "    THE ALIEN HAND Chapter 2 link= " << b << endl;
                                system(std::string("start" + b).c_str());
                        }

                                goto TA;
                                break;

                        case 3:
                        {
                                string c = " https://www.youtube.com/watch?v=LFl96uXC34s";

                                std::cout << "    THE ALIEN HAND Chapter 3 link= " << c << endl;
                                system(std::string("start" + c).c_str());
                        }
                                goto TA;
                                break;

                        case 4:
                        {
                                string d = " https://www.youtube.com/watch?v=_pju85viJzc";
                                std::cout << "    THE ALIEN HAND Chapter 4 link= " << d << endl;
                                system(std::string("start" + d).c_str());
                        }
                                goto TA;
                                break;

                        case 5:
                        {
                                string e = " https://www.youtube.com/watch?v=Pm6krgoA8BU";
                                std::cout << "    THE ALIEN HAND Chapter 5 link= " << e << endl;
                                system(std::string("start" + e).c_str());
                        }
                                goto TA;
                                break;

                        case 6:
                        {
                                string f = " https://www.youtube.com/watch?v=08CphfKbaEg";
                                std::cout << "    THE ALIEN HAND Chapter 6 link= " << f << endl;
                                system(std::string("start" + f).c_str());
                        }
                                goto TA;
                                break;

                        case 7:
                        {
                                string g = " https://www.youtube.com/watch?v=P-a-cReFxqs";
                                std::cout << "    THE ALIEN HAND Chapter 7 link= " << g << endl;
                                system(std::string("start" + g).c_str());
                        }
                                goto TA;
                                break;

                        case 8:
                        {
                                string h = " https://www.youtube.com/watch?v=6_15mU-q8Wo";
                                std::cout << "    THE ALIEN HAND Chapter 8 link= " << h << endl;
                                system(std::string("start" + h).c_str());
                        }
                                goto TA;
                                break;

                        case 9:
                        {
                                string i = " https://www.youtube.com/watch?v=eiBKESiNQSg";
                                std::cout << "    THE ALIEN HAND Chapter 9 link= " << i << endl;
                                system(std::string("start" + i).c_str());
                        }
                                goto TA;
                                break;

                        case 10:
                        {
                                string j = " https://www.youtube.com/watch?v=fpIHNE3uBQI";
                                std::cout << "    THE ALIEN HAND Chapter 10 link= " << j << endl;
                                system(std::string("start" + j).c_str());
                        }
                                goto TA;
                                break;

                        default:
                                std::cout << "   Enter valid choice" << endl;
                                goto TA;
                                break;
                        }
                } while (t <= 10);
        }

        return 0;
}
