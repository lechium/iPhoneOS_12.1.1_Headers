/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSNetServiceBrowserDelegate <NSObject>
@optional
-(void)netServiceBrowserWillSearch:(id)arg1;
-(void)netServiceBrowserDidStopSearch:(id)arg1;
-(void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2;
-(void)netServiceBrowser:(id)arg1 didFindDomain:(id)arg2 moreComing:(BOOL)arg3;
-(void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3;
-(void)netServiceBrowser:(id)arg1 didRemoveDomain:(id)arg2 moreComing:(BOOL)arg3;
-(void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3;

@end

