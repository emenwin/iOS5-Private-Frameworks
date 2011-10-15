/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CoreDAVTaskGroup.h"

#import "CoreDAVPropFindTaskDelegate-Protocol.h"
#import "CoreDAVPropPatchTaskDelegate-Protocol.h"

@class CoreDAVPropFindTask, NSString, NSURL;

@interface CalDAVUpdateFreeBusySetTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate, CoreDAVPropPatchTaskDelegate>
{
    int _state;
    NSURL *_inboxURL;
    NSURL *_urlToAdd;
    NSString *_suffixToFilterOut;
    CoreDAVPropFindTask *_fetchTask;
}

- (void)dealloc;
- (id)initWithAccountInfoProvider:(id)arg1 inboxURL:(id)arg2 urlToAdd:(id)arg3 suffixToFilterOut:(id)arg4 taskManager:(id)arg5;
- (void)_startFetchFreeBusySet;
- (void)_startPropPatchWithURLs:(id)arg1;
- (void)startTaskGroup;
- (void)_finishWithError:(id)arg1 state:(int)arg2;
- (void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)propPatchTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)taskGroupWillCancelWithError:(id)arg1;
@property(retain) CoreDAVPropFindTask *fetchTask; // @synthesize fetchTask=_fetchTask;
@property(retain) NSString *suffixToFilterOut; // @synthesize suffixToFilterOut=_suffixToFilterOut;
@property(retain) NSURL *urlToAdd; // @synthesize urlToAdd=_urlToAdd;
@property(retain) NSURL *inboxURL; // @synthesize inboxURL=_inboxURL;
@property int state; // @synthesize state=_state;

// Remaining properties
@property(nonatomic) id <CoreDAVTaskGroupDelegate> delegate; // @dynamic delegate;

@end

