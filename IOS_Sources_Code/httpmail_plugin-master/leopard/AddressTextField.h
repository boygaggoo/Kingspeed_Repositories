/*
 *     Generated by class-dump 3.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2005 by Steve Nygard.
 */

#import "AutosizingTextField.h"

#import "NSCopyingProtocol.h"

@class AddressAttachment, AddressRectangleView, NSMutableArray, NSMutableDictionary;

@interface AddressTextField : AutosizingTextField <NSCopying>
{
    BOOL _addressField;
    BOOL _allowsMultipleAddresses;
    NSMutableArray *trackingRectTags;
    AddressAttachment *expandedAtomAttachment;
    AddressAttachment *attachmentBeingDragged;
    int addressAtomType;
    NSMutableArray *stringsWithNoRecords;
    NSMutableArray *stringsAwaitingRecords;
    NSMutableDictionary *recordsForStrings;
    NSMutableArray *addressRects;
    struct _NSRange draggedSourceAtomsRange;
    BOOL isDraggingFromSelf;
    BOOL isHoveringAddressCard;
    AddressRectangleView *rectangleView;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)fp8;
- (id)insertInScrollViewWithMaxLines:(unsigned int)fp8;
- (void)_scrollToEnd:(id)fp8;
- (void)sizeToFit;
- (void)appendAddressList:(id)fp8 operation:(unsigned int)fp12;
- (unsigned int)insertionPositionForMousePoint:(struct _NSPoint)fp8;
- (void)getAddressRectsForAtoms;
- (id)emailAddressesFromABRecordUIDs:(id)fp8;
- (id)emailAddressesFromFiles:(id)fp8;
- (void)setAddressField:(BOOL)fp8;
- (BOOL)addressField;
- (BOOL)allowsMultipleAddresses;
- (void)setAllowsMultipleAddresses:(BOOL)fp8;
- (int)addressAtomType;
- (void)setAddressAtomType:(int)fp8;
- (void)setExpandedAtomAttachment:(id)fp8;
- (unsigned int)draggingEntered:(id)fp8;
- (unsigned int)draggingUpdated:(id)fp8;
- (unsigned int)textView:(id)fp8 draggingEntered:(id)fp12;
- (unsigned int)textView:(id)fp8 draggingUpdated:(id)fp12;
- (void)textView:(id)fp8 draggingExited:(id)fp12;
- (void)draggingExited:(id)fp8;
- (BOOL)prepareForDragOperation:(id)fp8;
- (void)concludeDragOperation:(id)fp8;
- (void)textView:(id)fp8 clickedOnCell:(id)fp12 event:(id)fp16 inRect:(struct _NSRect)fp20 atIndex:(unsigned int)fp36;
- (void)selectTextBeforePosition:(int)fp8;
- (void)selectTextAfterPosition:(int)fp8;
- (void)textView:(id)fp8 doubleClickedOnCell:(id)fp12 inRect:(struct _NSRect)fp16 atIndex:(unsigned int)fp32;
- (void)expandGroupAddress:(id)fp8;
- (void)editAddress:(id)fp8;
- (void)removeAddress:(id)fp8;
- (BOOL)validateUserInterfaceItem:(id)fp8;
- (BOOL)_performOperation:(unsigned int)fp8 usingPasteboard:(id)fp12 sender:(id)fp16;
- (BOOL)performDragOperation:(id)fp8;
- (BOOL)textView:(id)fp8 shouldReadSelectionFromPasteboard:(id)fp12 type:(id)fp16 result:(char *)fp20;
- (void)textView:(id)fp8 draggedImage:(id)fp12 endedAt:(struct _NSPoint)fp16 operation:(unsigned int)fp24;
- (void)draggedImage:(id)fp8 endedAt:(struct _NSPoint)fp12 operation:(unsigned int)fp20;
- (void)setAttachmentBeingDragged:(id)fp8;
- (unsigned int)draggingSourceOperationMaskForLocal:(BOOL)fp8;
- (void)textView:(id)fp8 concludeDragOperation:(id)fp12;
- (void)undo:(id)fp8;
- (void)redo:(id)fp8;
- (void)setAttributedStringValue:(id)fp8;
- (void)textDidEndEditing:(id)fp8;
- (BOOL)textShouldEndEditing:(id)fp8;
- (void)setFrame:(struct _NSRect)fp8;
- (void)setFrameSize:(struct _NSSize)fp8;
- (void)atomicizeAllAddresses;
- (void)recklesslyAtomicizeAllAddresses;
- (void)domainForMatchingDidChange;
- (void)addressesNeedRedisplay:(id)fp8;
- (void)addressChanged:(id)fp8;
- (void)resetCursorRects;
- (void)viewDidMoveToWindow;
- (void)windowDidResignOrBecomeMainOrKey:(id)fp8;
- (BOOL)_showingFocusRingAroundEnclosingScrollView:(id)fp8;
- (void)_drawScrollViewFocusRing:(id)fp8 clipRect:(struct _NSRect)fp12 needsFullDisplay:(BOOL)fp28;
- (void)setCell:(id)fp8;

@end
