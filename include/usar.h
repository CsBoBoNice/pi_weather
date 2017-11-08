#ifndef _USAR_H_
#define _USAR_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <termios.h>
#include <errno.h>
#include <curses.h>

class USAR
{
public:
	USAR();
	~USAR();
	int init_uart(char *tty_name, int speed, int databits, int stopbits, int parity);
	int uart_write(char *buff, int size);
	int uart_read(char *data, int data_len);
	void close_uart();
private:
	int fp;

	int set_Parity(int fd, int databits, int stopbits, int parity);
	void set_speed(int fd, int speed);

};





#endif
