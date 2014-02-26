/*
 *     Generated by class-dump 3.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2005 by Steve Nygard.
 */

@class NSMutableSet, NSString, NSTimer;

@interface NetworkController : NSObject
{
    struct __SCDynamicStore *_store;
    NSString *_domainName;
    unsigned int _waitingForDialToFinish:1;
    unsigned int _checkedNetwork:1;
    unsigned int _isNetworkUp:1;
    NSTimer *_notificationTimer;
    NSMutableSet *_watchedHosts;
}

+ (id)sharedInstance;
+ (id)subnetForIPAddress:(id)fp8;
+ (id)baseDomainsForDomains:(id)fp8;
+ (id)applyIDNAToHostname:(id)fp8 encode:(BOOL)fp12;
+ (id)encodeAddressForIDNA:(id)fp8;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (BOOL)isNetworkUp;
- (id)domainName;
- (id)domainNames;
- (id)IPAddresses;
- (id)primaryEthernetAddressAsString;
- (BOOL)isHostReachable:(id)fp8;
- (void)startWatchingReachabilityOfHost:(id)fp8;

@end
