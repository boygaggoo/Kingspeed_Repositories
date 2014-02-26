/*
 *     Generated by class-dump 3.0.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004 by Steve Nygard.
 */

#import "NSObject.h"

#import "MVMailboxSelectionOwnerProtocol.h"

@class ASExtendedOutlineView, NSArray, NSFont, NSMutableAttributedString, NSMutableDictionary, NSTimer;

@interface MailboxesOutlineViewOwner : NSObject <MVMailboxSelectionOwner>
{
    id _delegate;
    ASExtendedOutlineView *_outlineView;
    NSArray *_savedSelection;
    NSFont *_normalFont;
    NSFont *_boldFont;
    NSMutableAttributedString *_cellValue;
    BOOL putSmartMailboxesAtTheBottom;
    float _idealOutlineViewWidth;
    float _minimumWidthNeededToUseMailboxes;
    float _minimizedOutlineViewWidth;
    NSArray *_specialMailboxUids;
    NSTimer *_progressIndicatorTimer;
    NSMutableDictionary *_mailboxesShowingProgress;
    struct __CFDictionary *_mailboxesByActivity;
}

+ (void)accountWasAdded:(id)fp8;
+ (void)allViewersAreClosed;
+ (BOOL)atLeastOneAccountStoresDraftsOnServer;
+ (void)deliveryFailureHasHappened:(id)fp8;
+ (BOOL)draftsHasMessageWithNoWindow;
+ (void)messagesWereAddedToMailboxes:(id)fp8;
+ (void)openDraftsMailboxes;
+ (void)setShouldShowDrafts:(BOOL)fp8;
+ (void)setShouldShowOutbox:(BOOL)fp8;
+ (BOOL)shouldShowDrafts;
+ (BOOL)shouldShowOutbox;
+ (void)startWatchingForIncomingDrafts;
+ (void)stopWatchingForIncomingDrafts;
+ (void)tellAllInstancesToShowSpecialMailbox:(id)fp8;
+ (void)userDidSaveAsDraft:(id)fp8;
- (void)_configureCell:(id)fp8 forMailboxUid:(id)fp12 forTableColumn:(id)fp16;
- (void)_invalidateProgressIndicatorTimer;
- (BOOL)_isMailboxOffline:(id)fp8 level:(int)fp12 alertState:(int *)fp16;
- (void)_reloadChildrenOfMailboxUid:(id)fp8;
- (BOOL)_revealPathToMailbox:(id)fp8 andSelect:(BOOL)fp12 extendingSelection:(BOOL)fp16;
- (void)accountOfflineStatusDidChange:(id)fp8;
- (void)accountsChanged:(id)fp8;
- (BOOL)canSelectMailbox:(id)fp8;
- (BOOL)control:(id)fp8 textShouldEndEditing:(id)fp12;
- (BOOL)control:(id)fp8 textView:(id)fp12 doCommandBySelector:(SEL)fp16;
- (void)controlTextDidEndEditing:(id)fp8;
- (void)dealloc;
- (void)editNameOfMailbox:(id)fp8;
- (id)iconForMailboxUid:(id)fp8 smallSize:(BOOL)fp12;
- (float)idealOutlineViewWidth;
- (float)idealWidthForSubtree:(id)fp8;
- (id)init;
- (BOOL)mailboxIsExpanded:(id)fp8;
- (void)mailboxListingDidChange:(id)fp8;
- (id)mailboxSelectionWindow;
- (id)mailboxesForActivity:(id)fp8;
- (void)messageIsBeingDelivered:(id)fp8;
- (float)minimizedOutlineViewWidth;
- (float)minimumWidthNeededToUseMailboxes;
- (void)monitoredActivityAddedTarget:(id)fp8;
- (void)monitoredActivityEnded:(id)fp8;
- (void)monitoredActivityRemovedTarget:(id)fp8;
- (void)monitoredActivityStarted:(id)fp8;
- (unsigned int)numberOfSmartMailboxes;
- (unsigned int)numberOfSpecialMailboxes;
- (void)offlineAlertSheetDidEnd:(id)fp8 returnCode:(int)fp12 contextInfo:(void *)fp16;
- (void)openDraftsMailboxes;
- (BOOL)outboxContainsMessageWhoseAccountIsOffline;
- (void)outboxContentsChanged:(id)fp8;
- (BOOL)outboxIsEmpty;
- (BOOL)outlineView:(id)fp8 acceptDrop:(id)fp12 item:(id)fp16 childIndex:(int)fp20;
- (id)outlineView:(id)fp8 child:(int)fp12 ofItem:(id)fp16;
- (void)outlineView:(id)fp8 didEndDragWithImage:(id)fp12 atPoint:(struct _NSPoint)fp16 operation:(unsigned int)fp24;
- (id)outlineView:(id)fp8 dragImage:(id)fp12 forRowsWithIndexes:(id)fp16 tableColumns:(id)fp20 event:(id)fp24 offset:(struct _NSPoint *)fp28;
- (unsigned int)outlineView:(id)fp8 draggingSourceOperationMaskForLocal:(BOOL)fp12;
- (BOOL)outlineView:(id)fp8 handleDoubleClickEvent:(id)fp12 forItem:(id)fp16 inRow:(int)fp20;
- (int)outlineView:(id)fp8 heightOfRow:(int)fp12;
- (BOOL)outlineView:(id)fp8 isItemExpandable:(id)fp12;
- (id)outlineView:(id)fp8 itemForPersistentObject:(id)fp12;
- (int)outlineView:(id)fp8 numberOfChildrenOfItem:(id)fp12;
- (id)outlineView:(id)fp8 objectValueForTableColumn:(id)fp12 byItem:(id)fp16;
- (id)outlineView:(id)fp8 persistentObjectForItem:(id)fp12;
- (BOOL)outlineView:(id)fp8 shouldCollapseAutoExpandedItemsForDeposited:(BOOL)fp12;
- (BOOL)outlineView:(id)fp8 shouldEditTableColumn:(id)fp12 item:(id)fp16;
- (BOOL)outlineView:(id)fp8 shouldExpandItem:(id)fp12;
- (BOOL)outlineView:(id)fp8 shouldTrackMouseInCell:(id)fp12 forTableColumn:(id)fp16 item:(id)fp20;
- (id)outlineView:(id)fp8 toolTipForCell:(id)fp12 rect:(struct _NSRect *)fp16 tableColumn:(id)fp20 item:(id)fp24 mouseLocation:(struct _NSPoint)fp28;
- (unsigned int)outlineView:(id)fp8 validateDrop:(id)fp12 proposedItem:(id)fp16 proposedChildIndex:(int)fp20;
- (void)outlineView:(id)fp8 willDisplayCell:(id)fp12 forTableColumn:(id)fp16 item:(id)fp20;
- (BOOL)outlineView:(id)fp8 writeItems:(id)fp12 toPasteboard:(id)fp16;
- (void)outlineViewItemDidCollapse:(id)fp8;
- (void)outlineViewItemDidExpand:(id)fp8;
- (void)outlineViewSelectionDidChange:(id)fp8;
- (void)readDefaultsFromDictionary:(id)fp8;
- (void)redrawProgressIndicators:(id)fp8;
- (void)redrawRowsForMailboxesAtPaths:(id)fp8;
- (void)revealMailbox:(id)fp8;
- (void)selectAllInOutlineView:(id)fp8;
- (void)selectPathsToMailboxes:(id)fp8;
- (id)selectedMailbox;
- (id)selectedMailboxes;
- (void)setDelegate:(id)fp8;
- (void)setFirstResponderAfterMouseDownOnOutlineView:(id)fp8;
- (void)setOutlineView:(id)fp8;
- (void)showOfflineStatus:(id)fp8;
- (void)showOutboxForSlowDeliveryOfMessage:(id)fp8;
- (id)specialMailboxUids;
- (void)startShowingDrafts;
- (void)startShowingOutbox;
- (void)stopProgressForMailboxPaths:(id)fp8;
- (int)totalUnreadCountForItem:(id)fp8;
- (void)unreadCountChanged:(id)fp8;
- (void)viewerPreferencesChanged:(id)fp8;
- (void)writeDefaultsToDictionary:(id)fp8;

@end

