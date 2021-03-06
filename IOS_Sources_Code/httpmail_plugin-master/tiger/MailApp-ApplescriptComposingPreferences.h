/*
 *     Generated by class-dump 3.0.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004 by Steve Nygard.
 */

#import "MailApp.h"

@interface MailApp (ApplescriptComposingPreferences)
- (BOOL)alwaysBCCMyself;
- (BOOL)alwaysCCMyself;
- (BOOL)autosaveComposeWindows;
- (int)defaultMessageFormat;
- (BOOL)encryptOutgoingMessages;
- (BOOL)expandGroupAddresses;
- (BOOL)includeAllOfOriginalMessage;
- (BOOL)includeOriginalMessage;
- (BOOL)inlineSpellCheckingEnabled;
- (void)insertInLdapServers:(id)fp8;
- (void)insertInLdapServers:(id)fp8 atIndex:(unsigned int)fp12;
- (id)intranetDomains;
- (id)ldapServerNamed:(id)fp8;
- (id)ldapServers;
- (void)removeFromLdapServersAtIndex:(unsigned int)fp8;
- (BOOL)replyInSameFormat;
- (void)setAlwaysBCCMyself:(BOOL)fp8;
- (void)setAlwaysCCMyself:(BOOL)fp8;
- (void)setAutosaveComposeWindows:(BOOL)fp8;
- (void)setDefaultMessageFormat:(int)fp8;
- (void)setEncryptOutgoingMessages:(BOOL)fp8;
- (void)setExpandGroupAddresses:(BOOL)fp8;
- (void)setIncludeAllOfOriginalMessage:(BOOL)fp8;
- (void)setIncludeOriginalMessage:(BOOL)fp8;
- (void)setInlineSpellCheckingEnabled:(BOOL)fp8;
- (void)setReplyInSameFormat:(BOOL)fp8;
- (void)setShouldCheckIntranetDomains:(BOOL)fp8 withString:(id)fp12;
- (void)setSignOutgoingMessages:(BOOL)fp8;
- (void)setSpellCheckingBehavior:(int)fp8;
- (void)setUseAddressCompletion:(BOOL)fp8;
- (BOOL)shouldCheckIntranetDomains;
- (BOOL)signOutgoingMessages;
- (int)spellCheckingBehavior;
- (BOOL)useAddressCompletion;
@end

