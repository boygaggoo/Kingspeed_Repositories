/*
 *     Generated by class-dump 3.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2005 by Steve Nygard.
 */

#import "NSObject.h"

#import "MessageConsumerProtocol.h"

@class NSMutableArray;

@interface MessageCollector : NSObject <MessageConsumer>
{
    NSMutableArray *messages;
}

- (id)init;
- (void)dealloc;
- (void)finalize;
- (id)messages;
- (void)newMessagesAvailable:(id)fp8;
- (void)newMessagesAvailable:(id)fp8 ranks:(id)fp12;
- (BOOL)shouldCancel;

@end

