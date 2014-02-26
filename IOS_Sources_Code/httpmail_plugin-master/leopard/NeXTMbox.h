/*
 *     Generated by class-dump 3.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2005 by Steve Nygard.
 */

#import "MessageStore.h"

@class NSData, TableOfContents;

@interface NeXTMbox : MessageStore
{
    NSData *_mboxData;
    TableOfContents *_toc;
    float _compactThreshold;
    unsigned int _mboxIsOnSMB:1;
    unsigned int _haveUpdatedMetadata:1;
    NSData *_incomingMboxData;
    unsigned int _importMode:1;
}

+ (BOOL)createEmptyStoreForPath:(id)fp8;
+ (BOOL)storeAtPathIsWritable:(id)fp8;
+ (BOOL)cheapStoreAtPathIsEmpty:(id)fp8;
- (id)initWithMailboxUid:(id)fp8 readOnly:(BOOL)fp12;
- (void)dealloc;
- (void)finalize;
- (void)_releaseMboxData;
- (void)openSynchronouslyUpdatingMetadata:(BOOL)fp8;
- (id)incomingMessages;
- (id)messagesForImporter;
- (void)updateMetadata;
- (id)_lockFilePath;
- (void)_invalidate;
- (void)writeUpdatedMessageDataToDisk;
- (void)_rebuildTableOfContentsSynchronously;
- (void)_flushAllMessageData;
- (BOOL)tableOfContents:(id)fp8 loadedMessages:(id)fp12;
- (void)_resetAllMessages;
- (id)messageForMessageID:(id)fp8;
- (id)_fetchHeaderDataForMessage:(id)fp8;
- (id)_fetchBodyDataForMessage:(id)fp8 andHeaderDataIfReadilyAvailable:(id *)fp12;
- (id)setFlagsFromDictionary:(id)fp8 forMessages:(id)fp12;
- (float)compactThreshold;
- (void)setCompactThreshold:(float)fp8;
- (BOOL)canCompact;
- (void)doCompact;
- (void)_deleteAttachments:(id)fp8;
- (id)_appendMessage:(id)fp8 toFile:(id)fp12;
- (void)_addIDsForAppendedMessages:(id)fp8 toArray:(id)fp12;
- (int)_appendMessages:(id)fp8 successes:(id *)fp12 failures:(id *)fp16 mboxName:(id)fp20 tableOfContents:(id)fp24;
- (BOOL)allowsAppend;
- (int)appendMessages:(id)fp8 unsuccessfulOnes:(id)fp12 newMessageIDs:(id)fp16 newMessages:(id)fp20 flagsToSet:(id)fp24 forMove:(BOOL)fp28 error:(id *)fp32;
- (int)undoAppendOfMessageIDs:(id)fp8;
- (void)_incorporateMailFromIncoming;
- (int)_writeMessagesToIncomingMail:(id)fp8 unsuccessfulOnes:(id)fp12 newMessageIDs:(id)fp16;
- (void)suggestSortOrder:(id)fp8 ascending:(BOOL)fp12;
- (id)sortOrder;
- (BOOL)isSortedAscending;
- (BOOL)_shouldCallCompactWhenClosing;

@end

