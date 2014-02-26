/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject.h"

@class MessageCriterion, NSMutableSet, NSString;

@interface MatadorResultCollector : NSObject
{
    MessageCriterion *criterion;
    MessageCriterion *resultParent;
    NSString *expression;
    id <MessageConsumer> target;
    struct __MDQuery *query;
    NSMutableSet *seenItems;
    unsigned int options;
}

- (id)initWithCriterion:(id)fp8 resultParentCriterion:(id)fp12 target:(id)fp16 query:(struct __MDQuery *)fp20 expression:(id)fp24;
- (void)dealloc;
- (void)finalize;

@end
