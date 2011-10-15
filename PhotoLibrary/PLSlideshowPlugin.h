/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSObject<PLAssetContainer>, PLManagedAsset;

@interface PLSlideshowPlugin : NSObject
{
    id <PLSlideshowPluginDelegate> _delegate;
    struct NSObject *_album;
    NSArray *_albumAssets;
    double _secondsPerSlide;
    BOOL _shuffleAlbum;
    BOOL _shouldRepeat;
}

@property(nonatomic) BOOL shouldRepeat; // @synthesize shouldRepeat=_shouldRepeat;
@property(nonatomic) BOOL shuffleAlbum; // @synthesize shuffleAlbum=_shuffleAlbum;
@property(nonatomic) double secondsPerSlide; // @synthesize secondsPerSlide=_secondsPerSlide;
@property(nonatomic) id <PLSlideshowPluginDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *albumAssets; // @synthesize albumAssets=_albumAssets;
- (void)stopSlideshow;
- (void)resumeSlideshow;
- (void)pauseSlideshow;
- (void)slideshowViewDidDisappear;
- (void)slideshowViewDidAppear;
- (void)slideshowViewWillAppear;
- (id)newSlideshowView;
@property(readonly, nonatomic) NSArray *displayedPhotos;
@property(readonly, nonatomic) PLManagedAsset *currentPhoto;
@property(retain, nonatomic) NSObject<PLAssetContainer> *album;
- (void)dealloc;

@end

