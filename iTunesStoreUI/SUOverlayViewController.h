/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iTunesStoreUI/SUViewController.h>

@class NSMutableArray, SUMaskProvider, SUMaskedView, SUOverlayTransition, SUScriptFunction, SUScriptWindowContext, SUTouchCaptureView, UIViewController;

@interface SUOverlayViewController : SUViewController
{
    NSMutableArray *_actionQueue;
    UIViewController *_activeViewController;
    UIViewController *_backViewController;
    UIViewController *_frontViewController;
    SUOverlayTransition *_lastFlipTransition;
    struct CGSize _overlaySize;
    SUOverlayTransition *_presentationTransition;
    SUScriptWindowContext *_scriptWindowContext;
    float _shadowOpacity;
    float _shadowRadius;
    SUScriptFunction *_shouldDismissFunction;
    int _state;
    SUMaskedView *_subviewContainerView;
    SUTouchCaptureView *_touchCaptureView;
}

+ (struct CGSize)defaultOverlaySize;
@property(retain, nonatomic) SUScriptFunction *shouldDismissFunction; // @synthesize shouldDismissFunction=_shouldDismissFunction;
@property(nonatomic) float shadowRadius; // @synthesize shadowRadius=_shadowRadius;
@property(nonatomic) float shadowOpacity; // @synthesize shadowOpacity=_shadowOpacity;
@property(retain, nonatomic) SUOverlayTransition *presentationTransition; // @synthesize presentationTransition=_presentationTransition;
@property(nonatomic) struct CGSize overlaySize; // @synthesize overlaySize=_overlaySize;
@property(retain, nonatomic) UIViewController *frontViewController; // @synthesize frontViewController=_frontViewController;
@property(retain, nonatomic) UIViewController *backViewController; // @synthesize backViewController=_backViewController;
- (void)_tearDownTouchCaptureView;
- (id)_subviewContainerView;
- (void)_setShadowVisible:(BOOL)arg1;
- (void)_setActiveViewController:(id)arg1 updateInterface:(BOOL)arg2;
- (BOOL)_isControllerLoaded:(id)arg1;
- (id)_flipTransition;
- (void)_applyOverlayConfiguration:(id)arg1;
- (void)_applyDisplayProperties;
- (id)_activeViewController;
- (void)_performNextAction;
- (void)_performFlipTransitionAction:(id)arg1;
- (void)_performFlipAction:(id)arg1;
- (void)_overlayAnimationDidFinish;
- (void)_overlayActionDidFinish;
- (void)_finishFlipAction:(id)arg1;
- (void)_enqueueAction:(id)arg1;
- (void)_touchCaptureAction:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)storePage:(id)arg1 finishedWithSuccess:(BOOL)arg2;
- (void)imagePageViewTapped:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)shouldExcludeFromNavigationHistory;
- (id)scriptWindowContext;
- (void)restoreArchivableContext:(id)arg1;
- (void)loadView;
- (void)invalidateForMemoryPurge;
- (id)copyArchivableContext;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)viewWillDismissWithTransition:(id)arg1;
- (void)setScriptWindowContext:(id)arg1;
@property(retain, nonatomic) SUMaskProvider *maskProvider;
@property(readonly, nonatomic, getter=isOnFront) BOOL onFront;
@property(readonly, nonatomic, getter=isActiveOverlay) BOOL activeOverlay;
- (void)flipWithTransition:(id)arg1;
@property(readonly, nonatomic) UIViewController *activeViewController;
- (void)dealloc;
- (id)initWithOverlayConfiguration:(id)arg1;
- (id)init;

@end

