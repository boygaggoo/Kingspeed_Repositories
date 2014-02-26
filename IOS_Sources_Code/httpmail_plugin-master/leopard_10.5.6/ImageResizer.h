/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject.h"

@class ActivityMonitor, NSData, NSString;

@interface ImageResizer : NSObject
{
    NSData *_sourceData;
    NSString *_sourceFilename;
    unsigned int _sourceFileType;
    id _representedObject;
    struct _NSRect _maxBounds;
    unsigned long _maxFileBytes;
    struct _NSSize _sourceSize;
    struct _NSSize _destSize;
    struct PointerDataRefRecord **_dataRef;
    struct ComponentInstanceRecord *_importer;
    struct ComponentInstanceRecord *_exporter;
    struct UserDataRecord **_userDataHandle;
    char **_colorProfile;
    BOOL _notThreadSafe;
    NSData *_resultData;
    ActivityMonitor *_monitor;
}

+ (void)initialize;
+ (BOOL)isFileResizableImage:(id)fp8;
+ (struct _NSSize)scaleSize:(struct _NSSize)fp8 toFitSize:(struct _NSSize)fp16;
+ (struct _NSSize)scaleSize:(struct _NSSize)fp8 toContainSize:(struct _NSSize)fp16;
- (id)initWithImageData:(id)fp8 sourceFilename:(id)fp12 sourceFileType:(unsigned long)fp16;
- (void)dealloc;
- (void)setRepresentedObject:(id)fp8;
- (id)representedObject;
- (void)setMaxImageSize:(struct _NSSize)fp8;
- (struct _NSSize)maxImageSize;
- (void)setMaxFileBytes:(unsigned int)fp8;
- (unsigned int)maxFileBytes;
- (id)sourceFilename;
- (void)resizeImage;
- (BOOL)isResizing;
- (void)cancel;
- (id)resultFileExtension;
- (unsigned long)resultFileType;
- (id)resultImageData;
- (struct _NSSize)resultImageSize;
- (void)_didFinishResizingWithResultCode:(int)fp8;
- (void)_resizeImage;
- (void)_getUserData;
- (BOOL)_prepareSourceData;
- (BOOL)_createImporter;
- (BOOL)_prepareImporter;
- (unsigned long)_getExportTypeForImporterMainThread;
- (BOOL)_createExporter;
- (BOOL)_prepareExporter;
- (void)_releaseDataRef;
- (void)_releaseImporter;
- (void)_releaseExporter;
- (void)_releaseUserData;
- (void)_releaseColorProfile;

@end
