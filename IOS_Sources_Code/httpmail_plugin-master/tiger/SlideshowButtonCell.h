/*
 *     Generated by class-dump 3.0.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004 by Steve Nygard.
 */

#import "NSButtonCell.h"

@interface SlideshowButtonCell : NSButtonCell
{
    struct _NSSize _labelSize;
}

- (void)_calcLabelSize;
- (id)attributedTitle;
- (struct _NSSize)cellSizeForBounds:(struct _NSRect)fp8;
- (void)drawWithFrame:(struct _NSRect)fp8 inView:(id)fp24;
- (id)initWithTitle:(id)fp8;
- (void)setFont:(id)fp8;
- (void)setTitle:(id)fp8;
- (struct _NSRect)titleRectForBounds:(struct _NSRect)fp8;

@end

