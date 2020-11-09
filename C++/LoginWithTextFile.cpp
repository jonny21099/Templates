#include <string>
#include <fstream>
#include <iostream>
//make sure to include your header file
#include "Users.h"
using namespace std;

/**
 *constructor
 *@param username the first argument
 *@param password the second argument
 */
Users::Users(string username,string password){
	 this->username = username;
	 this->password = password;
}

/**
 *a member that checks username and password entered
 *uses a text file called "accounts.txt" to verify credentials
 *@return if username and password is correct
 */
bool Users::userLogin(){
	fstream file;
	string usercheck;
	string passwordcheck;
	file.open("accounts.txt", fstream::in);
	if(file.is_open()){
		while(getline(file,usercheck)){
			getline(file,passwordcheck);
			if(username == usercheck && password == passwordcheck){
				return true;
			}
		}
	}
	return false;
}

/**
 *a member that registers the username and password entered
 *uses a text file called "accounts.txt" to store the credentials
 *creates the textfile if doesn't exist
 *@return if this account can be registered
 */
bool Users::userCreate(){
	fstream file;
	string usercheck;
	string passwordcheck;
	file.open("accounts.txt", fstream::in);
	if(file.is_open()){
		while(getline(file,usercheck)){
			getline(file,passwordcheck);
				//username already exists
			if(username == usercheck){
				return false;	
			}
		}
		//after verifying uniqueness append to file
		file.close();
	}
	file.open("accounts.txt",fstream::app);
	file << username << '\n';
	file << password << '\n';
	file.close();
	return true;
}
