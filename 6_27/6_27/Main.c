//**************************************************************************
//**************************************************************************
//**
//**	Projekt: 6_27	
//**    ***************************************
//**
//**	Filename: Main.c
//**
//**    Name: micha  
//**	Date: 11.01.2022 18:40:54
//**	
//**	Description:
//**    
//**
//**
//**
//**************************************************************************
//**************************************************************************

//Includes
//**************************************************************************
#include <stdio.h>
#include <math.h>

//Defines & Pragmas
//**************************************************************************
#pragma warning(disable:4996) //Disable warning scanf unsafe
#pragma warning(disable:6031) //Disable warning return getchar()


//Functions
//**************************************************************************
double d_Abs(double d_W1)
{
	if (d_W1 > 0.0)
	{
		return(d_W1)
	}
	else
	{
		return-d_W1
	}
}


int main(void)
{
	//Variables
	double



	//Code
	printf("Absolutwert ist %lf", d_Abs(Wert));



	getchar();
	fflush(stdin);
	getchar();
	return 0;
}