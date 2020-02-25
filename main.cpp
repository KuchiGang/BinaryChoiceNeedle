#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <windows.h>
#include <process.h>
#include <IRC.h>

using namespace std;

char server[] = "irc.twitch.tv";
int port = 6667;
char nick[] = "alextra";
char user[] = "alextra";
char name[] = "alextra";
char pass[] = "oauth:1xok1a02euh77fflis7rteqln58e5s";

int main() {
	IRC conn;

	WSADATA wsaData;

	if (WSAStartup(MAKEWORD(1, 1), &wsaData))
	{
		printf("Failed to initialise winsock!\n");
	}

	conn.start(server, port, nick, user, name, pass);
	conn.message_loop();

	cout << "Hello World!";
	return EXIT_SUCCESS;
}