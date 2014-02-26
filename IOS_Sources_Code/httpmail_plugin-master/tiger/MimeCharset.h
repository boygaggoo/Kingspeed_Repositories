/*
 *     Generated by class-dump 3.0.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface MimeCharset : NSObject
{
    unsigned int _encoding;
    NSString *_primaryLanguage;
    NSString *_charsetName;
    unsigned int _coversLargeUnicodeSubset:1;
    unsigned int _useBase64InHeaders:1;
    unsigned int _canBeUsedForOutgoingMessages:1;
}

+ (id)allMimeCharsets;
+ (id)charsetForEncoding:(unsigned long)fp8;
+ (id)preferredMimeCharset;
- (BOOL)canBeUsedForOutgoingMessages;
- (id)charsetName;
- (BOOL)coversLargeUnicodeSubset;
- (id)description;
- (id)displayName;
- (unsigned long)encoding;
- (id)initWithEncoding:(unsigned long)fp8;
- (id)primaryLanguage;
- (void)release;
- (id)retain;
- (unsigned int)retainCount;
- (BOOL)useBase64InHeaders;

@end

