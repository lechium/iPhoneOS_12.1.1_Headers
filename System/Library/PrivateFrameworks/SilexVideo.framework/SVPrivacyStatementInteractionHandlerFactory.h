/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVVideoInteractionHandlerFactory.h>

@protocol SVVideoProviderProviding, SVVideoPlaybackController;
@class NSString;

@interface SVPrivacyStatementInteractionHandlerFactory : NSObject <SVVideoInteractionHandlerFactory> {

	id<SVVideoProviderProviding> _videoProviderProviding;
	id<SVVideoPlaybackController> _playbackController;

}

@property (nonatomic,readonly) id<SVVideoProviderProviding> videoProviderProviding;              //@synthesize videoProviderProviding=_videoProviderProviding - In the implementation block
@property (nonatomic,readonly) id<SVVideoPlaybackController> playbackController;                 //@synthesize playbackController=_playbackController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SVVideoPlaybackController>)playbackController;
-(id)createInteractionHandlerForVideo:(id)arg1 ;
-(id<SVVideoProviderProviding>)videoProviderProviding;
-(id)initWithVideoProviderProviding:(id)arg1 playbackController:(id)arg2 ;
@end

