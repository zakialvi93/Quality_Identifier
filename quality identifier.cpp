//PROJECT BY MUHAMMAD ZAKI ALVI (022-17-115713) AND FIZZA SHAFIQUE (022-17-115355)
#include<stdio.h>
#include<stdlib.h>
struct info
{

int c,b,d=0,mb,db,code,e;
char a;
char name[10]; 
char array[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
};
struct info Y1;
void Admin2();
void Admin2()
{
printf("\n\tName: Fizza\n");
printf("\tAge: 18 Years\n");
printf("\tDay of Birth: 29\n");
printf("\tMonth of Birth: 8\n");	
printf("\tMy Star: Virgo\n");
printf("\tAlphabet I like the most: 'S'\n");
printf("\tQualities: \n\t\t");
printf("* I am Sleepy\n\t\t");
				printf("* I am Sentimental\n\t\t");
				printf("* I am Sharp\n\t\t");
				printf("* I am Sincere\n\t\t");
				printf("* I am Serious\n\t\t");
}
void Admin1();
void Admin1()
{
printf("\n\tName: Zaki\n");
printf("\tAge: 19 Years\n");
printf("\tDay of Birth: 23\n");
printf("\tMonth of Birth: 12\n");	
printf("\tMy Star: Capricorn\n");
printf("\tAlphabet I like the most: 'I'\n");
printf("\tQualities: \n\t\t");
printf("* I am Intelligent\n\t\t");
				printf("* I am Innocent\n\t\t");
				printf("* I am Ideal\n\t\t");
				printf("* I am Incredible\n\t\t");
				printf("* I am Instructive\n\t\t");
}
void Quality();
void Quality()
{
	switch(Y1.code)
	{
	case 0:
			{
                printf("* You are Able\n\t\t");
				printf("* You are Active\n\t\t");
				printf("* You are Actual\n\t\t");
				printf("* You are Adorable\n\t\t");
				printf("* You are Awesome\n\t\t");
				break;
			}
			case 1:
			{
				 printf("* You are Beautiful\n\t\t");
				printf("* You are Beloved\n\t\t");
				printf("* You are Bold\n\t\t");
				printf("* You are Brave\n\t\t");
				printf("* You are Buttery\n\t\t");
				break;
			}
			case 2:
			{
				 printf("* You are Calm\n\t\t");
				printf("* You are Careful\n\t\t");
				printf("* You are Cheery\n\t\t");
				printf("* You are Classic\n\t\t");
				printf("* You are Clever\n\t\t");
				break;
			}
			case 3:
			{
				 printf("* You are Daring\n\t\t");
				printf("* You are Dazzling\n\t\t");
				printf("* You are Deep\n\t\t");
				printf("* You are Devoted\n\t\t");
				printf("* You are Diligent\n\t\t");
				break;
			}
			case 4:
			{
				 printf("* You are Enchanting\n\t\t");
				printf("* You are Energetic\n\t\t");
				printf("* You are Esteemed\n\t\t");
				printf("* You are Essential\n\t\t");
				printf("* You are Ethical\n\t\t");
				break;
			}
			case 5:
			{
				 printf("* You are Fabulous\n\t\t");
				printf("* You are Faithful\n\t\t");
				printf("* You are Famous\n\t\t");
				printf("* You are Firm\n\t\t");
				printf("* You are Flamboyant\n\t\t");
				break;
			}
			case 6:
			{
				 printf("* You are Gifted\n\t\t");
				printf("* You are Generous\n\t\t");
				printf("* You are Gorgeous\n\t\t");
				printf("* You are Gleeful\n\t\t");
				printf("* You are Graceful\n\t\t");
				break;
			}
			case 7:
			{
				 printf("* You are Happy\n\t\t");
				printf("* You are Humble\n\t\t");
				printf("* You are Helpful\n\t\t");
				printf("* You are Hospitable\n\t\t");
				printf("* You are Honest\n\t\t");
				break;
			}
			case 8:
			{
				 printf("* You are Intelligent\n\t\t");
				printf("* You are Important\n\t\t");
				printf("* You are Ideal\n\t\t");
				printf("* You are Impressive\n\t\t");
				printf("* You are Instructive\n\t\t");
				break;
			}
			case 9:
			{
				 printf("* You are Jolly\n\t\t");
				printf("* You are Judicious\n\t\t");
				printf("* You are Jumpy\n\t\t");
				printf("* You are Juvenile\n\t\t");
				printf("* You are Jubilant\n\t\t");
				break;
			}
			case 10:
			{
				 printf("* You are Known\n\t\t");
				printf("* You are Keen\n\t\t");
				printf("* You are Kind\n\t\t");
				printf("* You are Knowledgeable\n\t\t");
				printf("* You are Kempt\n\t\t");
				break;
			}
			case 11:
			{
				 printf("* You are Leading\n\t\t");
				printf("* You are Lovable\n\t\t");
				printf("* You are Loyal\n\t\t");
				printf("* You are Lively\n\t\t");
				printf("* You are Lucky\n\t\t");
				break;
			}
			case 12:
			{
				 printf("* You are Marvelous\n\t\t");
				printf("* You are Memorable\n\t\t");
				printf("* You are Melodic\n\t\t");
				printf("* You are Modern\n\t\t");
				printf("* You are Mysterious\n\t\t");
				break;
			}
			case 13:
			{
				 printf("* You are Naughty\n\t\t");
				printf("* You are Natural\n\t\t");
				printf("* You are Noisy\n\t\t");
				printf("* You are Nice\n\t\t");
				printf("* You are Nimble\n\t\t");
				break;
			}
			case 14:
			{
				 printf("* You are Obedient\n\t\t");
				printf("* You are Obvious\n\t\t");
				printf("* You are Optimistic\n\t\t");
				printf("* You are Outstanding\n\t\t");
				printf("* You are Original\n\t\t");
				break;
			}
			case 15:
			{
				 printf("* You are Peaceful\n\t\t");
				printf("* You are Passionate\n\t\t");
				printf("* You are Perfect\n\t\t");
				printf("* You are Polite\n\t\t");
				printf("* You are Popular\n\t\t");
				break;
			}
			case 16:
			{
				 printf("* You are Quick\n\t\t");
				printf("* You are Quiet\n\t\t");
				printf("* You are Quarrelsome\n\t\t");
				printf("* You are Quaint\n\t\t");
				printf("* You are Quixotic\n\t\t");
				break;
			}
			case 17:
			{
				 printf("* You are Relatable\n\t\t");
				printf("* You are Romantic\n\t\t");
				printf("* You are Real\n\t\t");
				printf("* You are Responsible\n\t\t");
				printf("* You are Reliable\n\t\t");
				break;
			}
			case 18:
			{
				 printf("* You are Sleepy\n\t\t");
				printf("* You are Sentimental\n\t\t");
				printf("* You are Simple\n\t\t");
				printf("* You are Sincere\n\t\t");
				printf("* You are Smooth\n\t\t");
				break;
			}
			case 19:
			{
				 printf("* You are Tremendous\n\t\t");
				printf("* You are Talkitive\n\t\t");
				printf("* You are Tender\n\t\t");
				printf("* You are Thoghtful\n\t\t");
				printf("* You are Thankful\n\t\t");
				break;
			}
			case 20:
			{
				 printf("* You are Unique\n\t\t");
				printf("* You are Ultimate\n\t\t");
				printf("* You are Understated\n\t\t");
				printf("* You are Umber\n\t\t");
				printf("* You are Useful\n\t\t");
				break;
			}
			case 21:
			{
				 printf("* You are Vast\n\t\t");
				printf("* You are Valuable\n\t\t");
				printf("* You are Vigilant\n\t\t");
				printf("* You are Vital\n\t\t");
				printf("* You are Victorious\n\t\t");
				break;
			}
			case 22:
			{
				 printf("* You are Welcoming\n\t\t");
				printf("* You are Worthy\n\t\t");
				printf("* You are Wise\n\t\t");
				printf("* You are Willing\n\t\t");
				printf("* You are Wonderful\n\t\t");
				break;
			}
			case 23:
			{
				 printf("* You are Xenial\n\t\t");
				
				break;
			}
			case 24:
			{
				 printf("* You are Young\n\t\t");
				printf("* You are Yeasty\n\t\t");
				printf("* You are Yokelish\n\t\t");
				printf("* You are Yucky\n\t\t");
				printf("* You are Yawning\n\t\t");
				break;
			}
			case 25:
			{
				 printf("* You are Zany\n\t\t");
				printf("* You are Zealous\n\t\t");
				printf("* You are Zesty\n\t\t");
				printf("* You are Zazzy\n\t\t");
				printf("* You are Zen\n\t\t");
				break;
			}
			default:
			{
				printf("Invalid Code");
				break;
			}
	}
}

void zodiac();
void zodiac()
{
	if(Y1.mb>=1 && Y1.mb<=2 )
	{
		if(Y1.mb==1 && Y1.db>19 && Y1.db<=31)
		printf("\n\tThe star is Aquarius\n");
		else if(Y1.mb==2 && Y1.db<=18)
		printf("\n\tThe star is Aquarius\n");
	}
	if(Y1.mb>=2 && Y1.mb<=3)
	{
		if(Y1.mb==2 && Y1.db>18 && Y1.db<=29)
		printf("\n\tThe star is Pisces\n");
		else if(Y1.mb==3 && Y1.db<=20)
		printf("\n\tThe star is Pisces\n");
	}
	if(Y1.mb>=3 && Y1.mb<=4)
	{
		if(Y1.mb==3 && Y1.db>20 && Y1.db<=31)
		printf("\n\tThe star is Aries\n");
		else if(Y1.mb==4 && Y1.db<=19)
		printf("\n\tThe star is Aries\n");
	}
	if(Y1.mb>=4 && Y1.mb<=5)
	{
		if(Y1.mb==4 && Y1.db>19 && Y1.db<=30)
		printf("\n\tThe star is Taurus\n");
		else if(Y1.mb==5 && Y1.db<=20)
		printf("\n\tThe star is Taurus\n");
	}
	if(Y1.mb>=5 && Y1.mb<=6)
	{
		if(Y1.mb==5 && Y1.db>20 && Y1.db<=31)
		printf("\n\tThe star is Gemini\n");
		else if(Y1.mb==6 && Y1.db<=20)
		printf("\n\tThe star is Gemini\n");
	}
	if(Y1.mb>=6 && Y1.mb<=7)
	{
		if(Y1.mb==6 && Y1.db>20 && Y1.db<=30)
		printf("\n\tThe star is Cancer\n");
		else if(Y1.mb==7 && Y1.db<=22)
		printf("\n\tThe star is Cancer\n");
	}
	if(Y1.mb>=7 && Y1.mb<=8)
	{
		if(Y1.mb==7 && Y1.db>22 && Y1.db<=31)
		printf("\n\tThe star is Leo\n");
		else if(Y1.mb==8 && Y1.db<=22)
		printf("\n\tThe star is Leo\n");
	}
	if(Y1.mb>=8 && Y1.mb<=9)
	{
		if(Y1.mb==8 && Y1.db>22 && Y1.db<=31)
		printf("\n\tThe star is Virgo\n");
		else if(Y1.mb==9 && Y1.db<=22)
		printf("\n\tThe star is Virgo\n");
	}
	if(Y1.mb>=9 && Y1.mb<=10)
	{
		if(Y1.mb==9 && Y1.db>22 && Y1.db<=30)
		printf("\n\tThe star is Libra\n");
		else if(Y1.mb==10 && Y1.db<=22)
		printf("\n\tThe star is Libra\n");
	}
	if(Y1.mb>=10 && Y1.mb<=11)
	{
		if(Y1.mb==10 && Y1.db>22 && Y1.db<=31)
		printf("\n\tThe star is Scorpio\n");
		else if(Y1.mb==11 && Y1.db<=21)
		printf("\n\tThe star is Scorpio\n");
	}
	if(Y1.mb>=11 && Y1.mb<=12)
	{
		if(Y1.mb==11 && Y1.db>21 && Y1.db<=30)
		printf("\n\tThe star is Sagittarius\n");
		else if(Y1.mb==12 && Y1.db<=21)
		printf("\n\tThe star is Sagittarius\n");
	}
	if(Y1.mb==12 || Y1.mb<=1)
	{
		if(Y1.mb==12 && Y1.db>22 && Y1.db<=31)
		printf("\n\tThe star is Capricorn\n");
		else if(Y1.mb==1 && Y1.db<=19)
		printf("\n\tThe star is Capricorn\n");
	}
	
}
main()
{




printf("\n\n\tAlas! A class full of tensed students :( \n\n");
printf("\tWell not to worry at all ! \n\tBecause Zaki Alvi and Fizza Shafique have a solution to spread\n\t some clutches of smile on your faces in this tensed environment ;) \n\n ");
printf("\tSo if you are willing to ammuse your self with this game,\n\t then press 'y'\n\n\t");
scanf("%c",&Y1.a);
if(Y1.a=='y')

{
system("cls");
printf("\n\n\n\t========WELCOME TO QUALITY IDENTIFIER==========\n\n");
printf("\tNow answer some easy questions and know about your self better ;)\n\n");
printf("\tIf you are the ADMIN ZAKI, press '1'\n\tIf you are the ADMIN FIZZA, press '2'\n\tIf you are the PARTICIPANT, press '3'\n\n\t");
scanf("%d",&Y1.b);
switch (Y1.b)
{
case 1:
	printf("\n\n\tEnter Password:\n\t");
	scanf("%d",&Y1.c);
	if(Y1.c==15713)
	{printf("\n");
	system("cls");
			Admin1();
			printf("\n\n\tIf you want to exit, press ENTER!\n");
	printf("\tIf you want to return to the main menu, press ENTER and then press F11!\n\n\n\n");}
			else {
				printf("Invalid Password");
			}
	break;
	case 2:
		printf("\n\n\tEnter Password:\n\t");
	scanf("%d",&Y1.c);
	if(Y1.c==15355)
	{printf("\n");
	system("cls");
			Admin2();
			printf("\n\n\tIf you want to exit, press ENTER!\n");
	printf("\tIf you want to return to the main menu, press ENTER and then press F11!\n\n\n\n");}
			else {
				printf("Invalid Password");
			}
	break;
	
	case 3:
		system("cls");
		printf("\n\n\n\t========Welcome new Participant===================\n\n");
		printf("\t==============Fill out the Given Fields First==============\n");
		printf("\tEnter Name:\n\t"); 
		scanf("%s",&Y1.name);
		printf("\tEnter Day of Birth:\n\t"); 
		scanf("%d",&Y1.db);
		printf("\tEnter Month of Birth:\n\t"); 
		scanf("%d",&Y1.mb);
		printf("\n\tNow get acknowledged with your Zodiac Star:\n");
		zodiac();
		printf("\n\n\t Press 4 to continue:\n");
		scanf("%d",&Y1.e);
		if(Y1.e==4)
		{
		system("cls");
		printf("\n\n======List of Alphabet Coding=======\n\n");
		while (Y1.d<=25)
	{printf("\tCode for Alphabet '%c' = %d \n", Y1.array[Y1.d],Y1.d);
	Y1.d++;
	}

	printf("\n\nEnter the code for the Alphabet you like the most:\n\t");
	scanf("%d",&Y1.code);
	system("cls");
	printf("\n\n\tYour Qualities:\n\n\t\t");
	Quality();
	printf("\n\n\tIf you want to exit, press ENTER!\n");
	printf("\tIf you want to play again, press ENTER and then press F11!\n\n\n\n");}
		break;
		default:
			system("cls");
			printf("Invalid");
		}
		

}
	



else 
{
system("cls");
printf("\n\n\n\t========= Byeeeee:) ===============\n\n");
}




	
}


