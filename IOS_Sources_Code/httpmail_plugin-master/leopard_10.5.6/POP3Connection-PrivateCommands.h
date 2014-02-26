/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <Message/POP3Connection.h>

@interface POP3Connection (PrivateCommands)
- (int)_readMultilineResponseWithMaxSize:(int)fp8 intoMutableData:(id)fp12 informDelegate:(BOOL)fp16;
- (int)_sendCommand:(const char *)fp8 withArguments:(id)fp12;
- (id)_copyReplyLineDataWithError:(id *)fp8;
- (id)_copyReplyLineData;
- (void)_parsePOPErrorFromData:(id)fp8 error:(id)fp12;
- (int)_getStatusFromReply;
- (int)_apopWithUsername:(id)fp8 password:(id)fp12;
- (int)_user:(id)fp8;
- (int)_pass:(id)fp8;
@end

