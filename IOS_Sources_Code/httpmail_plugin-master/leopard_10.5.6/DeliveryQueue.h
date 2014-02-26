/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "InvocationQueue.h"

@class ActivityMonitor, MessageStore, NSMutableDictionary, NSMutableSet;

@interface DeliveryQueue : InvocationQueue
{
    unsigned int _isBackgroundProcessingEnabled:1;
    unsigned int _resetDeliveryQueueWhenDoneWithCurrentMessage:1;
    MessageStore *_outboxStore;
    int _indexOfLastMessageToProcess;
    NSMutableDictionary *_errorResponses;
    NSMutableSet *_accountsOnHold;
    NSMutableDictionary *_alternateDeliveryAccounts;
    BOOL _queueIsActive;
    double _beginDeliveryTime;
    ActivityMonitor *_deliveryMonitor;
}

+ (id)sharedDeliveryQueue;
- (id)init;
- (void)dealloc;
- (void)setBackgroundProcessingEnabled:(BOOL)fp8;
- (BOOL)isBackgroundProcessingEnabled;
- (id)deliveryMonitor;
- (void)setDeliveryMonitor:(id)fp8;
- (void)processDeliveryQueueStartingAtIndex:(unsigned int)fp8;
- (void)_deliverQueuedMessages:(unsigned int)fp8;
- (int)appendMessageToQueue:(id)fp8 replacingOriginalMessage:(id)fp12;
- (void)resetStateAndReprocessQueue;
- (void)resetStateAndReprocessQueueIfNecessary;
- (void)_resetStateAndReprocessQueueIfNecessary;
- (id)outboxStore;
- (void)setOutboxStore:(id)fp8;
- (BOOL)_openOutboxStoreIfNeeded;
- (void)_closeOutboxStore;
- (BOOL)deliveryQueueContainsMessage:(id)fp8;
- (int)_performDeliveryOfMessage:(id)fp8 accountUsed:(id *)fp12;
- (void)cancelDeliveryOfMessage:(id)fp8;
- (void)_networkConfigurationChanged:(id)fp8;
- (void)_deliveryAccountsDidChange:(id)fp8;
- (void)setAlternateDeliveryAccount:(id)fp8 forAccount:(id)fp12;
- (void)unfreezeDeliveryAccount:(id)fp8 reprocessQueue:(BOOL)fp12;
- (id)alternateDeliveryAccountForAccount:(id)fp8;
- (void)nowWouldBeAGoodTimeToTerminate:(id)fp8;
- (BOOL)_isMessageBeingEdited:(id)fp8;

@end
