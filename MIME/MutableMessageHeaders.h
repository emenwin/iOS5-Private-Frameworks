/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MIME/MessageHeaders.h>

@class NSMutableArray, NSMutableDictionary;

@interface MutableMessageHeaders : MessageHeaders
{
    NSMutableDictionary *_headersAdded;
    NSMutableArray *_headersRemoved;
}

- (id)mutableCopy;
- (void)dealloc;
- (id)allHeaderKeys;
- (BOOL)hasHeaderForKey:(id)arg1;
- (id)_headerValueForKey:(id)arg1;
- (id)firstHeaderForKey:(id)arg1;
- (void)removeHeaderForKey:(id)arg1;
- (void)setHeader:(id)arg1 forKey:(id)arg2;
- (void)mergeHeaders:(id)arg1;
- (void)_appendHeaderKey:(id)arg1 value:(id)arg2 toData:(id)arg3;
- (void)_appendAddedHeaderKey:(id)arg1 value:(id)arg2 toData:(id)arg3;
- (id)_copyHeaderValueForKey:(id)arg1;
- (id)_copyHeaderValueForKey:(id)arg1 offset:(unsigned int *)arg2 decoded:(BOOL)arg3;
- (id)encodedHeaders;
- (void)setAddressList:(id)arg1 forKey:(id)arg2;
- (void)setAddressListForSender:(id)arg1;
- (void)setAddressListForTo:(id)arg1;
- (void)setAddressListForCc:(id)arg1;
- (void)setAddressListForBcc:(id)arg1;
- (void)setReferences:(id)arg1;
- (void)stripInternalHeaders;
- (id)description;

@end

