/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData, NSString, NSURL;

@interface PLItem : NSObject
{
    NSString *_title;
    NSString *_temporaryFileName;
}

+ (id)writeTemporaryFileWithItemData:(id)arg1 pathExtension:(id)arg2 type:(id *)arg3;
+ (id)typeFromPathExtension:(id)arg1 typeHint:(id)arg2;
+ (struct __CFString *)baseType;
+ (id)itemsWithURLsAndData:(id)arg1;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)videoView;
@property(readonly, nonatomic) NSData *imageData;
- (id)imageWithFormat:(int)arg1;
@property(readonly, nonatomic) BOOL allowsRotation;
@property(readonly, nonatomic) int itemType;
- (void)dealloc;
- (id)initVideoWithURL:(id)arg1;
- (id)initImageWithData:(id)arg1;
- (id)initWithURL:(id)arg1 type:(id)arg2;
- (id)initWithData:(id)arg1 pathExtension:(id)arg2 type:(id)arg3;
- (id)initWithData:(id)arg1 type:(id)arg2;
- (id)initWithData:(id)arg1;
- (id)initWithData:(id)arg1 pathExtension:(id)arg2;
- (id)initWithURL:(id)arg1 typeHint:(id)arg2;
- (id)initWithURL:(id)arg1;
@property(readonly, nonatomic) NSURL *URL;
- (id)asset;

@end

