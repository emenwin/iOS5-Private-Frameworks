/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SWGeneratePINConnectionDelegate-Protocol.h"
#import "SWPINStatusConnectionDelegate-Protocol.h"
#import "SWSyncServiceConnectionDelegate-Protocol.h"
#import "SWSyncWorkoutConnectionDelegate-Protocol.h"

@class NSMutableArray, NSString, SWSyncHost, SWSyncServiceConnection;

@interface SWSyncController : NSObject <SWSyncServiceConnectionDelegate, SWGeneratePINConnectionDelegate, SWSyncWorkoutConnectionDelegate, SWPINStatusConnectionDelegate>
{
    int _attemptedUploadCount;
    int _uploadCount;
    id <SWSyncControllerDelegate> _syncDelegate;
    SWSyncHost *_syncHost;
    SWSyncServiceConnection *_currentSyncConnection;
    NSMutableArray *_empedDirectoriesToSync;
    NSMutableArray *_workoutFilesToSync;
    NSString *_syncPin;
    NSString *_currentlySyncingWorkoutFilePath;
    NSString *_baseDirectoryPath;
    BOOL _shouldMoveFilesToSynchedDirectoryWhenDone;
}

+ (void)releaseSyncInProgressFileLock;
+ (BOOL)takeSyncInProgressFileLock:(BOOL)arg1;
@property(nonatomic) int uploadCount; // @synthesize uploadCount=_uploadCount;
@property(nonatomic) BOOL shouldMoveFilesToSynchedDirectoryWhenDone; // @synthesize shouldMoveFilesToSynchedDirectoryWhenDone=_shouldMoveFilesToSynchedDirectoryWhenDone;
@property(nonatomic) id <SWSyncControllerDelegate> syncDelegate; // @synthesize syncDelegate=_syncDelegate;
- (void)connectionDidReturnStatusInvalid:(id)arg1;
- (void)connectionDidReturnStatusUnconfirmed:(id)arg1;
- (void)connection:(id)arg1 didReplaceOldPINWithNewPIN:(id)arg2;
- (void)connection:(id)arg1 didConfirmEmail:(id)arg2 screenName:(id)arg3;
- (void)connection:(id)arg1 didGenerateToken:(id)arg2;
- (void)connectionDidCompleteSync:(id)arg1;
- (void)connectionDidSyncWorkout:(id)arg1;
- (void)_syncNextWorkout;
- (void)connection:(id)arg1 didGeneratePIN:(id)arg2;
- (void)_syncWorkoutsForNextEmpedDirectory;
- (unsigned int)unsyncedWorkoutsCount;
- (void)visitNikeWebSite;
- (void)syncAllWorkouts;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (id)_syncHost;
- (void)dealloc;
- (id)initWithBaseDirectoryPath:(id)arg1;

@end

