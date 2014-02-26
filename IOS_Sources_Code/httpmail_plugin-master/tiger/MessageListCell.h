/*
 *     Generated by class-dump 3.0.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004 by Steve Nygard.
 */

#import "NSImageCell.h"

@class NSString, NSTextFieldCell;

@interface MessageListCell : NSImageCell
{
    NSTextFieldCell *_textCell;
    NSString *_stringValue;
    float _maxHeight;
    float _maxWidth;
    int contentType;
    int contentCount;
}

- (struct _NSPoint)_drawOriginForSize:(struct _NSSize)fp8 inRect:(struct _NSRect)fp16;
- (struct _NSSize)_imageSizeForCellFrame:(struct _NSRect)fp8;
- (id)_textCell;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)fp8;
- (id)copyWithZone:(struct _NSZone *)fp8;
- (void)dealloc;
- (void)drawInteriorWithFrame:(struct _NSRect)fp8 inView:(id)fp24;
- (struct _NSRect)imageRectForBounds:(struct _NSRect)fp8;
- (float)maxHeight;
- (float)maxWidth;
- (void)setContentCount:(int)fp8;
- (void)setContentType:(int)fp8;
- (void)setFont:(id)fp8;
- (void)setMaxHeight:(float)fp8;
- (void)setMaxWidth:(float)fp8;
- (void)setObjectValue:(id)fp8;
- (struct _NSRect)titleRectForBounds:(struct _NSRect)fp8;

@end
