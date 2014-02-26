/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <Message/MailAccount.h>

@interface MailAccount (Internal)
+ (void)setAllEmailAddresses:(id)fp8;
+ (void)setAllEmailAddressesWithFullUserName:(id)fp8;
+ (BOOL)_mailboxListingNotificationAreEnabled;
+ (void)_disableMailboxListingNotifications;
+ (void)_enableMailboxListingNotifications:(BOOL)fp8;
+ (id)_accountWithPath:(id)fp8;
+ (void)_postMailAccountsHaveChanged;
+ (void)resetAccountExistsForSigning;
+ (void)_setOutboxMailboxUid:(id)fp8;
+ (id)_outboxMailboxUid;
- (BOOL)_setPath:(id)fp8;
- (void)setIsActive:(BOOL)fp8;
- (void)_postMailAccountsHaveChangedIfNeeded;
- (id)_pathComponentForUidName:(id)fp8;
- (id)_uidNameForPathComponent:(id)fp8;
- (void)_readCustomInfoFromMailboxCache:(id)fp8;
- (void)_writeCustomInfoToMailboxCache:(id)fp8;
- (id)_copyMailboxUidWithParent:(id)fp8 name:(id)fp12 attributes:(unsigned int)fp16 existingMailboxUid:(id)fp20;
- (void)_synchronouslyLoadListingForParent:(id)fp8;
- (void)_loadMailboxListingIntoCache:(id)fp8 attributes:(unsigned int)fp12 parent:(id)fp16;
- (void)_mailboxesWereRemovedFromTree:(id)fp8 withFileSystemPaths:(id)fp12;
- (BOOL)_usesMailboxCache;
- (void)_synchronizeMailboxListWithFileSystemBeforeImport:(BOOL)fp8;
- (void)_synchronizeMailboxListWithFileSystem;
- (void)_synchronizeMailboxListWithFileSystemBeforeImport;
- (void)_finishSynchronizingMailboxesAfterImport;
- (void)_loadEntriesFromFileSystemPath:(id)fp8 parent:(id)fp12;
- (void)_writeMailboxCacheWithPrejudice:(BOOL)fp8;
- (id)_insertMailbox:(id)fp8 intoParent:(id)fp12 withName:(id)fp16;
- (BOOL)_setChildren:(id)fp8 forMailboxUid:(id)fp12;
- (BOOL)_setChildren:(id)fp8 addedChild:(id)fp12 forMailboxUid:(id)fp16;
- (BOOL)_deleteMailbox:(id)fp8;
- (id)description;
- (void)_fetchSynchronouslyIfNeeded;
- (void)_backgroundFetchCompletedCount:(unsigned int)fp8;
- (void)_backgroundFetchCompleted;
- (void)_emptySpecialMailboxesIfNeeded;
- (void)_emptySpecialMailboxesIfNeededForQuit:(BOOL)fp8;
- (void)_clearAllPathBasedCachesAndDelete:(BOOL)fp8;
- (id)_defaultSpecialMailboxNameForType:(int)fp8;
- (BOOL)_assignSpecialMailboxToAppropriateIvar:(id)fp8 forType:(int)fp12;
- (void)_setSpecialMailboxName:(id)fp8 forType:(int)fp12;
- (void)_setSpecialMailbox:(id)fp8 forType:(int)fp12;
- (id)_specialMailboxNameForType:(int)fp8;
- (id)_specialMailboxUidWithType:(int)fp8 create:(BOOL)fp12;
- (BOOL)_canEmptyMessagesFromMailboxUid:(id)fp8;
- (BOOL)_shouldLogDeleteActivity;
- (id)_infoForMatchingURL:(id)fp8;
- (id)_URLScheme;
- (id)_URLForInfo:(id)fp8;
- (id)_mailboxPathPrefix;
- (id)rootMailboxUidEvenIfInactive:(BOOL)fp8;
- (id)allMailboxUidsEvenIfInactive:(BOOL)fp8;
@end

