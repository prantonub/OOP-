#include <bits/stdc++.h>
using namespace std;
class university
{
public:
    string CSE;
    string BBA;
    string English;
} int main()
{
    university obj1;
    obj1.CSE = "Total Student 600";
    obj1.BBA = "Total Student 400";
    obj1.English = "Total Student 300";

    cout << "CSE: " << obj1.CSE << endl;
    cout << "BBA: " << obj1.BBA << endl;
    cout << "English: " << obj1.English << endl;
}`
/*#include <iostream>
using namespace std;

class University {
private:
    string nsu;
    string brac;
    string aiub;

public:
    University(const string& nsu_rank, const string& brac_rank, const string& aiub_rank) {
        nsu = nsu_rank;
        brac = brac_rank;
        aiub = aiub_rank;
    }

    void displayRanks() {
        cout << "North South University: " << nsu << endl;
        cout << "Brac University: " << brac << endl;
        cout << "AIUB: " << aiub << endl;
    }
};

int main() {
    University obj1("Global Rank 300-350", "Global Rank 350-400", "Global Rank 1300-1400");
    obj1.displayRanks();
    return 0;
}
*/