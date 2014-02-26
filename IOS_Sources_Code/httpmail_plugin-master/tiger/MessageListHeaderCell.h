/*
 *     Generated by class-dump 3.0.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004 by Steve Nygard.
 */

#import "NSTableHeaderCell.h"

@class MessageListCell, NSString;

@interface MessageListHeaderCell : NSTableHeaderCell
{
    MessageListCell *_realCell;
    int _imageAlignment;
    NSString *accessibilityTitle;
}

- (id)accessibilityAttributeValue:(id)fp8;
- (id)copyWithZone:(struct _NSZone *)fp8;
- (void)dealloc;
- (void)drawInteriorWithFrame:(struct _NSRect)fp8 inView:(id)fp24;
- (void)setAccessibilityTitle:(id)fp8;
- (void)setImageAlignment:(int)fp8;

@end
