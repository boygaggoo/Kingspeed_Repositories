/*
 *     Generated by class-dump 3.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2005 by Steve Nygard.
 */

#import "NSEvent.h"

@interface NSEvent (NSEventAdditions)
+ (id)eventByChangingKeyEvent:(id)fp8 toCharacters:(id)fp12;
- (unsigned short)characterCodeWithCarbonModifiers:(unsigned long)fp8;
- (BOOL)isCommandEqualBelowPlusKeyDown;
- (BOOL)isCommandUnderscoreAboveMinusKeyDown;
- (BOOL)isLeftMouseUpDown;
@end
