/*
 *     Generated by class-dump 3.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2005 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface ToDoLibraryAndStoreConsistencyChecker : NSObject
{
    unsigned int _todoCount;
    unsigned int _totalCountBefore;
    NSString *_callingMethodDescription;
    int _actionType;
    NSString *_actionDescription;
}

+ (unsigned int)_verifyStateOfAllTodos:(id)fp8;
- (id)initWithToDos:(id)fp8 actionType:(int)fp12 callingMethodDescription:(id)fp16;
- (void)dealloc;
- (void)finish;
- (void)logInconsistenciesInToDos:(id)fp8;
- (id)_actionDescriptionForType:(int)fp8;
- (BOOL)_countsMatch:(int)fp8;

@end

