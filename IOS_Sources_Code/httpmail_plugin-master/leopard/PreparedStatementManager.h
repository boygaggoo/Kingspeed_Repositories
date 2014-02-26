/*
 *     Generated by class-dump 3.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2005 by Steve Nygard.
 */

#import "NSObject.h"

@class NSLock, NSMutableDictionary;

@interface PreparedStatementManager : NSObject
{
    NSMutableDictionary *_statementCachesByDB;
    NSLock *_preparedStatementManagerLock;
}

+ (id)defaultManager;
+ (id)allocWithZone:(struct _NSZone *)fp8;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)fp8;
- (id)retain;
- (unsigned int)retainCount;
- (void)release;
- (id)autorelease;
- (id)statementsForDB:(id)fp8;
- (void)addToCache:(id)fp8 inDBKey:(id)fp12 forPatternString:(id)fp16;
- (id)checkOutPreparedStatement:(struct sqlite3 *)fp8 withPattern:(const char *)fp12;
- (void)removeStatementCacheEntriesForDB:(struct sqlite3 *)fp8;

@end
