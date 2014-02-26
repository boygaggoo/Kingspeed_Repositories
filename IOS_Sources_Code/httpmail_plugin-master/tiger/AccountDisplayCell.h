/*
 *     Generated by class-dump 3.0.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004 by Steve Nygard.
 */

#import "NSTextFieldCell.h"

@class AccountPreferences, MailAccount, NSImageCell;

@interface AccountDisplayCell : NSTextFieldCell
{
    AccountPreferences *_accountPreferences;
    NSTextFieldCell *_descriptionTextCell;
    NSTextFieldCell *_activeTextCell;
    NSImageCell *_imageCell;
    MailAccount *_account;
}

- (id)copyWithZone:(struct _NSZone *)fp8;
- (void)dealloc;
- (void)drawInteriorWithFrame:(struct _NSRect)fp8 inView:(id)fp24;
- (id)initWithAccountPreferences:(id)fp8;
- (void)setAccountPreferences:(id)fp8;
- (void)setMailAccount:(id)fp8;
- (BOOL)trackMouse:(id)fp8 inRect:(struct _NSRect)fp12 ofView:(id)fp28 untilMouseUp:(BOOL)fp32;

@end
