#include<fstream>
#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<windows.h>
using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

void gotoxy(int x, int y)
{
CursorPosition.X = x; // Locates column
CursorPosition.Y = y; // Locates Row
SetConsoleCursorPosition(console,CursorPosition); // Sets position for next thing to be printed
}

struct player
{
	int age;
	char name[30];
	float score;
};
player p;
void storeplayer();
void extractplayer();
void enterplayer();
void displayplayer();
class snake
{
	int o;
	public:
	void screen();
	void mainmenu();
	void options();
	void selection();
	void winner();
	void loser();
	void easy();
	/*void intermediate();
	void hard();   */
	void play();
	void move(int m,int n);

};
void snake::screen()
{
	gotoxy(20,5);
	cout<<"#########################################";
	gotoxy(20,6);
	cout<<"#########################################";
	gotoxy(20,7);
	cout<<"####\t\t   WELCOME\t\t####";
	gotoxy(20,8);
	cout<<"####\t\tTO SNAKE MAZE\t\t####";
	gotoxy(20,9);
	cout<<"#########################################";
	gotoxy(20,10);
	cout<<"#########################################";
	cout<<"\n\n\n\n\t!!!!!!!!!!!!!!!PRESS ANY KEY TO CONTINUE!!!!!!!!!!!!!!!!";
	getch();
	mainmenu();
}
void snake::mainmenu()
{
	system("CLS");
	cout<<"\n\n\t%%%%%%%%%%%%%%%%%%% MAIN MENU %%%%%%%%%%%%%%%%%%%%%%";
	cout<<"\n\n\t\t\t\t1.PLAY\n\t\t\t\t2.OPTIONS\n\t\t\t\t3.EXIT";
		cin>>o;
		switch(o)
		{
			case 1:  easy();
						break;
			case 2:  options();
						break;
			case 3:  exit(0);
						break;
			default:cout<<"\n\n\t\tWRONG CHOICE";
						getch();
					  mainmenu();
		}
}
void snake::options()
{
	system("CLS");
	cout<<"\n\t''''''''''''''''''''''''''CHOOSE''''''''''''''''''''''''";
	cout<<"\n\n\t\t1.PLAYER\n\t\t2.SELECT LEVEL\n\t\t3.MAINMENU";
	cin>>o;
	switch(o)
	{
		case 1:  extractplayer();
					break;
		case 2:  selection();
					break;
		case 3:  mainmenu();
					break;
		default:cout<<"\n\n\t\t\tWRONG CHOICE";
					getch();
					options();
	}
	options();
}
void enterplayer()
{
	int i;
	system("CLS");
	cout<<"\n\n\t\tCHOOSE:\n\n\t\t1.NEW PLAYER\n\t\t2.OLD PLAYER";
	cin>>i;
	if(i==1)
	{
		cout<<"\n\n\t\tENTER DETAILS:";
		cout<<"\n\t\tNAME:";
		gets(p.name);
		cout<<"\n\t\tAGE:";
		cin>>p.age;
		storeplayer();
	}
}
void storeplayer()
{
	ofstream fout("playerr.txt",ios::app);
	fout.write((char*)&p,sizeof(p));
	fout.close();
}
void extractplayer()
{
	char nam[40];
	cout<<"\n\n\tENTER THE PLAYER NAME:";
	gets(nam);
	ifstream fin("playerr.txt",ios::in);
	while(!fin.eof())
	{
		 fin.read((char*)&p,sizeof(p));
		 if(strcmp(nam,p.name)==0)
		 displayplayer();
	}
	fin.close();
}
void displayplayer()
{
	 cout<<"\n\n\t()()()()()()()()()()DISPLAYING PLAYER()()()()()()()()()()()";
	 cout<<"\n\n\t\t\tNAME:\t"<<p.name;
	 cout<<"\n\t\t\tAGE:\t"<<p.age;
	 cout<<"\n\t\t\tSCORE:\t"<<p.score;
	 getch();
}
void snake::selection()
{
		system("CLS");
		cout<<"\n\n\t\t\tSELECT LEVEL\n\n\t\t1.EASY\n\t\t2.INTERMEDIATE\n\t\t3.HARD\n\t\t4.BACK";
		cin>>o;
	  switch(o)
	  {
		case 1: easy();
				break;
	  /*	case 2:	intermediate();
				break;
		case 3: hard();
				break;*/
		case 4:mainmenu();
		default: cout<<"\n\n\t\t\tWRONG CHOICE";
	  }
}
void snake::winner()
{
	char ans[5];
	system("CLS");
	cout<<"\n\n\n\n\t\t\tCONGRATULATIONS!!!!!!!!!!!\n\n\t\t\tYOU WON THE GAME";
	p.score=100.0;
	getch();
	cout<<"\nDo you to register your score:";
	gets(ans);
	if(strcpy(ans,"yes")==0)
	enterplayer();
	mainmenu();
}
void snake::loser()
{
	system("CLS");
	cout<<"\n\n\n\n\t\t\tGAME OVER";
	p.score=0.0;
	getch();
	mainmenu();
}
void snake::easy()
{
	system("CLS");
	int i;
	for(i=10;i<70;i++)
	{
		gotoxy(i,5);
		cout<<"-";
	}
	for(i=15;i<70;i++)
	{
		gotoxy(i,23);
		cout<<"-";
	}
	for(i=10;i<70;i++)
	{
		gotoxy(i,7);
		if((i>=25&&i<30)||(i>=45&&i<50))
		continue;
		cout<<"-";
	}
	for(i=10;i<70;i++)
	{
		gotoxy(i,9);
		if((i>=10&&i<15)||(i>=20&&i<35)||(i>=40&&i<45)||(i>=65&&i<70))
		continue;
		cout<<"-";
	}
	for(i=10;i<70;i++)
	{
		gotoxy(i,11);
		if((i>=10&&i<20)||(i>=30&&i<35)||(i>=50&&i<55))
		continue;
		cout<<"-";
	}for(i=10;i<70;i++)
	{
		gotoxy(i,13);
		if((i>=10&&i<15)||(i>=45&&i<55)||(i>=65&&i<70))
		continue;
		cout<<"-";
	}for(i=10;i<70;i++)
	{
		gotoxy(i,15);
		if((i>=40&&i<50)||(i>=65&&i<70))
		continue;
		cout<<"-";
	}for(i=10;i<70;i++)
	{
		gotoxy(i,17);
		if((i>=10&&i<15)||(i>=45&&i<50))
		continue;
		cout<<"-";
	}
	for(i=10;i<70;i++)
	{
		gotoxy(i,19);
		if((i>=10&&i<20)||(i>=65&&i<70))
		continue;
		cout<<"-";
	}
	for(i=10;i<70;i++)
	{
		gotoxy(i,21);
		if(i>=65&&i<70)
		continue;
		cout<<"-";
	}
//################for column#########################
	for(i=5;i<=23;i++)
	{
		gotoxy(70,i);
		cout<<"|";
		gotoxy(10,i);
		if(i<7)
		continue;
		cout<<"|";
	}
	for(i=8;i<=19;i++)
	{
		gotoxy(15,i);
		if((i>7&&i<9)||(i>13&&i<17))
		continue;
		cout<<"|";
	}
	for(i=7;i<=9;i++)
	{
		gotoxy(25,i);
		cout<<"|";
	}
	for(i=7;i<=11;i++)
	{
		gotoxy(30,i);
		cout<<"|";
	}
	for(i=7;i<=17;i++)
	{
		gotoxy(45,i);
		if(i>=10&&i<13)
		continue;
		cout<<"|";
	}
	for(i=11;i<=15;i++)
	{
		gotoxy(50,i);
		cout<<"|";
	}
	for(i=13;i<=21;i++)
	{
		gotoxy(65,i);
		if(i>=16&&i<19)
		continue;
		cout<<"|";
	}
	play();
}
void snake::move(int m,int n)
{
	cout<<'\b';
	 gotoxy(m,n);
	 cout<<"@";
}
void snake::play()
{

	char p;
	int x=5,y=6;
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
		if((x>=10&&x<=70&&y==5)||(x>=10&&x<=25&&y==7)||(x>=30&&x<=45&&y==7)||(x>=50&&x<=70&&y==7)||(x>=15&&x<=20&&y==9)||(x>=35&&x<=40&&y==9)||(x>=45&&x<=65&&y==9)||(x>=20&&x<=65&&y==19)||(x>=10&&x<=65&&y==21)||(x>=15&&x<=70&&y==23))
		loser();
		else if((x>=20&&x<=30&&y==11)||(x>=35&&x<=50&&y==11)||(x>=55&&x<=70&&y==11)||(x>=15&&x<=40&&y==13)||(x>=55&&x<=65&&y==13)||(x>=10&&x<=40&&y==15)||(x>=50&&x<=65&&y==15)||(x>=15&&x<=45&&y==17)||(x>=50&&x<=70&&y==17))
		loser();
		else if((y>=7&&y<=23&&x==10)||(y>=5&&y<=23&&x==70)||(y>=9&&y<=13&&x==15)||(y>=17&&y<=19&&x==15)||(y>=7&&y<=9&&x==30)||(y>=7&&y<=9&&x==45)||(y>=13&&y<=17&&x==54)||(y>=11&&y<=15&&x==50)||(y>=13&&y<=15&&x==65)||(y>=19&&y<=21&&x==65))
		loser();
		if((x>=11&&x<15)&&y==23)
		{
			p='e';
			system("CLS");
			winner();
		}
	}while(p!='e');
	mainmenu();
}
int main()
{
	snake s;
	s.screen();
	return 0;
}
