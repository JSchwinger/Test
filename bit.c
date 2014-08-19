// @author: Krzysztof Tchorznicki 
// MPU 6050 Gyroscope + Accelerometer 
// OPERACJE NA BITACH 
/* 
  #define _BV(x)  (1 << x) -> w Arduino bit(n) 
  _BV(0) -> ustawia pierwszy bit na 1 
  _BV(7) -> ustawia 8 bit na 1 
   
  suma OR -> | 
  iloczyn AND -> & 
  różnica bitowa XOR -> ^ (jak są dwie jedynki to 0) 
  negacja NOT -> ~ 
   
  Przesuniecia bitowe 
   
  11 << 1 - w liczbie 11 (zapisanej binarnie) dokonaj przesunieca 
            bitow o jedno miejsce w lewo 
            0000 1011 << 1 -> 0001 0110 
             
  // ustawianie bitu n w liczbie a 
  a |= (1 << n); 
   
  // czyszczenie bitu n w liczbie a 
  a &= ~(1 << n); 
   
  // sprawdzanie bitu n w liczbie a 
  if(a & (1 << n))  
      // instrukcje 
   
  Funkcje uławiające: 
  #define bit_is_set(var,bit)     ((var) & (1 << (bit))) 
  #define bit_is_clear(var,bit)   (!(bit_is_set((var), (bit)))) 
   
  #define bit_set(var,bit)        (var) |= (1<<(bit)) 
  #define bit_clear(var,bit)      (var) &= ~(1<<(bit)) 
*/ 

// ConsoleApplication2.cpp: Określa punkt wejścia dla aplikacji konsoli.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

extern void f_wsk();
extern void f_bit();
extern void GiveMeTehBinary(char bin);

int _tmain(int argc, _TCHAR* argv[])
{
	//wsk();
	f_bit();
	cin.get();
	return 0;
}

void f_wsk()
{
	int zmienna = 123;
	int* wskaznik = &zmienna;

	cout << "zmienna = " << zmienna << endl;
	cout << "*wskaznik = " << *wskaznik << endl;
	cout << "Modyfikacja zmiennej przez wskaznik *wskaznik = 88" << endl;
	*wskaznik = 88;
	cout << "*wskaznik = " << *wskaznik << endl;
	cout << "zmienna = " << zmienna << endl;

	int tablica[] = { 5, 62, 71, 84, 92 };
	int* wsk_do_tab = tablica;

	cout << "Wskaznik do tablicy = " << *(wsk_do_tab + 1) << endl;

	int* a = tablica + 2;
	cout << "a = " << *a << endl;
	cout << "sizeof = " << sizeof(a) << endl;

	for (int i = 0; i < sizeof(a)-1; i++)
	{
		cout << *(a + i) << endl;
	}
}

void f_bit()
{
	cout << "f_bit()" << endl;
	unsigned char c = 0x01;
	cout << (int)c << endl;

	c = 0x0f;

	GiveMeTehBinary(c);

	c = c | 0x00;

	GiveMeTehBinary(c);
}

void GiveMeTehBinary(char bin){

	long s;

	for (int i = 0; i < 8; i++){

		s = bin >> i;

		cout << s % 2;

	}

	cout << endl << endl;


}
