#include <stdio.h>
#include "screen.h"

int book()
{
        char screen[500];

        int a = 0;
        while(a<15)
        {
                int b = 0;
                while(b<30)
                {
                        if(a==0||a==14)
                        {
                                screen[b]='*';
                        }
                        else if(b==0||b==29)
                        {
                                screen[b]='*';
                        }
                        else if(a==1||b==29)
                        {
                                screen[b]='_';
                        }
                        else if(a==8||b==29)
                        {
                                screen[b]='_';
                        }
                        else if(a==3&&b==5)
                        {
                                screen[b]='P';
                        }
                        else if(a==3&&b==6)
                        {
                                screen[b]='l';
                        }
                        else if(a==3&&b==7)
                        {
                                screen[b]='a';
                        }
                        else if(a==3&&b==8)
                        {
                                screen[b]='y';
                        }
                        else if(a==3&&b==9)
                        {
                                screen[b]='e';
                        }
                        else if(a==3&&b==10)
                        {
                                screen[b]='r';
                        }
                        else if(a==3&&b==11)
                        {
                                screen[b]='s';
                        }
                        else if(a==3&&b==13)
                        {
                                screen[b]='M';
                        }
                        else if(a==3&&b==14)
                        {
                                screen[b]='u';
                        }
                        else if(a==3&&b==15)
                        {
                                screen[b]='s';
                        }
                        else if(a==3&&b==16)
                        {
                                screen[b]='t';
                        }
                        else if(a==3&&b==18)
                        {
                                screen[b]='S';
                        }
                        else if(a==3&&b==19)
                        {
                                screen[b]='u';
                        }
                        else if(a==3&&b==20)
                        {
                                screen[b]='r';
                        }
                        else if(a==3&&b==21)
                        {
                                screen[b]='v';
                        }
                        else if(a==3&&b==22)
                        {
                                screen[b]='i';
                        }
                        else if(a==3&&b==23)
                        {
                                screen[b]='v';
                        }
                        else if(a==3&&b==24)
                        {
                                screen[b]='e';
                        }
                        else if(a==4&&b==5)
                        {
                                screen[b]='A';
                        }
                        else if(a==4&&b==6)
                        {
                                screen[b]='s';
                        }
                        else if(a==4&&b==8)
                        {
                                screen[b]='L';
                        }
                        else if(a==4&&b==9)
                        {
                                screen[b]='o';
                        }
                        else if(a==4&&b==10)
                        {
                                screen[b]='n';
                        }
                        else if(a==4&&b==11)
                        {
                                screen[b]='g';
                        }
                        else if(a==4&&b==13)
                        {
                                screen[b]='A';
                        }
                        else if(a==4&&b==14)
                        {
                                screen[b]='s';
                        }
                        else if(a==4&&b==16)
                        {
                                screen[b]='P';
                        }
                        else if(a==4&&b==17)
                        {
                                screen[b]='o';
                        }
                        else if(a==4&&b==18)
                        {
                                screen[b]='s';
                        }
                        else if(a==4&&b==19)
                        {
                                screen[b]='s';
                        }
                        else if(a==4&&b==20)
                        {
                                screen[b]='i';
                        }
                        else if(a==4&&b==21)
                        {
                                screen[b]='b';
                        }
                        else if(a==4&&b==22)
                        {
                                screen[b]='l';
                        }
                        else if(a==4&&b==23)
                        {
                                screen[b]='e';
                        }
                        else if(a==5&&b==5)
                        {
                                screen[b]='W';
                        }
                        else if(a==5&&b==6)
                        {
                                screen[b]='h';
                        }
                        else if(a==5&&b==7)
                        {
                                screen[b]='i';
                        }
                        else if(a==5&&b==8)
                        {
                                screen[b]='l';
                        }
                        else if(a==5&&b==9)
                        {
                                screen[b]='e';
                        }
                        else if(a==5&&b==11)
                        {
                                screen[b]='A';
                        }
                        else if(a==5&&b==12)
                        {
                                screen[b]='v';
                        }
                        else if(a==5&&b==13)
                        {
                                screen[b]='o';
                        }
                        else if(a==5&&b==14)
                        {
                                screen[b]='i';
                        }
                        else if(a==5&&b==15)
                        {
                                screen[b]='d';
                        }
                        else if(a==5&&b==16)
                        {
                                screen[b]='i';
                        }
                        else if(a==5&&b==17)
                        {
                                screen[b]='n';
                        }
                        else if(a==5&&b==18)
                        {
                                screen[b]='g';
                        }
                        else if(a==6&&b==5)
                        {
                                screen[b]='B';
                        }
                        else if(a==6&&b==6)
                        {
                                screen[b]='u';
                        }
                        else if(a==6&&b==7)
                        {
                                screen[b]='b';
                        }
                        else if(a==6&&b==8)
                        {
                                screen[b]='b';
                        }
                        else if(a==6&&b==9)
                        {
                                screen[b]='l';
                        }
                        else if(a==6&&b==10)
                        {
                                screen[b]='e';
                        }
                        else if(a==6&&b==11)
                        {
                                screen[b]='s';
                        }
                        else if(a==6&&b==13)
                        {
                                screen[b]='F';
                        }
                        else if(a==6&&b==14)
                        {
                                screen[b]='l';
                        }
                        else if(a==6&&b==15)
                        {
                                screen[b]='y';
                        }
                        else if(a==6&&b==16)
                        {
                                screen[b]='i';
                        }
                        else if(a==6&&b==17)
                        {
                                screen[b]='n';
                        }
                        else if(a==6&&b==18)
                        {
                                screen[b]='g';
                        }
                        else if(a==6&&b==20)
                        {
                                screen[b]='F';
                        }
                        else if(a==6&&b==21)
                        {
                                screen[b]='r';
                        }
                        else if(a==6&&b==22)
                        {
                                screen[b]='o';
                        }
                        else if(a==6&&b==23)
                        {
                                screen[b]='m';
                        }
                        else if(a==7&&b==5)
                        {
                                screen[b]='E';
                        }
                        else if(a==7&&b==6)
                        {
                                screen[b]='i';
                        }
                        else if(a==7&&b==7)
                        {
                                screen[b]='g';
                        }
                        else if(a==7&&b==8)
                        {
                                screen[b]='h';
                        }
                        else if(a==7&&b==9)
                        {
                                screen[b]='t';
                        }
                        else if(a==7&&b==11)
                        {
                                screen[b]='D';
                        }
                        else if(a==7&&b==12)
                        {
                                screen[b]='i';
                        }
                        else if(a==7&&b==13)
                        {
                                screen[b]='r';
                        }
                        else if(a==7&&b==14)
                        {
                                screen[b]='e';
                        }
                        else if(a==7&&b==15)
                        {
                                screen[b]='c';
                        }
                        else if(a==7&&b==16)
                        {
                                screen[b]='t';
                        }
                        else if(a==7&&b==17)
                        {
                                screen[b]='i';
                        }
                        else if(a==7&&b==18)
                        {
                                screen[b]='o';
                        }
                        else if(a==7&&b==19)
                        {
                                screen[b]='n';
                        }
                        else if(a==7&&b==20)
                        {
                                screen[b]='s';
                        }
                        else if(a==7&&b==21)
                        {
                                screen[b]='.';
                        }
                        else if(a==10&&b==5)
                        {
                                screen[b]='R';
                        }
                        else if(a==10&&b==6)
                        {
                                screen[b]='E';
                        }
                        else if(a==10&&b==7)
                        {
                                screen[b]='T';
                        }
                        else if(a==10&&b==8)
                        {
                                screen[b]='U';
                        }
                        else if(a==10&&b==9)
                        {
                                screen[b]='R';
                        }
                        else if(a==10&&b==10)
                        {
                                screen[b]='N';
                        }
                        else if(a==10&&b==12)
                        {
                                screen[b]='T';
                        }
                        else if(a==10&&b==13)
                        {
                                screen[b]='O';
                        }
                        else if(a==10&&b==15)
                        {
                                screen[b]='M';
                        }
                        else if(a==10&&b==16)
                        {
                                screen[b]='E';
                        }
                        else if(a==10&&b==17)
                        {
                                screen[b]='N';
                        }
                        else if(a==10&&b==18)
                        {
                                screen[b]='U';
                        }
                        else if(a==11&&b==5)
                        {
                                screen[b]='1';
                        }
                        else if(a==11&&b==6)
                        {
                                screen[b]='.';
                        }
                        else if(a==11&&b==8)
                        {
                                screen[b]='Y';
                        }
                        else if(a==11&&b==10)
                        {
                                screen[b]='E';
                        }
                        else if(a==11&&b==12)
                        {
                                screen[b]='S';
                        }
                        else if(a==12&&b==5)
                        {
                                screen[b]='2';
                        }
                        else if(a==12&&b==6)
                        {
                                screen[b]='.';
                        }
                        else if(a==12&&b==8)
                        {
                                screen[b]='N';
                        }
                        else if(a==12&&b==10)
                        {
                                screen[b]='O';
                        }
			else
			{
				screen[b]=' ';
			}
			b+=1;
		}
		screen[30]='\n';
                a+=1;
                printf("%s",screen);
        }

        return 0;
}
