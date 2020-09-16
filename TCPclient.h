#include <iostream>
#include <string>
#include <WS2tcpip.h>
#pragma comment(lib, "ws2_32.lib")

class TCPclient {

public:
	TCPclient();
	void ConnectESP(const std::string ipESP);

};
