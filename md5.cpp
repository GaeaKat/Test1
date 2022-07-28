#include "Poco/MD5Engine.h"
 #include "Poco/DigestStream.h"
#include "data/types.hpp"
 #include <iostream>
#include <data/cross.hpp>

int main(int argc, char** argv){
     Poco::MD5Engine md5;
     Poco::DigestOutputStream ds(md5);
     ds << "This is a test of conan, Not much to it really";
     ds.close();
	 data::bytes temp(10);
	std::fill(temp.begin(), temp.end(),0x10);
	//std::cout << temp << std::endl;
     std::cout << Poco::DigestEngine::digestToHex(md5.digest()) << std::endl;
     return 0;
 }
