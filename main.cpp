#include "Ball.h"
#include "MyPrint.h"
#include <vector>
#include "Findobj.h"
#include <algorithm>
#include <numeric>

int main() {
    Ball dataArray[]{{"Pingpongboll", 10},
                     {"Fotboll",      100.2},
                     {"Fotboll",      100.2},
                     {"Basketboll",   50.6},
                     {"Tennisboll",   110.8},
                     {"Fotboll",      100.2}};

    std::vector<Ball> bollvec;
    unsigned dataArraySize = sizeof(dataArray) / sizeof(Ball);
    std::copy(&dataArray[0], &dataArray[dataArraySize], back_inserter(bollvec));

/*
    for(auto & i : bollvec){
        std::cout<<i;
    }
*/
    //std::cout<<dataArray[1].getSpeed()<<"\n\n";
    //skriver ut innehållet i vector eller arrayen.
/*
    MyPrint directutskrivning;
    directutskrivning(dataArray,dataArraySize);
    std::cout<<"\n";
*/
/*
    std::for_each(bollvec.begin(),bollvec.end(),directutskrivning);
    std::cout<<"\n\n";
*/
/*
    std::cout<<"\nfraga 2\n";
    auto it = std::find_if(bollvec.begin(), bollvec.end(), Findobj());
    std::cout << "The first value that is bigger is: " << *it << '\n';
*/
/*
    std::cout<<"fraga 3\n";
    std::vector<Ball>::iterator it;
    it = std::adjacent_find(bollvec.begin(), bollvec.end(),Findname());
    if (it != bollvec.end()) {
        std::cout << "the second pair of repeated elements are: " << *it << '\n';
    }else{
        std::cout<<"There are no similar ball names successively sequenced\n";
    }
*/
/*
    std::cout<<"fraga 4\n";
    if(std::equal(bollvec.begin(),bollvec.end(),dataArray,isEqul()))
        std::cout<<"The containers have matching elements.\n";
    else
        std::cout<<"The containers have difference elements.\n";
*/
/*
    std::cout<<"fraga 5\n";

    std::vector<Ball>::iterator it;
    Ball needle2[] = {{"Basketboll",   50.6},
                      {"Tennisboll",   110.8},
                      {"Fotboll",      100.2}};
    it = std::search(bollvec.begin(), bollvec.end(), needle2, needle2 + 2, searchseq());

    if (it != bollvec.end()) {
        std::cout << "needle2 subsequence found at position " << (it - bollvec.begin()) << '\n';
        MyPrint directutskrivning;
        unsigned dataArraySize = sizeof(needle2) / sizeof(Ball);
        directutskrivning(needle2,dataArraySize);
        std::cout<<"\n";
    }
    else {
        std::cout << "needle2 subsequence found not found\n";
    }
*/
/*
    std::cout<<"\nfraga 6\n";
    //std::vector<Ball>::iterator it;
    double avg;
    double sum = std::accumulate(bollvec.begin(), bollvec.end(),0,MyBinOp());
    avg=sum/bollvec.size();
    std::cout<<"The sum is: "<<sum<<"\nThe average is: "<<avg;

    std::vector<double>avragevec;
    for(int i=0;i<bollvec.size();i++){
        avragevec.push_back(avg);
    }

    std::cout<<"\nfraga 7\n";
    std::vector<double> v2;
    v2.resize(bollvec.size());
    std::transform (bollvec.begin(), bollvec.end(), v2.begin(), MyBinOp());
    std::cout << "v2 contains:";
    for (double & it : v2)
        std::cout << ' ' << it;
    std::cout << '\n';


    std::cout<<"\nfraga 8\n";
    std::transform (v2.begin(), v2.end(), avragevec.begin(), v2.begin(),MyFunc());
    std::cout << "v2 contains:";
    for (double & it : v2)
        std::cout << ' ' << it;
    std::cout << '\n';


    std::cout<<"\nfraga 9\n";
    std::cout <<"Nu ska jag skriva ut sorterade vektorn v2\n";

    std::sort(v2.begin(),v2.end());
    for (double & it : v2)
        std::cout << ' ' << it;
    std::cout << '\n';
*/
    return 0;
}
