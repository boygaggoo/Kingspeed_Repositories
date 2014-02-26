/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SpecialMailboxes.h"

@class NSButton;

@interface IMAPAccountSpecialMailboxes : SpecialMailboxes
{
    NSButton *_keepDraftsOnServer;
    NSButton *_keepSentMessagesOnServer;
    NSButton *_keepTrashOnServer;
    NSButton *_keepJunkOnServer;
    BOOL _storeNotesOnServer;
}

+ (void)initialize;
- (id)init;
- (BOOL)storeNotesInInbox;
- (void)setupUIFromValuesInAccount:(id)fp8;
- (BOOL)setupAccountFromValuesInUI:(id)fp8;
- (BOOL)isAccountInformationDirty:(id)fp8;
- (void)setUIElementsEnabled:(BOOL)fp8;
- (void)moveToTrashClicked:(id)fp8;
- (BOOL)storeNotesOnServer;
- (void)setStoreNotesOnServer:(BOOL)fp8;

@end

