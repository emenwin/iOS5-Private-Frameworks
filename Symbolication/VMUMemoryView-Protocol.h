/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol VMUMemoryView <NSObject>
- (struct _VMURange)addressRange;
- (unsigned long long)cursor;
- (void)setCursor:(unsigned long long)arg1;
- (void)advanceCursor:(unsigned long long)arg1;
- (void)rewindCursor:(unsigned long long)arg1;
- (BOOL)isCursorPointerAligned;
- (void)pointerAlignCursor;
- (BOOL)int8;
- (short)int16;
- (int)int32;
- (long long)int64;
- (unsigned char)uint8;
- (unsigned short)uint16;
- (unsigned int)uint32;
- (unsigned long long)uint64;
- (id)arrayOfInt8:(unsigned long)arg1;
- (id)arrayOfInt16:(unsigned long)arg1;
- (id)arrayOfInt32:(unsigned long)arg1;
- (id)arrayOfInt64:(unsigned long)arg1;
- (id)arrayOfUInt8:(unsigned long)arg1;
- (id)arrayOfUInt16:(unsigned long)arg1;
- (id)arrayOfUInt32:(unsigned long)arg1;
- (id)arrayOfUInt64:(unsigned long)arg1;
- (unsigned long long)ULEB128;
- (long long)LEB128;
- (struct nlist_64)nlist;
- (struct nlist_64)nlist_64;
- (struct dyld_image_info_64)dyldImageInfo;
- (struct dyld_image_info_64)dyldImageInfo64;
- (id)stringWithEncoding:(unsigned int)arg1;
- (id)stringWithEncoding:(unsigned int)arg1 offset:(unsigned long long)arg2;
- (BOOL)charAtOffset:(unsigned long long)arg1;
- (id)stringWithEncoding:(unsigned int)arg1 size:(unsigned long)arg2;
@end

