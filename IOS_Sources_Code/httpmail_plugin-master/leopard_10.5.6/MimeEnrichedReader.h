/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableString;

@interface MimeEnrichedReader : NSObject
{
    CDAnonymousStruct5 _inputBuffer;
    int _currentIndex;
    int _inputLength;
    unsigned int _noFillLevel:30;
    unsigned int _eatOneNewline:1;
    unsigned int _insideComment:1;
    int _lastQuoteLevel;
    struct __CFArray *_commandStack;
    id _outputString;
    NSMutableString *_outputBuffer;
    float _indentWidth;
    BOOL outputShouldBeHTML;
}

+ (id)punctuationSet;
+ (id)parenSet;
- (id)init;
- (void)mismatchError:(id)fp8;
- (void)dealloc;
- (void)finalize;
- (void)appendStringToBuffer:(id)fp8;
- (void)resetStateWithString:(id)fp8 outputString:(id)fp12;
- (void)nowWouldBeAGoodTimeToAppendToTheAttributedString;
- (void)fixConsecutiveSpaces:(id)fp8;
- (void)closeUpQuoting;
- (void)handleNoParameterCommand:(const CDAnonymousStruct7 *)fp8;
- (void)setupFontStackEntry:(struct _CommandStackEntry *)fp8;
- (void)beginCommand:(id)fp8;
- (void)endCommand:(id)fp8;
- (void)parseParameterString:(id)fp8;
- (id)currentFont;
- (int)readTokenInto:(id *)fp8;
- (void)convertRichTextString:(id)fp8 intoOutputString:(id)fp12;
- (void)convertEnrichedString:(id)fp8 intoOutputString:(id)fp12;
- (void)convertEnrichedString:(id)fp8 intoPlainOutputString:(id)fp12;

@end
