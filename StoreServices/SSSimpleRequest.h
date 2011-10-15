/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreServices/SSRequest.h>

@class CPDistributedMessagingCenter, NSDictionary, NSString;

@interface SSSimpleRequest : SSRequest
{
    NSString *_messageName;
    CPDistributedMessagingCenter *_messagingCenter;
    id _didFailBlock;
    id _didFinishBlock;
    id _responseBlock;
    NSDictionary *_userInfo;
}

@property(readonly, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) id responseBlock; // @synthesize responseBlock=_responseBlock;
@property(readonly, nonatomic) CPDistributedMessagingCenter *messagingCenter; // @synthesize messagingCenter=_messagingCenter;
@property(readonly, nonatomic) NSString *messageName; // @synthesize messageName=_messageName;
@property(copy, nonatomic) id didFinishBlock; // @synthesize didFinishBlock=_didFinishBlock;
@property(copy, nonatomic) id didFailBlock; // @synthesize didFailBlock=_didFailBlock;
- (void)sendDidFinish;
- (void)sendDidFailWithError:(id)arg1;
- (BOOL)issueRequestForIdentifier:(id)arg1 error:(id *)arg2;
- (BOOL)handleFinishResponse:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithMessagingCenter:(id)arg1 messageName:(id)arg2 userInfo:(id)arg3;
- (id)initWithMessageName:(id)arg1 userInfo:(id)arg2;
- (id)init;

@end

