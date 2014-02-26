/*
 *     Generated by class-dump 3.0.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004 by Steve Nygard.
 */

#import "NSView.h"

@class NSButton;

@interface OptionalView : NSView
{
    NSButton *_optionSwitch;
    NSView *_primaryView;
    struct _NSRect _originalFrame;
    BOOL _isResizing;
    BOOL _isCustomizing;
}

- (void)awakeFromNib;
- (void)dealloc;
- (void)didAddSubview:(id)fp8;
- (void)drawRect:(struct _NSRect)fp8;
- (id)initWithFrame:(struct _NSRect)fp8;
- (BOOL)isFlipped;
- (BOOL)isOpaque;
- (float)minXIncludingOptionSwitch:(BOOL)fp8;
- (float)minXOffsetIncludingOptionSwitch:(BOOL)fp8;
- (id)optionSwitch;
- (id)primaryView;
- (void)sizeToFit;
- (void)subviewFrameDidChange:(id)fp8;
- (void)willRemoveSubview:(id)fp8;

@end
