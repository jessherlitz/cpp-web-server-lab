#include "SimpleSocket.hpp"

HDE::SimpleSocket::SimpleSocket(int domain, int service, int protocol, int port)
{
  address.sin_family = domain;
  connection = socket(domain, service, protocol);
}