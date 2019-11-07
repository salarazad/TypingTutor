
//creating the keyboard layout
void keyboard() {
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), RED);
	int r;
	char key1[] = "QWERTYUIOP[]\\";
	int keyselect1=0;
	for (r=37; r<=97; r+=5) {
		char keychar1 = key1[keyselect1];
		printstr(r,19,"\/");
		printstr(r,20,"\\");
		printstr(r+1,18,"__");
		printstr(r+1,20,"__");
		printchar(r+1,19,keychar1);
		printstr(r+3,19,"\\");
		printstr(r+3,20,"\/");
		keyselect1++;
	}

	int f;
	char key2[] = "ASDFGHJKL;'";
	int keyselect2=0;
	for (f=40; f<=90; f+=5) {
		char keychar2 = key2[keyselect2];
		printstr(f,22,"\/");
		printstr(f,23,"\\");
		printstr(f+1,21,"__");
		printstr(f+1,23,"__");
		printchar(f+1,22,keychar2);
		printstr(f+3,22,"\\");
		printstr(f+3,23,"\/");
		keyselect2++;
	}

	int v;
	char key3[] = "ZXCVBNM,./";
	int keyselect3=0;
	for (v=43; v<=92; v+=5) {
		char keychar3 = key3[keyselect3];
		printstr(v,25,"\/");
		printstr(v,26,"\\");
		printstr(v+1,24,"__");
		printstr(v+1,26,"__");
		printchar(v+1,25,keychar3);
		printstr(v+3,25,"\\");
		printstr(v+3,26,"\/");
		keyselect3++;
	}

	int n;
	char key4[] = "`1234567890-=";
	int keyselect4=0;
	for (n=29; n<=89; n+=5) {
		char keychar4 = key4[keyselect4];
		printstr(n,16,"\/");
		printstr(n,17,"\\");
		printstr(n+1,15,"__");
		printstr(n+1,17,"__");
		printchar(n+1,16,keychar4);
		printstr(n+3,16,"\\");
		printstr(n+3,17,"\/");
		keyselect4++;
	}
	
	int p, q;
	for (q=28; q<=101; q++) {
		for (p=14; p<=27; p++) {
			if (p == 14 || p == 27) {
				if (q > 28 && q < 101) {
					printchar(q,p,'_');
				}
			}
			if (q == 28 || q == 101) {
				if (p > 14) {
					printchar(q,p,'|');
				}
			}
		}
	}
}

void strtarrow(int x, int y) {
	printstr(x+1, y+1, "|");
	printstr(x+1, y, "|");
	printstr(x, y+1, "\\");
	printstr(x+2, y+1, "\/");
}

void deltarrow(int x, int y) {
	printstr(x+1, y+1, "  ");
	printstr(x+1, y, "  ");
	printstr(x, y+1, "  ");
	printstr(x+2, y+1, "  ");
}