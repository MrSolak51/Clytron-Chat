#ifndef CRYPTO_H
#define CRYPTO_H

#include <QString>
#include <iostream>
#include <string>

class Crypto
{
public:
    Crypto();
    QString Encrypt(QString plaintext_);
    QString Decrypt(QString ciphertext_);
};

#endif // CRYPTO_H
