/*
 *     Generated by class-dump 3.0.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004 by Steve Nygard.
 */

#import <Message/MessageStore.h>

@class NSData, NSString;

@interface BerkeleyMbox : MessageStore
{
    NSData *_mboxData;
    NSString *_path;
}

+ (BOOL)createEmptyStoreForPath:(id)fp8;
+ (BOOL)storeAtPathIsWritable:(id)fp8;
+ (BOOL)storeExistsForPath:(id)fp8;
- (id)_constructDeletedList;
- (id)_defaultRouterDestination;
- (id)_fetchBodyDataForMessage:(id)fp8 andHeaderDataIfReadilyAvailable:(id *)fp12;
- (id)_fetchHeaderDataForMessage:(id)fp8;
- (id)_lockFilePath;
- (id)_mboxData;
- (void)_resetAllMessages;
- (BOOL)allowsIndexing;
- (void)dealloc;
- (void)doCompact;
- (void)fetchSynchronously;
- (void)finalize;
- (id)initWithMailboxUid:(id)fp8 readOnly:(BOOL)fp12;
- (id)initWithPath:(id)fp8 create:(BOOL)fp12 readOnly:(BOOL)fp16 account:(id)fp20;
- (id)path;
- (void)writeUpdatedMessageDataToDisk;

@end

