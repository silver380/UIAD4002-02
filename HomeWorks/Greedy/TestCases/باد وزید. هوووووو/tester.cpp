#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

int main(int argc, char const *argv[])
{

    ifstream test_in(argv[1]);    // This stream reads from test's input file
    ifstream test_out(argv[2]);   // This stream reads from test's output file
    ifstream user_out(argv[3]);   // This stream reads from user's output file

    // Your code here
    // If user's output is correct, return 0, otherwise return 1

    ll len;
    test_in >> len;
    vector<pair<ll, ll>> usr, ans;
    ll u, v;
    for (int i = 0; i < len-1; ++i) {
        /////////////////////
        /*test_out >> p.first >> p.second;
        ans.push_back(p);
        user_out >> p.first >> p.second;
        usr.push_back(p);*/
        ////////////////////
        if(!(test_out >> u >> v)) return 1;
        ans.push_back({min(u, v), max(u, v)});
    }

    for (int i = 0; i < len-1; ++i) {
        if(!(user_out >> u >> v)) return 1;
        usr.push_back({min(u, v), max(u, v)});
    }

    sort(usr.begin(), usr.end());
    sort(ans.begin(), ans.end());
    if(usr != ans) return 1;
    else return 0;

    ///////////////////////////
    /*int cnt = 0;
    for (int i = 0; i < len; ++i) {
        for (int j = 0; j < len; ++j) {
            if (usr[i] == ans[j]){
                cnt++;
                break;
            }
        }
    }

    if (cnt == ans.size()) return 0;
    else return 1;*/
    /////////////////////

}