/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSView.h"

@class NSArray, NSColor, NSImage;

@interface ColorBackgroundView : NSView
{
    int _tag;
    NSColor *_color;
    NSImage *image;
    NSArray *_colors;
    BOOL _isFlipped;
    float _rowHeight;
    float _rowOffset;
}

- (void)dealloc;
- (int)tag;
- (void)setTag:(int)fp8;
- (BOOL)isFlipped;
- (void)setFlipped:(BOOL)fp8;
- (BOOL)isOpaque;
- (id)backgroundColor;
- (id)backgroundColors;
- (void)setBackgroundColors:(id)fp8;
- (void)setBackgroundColor:(id)fp8;
- (id)backgroundImage;
- (void)setBackgroundImage:(id)fp8;
- (void)drawRect:(struct _NSRect)fp8;
- (id)colorForRow:(unsigned int)fp8;
- (float)rowOffset;
- (void)setRowOffset:(float)fp8;
- (float)rowHeight;
- (void)setRowHeight:(float)fp8;

@end

