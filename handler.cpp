#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <io.h>
#include <stdlib.h>
#include <string.h>
#include "util.h"
#include <fstream>
#include <iostream>
#include <time.h>
#include <stdarg.h>
void acos_handler(void)
{
	double x = getDouble("x = ");
	printf("acos(%f) => %f\n", x, acos(x));
}

void fabs_handler(void)
{
	double x = getDouble("x = ");
	printf("fabs(%lf) => %lf\n", x, fabs(x));	
}

void asin_handler(void)
{
	double x = getDouble("x = ");
	printf("asin(%lf) => %lf\n", x, asin(x));
}

void atan_handler(void)
{
	double x = getDouble("x = ");
	printf("atan(%lf) => %lf\n", x, atan(x));
}

void atan2_handler(void)
{
	double x = getDouble("x = "), y = getDouble("y = ");
	printf("atan2(%lf, %lf) => %lf\n", y, x, atan2(y, x));
}

void cos_handler(void)
{
	double x = getDouble("x = ");
	printf("cos(%f) => %f\n", x, cos(x));
}

void sin_handler(void)
{
	double x = getDouble("x = ");
	printf("sin(%f) => %f\n", x, sin(x));
}

void tan_handler(void)
{
	double x = getDouble("x = ");
	printf("tan(%f) => %f\n", x, tan(x));
}

void cosh_handler(void)
{
	double x = getDouble("x = ");
	printf("cosh(%f) => %f\n", x, cosh(x));
}
void sinh_handler(void)
{
	double x = getDouble("x = ");
	printf("tan(%f) => %f\n", x, sinh(x));
}
void tanh_handler(void)
{
	double x = getDouble("x = ");
	printf("tan(%f) => %f\n", x, tanh(x));
}

void ceil_handler(void)
{
	double x = getDouble("x = ");
	printf("ceil(%lf) => %lf\n", x, ceil(x));
}

void floor_handler(void)
{
	double x = getDouble("x = ");
	printf("floor(%lf) => %lf\n", x, floor(x));
}

void exp_handler(void)
{
	double x = getDouble("x = ");
	printf("exp(%lf) => %lf\n", x, exp(x));
}

void fmod_handler(void)
{
	double x = getDouble("x = "), y = getDouble("y = ");
	printf("fmod(%lf, %lf) => %lf\n", x, y, fmod(x, y));
}

void frexp_handler(void)
{
	double x = getDouble("x = "), y = 0.0;
	int exp;
	y = frexp(x, &exp);
	printf("%lf = %lf * 2 ^ %d\n", x, y, exp);
}

void ldexp_handler(void)
{
	double x = getDouble("x = ");
	int exp = getInt("exp = ");
	printf("ldexp(%lf, %d) => %lf\n", x, exp, ldexp(x, exp));
}

void log_handler(void)
{
	double x = getDouble("x = ");
	printf("log(%lf) => %lf\n", x, log(x));
}

void log10_handler(void)
{
	double x = getDouble("x = ");
	printf("log10(%lf) => %lf\n", x, log10(x));
}

void modf_handler(void)
{
	double x = getDouble("x = "), y = 0.0, i = 0.0;
	y = modf(x, &i);
	printf("%lf = %lf + %lf\n", x, i, y);
}

void pow_handler(void)
{
	double x = getDouble("x = "), exp = getDouble("exp = ");
	printf("%lf ^ %lf = %lf\n", x, exp, pow(x, exp));
}

void sqrt_handler(void)
{
	double x = getDouble("x = ");
	printf("sqrt(%lf) = %lf\n", x, sqrt(x));
}

/////////////////////////////////////////////////////
//////////////string_handler////////////////////////
////////////////////////////////////////////////////////

void memchr_handler(void)
{
	char *s = getString("s = ");
	char c = getChar("c = ");
	size_t n = getSize_t("n = ");
	printf("memchr(%s, %c, %lu) = %s\n", s, c, n, memchr(s, c, n));
}

void memcmp_handler(void)
{
	char *s1 = getString("s1 = ");
	char *s2 = getString("s2 = ");
	size_t n = getSize_t("n = ");
	printf("memcmp(%s, %s, %lu) = %d\n", s1, s2, n, memcmp(s1, s2, n));
}

void memcpy_handler(void)
{
	char *s1 = getString("s1 = ");
	char *s2 = getString("s2 = ");
	size_t n = getSize_t("n = ");
	printf("memcpy(%s, %s, %lu) = %s\n", s1, s2, n, memcpy(s1, s2, n));
}
void memmove_handler(void)
{
	char *s1 = getString("s1 = ");
	char *s2 = getString("s2 = ");
	size_t n = getSize_t("n = ");
	printf("memmove(%s, %s, %lu) = %s\n", s1, s2, n, memmove(s1, s2, n));
}
void memset_handler(void)
{
	char *s = getString("s = ");
	char c = getChar("c = ");
	size_t n = getSize_t("n = ");
	printf("memset(%s, %c, %lu) = %s\n", s, c, n, memset(s, c, n));
}
void strcat_handler(void)
{
	char *s1 = getString("s1 = ");
	char *s2 = getString("s2 = ");
	printf("strcat(%s, %s) = %s\n", s1, s2, strcat(s1, s2));
}
void strchr_handler(void)
{
	char *s = getString("s = ");
	char c = getChar("c = ");
	printf("strchr(%s, %c) = %s\n", s, c, strchr(s, c));
}
void strcmp_handler(void)
{
	char *s1 = getString("s1 = ");
	char *s2 = getString("s2 = ");
	printf("strcmp(%s, %s) = %d\n", s1, s2, strcmp(s1, s2));
}
void strcoll_handler(void)
{
	char *s1 = getString("s1 = ");
	char *s2 = getString("s2 = ");
	printf("strcoll(%s, %s) = %d\n", s1, s2, strcoll(s1, s2));
}
void strcpy_handler(void)
{
	char *s1 = getString("s1 = ");
	char *s2 = getString("s2 = ");
	printf("strcpy(%s, %s) = %s\n", s1, s2, strcpy(s1, s2));
}
void strcspn_handler(void)
{
	char *s1 = getString("s1 = ");
	char *s2 = getString("s2 = ");
	printf("strcspn(%s, %s) = %lu\n", s1, s2, strcspn(s1, s2));
}
void strerror_handler(void)
{
	char errcode = getChar("c = ");
	printf("strerror(%c) = %s\n", errcode, strerror(errcode));
}
void strlen_handler(void)
{
	char *s = getString("s = ");
	printf("strlen(%s) = %lu\n", s, strlen(s));
}
void strncat_handler(void)
{
	char *s1 = getString("s1 = ");
	char *s2 = getString("s2 = ");
	size_t n = getSize_t("n = ");
	printf("strncat(%s, %s, %lu) = %s\n", s1, s2, n, strncat(s1, s2, n));
}
void strncmp_handler(void)
{
	char *s1 = getString("s1 = ");
	char *s2 = getString("s2 = ");
	size_t n = getSize_t("n = ");
	printf("strncmp(%s, %s, %lu) = %lu\n", s1, s2, n, strncmp(s1, s2, n));
}
void strncpy_handler(void)
{
	char *s1 = getString("s1 = ");
	char *s2 = getString("s2 = ");
	size_t n = getSize_t("n = ");
	printf("strncpy(%s, %s, %lu) = %s\n", s1, s2, n, strncpy(s1, s2, n));
}
void strpbrk_handler(void)
{
	char *s1 = getString("s1 = ");
	char *s2 = getString("s2 = ");
	printf("strpbrk(%s, %s) = %s\n", s1, s2, strpbrk(s1, s2));
}
void strrchr_handler(void)
{
	char *s = getString("s = ");
	char c = getChar("c = ");
	printf("strrchr(%s, %c) = %s\n", s, c, strrchr(s, c));
}
void strspn_handler(void)
{
	char *s1 = getString("s2 = ");
	char *s2 = getString("s2 = ");
	printf("strspn(%s, %s) = %lu\n", s1, s2, strspn(s1, s2));
}
void strstr_handler(void)
{
	char *s1 = getString("s1 = ");
	char *s2 = getString("s2 = ");
	printf("strstr(%s, %s) = %s\n", s1, s2, strstr(s1, s2));
}
void strtok_handler(void)
{
	char *s1 = getString("s1 = ");
	char *s2 = getString("s2 = ");
	printf("strtok(%s, %s) = %s\n", s1, s2, strtok(s1, s2));
}
void strxfrm_handler(void)
{
	char *s1 = getString("s1 = ");
	char *s2 = getString("s2 = ");
	size_t n = getSize_t("n = ");
	printf("strxfrm(%s, %s, %lu) = %lu\n", s1, s2, n, strxfrm(s1, s2, n));
}
/////////////////////////////////////////////////////
//////////////stdlib_handler////////////////////////
////////////////////////////////////////////////////////
void abs_handler(void)
{
	int x=getInt("x=");
	printf("abs(%d)=>%d\n",x,abs(x));
}
void atof_handler(void)
{
	const char *s=getString("s=");
	printf("atof(%s)=%lf\n",s,atof(s));
}
void atoi_handler(void)
{
	const char *s=getString("s=");
	printf("atoi(%s)=%d",s,atoi(s));
}
void bsearch_handler(void)
{
	printf("Sorry!鏆傛椂涓嶈兘瀹炵幇\n");
}
void div_handler(void)
{
	int number=getInt("number=");
	int denom=getInt("denome=");
	printf("div(%d,%d)=%d\n",number,denom,div(number,denom));
}
void getenv_handler(void)
{
	const char *name=getString("name=");
	printf("getenv(%s)=%s\n",name,getenv(name));
}
void qsort_handler(void)
{
	printf("SORRY!璇ュ嚱鏁版殏鏃舵棤娉曞疄鐜癨n");
}
void rand_handler(void)
{
	int a;
	printf("rand(void)=%d\n",rand());
}

////////////////////////////////////////////////
//////////////stdio_handler/////////////////////
////////////////////////////////////////////////

void remove_handler(void) //	 Remove file (function)
{
	using namespace std;  // 入哥，我实在是不会用C新建一个文件，百度了老久，都没有找到合适的囧囧囧
	ofstream built;
	const char* name = "test.txt";
	built.open(name);
	built.close();
	printf("Now you have 10 seconds to check if the file \"test.txt\"is built!\n"); //怎样让程序自动检查文件是否创建成功啊？
	clock_t delay = 10 * CLOCKS_PER_SEC;
	printf( "Go!\a\n");
	clock_t start = clock();
	while (clock()- start < delay)
		;
	if (remove(name) == 0)
		printf("Removed %s.\n",name);
	else
		perror("remove");
}




void rename_handler(void)//	 Rename file (function )
{
	using namespace std;
	ofstream built;
	char newname[80];
	const char* oldname = "fucked_c.txt";
	built.open(oldname);
	built.close();
	printf("I've build a file named 'fucked_c.txt', now you have 10 seconds to check it!\n");
	clock_t delay = 10 * CLOCKS_PER_SEC;
	printf( "Go!\a\n");
	clock_t start = clock();
	while (clock()- start < delay)
		;
	printf("Now, we are to change its name:\nPlease enter the name you want to use:\n");
	gets(newname);
	if (rename(oldname, newname) == 0)
		printf("Renamed %s to %s.\n", oldname, newname);
	else
		perror("rename");
	printf("Now, press any key to delete it in order to save space!\n");
	getchar();
	if (remove(newname) == 0)
		printf("Removed %s.\n",newname);
	else
		perror("remove");
}



void tmpfile_handler(void)//	 Open a temporary file (function)
{
	FILE *tempfp;
	tempfp = tmpfile();
	if (tempfp)
        printf("Temporary file created\n");
	else
	{
        printf("Unable to create temporary file\n");
		exit(1);
	}
}



void tmpnam_handler(void)//	 Generate temporary filename (function)
{
	bool over;
	char name[13];
	tmpnam(name);
	printf("Temporary name: %s\n", name);
	printf("Press any 0 to exit.\n");
    scanf("%d",&over);
	if(!over)
		exit(0);
}


void fclose_handler(void)//	 Close file (function)
{
	FILE *fp;
	char buf[11] = "Newbyter!!";// create a file containing 10 bytes 
	fp = fopen("DUMMY.FIL", "w");
	fwrite(&buf, strlen(buf), 1, fp);// close the file   问题是 这个函数怎样展现啊？关了就关了，我们又看不到……
	fclose(fp);
}


void fflush_handler(void)//	 Flush stream (function)
{
	printf("I can't make it,sorry!\n");
}



void fopen_handler(void) //	 Open file (function )
{
	using namespace std; 
	int ch;
	FILE* fp;
	ofstream built;
	char filename[50]; 
	printf("Please enter your file name：");
	scanf("%s",filename);
	built.open(filename);
	built << "I'm an example.\n";
	built.close();
	
	fp=fopen(filename,"r"); 
	if(fp==NULL)
	{
		printf("Error!");
		exit(1); 
	}
	
	while((ch=getc(fp))!=EOF)
		putchar(ch);
	fclose(fp); 
	printf("Now, press any key to delete it so that we can save our hard disk's space\no(∩_∩)o \n");
	getch();
	if (remove(filename) == 0)
		printf("Removed %s.\n",filename);
	else
		perror("remove");
}



void freopen_handler(void)//	 Reopen stream with different file or mode (function )
{
	//	using namespace std;
	int a,b;
	/*	ofstream built;
	char newname[80];
	const char* name = "in.txt";
	built.open(name);
	built<<"3 8 13 56 95 34 26 66";         说实话，这个函数是我百度的，究竟是怎么实现的还是木有弄明白……
	built.close();                           此外，这个函数貌似有很多种用途，求入哥指教！
	built.open("out.txt");
	built.close();*/
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	while(scanf("%d%d",&a,&b)!=EOF)
		printf("%d\n",a+b);
	fclose(stdin);
	fclose(stdout);
}


void setbuf_handler(void)//	 Set stream buffer (function )
{
	int a;
	/*	char outbuf[50];
	setbuf(stdout,outbuf);
	puts("This is a test of buffered output.");
	puts("This output will go into outbuf");
	puts("and won't appear until the buffer");
	puts("fills up or we flush the stream.\n");
	puts(outbuf);
	getch();
	fflush(stdout);*/
	printf("I can't make it,sorry!\n\t\t\tPlease help me to check it!\nPress 0 to exit.\n");
	scanf("%d",&a);
	if (!a) 
		exit (0);
}

void setvbuf_handler(void)//	 Change stream buffering (function )
{
	
	int a;
	printf("I can't make it,sorry!\n\t\t\tPlease help me to check it!\nPress 0 to exit.\n");
	scanf("%d",&a);
	if (!a) 
		exit (0);
	
		/*	FILE *input;
		FILE *output;
		char bufr[512];
		input = fopen("file.in", "r+b");
		output = fopen("file.out", "w");
		/* set up input stream for minimal disk access,
	using our own character buffer */
	/*	if (setvbuf(input, bufr, _IOFBF, 512) != 0)
	printf("failed to set up buffer for input file\n");
	else
	printf("buffer set up for input file\n");
	/* set up output stream for line buffering using space that
	will be obtained through an indirect call to malloc */
	/*	if (setvbuf(output, NULL, _IOLBF, 132) != 0)
	printf("failed to set up buffer for output file\n");
	else
	printf("buffer set up for output file\n");
	/* perform file I/O here */
	/* close files */
	//	fclose(input);
	//	fclose(output);
	
}


void fprintf_handler(void)//	 Write formatted output to stream (function)
{
	FILE *stream;
	
	int i = 521;
	double fp = 2.0e2;
	char s[] = "I'm a string";
	char c = '\n';
	stream = fopen( "fprintf.out", "w" );
	fprintf( stream, "%s%c", s, c );
	fprintf( stream, "%d\n", i );
	fprintf( stream, "%f\n", fp );
	fclose( stream );
	system( "type fprintf.out" );
}



void fscanf_handler(void)//	 Read formatted data from stream (function )
{
	//	MSDN 中的例子  嘿嘿 拿来主义
	/* FSCANF.C: This program writes formatted
	* data to a file. It then uses fscanf to
	* read the various data back from the file.
	*/
	
	FILE *stream;
	
	long l;
	float fp;
	char s[81];
	char c;
	stream = fopen( "fscanf.out", "w+" );
	if( stream == NULL )
		printf( "The file fscanf.out was not opened\n" );
	else
	{
		fprintf( stream, "%s %ld %f%c", "a-string",
			65000, 3.14159, 'x' );
		/* Set pointer to beginning of file: */
		fseek( stream, 0L, SEEK_SET );
		/* Read data back from file: */
		fscanf( stream, "%s", s );
		fscanf( stream, "%ld", &l );
		fscanf( stream, "%f", &fp );
		fscanf( stream, "%c", &c );
		/* Output data read: */
		printf( "%s\n", s );
		printf( "%ld\n", l );
		printf( "%f\n", fp );
		printf( "%c\n", c );
		fclose( stream );
	}
}






void printf_handler(void)//	 Print formatted data to stdout (function )
{
	int a=12345;
	double b=9.12345678;
	char e,d,f;
	printf("Please give me three chars!\n");
	scanf("%c%c%c",&e,&d,&f);
	printf("Your input are %d\n\t\t\t%4d\n\t\t\t\t%.4d\n\t\t\t%*d/n",e,d,f,e);
	printf("int is:%d\n",a);
	printf("int is:%9d\n",a);
	printf("int is:%.9d\n",a);
	printf("int is:%8.4d\n",a);
	printf("int is:%-8.4d\n",a);
	printf("int is:%+8.4d\n",a);
	printf("float is:%f\n",b);
	printf("float is:%8f\n",b);
	printf("float is:%.4f\n",b);
	printf("float is:%8.4f\n",b);
	printf("float is:%-8.4f\n",b);
	printf("char is:%s\n","Newbyter!!!");
	printf("char is:%8s\n","Newbyter!!!");
	printf("char is:%.4s\n","Newbyter!!!");
	printf("char is:%8.4s\n","Newbyter!!!");
	printf("char is:%-8.4s\n","Newbyter!!!");
}




void scanf_handler(void) //	 Read formatted data from stdin (function )
{
	int a,b,c;
	printf("输入 a,b,c\n");
	scanf("%d %d %d",&a,&b,&c);
	printf("a=%d b=%d c=%d\n",a,b,c);
	fflush(stdin);
}





void sprintf_handler(void)										//	 Write formatted data to string (function)
{
	char buffer[200], s[] = "computer", c = 'l';
	int i = 35, j;
	float fp = 1.7320534f;										// Format and print various data:
	j = sprintf( buffer, " String: %s\n", s );					 // C4996
	j += sprintf( buffer + j, " Character: %c\n", c );			// C4996
	j += sprintf( buffer + j, " Integer: %d\n", i );			// C4996
	j += sprintf( buffer + j, " Real: %f\n", fp );				// C4996
	// Note: sprintf is deprecated; consider using sprintf_s instead
	printf( "Output:\n%s\ncharacter count = %d\n", buffer, j );
}





void sscanf_handler(void)						//	 Read formatted data from string (function )
{												//入哥，这个函数我感觉展现的有点问题，我 应该 怎样做？
	char buf[512] ;
	sscanf("123456 ", "%s", buf);				//将123456以%s的形式存入buf中
	printf("%s\n", buf);                  
	printf("Press any key to continue......\n");
	getch();
	
	sscanf("123456 ", "%4s", buf);				//取最大长度为4字节的字符串
	printf("%s\n", buf);
	printf("Press any key to continue......\n");
	getch();
	
	sscanf("123456 abcdedf", "%[^ ]", buf);		//遇到空格为止取字符串
	printf("%s\n", buf);
	printf("Press any key to continue......\n");
	getch();
	sscanf("123456abcdedfBCDEF", "%[1-9a-z]", buf);	//取仅包含1到9和小写字母的字符串。
	printf("%s\n", buf);
	sscanf("123456abcdedfBCDEF","%[1-9A-Z]",buf);
	printf("%s\n",buf);
	printf("Press any key to continue......\n");
	getch();
	
	
	sscanf("123456abcdedfBCDEF", "%[^A-Z]", buf);	//取遇到大写字母为止的字符串
	printf("%s\n", buf);
	printf("Press any key to continue......\n");
	getch();
	
	sscanf("iios/12DDWDFF@122", "%*[^/]/%[^@]", buf);//给定一个字符串iios/12DDWDFF@122，获取 / 和 @ 之间的字符串，先将 "iios/"过滤掉，再将非'@'的一串内容送到buf中
	printf("%s\n", buf);
	printf("Press any key to continue......\n");
	getch();
	
	sscanf("hello, world", "%*s%s", buf);			 //给定一个字符串“hello, world”，仅保留world
	printf("%s\n", buf);
	printf("That's all~\n");
}




void vfprintf_handler(void)//	 Write formatted variable argument list to stream (function)
{
/*
	{	
		FILE *fp;
		int vfpf(char *fmt, ...);
		int inumber = 30;
		float fnumber = 90.0;
		char string[4] = "abc";
		fp = tmpfile();
		if (fp == NULL)
		{
			perror("tmpfile() call");
			exit(1);
		}
		vfpf("%d %f %s", inumber, fnumber, string);
		rewind(fp);
		fscanf(fp,"%d %f %s", &inumber, &fnumber, string);
		printf("%d %f %s\n", inumber, fnumber, string);
		fclose(fp);	
	}
	
	int vfpf(char *fmt, ...)
	{
		va_list argptr;
		int cnt;
		va_start(argptr, fmt);
		cnt = vfprintf(fp, fmt, argptr);
		va_end(argptr);
		return (cnt);
	}
*/	
	
}




void vprintf_handler(void)//	 Print formatted variable argument list to stdout (function)
{
/*	int vpf(char *fmt, ...)
	{
		va_list argptr;
		int cnt;
		va_start(argptr, format);
		cnt = vprintf(fmt, argptr);
		va_end(argptr);
		return(cnt);
	}
	{
		int inumber = 30;
		float fnumber = 90.0;
		char *string = "abc";
		vpf("%d %f %s\n",inumber,fnumber,string);
	}*/
}




void vsprintf_handler(void)//	 Print formatted variable argument list to string (function)
{

/*	char buffer[80];
	int vspf(char *fmt, ...);
	int inumber = 30;
	float fnumber = 90.0;
	char string[4] = "abc";
	vspf("%d %f %s", inumber, fnumber, string);
	printf("%s\n", buffer);

	int vspf(char *fmt, ...)
	{
		va_list argptr;
		int cnt;
		va_start(argptr, fmt);
		cnt = vsprintf(buffer, fmt, argptr);
		va_end(argptr);
		return(cnt);
	}*/
}



  
void fgetc_handler(void) //	 Get character from stream (function)
{
	FILE *stream;
	char string[] = "I am a test.\n";
	int ch;		// open a file for update
	stream = fopen("DUMMY.FIL", "w+");	// write a string into the file 
	fwrite(string, strlen(string), 1, stream);// seek to the beginning of the file
	fseek(stream, 0, SEEK_SET);
	do
	{
		// read a char from the file 
		ch = fgetc(stream);		//display the character
		putch(ch);
	} while (ch != EOF);
	fclose(stream);
}


void fgets_handler(void) //	 Get string from stream (function )
{
	FILE *stream;
	char string[] = "I am a test.\n";
	char msg[20];
	// open a file for update
	stream = fopen("DUMMY.FIL", "w+");
	//write a string into the file
	fwrite(string, strlen(string), 1, stream);
	// seek to the start of the file
	fseek(stream, 0, SEEK_SET);
	//read a string from the file
	fgets(msg, strlen(string)+1, stream);
	//display the string
	printf("%s", msg);
	fclose(stream);
}


void fputc_handler(void) //	 Write character to stream (function)
{
	char msg[] = "Newbyter!";
	int i = 0;
	while (msg[i]&&(i<strlen(msg)))
	{
		fputc(msg[i], stdout);
		i++;
	}

}


void fputs_handler(void) //	 Write string to stream (function)
{
	FILE *fpout=fopen("1.txt","wr");//
	fputs("Newbyter!\n", fpout);
}





/*	void getc_handler(void);  //	 Get character from stream (function)
	void getchar_handler(void); //	 Get character from stdin (function)
	void gets_handler(void);  //	 Get string from stdin (function )
	void putc_handler(void);  //	 Write character to stream (function)
	void putchar_handler(void); //	 Write character to stdout (function)
	void puts_handler(void);  //	 Write string to stdout (function)
	void ungetc_handler(void); //	 Unget character from stream (function)
	
	  
		
		  void fread_handler(void); //	 Read block of data from stream (function)
		  void fwrite_handler(void); //	 Write block of data to stream (function)
		  
			void fgetpos_handler(void); //	 Get current position in stream (function)
			void fseek_handler(void); //	 Reposition stream position indicator (function)
			void fsetpos_handler(void); //	 Set position indicator of stream (function)
			void ftell_handler(void); //	 Get current position in stream (function)
			void rewind_handler(void); //	 Set position indicator to the beginning (function)
			
			  
				void clearerr_handler(void); //	 Clear error indicators (function)
				void feof_handler(void);  //	 Check End-of-File indicator (function)
				void ferror_handler(void); //	 Check error indicator (function)
				void perror_handler(void); //	 Print error message (function)
*/