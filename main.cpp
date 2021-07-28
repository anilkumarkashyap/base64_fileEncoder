/*
 * main.cpp
 *
 *  Created on: Jul 15, 2021
 *      Author: 320037431
 */

#include "base_64.h"

int main(int argc, char *argv[]) {

	//Check if proper number of argument supplied?
	if(argc < 2 || argv[1] == nullptr){
		std::cout<<"Uses: Base64_EncoderDecoder.exe <filepath> "<<std::endl;
		return -1;
	}


	//"C:\AnilKahsyap\DevWorks\CPP\code\file_encoder_decoder\data\VIMPDOC.txt"
	std::string fileAsString = readfileasString(argv[1]);
	if(fileAsString.length()==0) return 0;

	//original --> base 64 encoded
	std::string base64_encoded_fileAsString = base64_encode(fileAsString);
	std::cout << "First: base64_encoded_fileAsString: " << base64_encoded_fileAsString << std::endl;
	// base 64 --> original
	std::string decoded_fileAsString = base64_decode(base64_encoded_fileAsString);
	std::cout << "First : decoded_fileAsString: " << decoded_fileAsString.c_str() << std::endl;


	return 0;
}

