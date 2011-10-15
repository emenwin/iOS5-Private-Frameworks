/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSData;

@interface MessageHeaders : NSObject <NSCopying>
{
    NSData *_data;
    unsigned int _preferredEncoding;
}

+ (id)basicHeaders;
+ (BOOL)isStructuredHeaderKey:(id)arg1;
+ (BOOL)shouldDecodeHeaderForKey:(id)arg1;
+ (id)addressListFromEncodedString:(id)arg1 encoding:(unsigned long)arg2;
+ (id)addressListFromEncodedString:(id)arg1;
+ (id)encodedDataForAddressList:(id)arg1 splittingAtLength:(unsigned int)arg2 firstLineBuffer:(unsigned int)arg3;
+ (id)uniqueHeaderKeyStringForString:(id)arg1;
- (id)init;
- (id)initWithHeaderData:(id)arg1 encoding:(unsigned long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)mutableCopy;
- (id)headerData;
- (unsigned long)preferredEncoding;
- (void)setPreferredEncoding:(unsigned long)arg1;
- (BOOL)_isStructuredHeaderKey:(id)arg1;
- (id)allHeaderKeys;
- (void)_setCapitalizedKey:(id)arg1 forKey:(id)arg2;
- (id)_capitalizedKeyForKey:(id)arg1;
- (unsigned long)_contentTypeEncoding;
- (id)copyDecodedStringFromHeaderData:(id)arg1 withRange:(struct _NSRange)arg2;
- (id)_copyHeaderValueForKey:(id)arg1 offset:(unsigned int *)arg2 decoded:(BOOL)arg3;
- (id)_headerValueForKey:(id)arg1 offset:(unsigned int *)arg2;
- (id)_copyHeaderValueForKey:(id)arg1;
- (id)_headerValueForKey:(id)arg1;
- (BOOL)hasHeaderForKey:(id)arg1;
- (id)copyHeadersForKey:(id)arg1;
- (id)headersForKey:(id)arg1;
- (id)_copyEncodedHeaderStringForKey:(id)arg1;
- (id)_copyAddressListForKey:(id)arg1;
- (id)copyAddressListForSender;
- (id)firstSenderAddress;
- (id)copyAddressListForTo;
- (id)copyAddressListForCc;
- (id)copyAddressListForBcc;
- (id)copyAddressListForResentFrom;
- (id)copyAddressListForReplyTo;
- (id)copyEncodedStringForSender;
- (id)copyEncodedStringForTo;
- (id)copyEncodedStringForCc;
- (id)copyEncodedStringForBcc;
- (id)copyEncodedStringForResentFrom;
- (id)references;
- (id)firstHeaderForKey:(id)arg1;
- (id)copyFirstHeaderForKey:(id)arg1;
- (id)copyFirstNonDecodedHeaderForKey:(id)arg1;
- (id)copyFirstStringValueForKey:(id)arg1;
- (id)_decodeHeaderKeysFromData:(id)arg1;
- (id)isoLatin1CharsetHint;
- (BOOL)messageIsFromEntourage;
- (id)encodedHeaders;
- (void)appendHeaderData:(id)arg1 andRecipients:(id)arg2;
- (id)description;

@end

