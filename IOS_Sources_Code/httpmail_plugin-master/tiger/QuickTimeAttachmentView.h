/*
 *     Generated by class-dump 3.0.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004 by Steve Nygard.
 */

#import "NSMovieView.h"

@class NSString, NSURL;

@interface QuickTimeAttachmentView : NSMovieView
{
    NSString *_attachPath;
    NSURL *_url;
}

+ (void)initialize;
+ (id)viewForFileWrapper:(id)fp8;
- (id)URL;
- (void)dealloc;
- (id)menuForEvent:(id)fp8;
- (void)mouseDragged:(id)fp8;
- (void)setFrame:(struct _NSRect)fp8;
- (void)setURL:(id)fp8;
- (void)webPlugInStart;

@end

