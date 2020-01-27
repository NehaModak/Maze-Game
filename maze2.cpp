#include<iostream>
#include<conio.h>
#include<ctype.h>
#include<windows.h>
using namespace std;
int marks=0;
void hard();
void move();
void play();

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

void gotoxy(int x,int y);
void loser()
{
	int n;
	system("CLS");
	cout<<"\n\n\n\n\t\t\t\tGAME OVER\n\n\n\t\t\tDO YOU WANT TO PLAY AGAIN:\n\t\t\t1.YES\n\t\t\t2.NO";
	cin>>n;
	if(n==1)
	hard();
}

void gotoxy(int x, int y)
{
CursorPosition.X = x; // Locates column
CursorPosition.Y = y; // Locates Row
SetConsoleCursorPosition(console,CursorPosition); // Sets position for next thing to be printed
}

void winner()
{
		system("CLS");
		cout<<"\n\t!!!!!!!!!!!!!!!!CONGRATULATIONS YOU WON!!!!!!!!!!!!!!!!!!!!";
		cout<<"\n\n\n\n\t\t\t\t\tSCORE: "<<marks;
}
int main()
{
	hard();
	return 0;
}
void hard()
{
	system("CLS");
	int i,x,y;
	gotoxy(1,3);
	cout<<"START";
	gotoxy(30,2);
	cout<<"******** MAZE II ********";
  //	gotoxy(65,2);
  //	cout<<"SCORE:"<<marks;
	for(i=4;i<=76;i++)
	{
		gotoxy(i,4);
		cout<<"-";
	}
	for(i=4;i<=76;i++)
	{
	  gotoxy(i,6);
	  if((i>15&&i<24)||(i>28&&i<32)||(i>36&&i<40)||(i>48&&i<60)||(i>64&&i<68)||(i>72&&i<77))
	  continue;
	  cout<<"-";
	}
	for(i=4;i<=76;i++)
	{
	  gotoxy(i,8);
	  if((i>3&&i<12)||(i>16&&i<20)||(i>28&&i<32)||(i>36&&i<44)||(i>56&&i<60)||(i>64&&i<77))
	  continue;
	  cout<<"-";
	}
	for(i=4;i<=76;i++)
	{
	  gotoxy(i,10);
	  if((i>3&&i<8)||(i>12&&i<20)||(i>24&&i<32)||(i>36&&i<40)||(i>44&&i<48)||(i>52&&i<56)||(i>60&&i<64)||(i>72&&i<77))
	  continue;
	  cout<<"-";
	}
	for(i=4;i<=76;i++)
	{
	  gotoxy(i,12);
	  if((i>8&&i<12)||(i>24&&i<32)||(i>36&&i<40)||(i>44&&i<52)||(i>56&&i<68)||(i>72&&i<77))
	  continue;
	  cout<<"-";
	}	for(i=4;i<=76;i++)
	{
	  gotoxy(i,14);
	  if((i>3&&i<16)||(i>24&&i<28)||(i>32&&i<40)||(i>44&&i<52)||(i>56&&i<60)||(i>64&&i<68)||(i>72&&i<77))
	  continue;
	  cout<<"-";
	}
	for(i=4;i<=76;i++)
	{
	  gotoxy(i,16);
	  if((i>3&&i<8)||(i>12&&i<16)||(i>20&&i<28)||(i>36&&i<44)||(i>48&&i<56)||(i>64&&i<72))
	  continue;
	  cout<<"-";
	}
	for(i=4;i<=76;i++)
	{
	  gotoxy(i,18);
	  if((i>12&&i<20)||(i>24&&i<32)||(i>36&&i<40)||(i>48&&i<56)||(i>60&&i<72))
	  continue;
	  cout<<"-";
	}
	for(i=4;i<=76;i++)
	{
	  gotoxy(i,20);
	  if((i>12&&i<16)||(i>24&&i<28)||(i>36&&i<40)||(i>48&&i<56)||(i>60&&i<64)||(i>68&&i<72))
	  continue;
	  cout<<"-";
	}
	for(i=4;i<=76;i++)
	{
	  gotoxy(i,22);
	  if((i>3&&i<8)||(i>12&&i<28)||(i>32&&i<40)||(i>44&&i<48)||(i>56&&i<64)||(i>68&&i<77))
	  continue;
	  cout<<"-";
	}
	for(i=4;i<=72;i++)
	{
	  gotoxy(i,24);
	  cout<<"-";
	}
//############for column####################
	for(i=6;i<=24;i++)
	{
		gotoxy(4,i);
		cout<<"|";
	}
	for(i=4;i<=24;i++)
	{
		gotoxy(76,i);
		cout<<"|";
	}
	for(i=6;i<=24;i++)
	{
		gotoxy(8,i);
		if(i==11||i==15||i==19||(i>18&&i<22))
		continue;
		cout<<"|";
	}
	for(i=6;i<=24;i++)
	{
		gotoxy(12,i);
		if((i>5&&i<8)||i==11||(i>14&&i<25))
		continue;
		cout<<"|";
	}
	for(i=6;i<=24;i++)
	{
		gotoxy(16,i);
		if((i>5&&i<10)||i==15||(i>18&&i<22))
		continue;
		cout<<"|";
	}
	for(i=4;i<=24;i++)
	{
		gotoxy(20,i);
		if((i>8&&i<14)||i==19)
		continue;
		cout<<"|";
	}
	for(i=8;i<=24;i++)
	{
		gotoxy(24,i);
		if(i==13||(i>16&&i<22))
		continue;
		cout<<"|";
	}
	for(i=6;i<=24;i++)
	{
		gotoxy(28,i);
		if(i==11||i==15||i==19)
		continue;
		cout<<"|";
	}
	for(i=6;i<=24;i++)
	{
		gotoxy(32,i);
		if((i>8&&i<12)||(i>14&&i<18)||(i>20&&i<25))
		continue;
		cout<<"|";
	}
	for(i=8;i<=24;i++)
	{
		gotoxy(36,i);
		if(i==23||i==24||i==19)
		continue;
		cout<<"|";
	}
	for(i=6;i<=24;i++)
	{
		gotoxy(40,i);
		if((i>10&&i<14)||(i>16&&i<22))
		continue;
		cout<<"|";
	}
	for(i=4;i<=24;i++)
	{
		gotoxy(44,i);
		if(i==9||i==13||i==19||(i>22&&i<25))
		continue;
		cout<<"|";
	}
	for(i=10;i<=24;i++)
	{
		gotoxy(48,i);
		if(i==17||i==21)
		continue;
		cout<<"|";
	}
	for(i=10;i<=24;i++)
	{
		gotoxy(52,i);
		if(i>18&&i<25)
		continue;
		cout<<"|";
	}
	for(i=6;i<=24;i++)
	{
		gotoxy(56,i);
		if(i==9||i==13||(i>16&&i<20))
		continue;
		cout<<"|";
	}
	for(i=10;i<=24;i++)
	{
		gotoxy(60,i);
		if(i==15||(i>22&&i<25))
		continue;
		cout<<"|";
	}
	for(i=4;i<=24;i++)
	{
		gotoxy(64,i);
		if(i==7||(i>12&&i<16)||i==19||(i>22&&i<25))
		continue;
		cout<<"|";
	}
	for(i=6;i<=24;i++)
	{
		gotoxy(68,i);
		if((i>10&&i<14)||i==17||(i>22&&i<25))
		continue;
		cout<<"|";
	}
	for(i=4;i<=24;i++)
	{
		gotoxy(72,i);
		if(i==7||i==11||(i>14&&i<20)||(i>22&&i<25))
		continue;
		cout<<"|";
	}
	for(x=1;x<76;x++)
	{
		for(y=5;y<24;y++)
		{
		  if((x==6&&y==7)||(x==6&&y==23)||(x==10&&y==9)||(x==10&&y==17)||(x==18&&y==5)||(x==18&&y==13)||(x==22&&y==19)||(x==22&&y==23)||(x==26&&y==9)||(x==26&&y==17)||(x==30&&y==13)||(x==30&&y==23)||(x==34&&y==17)||(x==38&&y==13)||(x==42&&y==7)||(x==42&&y==17)||(x==42&&y==21)||(x==46&&y==11)||(x==54&&y==7)||(x==54&&y==13)||(x==58&&y==23)||(x==62&&y==17)||(x==70&&y==9)||(x==70&&y==19)||(x==70&&y==23)||(x==74&&y==7)||(x==74&&y==13))
		  {
				gotoxy(x,y);
				cout<<"*";
		  }
		}
	}
//#####################for bonus#######################
	play();
}
void move(int m,int n)
{
	cout<<'\b';
	 gotoxy(m,n);
	 cout<<"@";
}
void play()
{

	char p;
	int x=1,y=5;
	gotoxy(x,y);
	do
	{
		p=getch();
		p=tolower(p);
		switch(p)
		{
			case 'w':move(x,--y);
						break;
			case 'a':move(--x,y);
						break;
			case 'd':move(++x,y);
						break;
			case 's':move(x,++y);
						break;
			default:move(x,y);
		}
		if((x>=4&&x<=76&&y==4)||(x>=4&&x<=16&&y==6)||(x>=24&&x<=28&&y==6)||(x>=32&&x<=36&&y==6)||(x>=40&&x<=48&&y==6)||(x>=68&&x<=72&&y==6)||(x>=12&&x<=16&&y==8)||(x>=20&&x<=28&&y==8)||(x<=32&&x>=36&&y==8)||(x>=44&&x<=56&&y==8)||(x>=60&&x<=64&&y==8))
		loser();
		else if((x>=8&&x<=12&&y==10)||(x>=20&&x<=24&&y==10)||(x>=32&&x<=36&&y==10)||(x>=40&&x<=44&&y==10)||(x>=48&&x<=52&&y==10)||(x>=56&&x<=60&&y==10)||(x>=4&&x<=8&&y==12)||(x>=12&&x<=24&&y==12)||(x<=32&&x>=36&&y==12)||(x>=40&&x<=44&&y==12)||(x>=52&&x<=56&&y==12)||(x>=68&&x<=72&&y==12))
		loser();
		else if((x>=16&&x<=24&&y==14)||(x>=28&&x<=32&&y==14)||(x>=40&&x<=44&&y==14)||(x>=52&&x<=56&&y==14)||(x>=60&&x<=64&&y==14)||(x>=68&&x<=72&&y==14)||(x>=8&&x<=12&&y==16)||(x>=16&&x<=20&&y==16)||(x<=28&&x>=36&&y==16)||(x>=44&&x<=48&&y==16)||(x>=56&&x<=64&&y==16)||(x>=72&&x<=76&&y==16))
		loser();
		else if((x>=4&&x<=12&&y==18)||(x>=20&&x<=24&&y==18)||(x>=32&&x<=36&&y==18)||(x>=40&&x<=48&&y==18)||(x>=56&&x<=60&&y==18)||(x>=72&&x<=76&&y==18)||(x>=4&&x<=12&&y==20)||(x>=16&&x<=24&&y==20)||(x<=28&&x>=36&&y==20)||(x>=40&&x<=48&&y==20)||(x>=56&&x<=60&&y==20))
		loser();
		else if((x>=64&&x<=68&&y==20)||(x>=72&&x<=76&&y==20)||(x>=8&&x<=12&&y==22)||(x>=28&&x<=32&&y==22)||(x>=40&&x<=44&&y==22)||(x>=48&&x<=56&&y==22)||(x>=64&&x<=68&&y==22)||(x>=4&&x<=72&&y==24))
		loser();
		else if((y>=6&&y<=24&&x==4)||(y>=6&&y<=10&&x==8)||(y>=12&&y<=14&&x==8)||(y>=16&&y<=18&&x==8)||(y>=22&&y<=24&&x==8)||(y>=8&&y<=10&&x==12)||(y>=12&&y<=14&&x==12)||(y>=10&&y<=14&&x==16)||(y>=16&&y<=18&&x==16)||(y>=22&&y<=24&&x==16)||(y>=4&&y<=8&&x==20)||(y>=14&&y<=18&&x==20)||(y>=20&&y<=24&&x==20)||(y>=8&&y<=12&&x==24)||(y>=14&&y<=16&&x==24)||(y>=22&&y<=24&&x==24))
		loser();
		else if((y>=6&&y<=10&&x==28)||(y>=12&&y<=14&&x==28)||(y>=16&&y<=18&&x==28)||(y>=20&&y<=24&&x==28)||(y>=6&&y<=8&&x==32)||(y>=12&&y<=14&&x==32)||(y>=18&&y<=20&&x==32)||(y>=18&&y<=20&&x==32)||(y>=8&&y<=18&&x==36)||(y>=20&&y<=22&&x==36)||(y>=6&&y<=10&&x==40)||(y>=14&&y<=16&&x==40)||(y>=22&&y<=24&&x==40)||(y>=4&&y<=8&&x==44)||(y>=10&&y<=12&&x==44)||(y>=14&&y<=18&&x==44)||(y>=20&&y<=22&&x==44)||(y>=10&&y<=16&&x==48)||(y>=18&&y<=20&&x==48)||(y>=22&&y<=24&&x==48)||(y>=10&&y<=20&&x==52))
		loser();
		else if((y>=6&&y<=8&&x==56)||(y>=10&&y<=12&&x==56)||(y>=14&&y<=16&&x==56)||(y>=20&&y<=24&&x==56)||(y>=10&&y<=14&&x==60)||(y>=16&&y<=22&&x==60)||(y>=4&&y<=6&&x==64)||(y>=8&&y<=12&&x==64)||(y>=16&&y<=18&&x==64)||(y>=20&&y<=22&&x==64)||(y>=6&&y<=10&&x==68)||(y>=14&&y<=16&&x==68)||(y>=18&&y<=20&&x==68)||(y>=22&&y<=24&&x==68)||(y>=4&&y<=6&&x==72)||(y>=8&&y<=10&&x==72)||(y>=20&&y<=22&&x==72)||(y>=4&&y<=24&&x==76))
		loser();
		else if((x==6&&y==7)||(x==6&&y==23)||(x==10&&y==9)||(x==10&&y==17)||(x==18&&y==5)||(x==18&&y==13)||(x==22&&y==19)||(x==22&&y==23)||(x==26&&y==9)||(x==26&&y==17)||(x==30&&y==13)||(x==30&&y==23)||(x==34&&y==17)||(x==38&&y==13)||(x==42&&y==7)||(x==42&&y==17)||(x==42&&y==21)||(x==46&&y==11)||(x==54&&y==7)||(x==54&&y==13)||(x==58&&y==23)||(x==62&&y==17)||(x==68&&y==9)||(x==68&&y==19)||(x==68&&y==23)||(x==74&&y==7)||(x==74&&y==13))
		marks+=20;
		if((x>=72&&x<76)&&y==24)
		{
			marks+=50;
			p='e';
         winner();
		}
	}while(p!='e');
}
