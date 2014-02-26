/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject.h"

#import "WebHTMLHighlighter-Protocol.h"

@class NSBezierPath, NSColor;

@interface BezierHighlighter : NSObject <WebHTMLHighlighter>
{
    NSBezierPath *_lightPath;
    NSBezierPath *_darkPath;
    struct _NSRect _combinedBounds;
    NSColor *_lightColor;
    NSColor *_darkColor;
}

+ (void)initialize;
+ (id)sharedHighlighter;
+ (id)sharedGrayHighlighter;
- (void)dealloc;
- (id)initWithDarkColor:(id)fp8 lightColor:(id)fp12;
- (void)paintInRect:(struct _NSRect)fp8 clipAt:(struct _NSRect)fp24 clipOut:(BOOL)fp40;
- (struct _NSRect)highlightRectForLine:(struct _NSRect)fp8;
- (void)paintHighlightForBox:(struct _NSRect)fp8 onLine:(struct _NSRect)fp24 behindText:(BOOL)fp40 entireLine:(BOOL)fp44;
- (struct _NSPoint)hPaddingForToDoLineId:(id)fp8;
- (struct _NSRect)highlightRectForLine:(struct _NSRect)fp8 representedNode:(id)fp24;
- (void)paintHighlightForBox:(struct _NSRect)fp8 onLine:(struct _NSRect)fp24 behindText:(BOOL)fp40 entireLine:(BOOL)fp44 representedNode:(id)fp48;

@end

