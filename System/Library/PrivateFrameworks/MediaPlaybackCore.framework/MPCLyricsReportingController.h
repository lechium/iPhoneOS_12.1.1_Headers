/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ICEnvironmentMonitorObserver.h>

@class MPCJinglePlayActivityReportingController, MPCReportingPlaybackObserver, NSString;

@interface MPCLyricsReportingController : NSObject <ICEnvironmentMonitorObserver> {

	MPCJinglePlayActivityReportingController* _jinglePlayActivityReportingController;
	MPCReportingPlaybackObserver* _reportingPlaybackObserver;

}

@property (nonatomic,retain) MPCJinglePlayActivityReportingController * jinglePlayActivityReportingController;              //@synthesize jinglePlayActivityReportingController=_jinglePlayActivityReportingController - In the implementation block
@property (nonatomic,retain) MPCReportingPlaybackObserver * reportingPlaybackObserver;                                      //@synthesize reportingPlaybackObserver=_reportingPlaybackObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)environmentMonitorDidChangeNetworkType:(id)arg1 ;
-(void)recordLyricsViewEvent:(id)arg1 ;
-(MPCJinglePlayActivityReportingController *)jinglePlayActivityReportingController;
-(void)setJinglePlayActivityReportingController:(MPCJinglePlayActivityReportingController *)arg1 ;
-(MPCReportingPlaybackObserver *)reportingPlaybackObserver;
-(void)setReportingPlaybackObserver:(MPCReportingPlaybackObserver *)arg1 ;
-(id)init;
-(void)dealloc;
@end
