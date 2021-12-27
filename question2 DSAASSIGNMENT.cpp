#include <iostream>
using namespace std;
int buffer = 0, partFunc[3] = { 0, 0, 0 }, part[3] = { 0, 0, 0 }, a, b, c, d;
long input, module = 0;
const char ones[][20] = { "",       "ONE",       "TWO",      "THREE",
                         "FOUR",    "FIVE",      "SIX",      "SEVEN",
                         "EIGHT",   "NINE",      "TEN",      "ELEVEN",
                         "TWELVE",  "THIRTEEN",  "FOURTEEN", "FIFTEEN",
                         "SIXTEEN", "SEVENTEEN", "EIGHTEEN", "NINETEEN" };
const char tens[][20] = { "",     "TEN",   "TWENTY",  "THIRTY", "FORTY",
                         "FIFTY", "SIXTY", "SEVENTY", "EIGHTY", "NINETY" };
void conversion_function(int funcVar);
int main() {
    cout << "ENTER THE NUMBER TO CONVERT IN WORDS :";
    cout << endl;
    cin >> input;
    module = input;
    buffer = 0;
    while (module) {
        part[buffer] = module % 1000;
        module /= 1000;
        buffer++;
    }
    if (buffer == 0) {
        cout << "ZERO.";
    }
    else if (buffer == 1) {
        conversion_function(part[0]);
    }
    else if (buffer == 2) {
        conversion_function(part[1]);
        cout << " THOUSAND,";
        conversion_function(part[0]);
    }
    else {
        conversion_function(part[2]);
        cout << " MILLION,";

        if (part[1]) {
            conversion_function(part[1]);
            cout << " THOUSAND,";
        }
        else {
            cout << "";
        }
        conversion_function(part[0]);
    }
    system("pause");
    return (0);
}

void conversion_function(int funcVar) {
    buffer = 0;
    if (funcVar >= 100) {
        a = funcVar / 100;
        b = funcVar % 100;
        if (b)
            cout << " " << ones[a] << " HUNDERED AND";
        else
            cout << " " << ones[a] << " HUNDERD ";
        if (b < 20)
            cout << " " << ones[b];
        else {
            c = b / 10;
            cout << " " << tens[c];
            d = b % 10;
            cout << " " << ones[d];
        }
    }
    else {
        b = funcVar;
        if (b < 20)
            cout << ones[b];
        else {
            c = b / 10;
            cout << tens[c];
            d = b % 10;
            cout << " " << ones[d];
        }
    }
}