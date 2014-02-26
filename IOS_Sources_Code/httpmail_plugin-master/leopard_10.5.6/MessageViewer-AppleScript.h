/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "MessageViewer.h"

@interface MessageViewer (AppleScript)
- (id)uniqueID;
- (id)objectSpecifier;
- (id)allMessages;
- (id)focusedMessages;
- (void)setFocusedMessages:(id)fp8;
- (int)appleScriptSortColumn;
- (void)setAppleScriptSortColumn:(int)fp8;
- (BOOL)isSortedAscending;
- (void)setIsSortedAscending:(BOOL)fp8;
- (BOOL)previewPaneVisible;
- (void)setPreviewPaneVisible:(BOOL)fp8;
- (id)visibleColumns;
- (void)setVisibleColumns:(id)fp8;
- (id)inbox;
- (id)outbox;
- (id)draftsMailbox;
- (id)sentMailbox;
- (id)trashMailbox;
- (id)junkMailbox;
- (void)setScriptingProperties:(id)fp8;
@end
