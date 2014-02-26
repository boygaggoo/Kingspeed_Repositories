/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol IMAPObject <NSObject>
- (unsigned long)uid;
- (void)setUid:(unsigned long)fp8;
- (id)messageID;
- (BOOL)isPartial;
- (void)setIsPartial:(BOOL)fp8;
- (BOOL)partsHaveBeenCached;
- (void)setPartsHaveBeenCached:(BOOL)fp8;
- (BOOL)hasTemporaryUid;
- (void)setHasTemporaryUid:(BOOL)fp8;
- (CDAnonymousStruct4)imapFlags;
- (unsigned int)messageSize;
- (id)subject;
- (id)mailboxName;
- (BOOL)isMetadataMessage;
@end

