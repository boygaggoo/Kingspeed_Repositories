/*
 *     Generated by class-dump 3.0.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004 by Steve Nygard.
 */

#import "MimeTextAttachment.h"

@class NSFileWrapper, NSImage;

@interface MailTextAttachment : MimeTextAttachment
{
    unsigned int _isPossibleToDisplayAttachmentInline:1;
    unsigned int _isPossibleToDisplayAttachmentAsView:1;
    unsigned int _isDisplayingAttachmentInline:1;
    unsigned int _isImageBeingResized:1;
    NSFileWrapper *_originalFileWrapper;
    NSImage *_originalImage;
    struct _NSSize _originalImageSize;
    struct _NSSize _maxImageSize;
    struct _NSSize _lastMaxImageSize;
}

+ (void)initialize;
- (void)_configureLabelForCell:(id)fp8;
- (id)_getInlineImage;
- (id)_originalImage;
- (struct _NSSize)_originalImageSize;
- (id)attachmentCell;
- (void)dealloc;
- (id)initWithFileWrapper:(id)fp8;
- (id)initWithMimePart:(id)fp8 andFileWrapper:(id)fp12;
- (BOOL)isDisplayingAttachmentInline;
- (BOOL)isFullSize;
- (BOOL)isPossibleToDisplayAttachmentInline;
- (BOOL)isScalable;
- (struct _NSSize)maxImageSize;
- (id)originalFileWrapper;
- (struct _NSSize)originalImageSize;
- (void)resizingFinished:(id)fp8 imageSize:(struct _NSSize)fp12 fileExtension:(id)fp20 fileType:(unsigned long)fp24 maxImageSize:(struct _NSSize)fp28;
- (void)resizingStarted:(struct _NSSize)fp8;
- (void)setIsDisplayingAttachmentInline:(BOOL)fp8;
- (void)setIsPossibleToDisplayAttachmentInline:(BOOL)fp8;
- (id)toolTip;

@end

