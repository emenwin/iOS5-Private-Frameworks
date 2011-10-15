/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CoreDAVTask.h"

@class NSSet;

@interface CalDAVMkcalendarTask : CoreDAVTask
{
    NSSet *_setElements;
}

- (id)initWithURL:(id)arg1;
- (id)initWithPropertiesToSet:(id)arg1 atURL:(id)arg2;
- (void)setSupportForEvents:(BOOL)arg1 tasks:(BOOL)arg2;
- (void)dealloc;
- (id)description;
- (id)httpMethod;
- (id)requestBody;
- (id)copyDefaultParserForContentType:(id)arg1;
- (void)finishCoreDAVTaskWithError:(id)arg1;
@property(retain) NSSet *setElements; // @synthesize setElements=_setElements;

// Remaining properties
@property(nonatomic) id <CalDAVMkcalendarTaskDelegate><CoreDAVTaskDelegate> delegate; // @dynamic delegate;

@end

