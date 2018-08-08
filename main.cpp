#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>

int main(){

    std::vector<char> asci_table;
    std::string input_text("Przykladowy tekst");
    std::map<char,char> cipher_char;
    std::map<char,char> decipher_char;
    std::vector<char> encrypted;
    std::vector<char> decrypted;



    //Create asci table
    for(int a = 32; a < 127; a++)
    {
        asci_table.push_back(char(a));
        //std::cout << a <<char(a)<< std::endl;
    }

    std::cout<<input_text;

    std::vector<char> asci_table_random(asci_table);
    std::random_shuffle(asci_table_random.begin(), asci_table_random.end());
    //for(auto &c:asci_table_random) std::cout<<c;
    std::cout<<std::endl;


    //Create map
    for(int i = 0; i < asci_table.size();i++)
    {
        cipher_char[asci_table[i]]=asci_table_random[i];
        decipher_char[asci_table_random[i]]=asci_table[i];
    }

    // Encrypt text
    for(auto&key:input_text) encrypted.push_back(cipher_char[key]);


    for(auto &z:encrypted) std::cout<<z;
    std::cout<<std::endl;


    //Decrypt
    for(auto&key:encrypted) decrypted.push_back(decipher_char[key]);
    for(auto &z:decrypted) std::cout<<z;

    return 0;
}
