/*
 *     Generated by class-dump 3.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2005 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSString;

@interface IMAPOperation : NSObject
{
    unsigned int _type:8;
    unsigned int _temporaryUids:1;
    NSString *_mailboxName;
    union {
        struct {
            NSArray *trueFlags;
            NSArray *falseFlags;
            struct __CFArray *uids;
        } store;
        struct {
            unsigned int uid;
            NSArray *flags;
            int internalDate;
            unsigned int size;
        } append;
        struct {
            struct __CFArray *srcUids;
            struct __CFArray *dstUids;
            NSString *destinationMailbox;
        } copy;
    } _opSpecific;
}

+ (id)deserializeFromData:(id)fp8 cursor:(unsigned int *)fp12;
- (unsigned char)_magic;
- (void)_deserializeOpSpecificValuesFromData:(id)fp8 cursor:(unsigned int *)fp12;
- (void)serializeIntoData:(id)fp8;
- (id)initWithMailboxToCreate:(id)fp8;
- (id)initWithMailboxToDelete:(id)fp8;
- (id)initWithFlagsToSet:(id)fp8 flagsToClear:(id)fp12 forUids:(id)fp16 inMailbox:(id)fp20;
- (id)initWithUidsToCopy:(id)fp8 fromMailbox:(id)fp12 toMailbox:(id)fp16 firstNewUid:(unsigned int)fp20;
- (id)initWithAppendedUid:(unsigned int)fp8 approximateSize:(unsigned int)fp12 flags:(id)fp16 internalDate:(id)fp20 mailbox:(id)fp24;
- (void)dealloc;
- (void)finalize;
- (BOOL)isSourceOfTemporaryUid:(unsigned int)fp8;
- (BOOL)actsOnTemporaryUid:(unsigned int)fp8;
- (void)expungeTemporaryUid:(unsigned int)fp8;
- (unsigned int)firstTemporaryUid;
- (unsigned int)lastTemporaryUid;
- (int)operationType;
- (id)mailboxName;
- (unsigned int)approximateSize;
- (BOOL)usesRealUids;
- (void)setUsesRealUids:(BOOL)fp8;
- (id)flagsToSet;
- (id)flagsToClear;
- (id)uids;
- (id)flags;
- (id)internalDate;
- (unsigned int)uid;
- (id)sourceUids;
- (id)destinationUids;
- (id)destinationMailbox;
- (unsigned int)sourceUidForTemporaryUid:(unsigned int)fp8;
- (BOOL)getMessageId:(id *)fp8 andInternalDate:(id *)fp12 forDestinationUid:(unsigned int)fp16;
- (void)setMessageId:(id)fp8 andInternalDate:(id)fp12 forMessageWithSourceUid:(unsigned int)fp16;
- (id)description;

@end

