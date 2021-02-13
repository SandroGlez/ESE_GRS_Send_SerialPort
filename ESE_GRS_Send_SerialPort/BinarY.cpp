#include "BinarY.h"
#include <iostream>
BinarY::BinarY(void)
{

}
char BinarY::ToCharacter(char*codigoBinary,unsigned longit){
	int decim=0,multip=1;
	for(int i=longit-1;i>=0;i--)
	{
		if(codigoBinary[i]=='1')
			decim+=multip;
		multip*=2;
	
	}
	return (char)decim;

}
char*BinarY::ToBinary(char Character){
    char*Binary=new char[8];
	int decimal;
	decimal=(long)Character;
	itoa(decimal,Binary,2);
	return Binary;
	
}