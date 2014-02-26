/*
 *     Generated by class-dump 3.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2005 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

@interface Location : NSObject
{
    NSMutableDictionary *_accountDefaults;
    NSMutableDictionary *_domainsBySubnet;
}

- (id)init;
- (id)initWithDomains:(id)fp8 IPAddresses:(id)fp12;
- (id)initWithArchive:(id)fp8;
- (void)dealloc;
- (id)archive;
- (void)addDomains:(id)fp8 IPAddresses:(id)fp12;
- (id)domains;
- (id)subnets;
- (BOOL)isForIPAddress:(id)fp8;
- (BOOL)isForDomain:(id)fp8;
- (id)deliveryAccountForAccount:(id)fp8;
- (void)setAccount:(id)fp8 deliveryAccount:(id)fp12;
- (id)bestDeliveryAccountForAccount:(id)fp8;
- (void)_postChanged;
- (BOOL)isEqualToLocation:(id)fp8;

@end

