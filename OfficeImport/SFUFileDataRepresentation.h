/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/SFUDataRepresentation.h>

@class NSString, SFUCryptoKey;

@interface SFUFileDataRepresentation : SFUDataRepresentation
{
    NSString *mPath;
    int mSharedFd;
    long long mFileLength;
    unsigned int mFileType;
    BOOL mHasFileAttributes;
    long long mPlaintextDataLength;
    SFUCryptoKey *mCryptoKey;
    BOOL mDeleteFileWhenDone;
}

- (id)initWithPath:(id)arg1;
- (id)initWithPath:(id)arg1 sharedFileDescriptor:(int)arg2;
- (id)initWithPath:(id)arg1 cryptoKey:(id)arg2 dataLength:(long long)arg3;
- (id)initWithPath:(id)arg1 sharedFileDescriptor:(int)arg2 cryptoKey:(id)arg3 dataLength:(long long)arg4;
- (id)initWithCopyOfData:(id)arg1 path:(id)arg2;
- (id)initWithCopyOfData:(id)arg1 path:(id)arg2 cryptoKey:(id)arg3;
- (void)dealloc;
- (id)description;
- (id)path;
- (unsigned long)fileType;
- (void)setFileType:(unsigned long)arg1;
- (BOOL)isReadable;
- (long long)dataLength;
- (long long)encodedLength;
- (BOOL)isEncrypted;
- (BOOL)isCryptoKeyIdenticalToKey:(id)arg1;
- (id)inputStream;
- (BOOL)hasSameLocationAs:(id)arg1;
- (void)deleteFileWhenDone;

@end
