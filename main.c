#include <stdio.h>
#include <windows.h>
#include <unistd.h>
//#include <time.h>
//#include <stdlib.h>
#include <string.h>
#include <myheader.h>
#include <correctandfalse.h>
#include <layout.h>


int main(int argc, char **argv)
{
	char repeat[5];
	
	do {
		system("cls");
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GREEN);
		printstr(45,2,"Learn typing smart");
		printf("\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
	
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLUE);
		printstr(90,3,"Press Escape to End the Test");
		printf("\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
	
	
		// drawing the keyboard layout
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), DARKGRAY);
		keyboard();
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
	
	
//		char story[] = "Peter, Susan, Edmund, and Lucy Pevensie are four siblings sent to live in the country with the eccentric Professor Kirke during World War II. The children explore the house on a rainy day and Lucy, the youngest, finds an enormous wardrobe. Lucy steps inside and finds herself in a strange, snowy wood. Lucy encounters the Faun Tumnus, who is surprised to meet a human girl. Tumnus tells Lucy that she has entered Narnia, a different world. Tumnus invites Lucy to tea, and she accepts. Lucy and Tumnus have a wonderful tea, but the faun bursts into tears and confesses that he is a servant of the evil White Witch. The Witch has enchanted Narnia so that it is always winter and never Christmas. Tumnus explains that he has been enlisted to capture human beings. Lucy implores Tumnus to release her, and he agrees. Lucy exits Narnia and eagerly tells her siblings about her adventure in the wardrobe. They do not believe her, however. Lucy's siblings insist that Lucy was only gone for seconds and not for hours as she claims. When the Pevensie children look in the back of the wardrobe they see that it is an ordinary piece of furniture. Edmund teases Lucy mercilessly about her imaginary country until one day when he sees her vanishing into the wardrobe. Edmund follows Lucy and finds himself in Narnia as well. He does not see Lucy, and instead meets the White Witch that Tumnus told Lucy about. The Witch Witch introduces herself to Edmund as the Queen of Narnia. The Witch feeds Edmund enchanted Turkish Delight, which gives Edmund an insatiable desire for the dessert. The Witch uses Edmund's greed and gluttony to convince Edmund to bring back his siblings to meet her. On the way back to the lamppost, the border between Narnia and our world, Edmund meets Lucy. Lucy tells Edmund about the White Witch. Edmund denies any connection between the Witch and the Queen. All Edmund can think about is his desire for the Turkish Delight. Lucy and Edmund return to Peter and Susan, back in their own world. Lucy relies on Edmund to support her story about Narnia, but Edmund spitefully tells Peter and Susan that it is a silly story. Peter and Susan are worried that Lucy is insane so they talk to Professor Kirke. The Professor shocks Peter and Susan by arguing that Lucy is telling the truth. One day the children hide in the wardrobe to avoid the housekeeper and some houseguests. Suddenly all four Pevensie children find themselves in Narnia. Lucy leads them to Tumnus's home, but a note informs them that Tumnus has been arrested on charges of treason. Lucy realized that this means the Witch knows that Tumnus spared Lucy's life, and that the Witch has captured Tumnus. Lucy implores her siblings to help her rescue Tumnus from the Witch. Guided by a friendly robin, the children wander into the woods, and meet Mr. Beaver. Mr. Beaver brings them back to his home, where he explains that the children cannot do anything to save Tumnus. The only thing the children can do is join Mr. Beaver on a journey to see Aslan a lion. Aslan appears to be a king or god figure in Narnia. The children are all pleasantly enchanted by the name Aslan, except for Edmund, who is horrified by the sound of it. Mr. Beaver, Peter, Susan, and Lucy plot to meet Aslan at the Stone Table the following day, but they soon notice that Edmund has disappeared. Meanwhile, Edmund searches for the White Witch to warn her of Aslan's arrival and of the Beavers' plan. The Witch is enraged to hear that Aslan is in Narnia and immediately begins plotting to kill the children. The Witch wants to avoid an ancient prophecy that says that four humans will someday reign over Narnia and overthrow her evil regime. The children and the Beavers, meanwhile, rush to reach the Stone Table before the Witch. As they travel, wonderful seasonal changes occur. First they meet Santa Claus, or Father Christmas, who explains that the Witch's spell of ""always winter and never Christmas"" has ended. The enchanted winter snow melts and the children see signs of spring. Simultaneously, the Witch drags Edmund toward the Stone Table and treats him very poorly. Once spring arrives, the Witch cannot use her sledge anymore, so she cannot reach the Stone Table before the children. When the other three Pevensies meet Aslan, they are awed by him, but they quickly grow more comfortable in his presence. They love him immediately, despite their fear. Aslan promises to do all that he can to save Edmund. He takes Peter aside to show him the castle where he will be king. As they are talking, they hear Susan blowing the magic horn that Father Christmas gave her to her, signaling that she is in danger. Aslan sends Peter to help her. Arriving on the scene, Peter sees a wolf attacking Susan, and stabs it to death with the sword given him by Father Christmas. Aslan sees another wolf vanishing into a thicket, and sends his followers to trail it, hoping it will lead them to the Witch. The Witch is preparing to kill Edmund as the rescue party arrives. Aslan and his followers rescue Edmund, but are unable to find the Witch, who disguises herself as part of the landscape. Edmund is happy to see his siblings, as he has accepted that the Witch is evil. The next day, the Witch and Aslan speak and the Witch demands Edmund's life because she says that Edmund is a traitor. The Witch says that according to the Deep Magic of Narnia, a traitor life's is forfeit to the Witch. Aslan does not deny this, and he secretly reaches a compromise with her. The Witch appears very pleased, while Aslan seems pensive and depressed. The following night, Susan and Lucy observe Aslan grow increasingly gloomy and sad. The sisters are unable to sleep, and they notice that Aslan has disappeared. Susan and Lucy leave the pavilion to search for Aslan. When they find Aslan, he tells them they can stay until he tells them they must leave. Together, Aslan, Susan, and Lucy walk to the Stone Table, where Aslan tells them to leave. Susan and Lucy hide behind some bushes and watch the Witch and a horde of her followers torment, humiliate, and finally kill Aslan. The Witch explains that Aslan sacrificed his life for Edmund. Susan and Lucy stay with Aslan's dead body all night. In the morning, they hear a great cracking noise, and are astounded to see the Stone Table broken. Aslan has disappeared. Suddenly Susan and Lucy hear Aslan's voice from behind him. Aslan has risen from the dead. Aslan carries the girls to the Witch's castle, where they free all the prisoners who have been turned to stone. Aslan, Susan, and Lucy charge join the battle between Peter's army and the Witch's troops. Peter and his troops are exhausted. Fortunately, Aslan swiftly kills the Witch and Peter's army then defeats the Witch's followers. Aslan knights Edmund, who has atoned for his sin of siding with the Witch. The children ascend to the thrones at Cair Paravel, the castle in Narnia. Aslan subsequently disappears. The children eventually become adults and reign over Narnia for many years. One day, in a hunt for a magical white stag, they arrive at the lamppost that had marked the border between Narnia and our world. The Pevensies tumble back out of the wardrobe to our world. No time has passed, and they return to Professor Kirke's house as children. The foursome tells Professor Kirke about their adventure, and the Professor assures them that they will return to Narnia again some day.";
		char story[] = "Peter, Susan, Edmund, and Lucy Pevensie are four siblings sent to live in the country with the eccentric Professor Kirke during World War II. The children explore the house on a rainy day and Lucy, the youngest, finds an enormous wardrobe. Lucy steps inside and finds herself in a strange, snowy wood. Lucy encounters";
//		char story[] = "I love Narnia story, it brings me joy everytime i read it, it is full of adventures, weird characters and laughs";
		char deltline[] = ("\r                                                                                                          \r");
	
		int index = 0;
		int correctcharacters = 0;
		int falsecharacters = 0;
		int arrowx = 4;
		int arrowy = 5;
		int cursorx = 5;
		int cursory = 8;
		
		//int typekey;
		char typekey = 'c';
		
//		int charactersfor, characterswhile;
		int charactersfor = 0;
		int characterswhile = 0;
//		for (charactersfor=0; charactersfor<=7422; charactersfor+=100) {               //for the complete version of the story
		for (charactersfor=0; charactersfor<=317; charactersfor+=100) {                //for the short story version
			if (typekey == 0x1b) {
				break;
			}
			COORD coord;
			coord.X = 5;
			coord.Y = 7;
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
			printf("%.100s\n", story+charactersfor);                     // to print first 100 characters, then change to next 100
			characterswhile = 0;
			cursorx = 5;
			int whileloop = 99;                                          // 100 characters in a line, so pressed keys from 0 to 99
//			if (charactersfor == 7400) {                                 // 300 for the full version of the story
//				whileloop = 21;       //16 for the smaller version       // 7422-7400 = 22 (0 to 21) will be left to be written on the line (last line)
//			}
			if (charactersfor == 300) {                                 // 300 for the full version of the story
				whileloop = 16;       //16 for the smaller version       // 7422-7400 = 22 (0 to 21) will be left to be written on the line (last line)
			}
			while (characterswhile <= whileloop) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTMAGENTA);
				strtarrow(arrowx,arrowy);                                //draw a new arrow, in the next location
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
				cursor(cursorx,cursory);
				typekey = getch();
				if (typekey == 0x1b) {
					break;
				}
				else if (typekey == story[index]) {                                     //if typed key is correct
					correctcharacters = correctletter(typekey, correctcharacters, story[index]);
					characterswhile++;
				}
				else {                                                                    //if typed key is wrong
					if (typekey == ' ' || typekey == 9 || typekey == 13) {
						falsecharacters = falseletter('*', falsecharacters, story[index]);            //added because the console does not print a red space, space does not exist
						characterswhile++;
					}
					else {
						falsecharacters = falseletter(typekey, falsecharacters, story[index]);
						characterswhile++;
					}
				}
			cursorx++;
			index++;
			deltarrow(arrowx,arrowy);                            //delete the current arrow, so we can create a new one
			arrowx++;                                            //move one character to the right, for the new arrow
			}
			printstr(5,7,deltline);                          //delete the story line
			printstr(5,8,deltline);                          //delete our typing
			cursor(5,8);                                     //return the cursor location to the beginning
			arrowx = 4;
		}
		
	
	system("cls");
	
	//rewritting the game banner after erasing the console
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GREEN);
	printstr(45,2,"Learn Typing Smart");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
	
	Sleep(500);
	printstr(45,8,"Your results are:");
	Sleep(1000);
	printstr(45,10,"Correct characters: ");
	printint(65,10,correctcharacters);
	printstr(45,11,"False characters: ");
	printint(65,11,falsecharacters);
	
	
	printf("Test Again: ");
//	repeat = getch();
	//} while (repeat == 'y');
	scanf("%s", repeat);
	} while (strcmp(repeat,"yes") == 0);
	
	return 0;
	
}