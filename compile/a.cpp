#include <string>
#include <sstream>
#include <fstream>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <iomanip>
using namespace std;
#define sz(x) ((int) (x).size())

// string ADDU = "000000";
// string SUBU = "000001";
// string ADDIU = "000010";
// string OR = "010000";
// string AND = "010001";
// string ORI = "010010";
// string SLL = "011000";
// string SLTU = "100110";
// string SLTIU = "100111";
// string SW = "110000";
// string LW = "110001";
// string BEQ = "110100";
// string JUMP = "111000";
// string JR = "111001";
// string JAL = "111010";
// string HALT = "111111";

string writeOp(string str) {
    for(int i = 0; i < sz(str); ++i) str[i] = toupper(str[i]);
    if(str == "ADDU") return "000000";
    if(str == "SUBU") return "000001";
    if(str == "ADDIU") return "000010";
    if(str == "OR") return "010000";
    if(str == "AND") return "010001";
    if(str == "ORI") return "010010";
    if(str == "SLL") return "011000";
    if(str == "SLTU") return "100110";
    if(str == "SLTIU") return "100111";
    if(str == "SW") return "110000";
    if(str == "LW") return "110001";
    if(str == "BEQ") return "110100";
    if(str == "J") return "111000";
    if(str == "JR") return "111001";
    if(str == "JAL") return "111010";
    if(str == "HALT") return "111111";
    return "";
}

int turn(string str) {
    if(str.find('$') != string::npos) {
        string number = str.substr(1, sz(str) - 1);
        if(number == "zero") return 0;
        else if(number[0] == 'a') return number[1] - '0' + 4;
        else if(number[0] == 't') return number[1] - '0' + 8;
        else if(number[0] == 's' && number[1] != 'p') return number[1] - '0' + 16;
        else if(number[0] == 's') return 29;
        else return 31;
    } else {
        int x = 0;
        for(int i = 0, len = sz(str); i < len; ++i)
            x = x * 10 + str[i] - '0';
        return x;
    }
}

string turn(int x) {
    string ret;
    for(; x; x >>= 1) ret.push_back((x & 1) + '0');
    reverse(ret.begin(), ret.end());
    return ret;
}

int main() {
    freopen("a.in", "r", stdin);
    string line;
    while(getline(cin, line)) {
        istringstream data(line);
        ostringstream output;
        string ins, rs, rt, rd;
        data >> ins >> rs;
        if(rs.find(',') != string::npos) rs = rs.substr(0, sz(rs) - 1);
        int _rs = turn(rs), _rt, _rd;
        string bRs = turn(_rs), bRt, bRd;

        string bIns = writeOp(ins);
        output << setw(6) << setfill('0') << bIns;

        if(ins.find('j') != string::npos) {
            if(ins == "jr") {
                output << setw(5) << setfill('0') << bRs;
                output << setw(31) << setfill('0') << "";
            } else {
                output << setw(26) << setfill('0') << bRs;
            }
        } else if(ins == "lw" || ins == "sw") { // LW SW
            data >> rt;
            rd = rt.substr(0, rt.find('('));
            rt = rt.substr(rt.find('(') + 1, rt.find(')') - rt.find('(') - 1);
            _rd = turn(rd), _rt = turn(rt);
            bRd = turn(_rd), bRt = turn(_rt);
            output << setw(5) << setfill('0') << bRt;
            output << setw(5) << setfill('0') << bRs;
            output << setw(16) << setfill('0') << bRd;
        } else if(ins == "beq") { // BEQ
            data >> rt >> rd;
            // cout << rt << ' ' << rd << endl;
            if(rt.find(',') != string::npos) rt = rt.substr(0, sz(rt) - 1);
            if(rd.find(',') != string::npos) rd = rd.substr(0, sz(rd) - 1);
            _rt = turn(rt), _rd = turn(rd);
            bRt = turn(_rt), bRd = turn(_rd);
            output << setw(5) << setfill('0') << bRs;
            output << setw(5) << setfill('0') << bRt;
            output << setw(16) << setfill('0') << bRd;
        } else {
            data >> rt >> rd;
            if(rt.find(',') != string::npos) rt = rt.substr(0, sz(rt) - 1);
            if(rd.find(',') != string::npos) rd = rd.substr(0, sz(rd) - 1);

            _rt = turn(rt), _rd = turn(rd);
            bRt = turn(_rt), bRd = turn(_rd);

            if(ins.find('i') != string::npos) { // I-format
                output << setw(5) << setfill('0') << bRt;
                output << setw(5) << setfill('0') << bRs;
                output << setw(16) << setfill('0') << bRd;
            } else if(ins == "sll") { // SLL
                output << setw(5) << setfill('0') << "";
                output << setw(5) << setfill('0') << bRt;
                output << setw(5) << setfill('0') << bRs;
                output << setw(5) << setfill('0') << bRd;
                output << setw(6) << setfill('0') << "";
            } else { // R-format
                output << setw(5) << setfill('0') << bRt;
                output << setw(5) << setfill('0') << bRd;
                output << setw(5) << setfill('0') << bRs;
                output << setw(11) << setfill('0') << "";
            }
        }

        string write = output.str();
        cout <<
            write.substr(0, 6) << ' ' << 
            write.substr(6, 5) << ' ' << 
            write.substr(11, 5) << ' ' <<
            write.substr(16, 5) << ' ' <<
            write.substr(21, 5) << ' ' <<
            write.substr(26, 6) << endl;
    }
    return 0;
}

