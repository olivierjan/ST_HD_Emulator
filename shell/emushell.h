/* 
 * File:    emushell.h
 * Author:  Steve Bradford
 *
 * Created: 1st Nov 2022
 * 
 * Shell header file
 * 
 */

#ifndef _EMU_SHELL_H
#define _EMU_SHELL_H

#define GOOD                    false
#define BAD                     true

#define NOT                     !

#define MAXCFGLINES             10
#define MAX_ARGS                5
#define MAX_ARG_LENGTH          40

#define SHELL_CMDBUF            80                                              /* CP/M command line buffer size */

#define SYNTAX( command )       printf( "\t%s: Syntax error\n", command );

#define BS                      0x08
#define DEL                     0x7f
#define CR                      0x0d
#define LF                      0x0a
#define ESC                     0x1b
#define SPACE                   0x20


/* psh declarations */
int  chgdisk ( int, char* );
void doShell (void );
void cpuFreq ( char );

/* external functions */
extern bool emudate   (char*);
extern bool format    (char);
extern void help      (char*);
extern bool mount     (int, char*, int);
extern void psh       (void);
extern bool quit      (void);
extern bool reboot    (void);
extern bool rmdisk    (char*);
extern bool status    (void);
extern bool emutime   (char*);
extern bool umount    (int, int);
extern bool uptime    (void);


/* external variables */



#endif