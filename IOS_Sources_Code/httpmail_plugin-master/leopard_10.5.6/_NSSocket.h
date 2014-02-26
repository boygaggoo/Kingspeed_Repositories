/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSInvocation, NSString;

@interface _NSSocket : NSObject
{
    struct __CFReadStream *_readStream;
    struct __CFWriteStream *_writeStream;
    NSString *_protocol;
    NSArray *_trustedCertificates;
    void *_stats;
    void *_request;
    unsigned int _openCompleted:1;
    unsigned int _canRead:1;
    unsigned int _canWrite:1;
    unsigned int _error:1;
    unsigned int _closed:1;
    unsigned int _ignoreCerts:1;
    unsigned int _identifier;
    float _lastReadTime;
    NSInvocation *_eventHandler;
    double _numTimeoutSecs;
    double _numConnectTimeoutSecs;
}

+ (void)_runIOThread;
+ (void)handlePortMessage:(id)fp8;
+ (void)initialize;
+ (int)simulatedSocketSpeed;
+ (void)setSimulatedSocketSpeed:(int)fp8;
- (void)_setError:(id *)fp8 fromDomain:(int)fp12 code:(int)fp16 andLogIfNecessary:(id)fp20;
- (id)securityProtocol;
- (BOOL)setSecurityProtocol:(id)fp8;
- (void)setTrustedCertificates:(id)fp8;
- (id)verboseSSLInformation;
- (id)serverCertificates;
- (id)initWithTimeout:(double)fp8 connectTimeout:(double)fp16;
- (id)init;
- (double)timeout;
- (void)setTimeout:(double)fp8;
- (double)connectTimeout;
- (void)setConnectTimeout:(double)fp8;
- (void)dealloc;
- (void)finalize;
- (void)abort;
- (void)finishRequest:(CDAnonymousStruct12 *)fp8;
- (void)clearError;
- (BOOL)isReadable;
- (BOOL)isWritable;
- (void)waitUntilWritable;
- (BOOL)readIsValid;
- (BOOL)writeIsValid;
- (BOOL)isValid;
- (BOOL)_configureReadStream:(struct __CFReadStream *)fp8 writeStream:(struct __CFWriteStream *)fp12 error:(id *)fp16;
- (BOOL)connectToHost:(id)fp8 withPort:(unsigned int)fp12 protocol:(id)fp16;
- (int)writeBytes:(const char *)fp8 length:(int)fp12 error:(id *)fp16;
- (int)readBytes:(char *)fp8 length:(int)fp12 error:(id *)fp16;
- (void)setEventHandler:(id)fp8;
- (void)removeEventHandler;
- (id)remoteHostname;
- (unsigned int)remotePortNumber;
- (id)sourceIPAddress;
- (id)sourceHostname;
- (int)fileDescriptor;
- (float)lastReadTime;
- (unsigned int)identifier;
- (void)setIdentifier:(unsigned int)fp8;

@end
