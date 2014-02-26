/*
 *     Generated by class-dump 3.0.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004 by Steve Nygard.
 */

#import "Message.h"

@class NSArray, NSString;

@interface LibraryMessage : Message
{
    unsigned int _libraryID;
    NSString *_remoteID;
    unsigned int _uid;
    NSArray *_references;
    unsigned int _size;
    int _imapFlags;
    unsigned int _mailboxID;
    unsigned int _originalMailboxID;
    NSString *_messageID;
}

+ (id)messageWithLibraryID:(unsigned int)fp8;
- (void)_updateUID;
- (id)account;
- (void)commit;
- (void)commitLater;
- (int)compareByUidWithMessage:(id)fp8;
- (void)dealloc;
- (id)description;
- (void)finalize;
- (BOOL)hasTemporaryUid;
- (unsigned int)hash;
- (int)imapFlags;
- (id)inReplyToHeaderDigest;
- (id)initWithLibraryID:(unsigned int)fp8;
- (BOOL)isEqual:(id)fp8;
- (BOOL)isMessageContentsLocallyAvailable;
- (BOOL)isPartial;
- (unsigned int)libraryID;
- (void)loadMessageInfoIfNecessary;
- (id)mailbox;
- (unsigned int)mailboxID;
- (id)mailboxName;
- (void)markAsViewed;
- (id)messageID;
- (id)messageIDHeaderDigest;
- (unsigned int)messageSize;
- (id)messageStore;
- (unsigned int)originalMailboxID;
- (BOOL)partsHaveBeenCached;
- (id)path;
- (id)persistentID;
- (id)preferredEmailAddressToReplyWith;
- (id)references;
- (void)reload;
- (id)remoteID;
- (id)remoteMessageStore;
- (id)sender;
- (void)setColor:(id)fp8;
- (void)setColor:(id)fp8 hasBeenEvaluated:(BOOL)fp12 flags:(unsigned long)fp16;
- (void)setColor:(id)fp8 hasBeenEvaluated:(BOOL)fp12 flags:(unsigned long)fp16 commit:(BOOL)fp20;
- (void)setColorHasBeenEvaluated:(BOOL)fp8;
- (void)setColorHasBeenEvaluatedWithoutCommitting:(BOOL)fp8;
- (void)setColorWithoutCommitting:(id)fp8;
- (void)setFlags:(unsigned long long)fp8;
- (void)setHasTemporaryUid:(BOOL)fp8;
- (void)setIMAPFlags:(int)fp8;
- (void)setIsPartial:(BOOL)fp8;
- (void)setLibraryColor:(char *)fp8;
- (void)setLibraryID:(unsigned int)fp8;
- (void)setMailboxID:(unsigned int)fp8;
- (void)setMessageFlags:(unsigned long)fp8;
- (void)setMessageFlagsWithoutCommitting:(unsigned long)fp8;
- (void)setMessageSize:(unsigned int)fp8;
- (void)setMessageStore:(id)fp8;
- (void)setMutableInfoFromMessage:(id)fp8;
- (void)setOriginalMailboxID:(unsigned int)fp8;
- (void)setPartsHaveBeenCached:(BOOL)fp8;
- (void)setPreferredEncoding:(unsigned long)fp8;
- (BOOL)setReferences:(id)fp8;
- (void)setRemoteID:(id)fp8;
- (void)setRemoteID:(const char *)fp8 flags:(unsigned long long)fp12 size:(unsigned int)fp20 mailboxID:(unsigned int)fp24 originalMailboxID:(unsigned int)fp28 color:(char *)fp32;
- (void)setRemoteMessageStore:(id)fp8;
- (void)setUid:(unsigned long)fp8;
- (id)subject;
- (id)to;
- (unsigned long)uid;

@end

