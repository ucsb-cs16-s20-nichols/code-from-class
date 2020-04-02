#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    for (int horses = 0; horses <= 100; horses++) {
        for (int pigs = 0; pigs <= 100; pigs++) {
            int rabbits = 100 - horses - pigs;
            // it's possible for rabbits to be a negative #

            // every time this inner body is executed,
            // horses, pigs, and rabbits are set to different numbers
            
            // we will be sure to range over every possibility

            double price = horses*10 + pigs*3 + rabbits*0.50;

            if (price == 100.00 && rabbits >= 0) {
                cout << "The farmer bought:\n"
                     << horses << " horses,\n"
                     << pigs << " pigs, and\n"
                     << rabbits << " rabbits.\n";
            }
        }
    }

    return 0;
}
