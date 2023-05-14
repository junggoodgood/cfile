#include <stdio.h>
#include "screen.h"

int title()
{
        char screen[500];

        int a = 0;
        while(a<15)
        {
                int b=0;
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
                        else if(a==2||b==29)
                        {
                                screen[b]='_';
                        }
                        else if(a==6||b==29)
                        {
                                screen[b]='_';
                        }
			else if(a==4&&b==3)
			{
				screen[b]='A';
                        }
			else if(a==4&&b==5)
			{
				screen[b]='v';  
                        }
			else if(a==4&&b==7)
			{
				screen[b]='o';
                        }
			else if(a==4&&b==9)
			{
				screen[b]='i';
                         }
			else if(a==4&&b==11)
			{
				screen[b]='d';
                        }
			else if(a==4&&b==13)
			{
				screen[b]='i';  
                        }
			else if(a==4&&b==15)
			{
				screen[b]='n';
                        }
			else if(a==4&&b==17)
			{
				screen[b]='g';
                        }
			else if(a==5&&b==15)
			{
				screen[b]='B';
                        }
			else if(a==5&&b==17)
			{
				screen[b]='u';  
                        }
			else if(a==5&&b==19)
			{
				screen[b]='b';
                        }
			else if(a==5&&b==21)
			{
				screen[b]='b';
                        }
			else if(a==5&&b==23)
			{
				screen[b]='l';
                        }
			else if(a==5&&b==25)
			{
				screen[b]='e';
                        }
			else if(a==9&&b==5)
			{
				screen[b]='1';
                        }
			else if(a==9&&b==6)
			{
				screen[b]='.';
                        }
			else if(a==9&&b==7)
			{
				screen[b]='G';
                        }
			else if(a==9&&b==8)
			{
				screen[b]='A';
                        }
			else if(a==9&&b==9)
			{
				screen[b]='M';
                        }
			else if(a==9&&b==10)
			{
				screen[b]='E';
                        }
			else if(a==9&&b==12)
			{
				screen[b]='S';
                        }
			else if(a==9&&b==13)
			{
				screen[b]='T';
                        }
			else if(a==9&&b==14)
			{
				screen[b]='A';
                        }
			else if(a==9&&b==15)
			{
				screen[b]='R';
                        }
			else if(a==9&&b==16)
			{
				screen[b]='T';
                        }
			else if(a==10&&b==5)
			{
				screen[b]='2';
                        }
			else if(a==10&&b==6)
			{
				screen[b]='.';
                        }
			else if(a==10&&b==7)
			{
				screen[b]='G';
                        }
			else if(a==10&&b==8)
			{
				screen[b]='U';
                        }
			else if(a==10&&b==9)
			{
				screen[b]='I';
                        }
			else if(a==10&&b==10)
			{
				screen[b]='D';
                        }
			else if(a==10&&b==11)
			{
				screen[b]='E';
                        }
			else if(a==10&&b==13)
			{
				screen[b]='B';
                        }
			else if(a==10&&b==14)
			{
				screen[b]='O';
                        }
			else if(a==10&&b==15)
			{
				screen[b]='O';
                        }
			else if(a==10&&b==16)
			{
				screen[b]='K';
                        }
			else if(a==11&&b==5)
			{
				screen[b]='3';
                        }
			else if(a==11&&b==6)
			{
				screen[b]='.';
                        }
			else if(a==11&&b==7)
			{
				screen[b]='E';
                        }
			else if(a==11&&b==8)
			{
				screen[b]='X';
                        }
			else if(a==11&&b==9)
			{
				screen[b]='I';
                        }
			else if(a==11&&b==10)
			{
				screen[b]='T';                                                                         
			}
			else
                        {
                                screen[b]=' ';
                        }
                        b+=1;
                }
                screen[30]='\n';
                printf("%s",screen);
                a+=1;
        }

        return 0;
}

