/*
 *     Generated by class-dump 3.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2005 by Steve Nygard.
 */

#import "NSToolbarItem.h"

@class NSView;

@interface MailToolbarSpaceItemWithPin : NSToolbarItem
{
    NSView *_pin;
}

+ (id)itemIdentifier;
- (id)initWithPin:(id)fp8;
- (id)initWithItemIdentifier:(id)fp8;
- (id)init;
- (void)dealloc;
- (id)menuFormRepresentation;
- (BOOL)isSeparatorItem;
- (BOOL)wantsToDrawIconInDisplayMode:(unsigned int)fp8;
- (BOOL)wantsToDrawLabelInDisplayMode:(unsigned int)fp8;
- (BOOL)wantsToDrawIconIntoLabelAreaInDisplayMode:(unsigned int)fp8;
- (BOOL)_needsRedisplayWhenBeginningToolbarEditing;
- (BOOL)_emptyContents;
- (BOOL)hasContents;
- (BOOL)allowsDuplicatesInToolbar;
- (void)_updateSizeForDisplayMode:(unsigned int)fp8;
- (void)configureForDisplayMode:(unsigned int)fp8 andSizeMode:(unsigned int)fp12;
- (void)updateWidth;

@end

