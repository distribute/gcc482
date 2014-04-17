
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_key_dh_ElGamalKeyAgreement__
#define __gnu_javax_crypto_key_dh_ElGamalKeyAgreement__

#pragma interface

#include <gnu/javax/crypto/key/BaseKeyAgreementParty.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace crypto
      {
        namespace key
        {
          namespace dh
          {
              class ElGamalKeyAgreement;
          }
        }
      }
    }
  }
  namespace java
  {
    namespace math
    {
        class BigInteger;
    }
  }
}

class gnu::javax::crypto::key::dh::ElGamalKeyAgreement : public ::gnu::javax::crypto::key::BaseKeyAgreementParty
{

public: // actually protected
  ElGamalKeyAgreement();
  virtual JArray< jbyte > * engineSharedSecret();
  virtual void engineReset();
public:
  static ::java::lang::String * SOURCE_OF_RANDOMNESS;
  static ::java::lang::String * KA_ELGAMAL_RECIPIENT_PRIVATE_KEY;
  static ::java::lang::String * KA_ELGAMAL_RECIPIENT_PUBLIC_KEY;
public: // actually protected
  ::java::math::BigInteger * __attribute__((aligned(__alignof__( ::gnu::javax::crypto::key::BaseKeyAgreementParty)))) ZZ;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_crypto_key_dh_ElGamalKeyAgreement__
