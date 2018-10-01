#ifndef DECODE_BINARY_H
#define DECODE_BINARY_H



void getRow();  //imports the next from from the binary csv values. 
bool sof();     // checks to see if we have a start of frame case 
int numBits();  // returns the number of bits detected on the last time interval
int fill_priority(int nBits, int nEmpty); 
int fill_arbitration(int nBits, int nEmpty);
int fill_ecu_id(int nBits, int nEmpty);
int fill_data(int nBits, int nEmpty);
void print_header();
void print_line();

#endif 