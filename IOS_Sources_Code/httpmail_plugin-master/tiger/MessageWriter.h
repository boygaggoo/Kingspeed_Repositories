/*
 *     Generated by class-dump 3.0.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004 by Steve Nygard.
 */

#import "NSObject.h"

@interface MessageWriter : NSObject
{
    unsigned int _createsMimeAlternatives:1;
    unsigned int _createsRichText:1;
    unsigned int _createsPlainTextOnly:1;
    unsigned int _allows8BitMimeParts:1;
    unsigned int _allowsBinaryMimeParts:1;
    unsigned int _allowsAppleDoubleAttachments:1;
    unsigned int _signsOutput:1;
    unsigned int _encryptsOutput:1;
    unsigned int _writeImageSize:1;
    unsigned int _preferredEncoding;
}

- (BOOL)allows8BitMimeParts;
- (BOOL)allowsAppleDoubleAttachments;
- (BOOL)allowsBinaryMimeParts;
- (void)appendDataForMimePart:(id)fp8 toData:(id)fp12 withPartData:(id)fp16;
- (id)createBounceMessageForMessage:(id)fp8;
- (id)createDataForAttributedString:(id)fp8;
- (id)createMessageByRemovingAttachmentsFromMessage:(id)fp8;
- (id)createMessageWithAttributedString:(id)fp8 headers:(id)fp12;
- (id)createMessageWithBodyData:(id)fp8 headers:(id)fp12;
- (id)createMessageWithHtmlString:(id)fp8 attachments:(id)fp12 headers:(id)fp16;
- (id)createMessageWithHtmlString:(id)fp8 plainTextAlternative:(id)fp12 otherHtmlStringsAndAttachments:(id)fp16 headers:(id)fp20;
- (BOOL)createsMimeAlternatives;
- (BOOL)createsPlainTextOnly;
- (BOOL)createsRichText;
- (BOOL)encryptsOutput;
- (id)init;
- (unsigned long)preferredEncoding;
- (void)setAllows8BitMimeParts:(BOOL)fp8;
- (void)setAllowsAppleDoubleAttachments:(BOOL)fp8;
- (void)setAllowsBinaryMimeParts:(BOOL)fp8;
- (void)setCreatesMimeAlternatives:(BOOL)fp8;
- (void)setCreatesPlainTextOnly:(BOOL)fp8;
- (void)setCreatesRichText:(BOOL)fp8;
- (void)setEncryptsOutput:(BOOL)fp8;
- (void)setPreferredEncoding:(unsigned long)fp8;
- (void)setSignsOutput:(BOOL)fp8;
- (void)setWriteImageSize:(BOOL)fp8;
- (BOOL)signsOutput;
- (BOOL)writeImageSize;

@end

