/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPAVRoutingControllerDelegate <NSObject>
@optional
-(void)routingControllerAvailableRoutesDidChange:(id)arg1;
-(void)routingController:(id)arg1 didFailToPickRouteWithError:(id)arg2;
-(void)routingController:(id)arg1 pickedRoutesDidChange:(id)arg2;
-(void)routingController:(id)arg1 pickedRouteDidChange:(id)arg2;
-(void)routingController:(id)arg1 shouldHijackRoute:(id)arg2 completion:(/*^block*/id)arg3;
-(void)routingController:(id)arg1 volumeControlAvailabilityDidChange:(BOOL)arg2;
-(void)routingControllerExternalScreenTypeDidChange:(id)arg1;
-(void)routingControllerDidPauseFromActiveRouteChange:(id)arg1;

@end
