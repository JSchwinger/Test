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
