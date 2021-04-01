#include "geometry.h"
int main()
{
    int max_symb = 40;
    FILE* mf;
    mf = fopen("geo.txt", "r");
    char sourse_str[max_symb];
    fgets(sourse_str, max_symb, mf);
    correct_spelling(sourse_str, max_symb);
    cirlce_output(sourse_str);
    perimeter_n_area(sourse_str, max_symb);
    return 0;
}
