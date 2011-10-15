/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CKAggregateConversation, CKMessage, CKMessageComposition, CKService, NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface _CKConversation : NSObject
{
    CKAggregateConversation *_aggregateConversation;
    NSMutableArray *_messages;
    NSString *_name;
    int _unreadCount;
    NSMutableArray *_failedMessages;
    NSMutableArray *_pendingMessages;
    CKMessage *_outgoingTypingMessage;
    CKMessage *_incomingTypingMessage;
    NSArray *_names;
    NSArray *_recipients;
    unsigned int _recipientHash;
    NSMutableDictionary *_groupMessages;
    NSMutableArray *_queuedGroupMessages;
    BOOL _moreMessagesToLoad;
    int _limitToLoad;
    CKService *_service;
    BOOL _updatesDisabled;
    BOOL _needsPostAfterUpdate;
    BOOL _wantsAnimatedPost;
    NSString *_groupID;
}

@property(retain, nonatomic) CKMessageComposition *unsentComposition;
- (id)initWithGroupID:(id)arg1 service:(id)arg2;
- (id)recipient;
- (unsigned int)recipientsHash;
- (void)requestRecipientStatuses;
- (void)_cleanupMessages;
- (void)dealloc;
- (void)setName:(id)arg1;
- (id)name;
- (void)setRecipients:(id)arg1;
- (id)recipients;
- (unsigned int)recipientCount;
- (BOOL)isEmpty;
- (void)_refreshMoreToLoadFlag;
- (void)_postChangeUpdate:(BOOL)arg1;
- (void)enableUpdatesQuietly;
@property(nonatomic) BOOL updatesDisabled;
- (void)postChangedUpdate:(BOOL)arg1;
- (void)_addGroupMessage:(id)arg1;
- (void)resetPendingMessages;
- (BOOL)moreMessagesToLoad;
- (void)setMoreMessagesToLoad:(BOOL)arg1;
- (id)pendingMessages;
- (id)messages;
- (void *)abRecord;
- (int)propertyType;
- (int)identifier;
- (id)uniqueIdentifier;
- (void)resetCaches;
- (id)groupMessageWithAssociationID:(int)arg1;
- (void)pendingMessagesTotalMessages:(int *)arg1 percentComplete:(float *)arg2;
- (id)description;
@property(readonly, nonatomic) NSArray *groupIDs;
- (id)_existingMessageForMessage:(id)arg1;
- (id)_existingMessageWithIdentifier:(int)arg1;
@property(retain, nonatomic) CKMessage *incomingTypingMessage; // @synthesize incomingTypingMessage=_incomingTypingMessage;
@property(retain, nonatomic) CKMessage *outgoingTypingMessage; // @synthesize outgoingTypingMessage=_outgoingTypingMessage;
@property(nonatomic) int limitToLoad; // @synthesize limitToLoad=_limitToLoad;
@property(retain, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(readonly, nonatomic) NSMutableArray *failedMessages; // @synthesize failedMessages=_failedMessages;
@property(readonly, nonatomic) CKService *service; // @synthesize service=_service;
@property(nonatomic) CKAggregateConversation *aggregateConversation; // @synthesize aggregateConversation=_aggregateConversation;

@end

