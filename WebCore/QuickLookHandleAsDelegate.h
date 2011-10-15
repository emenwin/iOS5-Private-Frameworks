/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSURLConnectionDelegate-Protocol.h"

@interface QuickLookHandleAsDelegate : NSObject <NSURLConnectionDelegate>
{
    struct _CFURLConnection *m_connection;
    struct ResourceHandle *m_handle;
}

- (id)initWithConnection:(struct _CFURLConnection *)arg1 handle:(struct ResourceHandle *)arg2;
- (void)connection:(id)arg1 didReceiveDataArray:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2 lengthReceived:(long long)arg3;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;

@end

