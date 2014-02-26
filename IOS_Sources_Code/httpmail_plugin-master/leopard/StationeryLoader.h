/*
 *     Generated by class-dump 3.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2005 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface StationeryLoader : NSObject
{
    NSMutableDictionary *categoriesByDisplayName;
    NSMutableArray *orderedCategoryDisplayNames;
    NSMutableDictionary *orderedStationeryByCategoryDisplayName;
}

+ (id)sharedInstance;
+ (id)pathForCustomCategory;
+ (id)pathForCustomCategoryResources;
+ (void)purgeDeletedCustomStationery;
- (void)dealloc;
- (id)stationeryWithID:(id)fp8;
- (id)stationeryWithPath:(id)fp8;
- (id)pathForStationeryWithID:(id)fp8;
- (id)dictionaryForStationeryWithPath:(id)fp8 inCategoryWithDisplayName:(id)fp12;
- (id)dictionaryForStationeryWithPath:(id)fp8 inCategoryWithDisplayName:(id)fp12 position:(int *)fp16;
- (void)updateStationery;
- (id)orderedCategoryDisplayNamesIncludingFavorites;
- (id)orderedCategoryDictionaries;
- (id)orderedStationeryDictionariesForCategoryWithDisplayName:(id)fp8;
- (id)pathForFavoritesList;
- (void)createAppleUserCompanyBundleIfNecessary;
- (id)bundlePathForCategoryWithFolderName:(id)fp8 company:(id)fp12 type:(int)fp16;
- (id)pathForStationeryNamed:(id)fp8 inCategoryWithDisplayName:(id)fp12;
- (id)cachedTOCWithName:(id)fp8;
- (void)cacheTOC:(id)fp8 withName:(id)fp12;
- (id)cacheNameForCompany:(id)fp8 categoryDisplayName:(id)fp12 type:(int)fp16;
- (void)updateCategories;
- (id)companyTOCWithName:(id)fp8 type:(int)fp12 isFromCache:(char *)fp16;
- (void)combinePartialTOCs:(id)fp8;
- (id)newDictionaryForCustomCategoryForCompany:(BOOL)fp8;
- (id)validatedCompanyCategoryDictionary:(id)fp8 categoryFolderName:(id)fp12 companyBundle:(id)fp16 type:(int)fp20;
- (id)validatedStationeryDictionary:(id)fp8 withName:(id)fp12 categoryBundle:(id)fp16 needsThumbnail:(char *)fp20;
- (void)updateStationeryInCategoryWithDisplayName:(id)fp8;
- (id)categoryTOCForCategoryFolderName:(id)fp8 company:(id)fp12 type:(int)fp16 categoryDisplayName:(id)fp20;
- (void)thumbnailCreatorDidCompletelyFinish:(id)fp8;
- (void)thumbnailCreatorDidCreateThumbnailForCustomStationery:(id)fp8;
- (void)thumbnailCreator:(id)fp8 didCreateThumbnail:(id)fp12 forCustomStationeryWithPath:(id)fp16;
- (BOOL)stationery:(id)fp8 isInCategoryWithDisplayName:(id)fp12;
- (BOOL)customStationeryWithNameExists:(id)fp8 index:(int *)fp12;
- (void)addToFavoritesStationeryWithPath:(id)fp8 inCategoryWithDisplayName:(id)fp12;
- (void)addToFavoritesInPosition:(int)fp8 stationeryWithPath:(id)fp12 inCategoryWithDisplayName:(id)fp16;
- (BOOL)recursivelyCreateDirectory:(id)fp8 error:(id *)fp12;
- (BOOL)saveCustomStationery:(id)fp8 error:(id *)fp12;
- (BOOL)saveCustomStationery:(id)fp8 byMovingFromPath:(id)fp12 error:(id *)fp16;
- (BOOL)installStationery:(id)fp8;
- (void)deleteStationeryWithDictionary:(id)fp8 fromCategoryWithDisplayName:(id)fp12 undoManager:(id)fp16;
- (void)reinsertStationeryWithInformation:(id)fp8;
- (void)purgeDeletedCustomStationery:(id)fp8;
- (void)synchronouslyPurgeDeletedCustomStationery:(id)fp8;

@end

