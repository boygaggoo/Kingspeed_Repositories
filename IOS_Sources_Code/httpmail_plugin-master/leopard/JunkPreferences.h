/*
 *     Generated by class-dump 3.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2005 by Steve Nygard.
 */

#import "NSPreferencesModule.h"

#import "SyncableDataInterestedPartyProtocol.h"

@class NSButton, NSMatrix;

@interface JunkPreferences : NSPreferencesModule <SyncableDataInterestedParty>
{
    NSButton *_advancedButton;
    NSMatrix *_junkMailMode;
    NSButton *_junkMailOnOffSwitch;
    NSMatrix *_junkMailWhitelist;
    int _junkMailBehavior;
}

+ (void)initialize;
- (void)moduleWillBeRemoved;
- (void)moduleWasInstalled;
- (BOOL)isResizable;
- (void)_messageRuleChanged:(id)fp8;
- (id)titleForIdentifier:(id)fp8;
- (id)windowTitle;
- (id)imageForPreferenceNamed:(id)fp8;
- (BOOL)dataWillBeSynced;
- (void)dataWasSynced;
- (id)labelColor;
- (void)initializeFromDefaults;
- (void)junkMailToggled:(id)fp8;
- (void)whitelistChanged:(id)fp8;
- (int)junkMailBehavior;
- (void)setJunkMailBehavior:(int)fp8;
- (BOOL)isEnabled;
- (BOOL)isAdvancedEnabled;
- (void)changeJunkMailBehavior:(id)fp8;
- (void)resetJunkMailMap:(id)fp8;
- (void)showCustomJunkMailSettings:(id)fp8;

@end

