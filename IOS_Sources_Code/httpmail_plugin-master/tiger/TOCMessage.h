/*
 *     Generated by class-dump 3.0.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004 by Steve Nygard.
 */

#import "Message.h"

@class NSString;

@interface TOCMessage : Message
{
    struct _NSRange _mboxRange;
    NSString *_attachments;
    NSString *_messageID;
    BOOL isInIncomingMail;
}

+ (id)messageIDForSender:(id)fp8 subject:(id)fp12 dateAsTimeInterval:(double)fp16;
- (id)attachment;
- (id)cachedData;
- (int)compareByNumberWithMessage:(id)fp8;
- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)initWithMessage:(id)fp8;
- (unsigned int)loadCachedInfoFromBytes:(const char *)fp8 length:(unsigned int)fp12 isDirty:(char *)fp16 usingUniqueStrings:(id)fp20;
- (struct _NSRange)mboxRange;
- (id)messageID;
- (unsigned int)messageSize;
- (id)remoteID;
- (void)setMboxRange:(struct _NSRange)fp8;

@end
