
//function for a correct typed key
int correctletter(int typekey, int correctcharacters, char index) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GREEN);
	printf("%c", typekey);
	flashkeyboard(index);
	Sleep(50);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), DARKGRAY);
	flashkeyboard(index);
	Sleep(25);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GREEN);
	flashkeyboard(index);	
	Sleep(50);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), DARKGRAY);
	flashkeyboard(index);	
	correctcharacters++;
	return correctcharacters;
}

//function for a wrong typed key
int falseletter(int typekey, int falsecharacters, char index) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), RED);
	printf("%c", typekey);
	flashkeyboard(index);
	Sleep(50);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), DARKGRAY);
	flashkeyboard(index);
	Sleep(25);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), RED);
	flashkeyboard(index);	
	Sleep(50);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), DARKGRAY);
	flashkeyboard(index);	
	falsecharacters++;
	return falsecharacters;
}



void flashkeyboard(char index) {
	char key1[] = "qwertyuiop[]\\";
	char key2[] = "asdfghjkl;'";
	char key3[] = "zxcvbnm,./";
	char key4[] = "`1234567890-=";
	index = tolower(index);
	if (strchr(key1,index) != 0) {
		flashkeyline1(index);
	}
	else if (strchr(key2,index) != 0) {
		flashkeyline2(index);
	}
	else if (strchr(key3,index) != 0) {
		flashkeyline3(index);
	}
	else if (strchr(key4,index) != 0) {
		flashkeyline4(index);
	}
}


void flashkeyline1(char index) {
	int r;
	index = toupper(index);
	char key1[] = "QWERTYUIOP[]\\";
	int keyselect1=0;
//	index = tolower(index);
	for (r=37; r<=97; r+=5) {
		char keychar1 = key1[keyselect1];
		if (keychar1 == index) {
			printstr(r,19,"\/");
			printstr(r,20,"\\");
			printstr(r+1,18,"__");
			printstr(r+1,20,"__");
			printchar(r+1,19,keychar1);
			printstr(r+3,19,"\\");
			printstr(r+3,20,"\/");
		}
		keyselect1++;
	}
}
void flashkeyline2(char index) {
	int f;
	index = toupper(index);
	char key2[] = "ASDFGHJKL;'";
	int keyselect2=0;
	for (f=40; f<=90; f+=5) {
		char keychar2 = key2[keyselect2];
		if (keychar2 == index) {
			printstr(f,22,"\/");
			printstr(f,23,"\\");
			printstr(f+1,21,"__");
			printstr(f+1,23,"__");
			printchar(f+1,22,keychar2);
			printstr(f+3,22,"\\");
			printstr(f+3,23,"\/");
		}
		keyselect2++;
	}
}
void flashkeyline3(char index) {
	int v;
	index = toupper(index);
	char key3[] = "ZXCVBNM,./";
	int keyselect3=0;
	for (v=43; v<=92; v+=5) {
		char keychar3 = key3[keyselect3];
		if (keychar3 == index) {
			printstr(v,25,"\/");
			printstr(v,26,"\\");
			printstr(v+1,24,"__");
			printstr(v+1,26,"__");
			printchar(v+1,25,keychar3);
			printstr(v+3,25,"\\");
			printstr(v+3,26,"\/");
		}
		keyselect3++;
	}
}
void flashkeyline4(char index) {
	int n;
	index = toupper(index);
	char key4[] = "`1234567890-=";
	int keyselect4=0;
	for (n=29; n<=89; n+=5) {
		char keychar4 = key4[keyselect4];
		if (keychar4 == index) {
			printstr(n,16,"\/");
			printstr(n,17,"\\");
			printstr(n+1,15,"__");
			printstr(n+1,17,"__");
			printchar(n+1,16,keychar4);
			printstr(n+3,16,"\\");
			printstr(n+3,17,"\/");
		}
		keyselect4++;
	}
}