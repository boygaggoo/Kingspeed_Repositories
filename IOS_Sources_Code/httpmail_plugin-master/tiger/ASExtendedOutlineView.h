/*
 *     Generated by class-dump 3.0.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004 by Steve Nygard.
 */

#import "NSOutlineView.h"

@class NSImage;

@interface ASExtendedOutlineView : NSOutlineView
{
    struct {
        unsigned int drawColumnSeparators:1;
        unsigned int delegateProvidesRowHeights:1;
        unsigned int shouldHideDisclosureTriangles:1;
        unsigned int delegateProvidesHighlightColor:1;
        unsigned int delegateProvidesSourceDraggingMask:1;
        unsigned int delegateHandlesDidEndDrag:1;
        unsigned int delegateTracksMouse:1;
        unsigned int delegateWantsMouseEnteredExitedEvent:1;
        unsigned int trackingRectsAreDirty:1;
        unsigned int delegateHandlesDoubleClick:1;
        unsigned int delegateMayOverrideDragImage:1;
        unsigned int delegateDraggedImageMovedTo:1;
        unsigned int showSelectionWithGradientHighlight:1;
        unsigned int delegateProvidesOutlineImage:1;
        unsigned int doFancyDragDestinationHighlighting:1;
        unsigned int allowSelectAll:1;
        unsigned int acceptFirstResponderOnMouseDown:1;
        unsigned int drawKeyboardFocus:1;
    } _extendedOutlineViewFlags;
    struct __CFSet *_trackingRectTags;
    NSImage *blueGradientBackground;
    NSImage *blueGradientBackgroundFocus;
    NSImage *smallBlueGradientBackground;
    NSImage *smallBlueGradientBackgroundFocus;
    int _cellTrackingRow;
    int _dropDestinationRow;
    int normalIndentation;
    id _splitHandle;
}

- (void)_clearTrackingRects;
- (void)_drawColumnSeparatorsInRect:(struct _NSRect)fp8;
- (void)_drawDropHighlightOnRow:(int)fp8;
- (struct _NSRect)_frameOfOutlineCellAtRow:(int)fp8;
- (id)_highlightColorForCell:(id)fp8;
- (void)_reallyUpdateTrackingRects;
- (float)_verticalOriginForRow:(int)fp8;
- (BOOL)_wantsLiveResizeToUseCachedImage;
- (BOOL)acceptsFirstMouse:(id)fp8;
- (void)aseovSuperviewBoundsChanged:(id)fp8;
- (BOOL)atLeastOneItemIsExpandable;
- (void)awakeFromNib;
- (BOOL)becomeFirstResponder;
- (id)blueGradientBackground;
- (id)blueGradientBackgroundFocus;
- (void)collapseItem:(id)fp8 collapseChildren:(BOOL)fp12;
- (BOOL)collapseItemEqualTo:(id)fp8 collapseChildren:(BOOL)fp12;
- (void)dealloc;
- (id)dragImageForRowsWithIndexes:(id)fp8 tableColumns:(id)fp12 event:(id)fp16 offset:(struct _NSPoint *)fp20;
- (void)draggedImage:(id)fp8 endedAt:(struct _NSPoint)fp12 operation:(unsigned int)fp20;
- (void)draggedImage:(id)fp8 movedTo:(struct _NSPoint)fp12;
- (void)draggingExited:(id)fp8;
- (unsigned int)draggingSourceOperationMaskForLocal:(BOOL)fp8;
- (void)drawFancyDropHighlightOnRow:(int)fp8;
- (void)drawRect:(struct _NSRect)fp8;
- (void)drawRow:(int)fp8 clipRect:(struct _NSRect)fp12;
- (BOOL)drawsColumnSeparators;
- (void)expandItem:(id)fp8 expandChildren:(BOOL)fp12;
- (BOOL)expandItemEqualTo:(id)fp8 expandChildren:(BOOL)fp12;
- (void)finalize;
- (id)findItemEqualTo:(id)fp8;
- (struct _NSRect)frameOfCellAtColumn:(int)fp8 row:(int)fp12;
- (id)getPersistentExpandedItemsAsArray;
- (float)heightOfRow:(int)fp8;
- (void)highlightSelectionInClipRect:(struct _NSRect)fp8;
- (void)mouseDown:(id)fp8;
- (void)mouseEntered:(id)fp8;
- (void)mouseExited:(id)fp8;
- (void)noteNumberOfRowsChanged;
- (struct _NSRect)rectOfRow:(int)fp8;
- (BOOL)redisplayItemEqualTo:(id)fp8;
- (void)reloadData;
- (void)reloadItem:(id)fp8 reloadChildren:(BOOL)fp12;
- (BOOL)reloadItemEqualTo:(id)fp8 reloadChildren:(BOOL)fp12;
- (BOOL)resignFirstResponder;
- (int)rowAtPoint:(struct _NSPoint)fp8;
- (int)rowForItemEqualTo:(id)fp8;
- (int)rowOfChild:(int)fp8 ofItem:(id)fp12;
- (void)selectAll:(id)fp8;
- (void)setAcceptFirstResponderOnMouseDown:(BOOL)fp8;
- (void)setAllowsSelectAll:(BOOL)fp8;
- (void)setCurrentDragDestinationRow:(int)fp8;
- (void)setDelegate:(id)fp8;
- (void)setDoFancyDragDestinationHighlighting:(BOOL)fp8;
- (void)setDragDestinationChild:(int)fp8 ofItem:(id)fp12;
- (void)setDrawsColumnSeparators:(BOOL)fp8;
- (void)setFrameSize:(struct _NSSize)fp8;
- (void)setNeedsDisplayInTrackingRects:(id)fp8 mouseEntered:(BOOL)fp12;
- (void)setPersistentExpandedItemsFromArray:(id)fp8;
- (void)setShouldHideDisclosureTriangles:(BOOL)fp8;
- (void)setShowSelectionWithGradientHighlight:(BOOL)fp8;
- (void)setSplitHandle:(id)fp8;
- (BOOL)shouldCollapseAutoExpandedItemsForDeposited:(BOOL)fp8;
- (BOOL)shouldUseSecondaryHighlightColor;
- (id)smallBlueGradientBackground;
- (id)smallBlueGradientBackgroundFocus;
- (void)startObservingViewBoundsChange:(id)fp8;
- (void)stopObservingViewBoundsChange:(id)fp8;
- (int)trackingRow;
- (void)updateTrackingRects;
- (void)viewWillMoveToSuperview:(id)fp8;
- (void)viewWillMoveToWindow:(id)fp8;
- (void)windowChangedKeyStatus:(id)fp8;

@end
