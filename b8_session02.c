#include <stdio.h>

int main() {
    int number = 12345;
    int end_number = number % 10;       
    int next_number = number / 10;       
    int unit1 = next_number % 10,           
    unit2 = (next_number % 100) / 10,   
    unit3 = (next_number % 1000) / 100, 
    unit4 = (next_number % 10000) / 1000, 
    result = unit1 * 1000 + unit2 * 100 + 
	unit3 * 10 + unit4;
	printf("%d",result);
    return 0;
}
