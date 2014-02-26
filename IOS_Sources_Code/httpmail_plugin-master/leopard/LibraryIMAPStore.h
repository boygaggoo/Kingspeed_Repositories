/*
 *     Generated by class-dump 3.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2005 by Steve Nygard.
 */

#import "LibraryStore.h"

@class IMAPCommandPipeline, IMAPDownloadCache, IMAPMailbox, IMAPMailboxSyncEngine, NSDate, NSLock, NSMutableArray, NSMutableDictionary, NSSet, NSString;

typedef struct {
    int _dunno;
} CDAnonymousStruct14;


@interface LibraryIMAPStore : LibraryStore
{
    BOOL _supportsCustomPermanentFlags;
    BOOL _readyToDealloc;
    NSString *_mailboxName;
    IMAPMailbox *_IMAPMailbox;
    NSSet *_cachedContents;
    NSDate *_cachedDirModDate;
    IMAPDownloadCache *_downloadCache;
    IMAPCommandPipeline *_fetchPipeline;
    IMAPMailboxSyncEngine *_syncEngine;
    NSLock *_copyLock;
    NSMutableDictionary *_recentFlagChangesByMessageID;
    NSMutableArray *_recentlyDeletedMessageIDs;
    unsigned int _totalCount;
}

+ (BOOL)storeAtPathIsWritable:(id)fp8;
+ (BOOL)createEmptyStoreForPath:(id)fp8;
- (id)_copyMailboxSyncEngineCreateIfNecessary:(BOOL)fp8;
- (id)_copyMailboxSyncEngineCreateIfNecessary:(BOOL)fp8 setupGatewayIfNecessary:(BOOL)fp12;
- (BOOL)_isRebuildingOrSynchronizing;
- (BOOL)_isSynchronized;
- (unsigned int)_permanentFlags;
- (id)initWithMailboxUid:(id)fp8 readOnly:(BOOL)fp12;
- (void)dealloc;
- (void)finalize;
- (id)messagesForImporter;
- (void)openSynchronouslyUpdatingMetadata:(BOOL)fp8 withOptions:(unsigned int)fp12;
- (void)openSynchronouslyUpdatingMetadata:(BOOL)fp8;
- (void)openSynchronouslyWithoutUserInteraction;
- (id)willDealloc;
- (void)_setState:(int)fp8;
- (void)_invalidate;
- (BOOL)_shouldCallCompactWhenClosing;
- (void)_fetchForCheckingNewMail:(BOOL)fp8;
- (void)checkNewMail;
- (void)fetchSynchronously;
- (void)cleanupSynchronously;
- (void)doRoutineCleanup;
- (BOOL)canRebuild;
- (void)removeAllLocalMessages;
- (id)mailboxName;
- (BOOL)canCompact;
- (void)doCompact;
- (void)doCompactToDos;
- (void)deleteMessagesOlderThanNumberOfDays:(int)fp8 compact:(BOOL)fp12;
- (void)deleteLastMessageWithHeaders:(id)fp8 compactWhenDone:(BOOL)fp12;
- (void)undeleteMessagesWithRemoteIDs:(id)fp8;
- (BOOL)allowsAppend;
- (BOOL)allowsOverwrite;
- (void)_addOfflineTransferMessages:(id)fp8;
- (id)_createFlagsByMessageFromFlags:(id)fp8 messages:(id)fp12;
- (void)_copyFlagsFromMessages:(id)fp8 flagsByMessage:(id)fp12 toMessagesWithUids:(id)fp16 withGateway:(id)fp20 usedFlags:(id)fp24;
- (BOOL)_doUidCopy:(CDAnonymousStruct14 *)fp8 toStore:(id)fp12 newMessages:(id)fp16 error:(id *)fp20;
- (int)_doAppend:(CDAnonymousStruct14 *)fp8 error:(id *)fp12;
- (int)appendMessages:(id)fp8 unsuccessfulOnes:(id)fp12 newMessageIDs:(id)fp16 newMessages:(id)fp20 newDocumentIDsByOld:(id)fp24 flagsToSet:(id)fp28 forMove:(BOOL)fp32 error:(id *)fp36;
- (int)undoAppendOfMessageIDs:(id)fp8;
- (id)createDictionaryForLocalFlags:(unsigned long)fp8 serverFlags:(unsigned long)fp12 existingDictionary:(id)fp16;
- (void)_synchronouslyStoreFlagsFromDictionary:(id)fp8 forMessages:(id)fp12;
- (void)_setFlagsFromDictionary:(id)fp8 forMessages:(id)fp12;
- (id)recentFlagChangesForMessageID:(id)fp8;
- (id)setFlagsFromDictionary:(id)fp8 forMessages:(id)fp12;
- (id)setFlagsFromDictionary:(id)fp8 forMessages:(id)fp12 updatingServer:(BOOL)fp16;
- (id)setFlagsFromDictionary:(id)fp8 forToDos:(id)fp12;
- (id)setFlagsFromDictionary:(id)fp8 forToDo:(id)fp12;
- (void)_internalSetFlagsFromDictionary:(id)fp8 forMessages:(id)fp12;
- (BOOL)setPreferredEncoding:(unsigned long)fp8 forMessage:(id)fp12;
- (id)_cachedBodyForMessage:(id)fp8 valueIfNotPresent:(id)fp12;
- (id)_cachedHeadersForMessage:(id)fp8 valueIfNotPresent:(id)fp12;
- (id)_cachedBodyDataForMessage:(id)fp8 valueIfNotPresent:(id)fp12;
- (id)_cachedHeaderDataForMessage:(id)fp8 valueIfNotPresent:(id)fp12;
- (id)_dataForMessage:(id)fp8 readHeadersOnly:(BOOL)fp12;
- (id)_createDataFromMimePart:(id)fp8 threshold:(unsigned int)fp12;
- (id)_fetchDataForMimePart:(id)fp8 keepInMemory:(BOOL)fp12 writeToDisk:(BOOL)fp16;
- (id)dataForMimePart:(id)fp8;
- (id)_lockedGetCacheDirectoryContents;
- (id)cacheDirectoryContents;
- (BOOL)hasCachedDataForMimePart:(id)fp8;
- (id)fullBodyDataForMessage:(id)fp8 andHeaderDataIfReadilyAvailable:(id *)fp12;
- (id)_fetchBodyDataForMessage:(id)fp8 andHeaderDataIfReadilyAvailable:(id *)fp12;
- (id)_fetchHeaderDataForMessage:(id)fp8;
- (id)colorForMessage:(id)fp8;
- (id)messageForMessageID:(id)fp8;
- (id)messageWithLibraryID:(unsigned int)fp8 options:(unsigned int)fp12;
- (unsigned int)maximumRemoteIDForMailbox:(id)fp8;
- (id)getDetailsForMessagesWithRemoteIDs:(id)fp8 fromMailbox:(id)fp12;
- (BOOL)hasCacheFileForMessage:(id)fp8 part:(id)fp12 directoryContents:(id)fp16;
- (BOOL)hasCacheFileForMessage:(id)fp8 directoryContents:(id)fp12;
- (void)compactMailbox:(id)fp8;
- (id)messagesForMailbox:(id)fp8 olderThanNumberOfDays:(int)fp12;
- (id)messagesForMailbox:(id)fp8 where:(id)fp12 sortedBy:(id)fp16 ascending:(BOOL)fp20 options:(unsigned int)fp24;
- (id)duplicateMessages:(id)fp8 newRemoteIDs:(id)fp12 newDocumentIDs:(id)fp16 forMailbox:(id)fp20 setFlags:(unsigned long long)fp24 clearFlags:(unsigned long long)fp32 messageFlagsForMessages:(id)fp40 createNewCacheFiles:(BOOL)fp44;
- (id)duplicateMessages:(id)fp8 newRemoteIDs:(id)fp12 newDocumentIDs:(id)fp16 forMailbox:(id)fp20 setFlags:(unsigned long long)fp24 clearFlags:(unsigned long long)fp32 createNewCacheFiles:(BOOL)fp40;
- (id)messageWithRemoteID:(id)fp8 inRemoteMailbox:(id)fp12;
- (id)addMessages:(id)fp8 withMailbox:(id)fp12 fetchBodies:(BOOL)fp16 oldMessagesByNewMessage:(id)fp20;
- (id)addMessages:(id)fp8 withMailbox:(id)fp12 fetchBodies:(BOOL)fp16 isInitialImport:(BOOL)fp20 oldMessagesByNewMessage:(id)fp24 remoteIDs:(id)fp28 setFlags:(unsigned long long)fp32 clearFlags:(unsigned long long)fp40 messageFlagsForMessages:(id)fp48 copyFiles:(BOOL)fp52;
- (id)stringForQuery:(id)fp8;
- (unsigned int)unreadCountForMailbox:(id)fp8;
- (unsigned int)deletedCountForMailbox:(id)fp8;
- (void)setBackgroundColorForMessages:(id)fp8 textColorForMessages:(id)fp12;
- (void)setFlagsForMessages:(id)fp8 mask:(unsigned long)fp12;
- (void)setFlagsAndColorForMessages:(id)fp8;
- (BOOL)canSetMessageColors;
- (BOOL)messageHasBeenDeleted:(id)fp8;
- (BOOL)_allMessagesHaveDateReceived;
- (id)libraryToDoWithRemoteID:(unsigned int)fp8 inMailbox:(unsigned int)fp12;
- (void)reconcile;
- (void)abandonProcessingStore;
- (BOOL)isReconciling;
- (void)waitUntilStoreIsFree;
- (void)willAddMessages;
- (void)didAddMessages;
- (void)willRemoveMessages;
- (void)didRemoveMessages;
- (id)_gatewayCreateIfNeeded:(BOOL)fp8 options:(int)fp12;
- (id)_gateway;
- (BOOL)_changedFlagsForMessage:(id)fp8 fetchResponse:(id)fp12 newFlags:(unsigned int *)fp16;
- (void)startSynchronization;
- (id)_uidIndexSetForMessages:(id)fp8;
- (void)_retrieveNewMessagesForCheckingNewMail:(BOOL)fp8;
- (void)forceResync;
- (id)_preferredOrderForFetchingMessageBodies:(id)fp8;
- (BOOL)hasValidCacheFileForMessage:(id)fp8;
- (BOOL)hasValidCacheFileForUid:(unsigned long)fp8;
- (id)copyOfOldCachedMessagesContentsForUid:(unsigned long)fp8;
- (void)setUid:(unsigned long)fp8 forMessageWithTemporaryUid:(unsigned long)fp12;
- (id)addMessages:(id)fp8 oldMessagesByNewMessage:(id)fp12;
- (id)copyOfAllMessagesWithOptions:(unsigned int)fp8;
- (id)copyOfAllMessagesSortedByUidWithOptions:(unsigned int)fp8;
- (id)deletedMessages;
- (int)lastUid;
- (id)URLString;
- (void)writeUpdatedMessageDataToDisk;
- (void)compactMessages:(id)fp8;
- (void)_countUnreadAndDeleted;
- (void)_countUnreadAndDeletedInMessages:(id)fp8;
- (unsigned int)totalCount;
- (unsigned int)indexOfMessage:(id)fp8;
- (id)sortOrder;
- (BOOL)isSortedAscending;
- (void)propagateMessagesWereAdded:(id)fp8 forIncrementalLoading:(BOOL)fp12;
- (void)messagesWereAdded:(id)fp8 forIncrementalLoading:(BOOL)fp12;
- (void)updateUserInfoToLatestValues;
- (void)_setBackgroundColorForMessages:(id)fp8 textColorForMessages:(id)fp12;
- (void)_setFlagsForMessages:(id)fp8 mask:(unsigned long)fp12;
- (void)_setFlagsAndColorForMessages:(id)fp8;
- (id)fetchPipeline;
- (id)downloadCache;
- (id)messagesBeingRouted;
- (id)imapAccount;
- (id)offlineCache;
- (id)offlineCacheIfOffline;
- (BOOL)_shouldUpdateColorsAndAttachmentsAfterOpening;
- (BOOL)isALocalStore;
- (void)updateCountFromMailbox:(id)fp8;
- (void)processResponsesFromMailbox:(id)fp8;
- (void)updateUidValidityFromMailbox:(id)fp8;
- (void)_updateCountFromMailbox:(id)fp8;
- (void)_processResponsesFromMailbox:(id)fp8;
- (void)_updateUidValidityFromMailbox:(id)fp8;
- (void)updateSelectedGatewayFromMailbox:(id)fp8;

@end

