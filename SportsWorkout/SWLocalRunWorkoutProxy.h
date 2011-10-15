/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SportsWorkout/SWRunWorkoutProxy.h>

@interface SWLocalRunWorkoutProxy : SWRunWorkoutProxy
{
}

- (void)endSeeking;
- (void)beginSeekingBackward;
- (void)beginSeekingForward;
- (void)selectNextSong;
- (void)selectPreviousSong;
- (void)playMusic;
- (void)pauseMusic;
- (void)goToNowPlaying;
- (void)playPowerSong;
- (void)playOnDemandPrompt;
- (id)currentSongName;
- (int)musicSelection;
- (BOOL)shouldControlMusic;
- (id)powerSongName;
- (BOOL)hasPowerSong;
- (void)endWorkout;
- (void)pauseWorkout;
- (void)activateWorkout;
- (void)prepareToActivateWorkout;
- (BOOL)hasEverStarted;
- (id)workoutData;
- (id)workoutState;
- (id)sensorSearchState;
- (float)goal;
- (id)presetGoal;
- (id)goalType;
- (void)_nowPlayingChanged:(id)arg1;
- (void)_workoutStateChanged:(id)arg1;
- (void)_sensorSearchStateChanged:(id)arg1;
- (void)dealloc;
- (id)init;

@end

