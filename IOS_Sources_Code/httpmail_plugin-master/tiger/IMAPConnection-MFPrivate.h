/*
 *     Generated by class-dump 3.0.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004 by Steve Nygard.
 */

#import <Message/IMAPConnection.h>

@interface IMAPConnection (MFPrivate)
- (id)_fetchArgumentForMessageSkeletonsWithHeaders:(id)fp8;
- (id)_fetchArgumentForMessageUidsAndFlags;
- (BOOL)_isFetchResponseValid:(id)fp8;
- (id)_readDataOfLength:(int)fp8;
- (id)_responseFromSendingCommands:(CDAnonymousStruct7 *)fp8 count:(unsigned int)fp12;
- (void)didFinishCommands:(CDAnonymousStruct7 *)fp8 count:(unsigned int)fp12;
@end
