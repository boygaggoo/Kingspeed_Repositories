//
//  RNCryptorVectorTests.m
//  RNCryptor
//
//  Created by Rob Napier on 1/9/14.
//  Copyright (c) 2014 Rob Napier. All rights reserved.
//

#import "XCTestCase+RNCryptorVectorTests.h"

NSData *GetDataForHex(NSString *hex) {
  NSString *hexNoSpaces = [[[hex stringByReplacingOccurrencesOfString:@" " withString:@""]
                            stringByReplacingOccurrencesOfString:@"<" withString:@""]
                           stringByReplacingOccurrencesOfString:@">" withString:@""];

  NSMutableData *data = [[NSMutableData alloc] init];
  unsigned char whole_byte = 0;
  char byte_chars[3] = {'\0','\0','\0'};
  int i;
  for (i=0; i < [hexNoSpaces length] / 2; i++) {
    byte_chars[0] = [hexNoSpaces characterAtIndex:i*2];
    byte_chars[1] = [hexNoSpaces characterAtIndex:i*2+1];
    whole_byte = strtol(byte_chars, NULL, 16);
    [data appendBytes:&whole_byte length:1];
  }
  return data;
}

@implementation XCTestCase (RNCryptorVectorTests)

- (void)verifyVector:(NSDictionary *)vector key:(NSString *)key equals:(NSData *)actual title:(NSString*)title {
  XCTAssertEqualObjects(actual, GetDataForHex(vector[key]), @"Failed %@ test (v%d): %s\n", title, [vector[@"version"] intValue], [vector[@"title"] UTF8String]);
}

- (void)_verifyKDF:(NSDictionary *)vector settings:(RNCryptorKeyDerivationSettings)keySettings name:(NSString *)name {
  NSCParameterAssert(vector[@"title"]);
  NSCParameterAssert(vector[@"version"]);
  NSCParameterAssert(vector[@"password"]);
  NSCParameterAssert(vector[@"salt_hex"]);
  NSCParameterAssert(vector[@"key_hex"]);

  NSData *key = [RNCryptor keyForPassword:vector[@"password"]
                                     salt:GetDataForHex(vector[@"salt_hex"])
                                 settings:keySettings];
  [self verifyVector:vector key:@"key_hex" equals:key title:name];
}

- (void)verify_kdf:(NSDictionary *)vector {
  [self _verifyKDF:vector settings:kRNCryptorAES256Settings.keySettings name:@"kdf"];
}

- (void)verify_kdf_short:(NSDictionary *)vector {
  NSCParameterAssert(vector[@"iterations"]);

  RNCryptorKeyDerivationSettings settings = kRNCryptorAES256Settings.keySettings;
  settings.rounds = 1000;
  [self _verifyKDF:vector settings:settings name:@"short kdf"];
}

- (void)_verifyPassword:(NSDictionary *)vector settings:(RNCryptorSettings)settings name:(NSString *)name {
  NSCParameterAssert(vector[@"title"]);
  NSCParameterAssert(vector[@"version"]);
  NSCParameterAssert(vector[@"password"]);
  NSCParameterAssert(vector[@"iv_hex"]);
  NSCParameterAssert(vector[@"enc_salt_hex"]);
  NSCParameterAssert(vector[@"hmac_salt_hex"]);
  NSCParameterAssert(vector[@"plaintext_hex"]);
  NSCParameterAssert(vector[@"ciphertext_hex"]);

  NSError *error;

  if ([vector[@"version"] intValue] == kRNCryptorFileVersion) {
    NSData *ciphertext = [RNEncryptor encryptData:GetDataForHex(vector[@"plaintext_hex"])
                                     withSettings:settings
                                         password:vector[@"password"]
                                               IV:GetDataForHex(vector[@"iv_hex"])
                                   encryptionSalt:GetDataForHex(vector[@"enc_salt_hex"])
                                         HMACSalt:GetDataForHex(vector[@"hmac_salt_hex"])
                                            error:&error];
    [self verifyVector:vector key:@"ciphertext_hex" equals:ciphertext title:[name stringByAppendingString:@" encrypt"]];
  }

  NSData *plaintext = [RNDecryptor decryptData:GetDataForHex(vector[@"ciphertext"])
                                  withPassword:vector[@"password"]
                                         error:&error];
  [self verifyVector:vector key:@"plaintext" equals:plaintext title:[name stringByAppendingString:@" encrypt"]];
}

- (void)verify_password:(NSDictionary *)vector {
  [self _verifyPassword:vector settings:kRNCryptorAES256Settings name:@"password"];
}

- (void)verify_password_short:(NSDictionary *)vector {
  NSCParameterAssert(vector[@"iterations"]);

  RNCryptorSettings settings = kRNCryptorAES256Settings;
  settings.keySettings.rounds = [vector[@"iterations"] intValue];
  settings.HMACKeySettings.rounds = [vector[@"iterations"] intValue];
  [self _verifyPassword:vector settings:settings name:@"short password"];
}

- (void)verify_key:(NSDictionary *)vector {
  NSCParameterAssert(vector[@"title"]);
  NSCParameterAssert(vector[@"version"]);
  NSCParameterAssert(vector[@"enc_key_hex"]);
  NSCParameterAssert(vector[@"hmac_key_hex"]);
  NSCParameterAssert(vector[@"iv_hex"]);
  NSCParameterAssert(vector[@"plaintext_hex"]);
  NSCParameterAssert(vector[@"ciphertext_hex"]);

  NSError *error;

  if ([vector[@"version"] intValue] == kRNCryptorFileVersion) {
    NSData *ciphertext = [RNEncryptor encryptData:GetDataForHex(vector[@"plaintext_hex"])
                                     withSettings:kRNCryptorAES256Settings
                                    encryptionKey:GetDataForHex(vector[@"enc_key_hex"])
                                          HMACKey:GetDataForHex(vector[@"hmac_key_hex"])
                                               IV:GetDataForHex(vector[@"iv_hex"])
                                            error:&error];
    [self verifyVector:vector key:@"ciphertext_hex" equals:ciphertext title:@"key encrypt"];
  }

  NSData *plaintext = [RNDecryptor decryptData:GetDataForHex(vector[@"ciphertext_hex"])
                             withEncryptionKey:GetDataForHex(vector[@"enc_key_hex"])
                                       HMACKey:GetDataForHex(vector[@"hmac_key_hex"])
                                         error:&error];
  [self verifyVector:vector key:@"plaintext_hex" equals:plaintext title:@"key decrypt"];
}
@end


