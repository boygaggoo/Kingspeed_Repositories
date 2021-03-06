/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject.h"

@class IMAPGateway, MailboxUid, NSArray, NSMutableArray, NSString;

@interface IMAPMailbox : NSObject
{
    id <IMAPMailboxDelegate> _delegate;
    MailboxUid *_mailboxUid;
    unsigned int _permanentFlags;
    NSString *_referenceName;
    BOOL _readOnly;
    BOOL _uidNotSticky;
    IMAPGateway *_selectedGateway;
    NSArray *_quotaRoots;
    unsigned int _exists;
    CDAnonymousStruct3 _quotaUsage;
    unsigned int _uidNext;
    unsigned int _uidValidity;
    NSMutableArray *_unprocessedResponses;
    BOOL _hasNewResponses;
}

- (void)dealloc;
- (id)initWithMailboxName:(id)fp8;
- (void)setDelegate:(id)fp8;
- (void)clearDelegate:(id)fp8;
- (id)selectedGateway;
- (void)setSelectedGateway:(id)fp8;
- (void)setExists:(unsigned int)fp8;
- (void)setUidValidity:(unsigned int)fp8;
- (void)setHasNewResponses:(BOOL)fp8;
- (void)setTotalSize:(unsigned int)fp8 forQuotaMessageCount:(unsigned int)fp12;
- (void)setPermanentFlags:(unsigned int)fp8;
- (void)addResponse:(id)fp8;
- (id)removeResponse;
- (id)description;
- (BOOL)hasNewResponses;
- (id)unprocessedResponses;
- (void)setUnprocessedResponses:(id)fp8;
- (unsigned int)uidValidity;
- (unsigned long)uidNext;
- (void)setUidNext:(unsigned long)fp8;
- (CDAnonymousStruct3)quotaUsage;
- (void)setQuotaUsage:(CDAnonymousStruct3)fp8;
- (unsigned int)exists;
- (id)quotaRoots;
- (void)setQuotaRoots:(id)fp8;
- (BOOL)uidNotSticky;
- (void)setUidNotSticky:(BOOL)fp8;
- (BOOL)readOnly;
- (void)setReadOnly:(BOOL)fp8;
- (id)referenceName;
- (void)setReferenceName:(id)fp8;
- (unsigned int)permanentFlags;
- (id)mailboxUid;
- (void)setMailboxUid:(id)fp8;

@end

