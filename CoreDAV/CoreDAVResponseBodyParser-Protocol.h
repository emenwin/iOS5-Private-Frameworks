/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@class NSError;

@protocol CoreDAVResponseBodyParser <NSObject>
@property(readonly) NSError *parserError;
- (BOOL)processData:(id)arg1 forTask:(id)arg2;
@end

