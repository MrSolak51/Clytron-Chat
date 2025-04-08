#include "crypto.h"

#include <iostream>

Crypto::Crypto()
{

}

QString Crypto::Encrypt(QString plaintext_){
    std::string ciphertext = "";
    std::string plaintext = plaintext_.toStdString();
    for (int i = 0; i < plaintext.length(); i++) {
            int a = plaintext[i];
            ciphertext += ((int)'6' + a + (int)'6');
    }
    return QString::fromStdString(ciphertext);
}

QString Crypto::Decrypt(QString ciphertext_){
    std::string ciphertext = ciphertext_.toStdString();
    std::string plaintext = "";
    for (int i = 0; i < ciphertext.length(); i++) {
            int a = ciphertext[i];
            std::cout << (int) '6' << std::endl;
            std::cout << ciphertext[i] << " : deneme : " << a << std::endl;
    }
    return QString::fromStdString(plaintext);
}
