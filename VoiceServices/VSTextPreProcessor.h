/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSString;

@interface VSTextPreProcessor : NSObject
{
    NSArray *_rules;
    NSString *_languageID;
    struct __CFStringTokenizer *_tokenizer;
}

- (id)initWithContentsOfPath:(id)arg1 languageIdentifier:(id)arg2;
- (void)dealloc;
- (id)processedTextFromString:(id)arg1;

@end

