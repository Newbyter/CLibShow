#pragma once

void acos_handler(void);
void asin_handler(void);
void atan_handler(void);
void cos_handler(void);
void sin_handler(void);
void tan_handler(void);
void cosh_handler(void);
void sinh_handler(void);
void tanh_handler(void);
void atan2_handler(void);
void fabs_handler(void);
void abs_handler(void);
void ceil_handler(void);
void floor_handler(void);
void exp_handler(void);
void fmod_handler(void);
void frexp_handler(void);
void hypot_handler(void);//18
void ldexp_handler(void);
void log_handler(void);
void log10_handler(void);
void modf_handler(void);
void pow_handler(void);
void sqrt_handler(void);

///////////////////////////////////////////////////////////////
//string.h.////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////
void memchr_handler(void); 
void memcmp_handler(void);
void memcpy_handler(void);
void memmove_handler(void);
void memset_handler(void);
void strcat_handler(void);
void strchr_handler(void);
void strcmp_handler(void);
void strcoll_handler(void);
void strcpy_handler(void);
void strcspn_handler(void);
void strerror_handler(void);
void strlen_handler(void);
void strncat_handler(void);
void strncmp_handler(void);
void strncpy_handler(void);
void strpbrk_handler(void);
void strrchr_handler(void);
void strspn_handler(void);
void strstr_handler(void);
void strtok_handler(void);
void strxfrm_handler(void);
/////////////////////////////////////////////////////////
///////////stdlib///////////////////////////////////////
/////////////////////////////////////////////////////////
void abs_handler(void);
void atof_handler(void);
void atoi_handler(void);
void bsearch_handler(void);
void div_handler(void);
void getenv_handler(void);
void qsort_handler(void);
void rand_handler(void);



////////////////////////////////////////////////
//////////////stdio_handler/////////////////////
////////////////////////////////////////////////


void remove_handler(void);//	 Remove file (function)
void rename_handler(void);//	 Rename file (function )
void tmpfile_handler(void);//	 Open a temporary file (function)
void tmpnam_handler(void);//	 Generate temporary filename (function)


void fclose_handler(void);//	 Close file (function)
void fflush_handler(void);//	 Flush stream (function)
void fopen_handler(void); //	 Open file (function )
void freopen_handler(void);//	 Reopen stream with different file or mode (function )
void setbuf_handler(void);//	 Set stream buffer (function )
void setvbuf_handler(void);//	 Change stream buffering (function )


void fprintf_handler(void);//	 Write formatted output to stream (function)
void fscanf_handler(void);//	 Read formatted data from stream (function )
void printf_handler(void);//	 Print formatted data to stdout (function )
void scanf_handler(void); //	 Read formatted data from stdin (function )
void sprintf_handler(void);//	 Write formatted data to string (function)
void sscanf_handler(void);//	 Read formatted data from string (function )
void vfprintf_handler(void);//	 Write formatted variable argument list to stream (function)
void vprintf_handler(void);//	 Print formatted variable argument list to stdout (function)
void vsprintf_handler(void);//	 Print formatted variable argument list to string (function)


void fgetc_handler(void); //	 Get character from stream (function)
void fgets_handler(void); //	 Get string from stream (function )
void fputc_handler(void); //	 Write character to stream (function)
void fputs_handler(void); //	 Write string to stream (function)
void getc_handler(void);  //	 Get character from stream (function)
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