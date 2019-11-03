#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {

    unsigned int nCanicas, nQueries;
    int numeros, nCases=0;

    while(cin >> nCanicas >> nQueries){
        if(nCanicas == 0 and nQueries == 0){
            break;
        }

        vector <int> canicas;

        for (int i = 0; i < nCanicas; ++i) {
            cin>>numeros;
            canicas.push_back(numeros);
        }
        std::sort(canicas.begin(),canicas.end());

        cout << "CASE# " << ++nCases <<":"<< endl;
        for (int j = 0; j < nQueries; ++j) {
            int toSearch;
            cin >> toSearch;
            auto iter = std::find(canicas.begin(),canicas.end(),toSearch);
            if(iter != canicas.end()){
                cout << toSearch << " found at " << iter - canicas.begin() + 1 << endl;
            } else {
                cout << toSearch << " not found" << endl;
            }
        }
    }



    return 0;
}