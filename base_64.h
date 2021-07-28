/*
 * base_64.h
 *
 *  Created on: Jul 19, 2021
 *      Author: 320037431
 */

#ifndef BASE_64_H_
#define BASE_64_H_

#include <iostream>
#include<string.h>
#include <windows.h>

std::string base64_encode(const std::string & original_string);
std::string base64_decode(std::string & encoded_string);
const std::string readfileasString(const char* filename);


#endif /* BASE_64_H_ */
