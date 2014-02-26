/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSPreferencesModule.h"

#import "AccountStatusDataSourceDelegate-Protocol.h"

@class ABLDAP_ConfigController, AccountStatusDataSource, NSButton, NSMatrix, NSPanel, NSPopUpButton, NSTextField, NSView;

@interface ComposingPreferences : NSPreferencesModule <AccountStatusDataSourceDelegate>
{
    NSPopUpButton *defaultFormatButton;
    NSButton *alwaysCCMyselfSwitch;
    NSPopUpButton *ccOrBccButton;
    NSButton *replyUsingSameFormatSwitch;
    NSButton *expandAliasesSwitch;
    NSButton *useQuoteBarsSwitch;
    NSPopUpButton *spellCheckingPopUpButton;
    NSButton *replyQuotingSwitch;
    NSMatrix *quotingBehaviorMatrix;
    NSTextField *quotingBehaviorLabel;
    NSButton *matchDomainsSwitch;
    NSTextField *matchingDomainField;
    NSPopUpButton *noteToDoAccountButton;
    NSPopUpButton *sendingAccountButton;
    NSPopUpButton *todoAccountButton;
    NSButton *useAddressCompletionSwitch;
    NSButton *editServerListButton;
    NSPanel *ldapServerPanel;
    NSView *placeHolderView;
    ABLDAP_ConfigController *serverListController;
    BOOL endEditingSimply;
    AccountStatusDataSource *noteToDoAccountDataSource;
}

- (void)dealloc;
- (void)awakeFromNib;
- (void)configureMenuItem:(id)fp8 forAccount:(id)fp12;
- (BOOL)isResizable;
- (id)titleForIdentifier:(id)fp8;
- (id)windowTitle;
- (void)_postComposePreferencesChanged;
- (void)_sizeToFitWithinSuperview:(id)fp8;
- (void)initializeFromDefaults;
- (void)replyUsingSameFormatClicked:(id)fp8;
- (void)useQuoteBarsClicked:(id)fp8;
- (void)replyQuotingBehaviorChanged:(id)fp8;
- (void)quotingBehaviorChanged:(id)fp8;
- (void)spellCheckingBehaviorChanged:(id)fp8;
- (void)alwaysCCMyselfClicked:(id)fp8;
- (void)expandAliasesClicked:(id)fp8;
- (void)defaultMessageFormatChanged:(id)fp8;
- (void)setMessageFormat:(int)fp8;
- (void)useAddressCompletionClicked:(id)fp8;
- (void)_ldapServerListChanged;
- (void)editServerListClicked:(id)fp8;
- (void)matchDomainsClicked:(id)fp8;
- (void)controlTextDidEndEditing:(id)fp8;
- (void)okClicked:(id)fp8;
- (void)observeValueForKeyPath:(id)fp8 ofObject:(id)fp12 change:(id)fp16 context:(void *)fp20;
- (void)sendingAccountClicked:(id)fp8;

@end

