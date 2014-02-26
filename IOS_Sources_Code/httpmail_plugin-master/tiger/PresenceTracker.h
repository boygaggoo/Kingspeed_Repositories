/*
 *     Generated by class-dump 3.0.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004 by Steve Nygard.
 */

#import "NSObject.h"

@class NSImage, NSMutableDictionary;

@interface PresenceTracker : NSObject
{
    NSMutableDictionary *personIDToStatus;
    NSMutableDictionary *emailToPerson;
    BOOL isListening;
    NSImage *availableStatusImage;
}

+ (id)sharedInstance;
- (void)_addEmailToPersonMapping:(id)fp8;
- (void)_addressBookChanged:(id)fp8;
- (void)_rebuildEmailToUID;
- (id)addressCardUIDForEmail:(id)fp8;
- (id)availableStatusImage;
- (void)dealloc;
- (id)init;
- (void)myStatusChanged:(id)fp8;
- (void)personChanged:(id)fp8;
- (BOOL)personWithEmailIsOnline:(id)fp8;
- (void)presenceChanged:(id)fp8;
- (void)startListening;
- (void)statusImagesChanged:(id)fp8;
- (void)stopListening;
- (void)updateBuddyInfo:(id)fp8 forService:(id)fp12;
- (void)updatePersonInfo:(id)fp8 forService:(id)fp12;

@end
