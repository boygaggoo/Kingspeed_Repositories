/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSImage.h"

@interface NSImage (ASBetterImageLookup)
+ (id)betterImageNamed:(id)fp8;
+ (id)appIconIncludingUserCustomization;
+ (id)appIconWithUnreadBadge:(int)fp8 baseImageName:(id)fp12;
+ (id)createScaledImageFromImage:(id)fp8 desiredSize:(struct _NSSize)fp12;
+ (id)imagePasteboardTypesWithPreferenceToPNG;
+ (id)imageDataForType:(id *)fp8 fromPasteboard:(id)fp12;
- (id)opaqueImage;
- (id)bitmapImageRep;
- (id)PNGData;
- (unsigned int)frameCount;
- (BOOL)isAnimated;
- (void)drawTransformedInRect:(struct _NSRect)fp8 fromRect:(struct _NSRect)fp24 operation:(unsigned int)fp40 fraction:(float)fp44 flip:(BOOL)fp48;
@end

