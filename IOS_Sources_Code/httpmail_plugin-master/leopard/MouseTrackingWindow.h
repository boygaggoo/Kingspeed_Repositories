/*
 *     Generated by class-dump 3.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2005 by Steve Nygard.
 */

#import "NSWindow.h"

@interface MouseTrackingWindow : NSWindow
{
}

- (id)initWithContentRect:(struct _NSRect)fp8 styleMask:(unsigned int)fp24 backing:(unsigned int)fp28 defer:(BOOL)fp32;
- (void)displayIfNeeded;
- (BOOL)performKeyEquivalent:(id)fp8;
- (void)selectKeyViewFollowingView:(id)fp8;
- (void)selectKeyViewPrecedingView:(id)fp8;

@end
