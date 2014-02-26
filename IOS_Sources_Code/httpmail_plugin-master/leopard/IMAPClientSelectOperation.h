/*
 *     Generated by class-dump 3.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2005 by Steve Nygard.
 */

#import <Message/IMAPClientMailboxOperation.h>

@class IMAPMailbox;

@interface IMAPClientSelectOperation : IMAPClientMailboxOperation
{
    IMAPMailbox *_imapMailbox;
    BOOL _delayed;
}

- (void)dealloc;
- (id)initWithMailboxName:(id)fp8;
- (const char *)commandTypeCString;
- (BOOL)handlesAllUntaggedResponses;
- (BOOL)executeOnConnection:(id)fp8;
- (BOOL)isReady;
- (BOOL)readOnly;
- (void)setDelayed:(BOOL)fp8;
- (BOOL)delayed;
- (id)imapMailbox;
- (void)setImapMailbox:(id)fp8;

@end

