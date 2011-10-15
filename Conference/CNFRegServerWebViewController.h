/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "UIAlertViewDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class CNFRegController, CNFRegLoadingView, NSMutableDictionary, NSString, NSTimer, UIWebView;

@interface CNFRegServerWebViewController : UIViewController <UIWebViewDelegate, UIAlertViewDelegate>
{
    UIWebView *_webView;
    CNFRegController *_regController;
    CNFRegLoadingView *_loadingView;
    NSString *_leftButtonAction;
    NSString *_rightButtonAction;
    NSMutableDictionary *_urlHandlers;
    id _alertHandler;
    NSTimer *_timeoutTimer;
    struct {
        unsigned int isLoading:1;
        unsigned int isLoaded:1;
        unsigned int wantsWifi:1;
        unsigned int modifiedWiFi:1;
        unsigned int automaticKeyboardWasDisabled:1;
        unsigned int checkedLogState:1;
        unsigned int shouldLog:1;
        unsigned int timedOut;
    } _webControllerFlags;
}

- (id)initWithRegController:(id)arg1;
- (id)init;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)dealloc;
- (id)logName;
- (BOOL)_shouldLog;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)startRequiringWifi;
- (void)stopRequiringWifi;
- (void)setWantsWifi:(BOOL)arg1;
- (void)showSpinner;
- (void)hideSpinner;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)webViewDidStartLoad:(id)arg1;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)loadURL:(id)arg1;
- (id)overrideURLForURL:(id)arg1;
- (void)setHeadersForRequest:(id)arg1;
- (BOOL)shouldSetHeadersForRequest:(id)arg1;
- (void)addSelector:(SEL)arg1 forScheme:(id)arg2;
- (SEL)selectorForScheme:(id)arg1;
- (void)setupUrlHandlers;
- (void)clearUrlHandlers;
- (id)schemeForURL:(id)arg1;
- (id)queryDictionaryForUrl:(id)arg1;
- (id)numberForServerValue:(id)arg1;
- (BOOL)boolForServerValue:(id)arg1 value:(char *)arg2 defaultValue:(BOOL)arg3;
- (BOOL)intForServerValue:(id)arg1 value:(int *)arg2 defaultValue:(int)arg3;
- (BOOL)uintForServerValue:(id)arg1 value:(unsigned int *)arg2 defaultValue:(unsigned int)arg3;
- (id)functionStringFromCallbackName:(id)arg1;
- (id)functionStringFromCallbackName:(id)arg1 withStringArgument:(id)arg2;
- (struct OpaqueJSContext *)javaScriptExecutionContext;
- (id)javaScriptStringForValue:(struct OpaqueJSValue *)arg1;
- (id)executeJavaScript:(id)arg1 error:(id *)arg2;
- (id)executeJavaScript:(id)arg1;
- (id)navButtonWithTitle:(id)arg1 action:(SEL)arg2 highlight:(BOOL)arg3;
- (void)_clearLeftButtonTarget;
- (void)leftButtonTapped:(id)arg1;
- (void)handleLeftButtonError:(id)arg1;
- (void)_clearRightButtonTarget;
- (void)rightButtonTapped:(id)arg1;
- (void)handleRightButtonError:(id)arg1;
- (void)parseNavBarURL:(id)arg1;
- (void)parseAlertURL:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)_startTimeoutWithDuration:(double)arg1;
- (void)_stopTimeout;
- (void)_timeoutFired:(id)arg1;
- (void)_handleTimeout;
- (void)applicationWillSuspend;
@property(readonly, nonatomic) BOOL isLoaded; // @dynamic isLoaded;
@property(readonly, nonatomic) BOOL isLoading; // @dynamic isLoading;
@property(readonly, nonatomic) BOOL timedOut; // @dynamic timedOut;
@property(retain, nonatomic) CNFRegController *regController; // @synthesize regController=_regController;
@property(copy, nonatomic) id alertHandler; // @synthesize alertHandler=_alertHandler;
@property(copy, nonatomic) NSString *rightButtonAction; // @synthesize rightButtonAction=_rightButtonAction;
@property(copy, nonatomic) NSString *leftButtonAction; // @synthesize leftButtonAction=_leftButtonAction;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;

@end

