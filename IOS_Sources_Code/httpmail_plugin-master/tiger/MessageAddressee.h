/*
 *     Generated by class-dump 3.0.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface MessageAddressee : NSObject
{
    NSString *_displayName;
    NSString *_address;
    NSString *_type;
    id _message;
}

- (id)_keyForType;
- (id)address;
- (void)dealloc;
- (id)displayName;
- (void)finalize;
- (id)formattedAddress;
- (id)initWithDisplayName:(id)fp8 address:(id)fp12 type:(id)fp16 message:(id)fp20;
- (BOOL)isEqual:(id)fp8;
- (id)objectSpecifier;
- (void)setAddress:(id)fp8;
- (void)setDisplayName:(id)fp8;
- (void)setMessage:(id)fp8;

@end

