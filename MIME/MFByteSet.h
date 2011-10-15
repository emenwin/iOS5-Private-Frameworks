/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@interface MFByteSet : NSObject <NSCopying, NSMutableCopying>
{
    char mySet[32];
}

+ (id)asciiWhitespaceSet;
+ (id)ASCIIByteSet;
+ (id)nonASCIIByteSet;
+ (id)suspiciousCodepage1252ByteSet;
- (BOOL)byteIsMember:(BOOL)arg1;
- (id)invertedSet;
- (id)initWithRange:(struct _NSRange)arg1;
- (id)initWithCString:(const char *)arg1;
- (id)initWithBytes:(const void *)arg1 length:(unsigned int)arg2;
- (id)_initWithSet:(const char *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end

