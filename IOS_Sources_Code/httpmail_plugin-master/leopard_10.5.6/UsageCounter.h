/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface UsageCounter : NSObject
{
    NSString *_name;
    NSMutableDictionary *_counts;
    BOOL _isDirty;
}

+ (id)sharedInstance;
+ (BOOL)gatherJunkMailUsageCounts;
+ (void)setGatherJunkMailUsageCounts:(BOOL)fp8;
- (id)initWithName:(id)fp8;
- (void)dealloc;
- (void)finalize;
- (id)_dictionaryForKey:(id)fp8 createIfNeeded:(BOOL)fp12;
- (void)saveDefaults;
- (unsigned int)numberOfDaysAvailableForKey:(id)fp8;
- (unsigned int)countForKey:(id)fp8;
- (unsigned int)countForKey:(id)fp8 includeToday:(BOOL)fp12;
- (void)removeCountForKey:(id)fp8;
- (void)incrementCountForKey:(id)fp8;
- (void)incrementCountForKey:(id)fp8 byCount:(int)fp12;

@end

