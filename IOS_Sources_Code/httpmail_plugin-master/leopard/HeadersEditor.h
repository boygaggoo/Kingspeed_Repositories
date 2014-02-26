/*
 *     Generated by class-dump 3.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2005 by Steve Nygard.
 */

#import "NSObject.h"

#import "AccountStatusDataSourceDelegateProtocol.h"

@class AccountStatusDataSource, AddressTextField, ComposeHeaderView, DraggingTextView, MailDocumentEditor, NSButton, NSMutableArray, NSPopUpButton, NSTextField, OldCompletionController;

@interface HeadersEditor : NSObject <AccountStatusDataSourceDelegate>
{
    MailDocumentEditor *documentEditor;
    OldCompletionController *completionController;
    ComposeHeaderView *composeHeaderView;
    NSPopUpButton *fromPopup;
    NSPopUpButton *signaturePopup;
    NSPopUpButton *priorityPopup;
    NSButton *signButton;
    NSButton *encryptButton;
    AccountStatusDataSource *_deliveryASDS;
    NSPopUpButton *deliveryPopUp;
    AddressTextField *toField;
    AddressTextField *ccField;
    NSTextField *subjectField;
    AddressTextField *bccField;
    AddressTextField *replyToField;
    DraggingTextView *addressFieldEditor;
    NSMutableArray *accessoryViewOwners;
    BOOL chatShouldBeEnabled;
    BOOL _hasChanges;
}

- (void)setUpFieldsAndButtons;
- (void)finishSetUp;
- (void)setAGoodFirstResponder;
- (void)configureButtonsAndPopUps;
- (void)initializePriorityPopUp;
- (void)composePrefsChanged;
- (void)mailAccountsDidChange;
- (void)accountInfoDidChange:(id)fp8;
- (void)windowDidBecomeKey:(id)fp8;
- (void)windowDidResignKey:(id)fp8;
- (void)updatePriorityPopUpMakeActive:(BOOL)fp8;
- (void)updateSecurityControls;
- (void)updateSignButtonImages;
- (void)updateSignButtonTooltip;
- (void)updateEncryptButtonImages;
- (void)updateEncryptButtonTooltip;
- (void)updateFromAndSignatureControls;
- (void)updateSignatureControlOverridingExistingSignature:(BOOL)fp8;
- (void)updateDeliveryAccountControl;
- (void)configureDeliveryPopupButton;
- (float)deliveryPopUpSizeToFitWidth;
- (void)updateCcOrBccMyselfFieldWithSender:(id)fp8 oldSender:(id)fp12;
- (void)updatePresenceButtonState;
- (void)presenceChanged:(id)fp8;
- (void)presencePreferenceChanged:(id)fp8;
- (void)updatePresenceButtonStateForAddresses:(id)fp8;
- (void)webViewDidLoadStationery:(id)fp8;
- (void)setupAddressField:(id)fp8;
- (void)_setupField:(id)fp8 withAddressesForKey:(id)fp12 visibleSelector:(SEL)fp16;
- (void)_configureTextField:(id)fp8 isAddressField:(BOOL)fp12;
- (id)fieldForHeader:(id)fp8;
- (id)headerKeyForView:(id)fp8;
- (void)enableCompletion:(BOOL)fp8 forTextField:(id)fp12;
- (void)loadHeadersFromBackEnd;
- (void)textFieldBeganOrEndedEditing:(id)fp8;
- (void)recipientsDidChange:(id)fp8;
- (void)subjectChanged;
- (void)addressFieldChanged;
- (BOOL)headerFieldIsNonEmpty:(id)fp8;
- (id)windowWillReturnFieldEditor:(id)fp8 toObject:(id)fp12;
- (void)setHeaders:(id)fp8;
- (void)appendAddresses:(id)fp8 toHeader:(id)fp12;
- (void)setInlineSpellCheckingEnabled:(BOOL)fp8;
- (void)setCheckGrammarWithSpelling:(BOOL)fp8;
- (void)turnOffEncryption;
- (void)changeSignatureFrom:(id)fp8 to:(id)fp12;
- (BOOL)messageIsToBeSigned;
- (BOOL)messageIsToBeEncrypted;
- (BOOL)messageHasRecipients;
- (BOOL)canSignFromAnyAccount;
- (BOOL)chatShouldBeEnabled;
- (BOOL)isOkayToSaveMessage:(id)fp8;
- (void)editServerList:(id)fp8 selectedAccount:(id)fp12;
- (void)toggleAccountLock:(id)fp8;
- (void)setSelectedAccount:(id)fp8;
- (void)setDeliveryAccount:(id)fp8;
- (id)deliveryAccount;
- (id)mailAccount;
- (void)accountStatusDidChange:(id)fp8;
- (void)changeHeaderField:(id)fp8;
- (void)changeFromHeader:(id)fp8;
- (void)setMessagePriority:(id)fp8;
- (void)securityControlChanged:(id)fp8;
- (void)_recipientsWithoutKeysSheetClosed:(id)fp8 returnCode:(int)fp12 contextInfo:(void *)fp16;
- (void)chatWithRecipients:(id)fp8;
- (void)editSignatures:(id)fp8;
- (void)changeSignature:(id)fp8;
- (void)composeHeaderViewWillBeginCustomization:(id)fp8;
- (void)composeHeaderViewDidEndCustomization:(id)fp8;
- (BOOL)headerCustomizationIsInProgress;
- (void)addCcHeader:(id)fp8;
- (void)addBccHeader:(id)fp8;
- (void)addReplyToHeader:(id)fp8;
- (void)_clearFieldIfHidden:(id)fp8;
- (void)prepareToCloseWindow;
- (void)dealloc;
- (BOOL)validateAction:(SEL)fp8 tag:(int)fp12;
- (BOOL)validateMenuItem:(id)fp8;
- (BOOL)validateToolbarItem:(id)fp8;
- (id)senderMarkupStringIncludeBrackets:(BOOL)fp8;
- (BOOL)hasChanges;
- (void)setHasChanges:(BOOL)fp8;

@end
