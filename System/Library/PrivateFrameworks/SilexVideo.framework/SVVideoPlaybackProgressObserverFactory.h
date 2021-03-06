/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVVideoPlaybackProgressObserverFactory.h>

@protocol SVVideoPlaybackProgressObserverFactory <NSObject>
@required
-(id)createPlaybackProgressObserverForVideo:(id)arg1;

@end


@protocol SVVideoPeriodicTimeObserverFactory, SVVideoDurationObserverFactory;
@class NSString;

@interface SVVideoPlaybackProgressObserverFactory : NSObject <SVVideoPlaybackProgressObserverFactory> {

	id<SVVideoPeriodicTimeObserverFactory> _periodicTimeObserverFactory;
	id<SVVideoDurationObserverFactory> _durationObserverFactory;

}

@property (nonatomic,readonly) id<SVVideoPeriodicTimeObserverFactory> periodicTimeObserverFactory;              //@synthesize periodicTimeObserverFactory=_periodicTimeObserverFactory - In the implementation block
@property (nonatomic,readonly) id<SVVideoDurationObserverFactory> durationObserverFactory;                      //@synthesize durationObserverFactory=_durationObserverFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)createPlaybackProgressObserverForVideo:(id)arg1 ;
-(id<SVVideoPeriodicTimeObserverFactory>)periodicTimeObserverFactory;
-(id<SVVideoDurationObserverFactory>)durationObserverFactory;
-(id)initWithPeriodicTimeObserverFactory:(id)arg1 durationObserverFactory:(id)arg2 ;
@end

