/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotoBoothEffects/PBFilter.h>

@class NSString;

@interface PBFilter (OpenCL)
@property(readonly, retain, nonatomic) NSString *openCLKernelName;
- (void *)kernelWrapper;
- (void)setupKernelArguments:(id)arg1 mirrored:(BOOL)arg2;
@property(readonly, nonatomic) unsigned int kernelArgCount;
@end

