#include <iostream>
#include <sstream>
#include <vector>
#include <time.h>

void print_sstream(const std::stringstream& s){
    std::cout << "sstream string : ";
    std::cout << s.str() << std::endl;
}

void clear_sstream(std::stringstream& s){
    s.str("");
}

int main(){

    std::stringstream ss;
    std::string buffer;
    const int N{5};

    //insert of buffer in sstream ss
    ss << buffer;

    std::vector<int> v;
    srand(time(NULL));
    for(int i = 0;i < N; ++i){
        int random{rand()%256};
        std::cout << "Extracted : " << random << std::endl;
        v.push_back(random);
    }

    std::cout << "vector initialized!\n";

    for(int i = 0;i < N; ++i){
        ss << v[i];
    }

    print_sstream(ss);

    long long int sstream{};
    ss >> sstream;

    std::cout << " Long Integer Value : " << sstream << std::endl;


    clear_sstream(ss);
    std::cout << "Print sstream after clear()..\n";
    print_sstream(ss);

    return 0;
}