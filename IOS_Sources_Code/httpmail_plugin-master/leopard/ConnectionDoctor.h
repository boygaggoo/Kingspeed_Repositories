/*
 *     Generated by class-dump 3.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2005 by Steve Nygard.
 */

#import "NSObject.h"

#import "AccountStatusDataSourceDelegateProtocol.h"

@class AccountStatusDataSource, NSArray, NSButton, NSDrawer, NSImageView, NSMutableDictionary, NSMutableString, NSProgressIndicator, NSTableView, NSTextField, NSTextView;

@interface ConnectionDoctor : NSObject <AccountStatusDataSourceDelegate>
{
    NSTableView *_tableView;
    NSImageView *_internetStatusIndicator;
    NSProgressIndicator *_internetStatusProgressIndicator;
    NSTextField *_internetStatusField;
    NSButton *_checkStatusButton;
    NSButton *_assistMeButton;
    NSTextView *_ispInfoField;
    NSDrawer *_detailDrawer;
    NSButton *_detailButton;
    NSTextView *_detailTextView;
    AccountStatusDataSource *_deliveryASDS;
    NSMutableString *_detailBuffer;
    NSArray *_savedLogClasses;
    NSMutableDictionary *_progressIndicators;
}

+ (id)sharedInstance;
- (void)dealloc;
- (void)awakeFromNib;
- (void)show;
- (void)_willCheckInternetConnection:(id)fp8;
- (void)_didCheckInternetConnection:(id)fp8;
- (void)_willRefreshStatusForAllAccounts:(id)fp8;
- (void)_didRefreshStatusForAllAccounts:(id)fp8;
- (void)checkAccounts:(id)fp8;
- (void)assistMeClicked:(id)fp8;
- (void)windowWillClose:(id)fp8;
- (void)toggleDetail:(id)fp8;
- (void)_flushLog;
- (void)logBytes:(const char *)fp8 length:(int)fp12;
- (void)flushLog;

@end

