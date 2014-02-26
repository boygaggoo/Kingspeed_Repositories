/*
 *     Generated by class-dump 3.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2005 by Steve Nygard.
 */

#import <Message/IMAPSingleClientOperation.h>

@class IMAPAccount, NSArray, NSString;

@interface IMAPClientNamespaceOperation : IMAPSingleClientOperation
{
    IMAPAccount *_account;
    NSString *_separatorChar;
    NSArray *_privateNamespaces;
    NSArray *_publicNamespaces;
    NSArray *_sharedNamespaces;
}

- (void)dealloc;
- (id)initWithAccount:(id)fp8 separatorChar:(id)fp12;
- (const char *)commandTypeCString;
- (BOOL)executeOnConnection:(id)fp8;
- (id)sharedNamespaces;
- (void)setSharedNamespaces:(id)fp8;
- (id)publicNamespaces;
- (void)setPublicNamespaces:(id)fp8;
- (id)privateNamespaces;
- (void)setPrivateNamespaces:(id)fp8;
- (id)separatorChar;
- (void)setSeparatorChar:(id)fp8;
- (id)account;
- (void)setAccount:(id)fp8;

@end

