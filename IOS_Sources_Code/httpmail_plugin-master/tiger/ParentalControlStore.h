/*
 *     Generated by class-dump 3.0.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004 by Steve Nygard.
 */

#import <Message/NeXTMbox.h>

@interface ParentalControlStore : NeXTMbox
{
}

- (id)_defaultRouterDestination;
- (BOOL)_shouldCallCompactWhenClosing;
- (id)realAccount;
- (void)saveChanges;
- (void)setParentalControlMessageState:(int)fp8 forMessage:(id)fp12;
- (void)setParentalControlMessageState:(int)fp8 forMessages:(id)fp12;

@end
