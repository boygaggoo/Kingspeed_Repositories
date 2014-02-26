/*
 *     Generated by class-dump 3.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2005 by Steve Nygard.
 */

#import "NSObject.h"

@class AuthScheme;

@interface AuthSchemeBindingProxy : NSObject
{
    AuthScheme *_authScheme;
    BOOL _isSeparator;
}

+ (id)noneProxy;
+ (id)separatorProxy;
- (id)init;
- (id)initWithAuthScheme:(id)fp8;
- (id)humanReadableName;
- (id)name;
- (BOOL)isEqual:(id)fp8;
- (unsigned int)hash;
- (BOOL)isSeparator;
- (void)setIsSeparator:(BOOL)fp8;
- (id)authScheme;
- (void)setAuthScheme:(id)fp8;

@end

