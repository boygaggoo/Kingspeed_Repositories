/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <Message/Criterion.h>

@class NSString;

@interface MessageCriterion : Criterion
{
    int _specialMailboxType;
    NSString *_groupUniqueID;
}

+ (void)initialize;
+ (id)noteCriteriaForAccount:(id)fp8;
+ (void)_updateAddressComments:(id)fp8;
+ (int)criterionTypeForString:(id)fp8;
+ (id)stringForCriterionType:(int)fp8;
- (id)initWithDictionary:(id)fp8 andRemoveRecognizedKeysIfMutable:(BOOL)fp12;
- (BOOL)isEqual:(id)fp8;
- (BOOL)isEquivalent:(id)fp8;
- (id)dictionaryRepresentation;
- (void)setCriterionIdentifier:(id)fp8;
- (id)recursiveGroupUniqueIDs;
- (id)_headersRequiredForEvaluation;
- (void)addHeadersRequiredForRoutingToArray:(id)fp8;
- (BOOL)_evaluateDateCriterion:(id)fp8;
- (BOOL)_evaluateHeaderCriterion:(id)fp8;
- (BOOL)_evaluateBodyCriterion:(id)fp8;
- (BOOL)_evaluateAddressBookCriterion:(id)fp8;
- (BOOL)_doesGroup:(id)fp8 containSender:(id)fp12;
- (BOOL)_evaluateMemberOfGroupCriterion:(id)fp8;
- (BOOL)_evaluateAccountCriterion:(id)fp8;
- (BOOL)_evaluateAddressHistoryCriterion:(id)fp8;
- (BOOL)_evaluateFullNameCriterion:(id)fp8;
- (BOOL)_evaluateIsDigitallySignedCriterion:(id)fp8;
- (BOOL)_evaluateIsEncryptedCriterion:(id)fp8;
- (BOOL)_evaluateMessageTypeCriterion:(id)fp8;
- (BOOL)_evaluatePriorityIsNormalCriterion:(id)fp8;
- (BOOL)_evaluatePriorityIsHighCriterion:(id)fp8;
- (BOOL)_evaluatePriorityIsLowCriterion:(id)fp8;
- (BOOL)_evaluateJunkMailHeaders:(id)fp8;
- (BOOL)_evaluateJunkMailCriterion:(id)fp8;
- (BOOL)_evaluateAttachmentCriterion:(id)fp8;
- (BOOL)doesMessageSatisfyCriterion:(id)fp8;
- (BOOL)hasExpression;
- (BOOL)allowsEmptyExpression;
- (BOOL)hasQualifier;
- (BOOL)isValid:(id *)fp8 options:(unsigned long)fp12;
- (BOOL)containsBodyCriterion;
- (id)emailAddressesForGroupCriterion;
- (id)criterionByExpandingGroup;
- (id)criterionByExpandingSpecialMailboxCriterion;
- (BOOL)containsLastViewedDateCriterion;
- (id)groupUniqueID;
- (void)setGroupUniqueID:(id)fp8;
- (int)specialMailboxType;
- (void)setSpecialMailboxType:(int)fp8;

@end

