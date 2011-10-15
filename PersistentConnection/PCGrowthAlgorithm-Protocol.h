/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"
#import "PCLoggingDelegate-Protocol.h"

@protocol PCGrowthAlgorithm <PCLoggingDelegate, NSObject>
- (id)initWithKeepAliveInterval:(double)arg1 loggingIdentifier:(id)arg2 algorithmName:(id)arg3;
- (void)processNextAction:(int)arg1;
@property(nonatomic) double maximumKeepAliveInterval;
@property(nonatomic) double minimumKeepAliveInterval;
@property(readonly, nonatomic) double currentKeepAliveInterval;
@end

