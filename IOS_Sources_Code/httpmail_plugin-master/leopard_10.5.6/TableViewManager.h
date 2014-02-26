/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject.h"

#import "MessageBrowserController-Protocol.h"

@class ASExtendedTableView, BytesFormatter, Message, MessageMall, MessageThread, NSArray, NSDictionary, NSFont, NSMapTable, NSMutableArray, NSMutableAttributedString, NSMutableDictionary, NSMutableSet, NSString, VisibleStateObject;

@interface TableViewManager : NSObject <MessageBrowserController>
{
    ASExtendedTableView *_tableView;
    MessageMall *_messageMall;
    id _delegate;
    NSArray *_tableColumns;
    NSFont *_font;
    NSFont *_boldFont;
    NSFont *_noteFont;
    NSMutableArray *_selection;
    NSArray *_selectionExcludingThreads;
    BOOL _suspendChangesToScrollingAndSelection;
    Message *_currentDisplayedMessage;
    NSMapTable *_storeStateTable;
    NSMutableArray *_draggedMessages;
    NSMutableAttributedString *_truncatedString;
    NSMutableDictionary *_truncatedStringAttributes;
    NSMutableDictionary *_truncatedParagraphStyle;
    NSString *_availableStatusImageName;
    int leftmostTextColumn;
    struct {
        unsigned int includeDeleted:1;
        unsigned int isFocused:1;
        unsigned int sortColumnOrderAscending:1;
        unsigned int isShowingSearchResults:1;
        unsigned int sortColumnOrder:8;
        unsigned int hasScrolledSinceMailboxChange:1;
        unsigned int userChangedSelectionSinceMailboxChange:1;
        unsigned int threadOpeningIsInProgress:1;
        unsigned int threadClosingIsInProgress:1;
        unsigned int doubleClickThreadOpeningIsInProgress:1;
        unsigned int animatingThreadOpening:1;
        unsigned int animatingThreadClosing:1;
        unsigned int animateInSlowMotion:1;
        unsigned int dontUpdateTrackingRects:1;
        unsigned int dontReadWriteStoreSpecificDefaultsToMailbox:1;
        unsigned int useBoldFontForUnreadMessages:1;
        unsigned int clearingSearch:1;
        unsigned int changingSelection:1;
        unsigned int selectionShouldNotChange:1;
        unsigned int searchSortColumnOrder:8;
        unsigned int searchSortColumnOrderAscending:1;
    } _flags;
    NSDictionary *_messageIDsToSelectWhenOpened;
    NSArray *_threadIDsToOpenWhenOpened;
    int colorHighlightLeftEdge;
    int colorHighlightWidth;
    int _windowWidthBeforeSearch;
    VisibleStateObject *_visibleStateBeforeSearch;
    NSMutableSet *_messagesInSelectedThread;
    MessageThread *threadBeingClosed;
    MessageThread *threadBeingOpened;
    struct __CFDictionary *_rowDrawingCache;
    NSMutableSet *_mouseTrackers;
    struct _NSPoint _lastMouseDownInUnreadColumnPoint;
    int _lastMouseDownInUnreadColumnEventNumber;
    struct _NSPoint _currentMouseLocationInWindow;
    float _amountToScrollDownAfterClosingThread;
    int _numberOfSelectedRowsBeforeTogglingThread;
    int _selectedRowBeforeTogglingThread;
    BOOL _unreadColumnResizableAfterResizingColumnsToFit;
    BytesFormatter *_bytesFormatter;
    BOOL _isDragging;
}

+ (void)initialize;
- (void)awakeFromNib;
- (id)tableViewGetDefaultMenu:(id)fp8;
- (id)_bytesFormatter;
- (void)_setBytesFormatter:(id)fp8;
- (void)tableViewScrolled:(id)fp8;
- (void)_setupColumnHeaderIcon:(id)fp8 inColumnWithIdentifier:(id)fp12 accessibilityTitle:(id)fp16 alignment:(unsigned int)fp20;
- (void)_setupTableColumnWidths;
- (void)_configureColumnForEndTruncation:(id)fp8;
- (void)_configureColumnForImageCell:(id)fp8 alignment:(unsigned int)fp12;
- (void)_configureColumnForRolloverCell:(id)fp8 alignment:(unsigned int)fp12 action:(SEL)fp16;
- (void)showFollowupsToMessage:(id)fp8;
- (void)showFollowupsToMessageAtRow:(int)fp8;
- (void)_setupColumnsForTableView;
- (void)dealloc;
- (void)windowWillClose:(id)fp8;
- (id)delegate;
- (void)setDelegate:(id)fp8;
- (void)setMessageMall:(id)fp8;
- (void)messagesUpdated:(id)fp8;
- (void)readDefaultsFromDictionary:(id)fp8;
- (void)writeDefaultsToDictionary:(id)fp8;
- (void)setDontReadWriteStoreSpecificDefaultsToMailbox:(BOOL)fp8;
- (void)writeStoreSpecificDefaultsToMailboxUid:(id)fp8;
- (void)readStoreSpecificDefaultsFromMailboxUid:(id)fp8;
- (void)readStoreSpecificDefaultsFromDictionary:(id)fp8;
- (BOOL)canSelectNextMessage;
- (BOOL)canSelectPreviousMessage;
- (void)rulePreferencesChanged:(id)fp8;
- (void)viewerPreferencesChanged:(id)fp8;
- (BOOL)threadHasSelectedMessages:(id)fp8;
- (void)presencePreferenceChanged:(id)fp8;
- (void)threadColorPreferenceChanged:(id)fp8;
- (void)presenceImageChanged:(id)fp8;
- (void)presenceChanged:(id)fp8;
- (void)_updateTableHeaderToMatchCurrentSort;
- (void)tableView:(id)fp8 didClickTableColumn:(id)fp12;
- (id)_columnWithIdentifierTag:(int)fp8;
- (id)_unreadColumn;
- (BOOL)isColumnVisible:(int)fp8;
- (void)setColumn:(int)fp8 toVisible:(BOOL)fp12;
- (void)_setColumn:(int)fp8 toVisible:(BOOL)fp12;
- (int)tableViewNumberOfColumnsToPinToLefthandSide:(id)fp8;
- (void)selectAllMessagesAndMakeFirstResponder;
- (void)makeMessageListFirstResponder;
- (void)updateTableViewRowHeight;
- (void)setFont:(id)fp8;
- (void)setNoteFont:(id)fp8;
- (BOOL)isInThreadedMode;
- (void)toggleThreadedMode;
- (void)threadedModeDidChange:(id)fp8;
- (void)_invalidateSelectionExcludingThreads;
- (BOOL)openThreadAtIndex:(int)fp8 andSelectMessage:(id)fp12 animate:(BOOL)fp16;
- (BOOL)closeThreadAtIndex:(int)fp8 focusRow:(int)fp12 animate:(BOOL)fp16;
- (void)openAllThreads;
- (void)closeAllThreads;
- (void)toggleThread:(id)fp8;
- (void)toggleThread:(id)fp8 ignoreModifierKeys:(BOOL)fp12;
- (int)_indexOfMessageNearest:(int)fp8 numberOfRows:(int)fp12 threaded:(BOOL)fp16 downward:(BOOL)fp20;
- (BOOL)canSelectPreviousThreadedMessage;
- (BOOL)canSelectNextThreadedMessage;
- (BOOL)canSelectParentOfMessage;
- (BOOL)canSelectFirstReplyToMessage;
- (BOOL)canSelectNextReplyToParent;
- (BOOL)selectionIsExactlyOneOpenThread;
- (void)selectNextMessageMovingDownward:(BOOL)fp8;
- (void)selectNextMessageMovingUpward:(BOOL)fp8;
- (BOOL)stepIntoSelectedThread;
- (BOOL)stepOutOfSelectedThread;
- (BOOL)openSelectedThread;
- (void)selectNextMessage:(BOOL)fp8;
- (void)selectPreviousMessage:(BOOL)fp8;
- (void)selectParentOfMessage;
- (void)selectFirstReplyToMessage;
- (void)selectPeer:(BOOL)fp8;
- (void)selectNextReplyToParent;
- (void)selectPreviousReplyToParent;
- (void)showSelectionAndCenter:(BOOL)fp8;
- (BOOL)isSelectionVisible;
- (void)scrollRowToVisible:(int)fp8 position:(int)fp12;
- (int)tableView:(id)fp8 shouldScrollRowToVisible:(int)fp12;
- (BOOL)_isMessageInSelectedThread:(id)fp8;
- (void)_setNeedsDisplayForMessagesInSet:(id)fp8 highlightOnly:(BOOL)fp12;
- (void)_setNeedsDisplayThreadColumnForMessagesInSet:(id)fp8;
- (void)_updateSelectedThreadList;
- (id)selectedThread;
- (void)_reallyUpdateTextViewerToSelection;
- (void)updateTextViewerToSelection;
- (BOOL)tableView:(id)fp8 shouldSelectRow:(int)fp12 byExtendingSelection:(BOOL)fp16;
- (void)selectionIsChanging:(id)fp8;
- (void)_selectOrDeselectMembersOfThread:(id)fp8 atIndex:(int)fp12 select:(BOOL)fp16;
- (void)selectionChanged:(id)fp8;
- (void)datesNeedRedisplay;
- (int)numberOfRowsInTableView:(id)fp8;
- (id)_attributesForTruncatedParagraphStyle;
- (id)_colorForMessage:(id)fp8 inRow:(int)fp12;
- (id)_truncatedAttributedStringForString:(id)fp8 message:(id)fp12 row:(int)fp16 shouldIndent:(BOOL)fp20;
- (id)_attributedUpdatedStringForRSSMessage:(id)fp8 row:(int)fp12;
- (id)tableView:(id)fp8 typeSelectStringForTableColumn:(id)fp12 row:(int)fp16;
- (BOOL)tableView:(id)fp8 shouldTypeSelectForEvent:(id)fp12 withCurrentSearchString:(id)fp16;
- (id)tableView:(id)fp8 objectValueForTableColumn:(id)fp12 row:(int)fp16;
- (void)_updateColorHighlightEdges;
- (void)tableView:(id)fp8 didDragTableColumn:(id)fp12;
- (void)tableViewDidEndLiveResize:(id)fp8;
- (void)tableViewColumnDidMove:(id)fp8;
- (void)tableViewColumnDidResize:(id)fp8;
- (void)tableView:(id)fp8 willDisplayCell:(id)fp12 forTableColumn:(id)fp16 row:(int)fp20;
- (id)tableViewHighlightColor:(id)fp8;
- (int)tableView:(id)fp8 highlightStyleForRow:(int)fp12 inRect:(struct _NSRect *)fp16 color:(id *)fp20;
- (void)doubleClickedMessage:(id)fp8;
- (void)deleteKeyPressed;
- (void)deleteSelectionAllowingMoveToTrash:(BOOL)fp8;
- (id)selectionIncludingThreads:(BOOL)fp8;
- (id)selection;
- (void)_selectMessages:(id)fp8 scrollIfNeeded:(BOOL)fp12;
- (void)selectMessages:(id)fp8;
- (id)currentDisplayedMessage;
- (void)setCurrentDisplayedMessage:(id)fp8;
- (id)messageStore;
- (id)orderOfFromSubjectDateColumns;
- (id)tableView;
- (BOOL)tableView:(id)fp8 doCommandBySelector:(SEL)fp12;
- (id)_undoActionNameForMessageCount:(unsigned int)fp8;
- (void)selectMessagesForUndo:(id)fp8;
- (void)_undeleteMessages:(id)fp8 allowUndo:(BOOL)fp12 unreadMessages:(id)fp16;
- (void)undeleteMessages:(id)fp8 allowUndo:(BOOL)fp12;
- (void)_redeleteMessages:(id)fp8 messagesToSelect:(id)fp12;
- (void)deleteMessages:(id)fp8 allowMoveToTrash:(BOOL)fp12 allowUndo:(BOOL)fp16;
- (void)undeleteMessagesAllowingUndo:(BOOL)fp8;
- (BOOL)shouldDeleteGivenCurrentState;
- (void)tableViewDraggedImage:(id)fp8 movedTo:(struct _NSPoint)fp12;
- (unsigned int)tableView:(id)fp8 draggingSourceOperationMaskForLocal:(BOOL)fp12;
- (id)messagesToTransfer;
- (void)willTransferMessages:(id)fp8 toMailbox:(id)fp12 deleteOriginals:(BOOL)fp16;
- (void)transfer:(id)fp8 didCompleteWithError:(id)fp12;
- (BOOL)transferSelectionToMailbox:(id)fp8 deleteOriginals:(BOOL)fp12;
- (void)tableViewDragWillEnd:(id)fp8 operation:(unsigned int)fp12;
- (BOOL)tableView:(id)fp8 writeRowsWithIndexes:(id)fp12 toPasteboard:(id)fp16;
- (void)pasteboard:(id)fp8 provideDataForType:(id)fp12;
- (id)tableView:(id)fp8 namesOfPromisedFilesDroppedAtDestination:(id)fp12 forDraggedRowsWithIndexes:(id)fp16;
- (id)_dragImageForRow:(int)fp8 event:(id)fp12 dragImageOffset:(struct _NSPoint *)fp16;
- (id)tableView:(id)fp8 dragImageForRowsWithIndexes:(id)fp12 event:(id)fp16 dragImageOffset:(struct _NSPoint *)fp20;
- (void)tableView:(id)fp8 willDrawRowsInRange:(struct _NSRange)fp12;
- (void)tableView:(id)fp8 didDrawRowsInRange:(struct _NSRange)fp12;
- (struct _NSRect)frameOfClickedCell;
- (struct _NSPoint)mouseLocationInWindow;
- (void)callWillDisplayCellForClickedCell;
- (void)setButtonCellNeedsDisplay;
- (void)tableView:(id)fp8 gotEvent:(id)fp12;
- (BOOL)shouldTrackMouse:(id)fp8;
- (id)tableView:(id)fp8 rangesForBackgroundShadingInRange:(struct _NSRange)fp12 shadingColors:(id *)fp20 leftColumnColors:(id *)fp24;
- (id)messageMall;
- (int)_indexOfFirstNonDeletedNonSelectedMessage:(int)fp8 withinRowRange:(struct _NSRange)fp12 goUp:(BOOL)fp20;
- (id)messageBrowserView;
- (id)messageToSelectIfEntireSelectionRemoved;
- (BOOL)includeDeleted;
- (void)setIncludeDeleted:(BOOL)fp8;
- (id)noteFont;
- (id)boldFont;
- (void)setBoldFont:(id)fp8;
- (id)font;
- (id)draggedMessages;
- (void)setDraggedMessages:(id)fp8;

@end
