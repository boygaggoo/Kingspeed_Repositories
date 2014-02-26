/*
 *     Generated by class-dump 3.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2005 by Steve Nygard.
 */

#import <Message/ToDo.h>

#import "LibraryObjectProtocol.h"
#import "NSCopyingProtocol.h"

@class MailboxUid, NSConditionLock, NSString;

@interface LibraryToDo : ToDo <LibraryObject, NSCopying>
{
    unsigned int _libraryID;
    unsigned int _mailboxID;
    MailboxUid *_mailboxUid;
    NSString *_remoteID;
    unsigned int _uid;
    unsigned int _size;
    CDAnonymousStruct13 _imapFlags;
    BOOL _imapUpdateInProgress;
    BOOL _isBeingChanged;
    int _changedLibraryProperties;
    NSConditionLock *_mailboxIDLock;
}

- (void)observeValueForKeyPath:(id)fp8 ofObject:(id)fp12 change:(id)fp16 context:(void *)fp20;
- (id)_initWithAccount:(id)fp8;
- (id)initWithTitle:(id)fp8 inAccount:(id)fp12;
- (id)initWithCalTask:(id)fp8 inAccount:(id)fp12;
- (id)initWithData:(id)fp8 inAccount:(id)fp12;
- (id)init;
- (unsigned int)hash;
- (id)messageReference;
- (void)updateWithCalTask:(id)fp8;
- (id)calTaskFromToDo;
- (void)updateNonCalTaskInformationFrom:(id)fp8;
- (id)initWithFlags:(unsigned long)fp8 size:(unsigned int)fp12 uid:(unsigned long)fp16;
- (void)dealloc;
- (BOOL)hasChanged;
- (void)setHasNotChanged;
- (unsigned long)libraryFlags;
- (void)setLibraryFlags:(unsigned long)fp8;
- (void)setLibraryID:(unsigned int)fp8;
- (id)account;
- (id)todoStore;
- (unsigned int)mailboxID;
- (id)mailboxUid;
- (void)setMailboxUid:(id)fp8;
- (void)setMailboxUid:(id)fp8 mailboxID:(unsigned int)fp12;
- (void)lockedSetMailboxID:(unsigned int)fp8;
- (void)setCalendarID:(id)fp8;
- (id)description;
- (id)debugDescription;
- (id)richDescription;
- (id)shortDescriptionWithRemoteID;
- (unsigned int)messageSize;
- (id)messageID;
- (BOOL)isPartial;
- (void)setIsPartial:(BOOL)fp8;
- (BOOL)partsHaveBeenCached;
- (void)setPartsHaveBeenCached:(BOOL)fp8;
- (BOOL)hasTemporaryUid;
- (void)setHasTemporaryUid:(BOOL)fp8;
- (BOOL)imapUpdateInProgress;
- (void)setIMAPUpdateInProgress:(BOOL)fp8;
- (void)mergeFromToDo:(id)fp8 overwriteDirtyProperties:(BOOL)fp12 usingCondition:(void *)fp16;
- (CDAnonymousStruct13)imapFlags;
- (id)subject;
- (void)postToDoInfoChangedNotification:(unsigned int)fp8;
- (unsigned int)libraryID;
- (unsigned long)uid;
- (void)setUid:(unsigned long)fp8;
- (id)remoteID;
- (void)setRemoteID:(id)fp8;
- (void)setRemoteIDFromUTF8String:(const char *)fp8;
- (BOOL)hasBeenStoredInDatabase;
- (int)changedLibraryProperties;
- (id)copyWithZone:(struct _NSZone *)fp8;
- (void)beginChanging;
- (BOOL)endChanging:(BOOL)fp8;
- (BOOL)isMetadataMessage;
- (id)mailboxName;
- (id)initForUnitTest;

@end

