/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVVideoSkipLockObserverFactory.h>

@protocol SVVideoSkipLockObserverFactory <NSObject>
@required
-(id)createSkipLockObserverForVideo:(id)arg1;

@end


@protocol SVVideoSkipThresholdObserverFactory;
@class SVTimeline, NSString;

@interface SVVideoSkipLockObserverFactory : NSObject <SVVideoSkipLockObserverFactory> {

	SVTimeline* _timeline;
	id<SVVideoSkipThresholdObserverFactory> _thresholdObserverFactory;

}

@property (nonatomic,readonly) SVTimeline * timeline;                                                         //@synthesize timeline=_timeline - In the implementation block
@property (nonatomic,readonly) id<SVVideoSkipThresholdObserverFactory> thresholdObserverFactory;              //@synthesize thresholdObserverFactory=_thresholdObserverFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SVTimeline *)timeline;
-(id)createSkipLockObserverForVideo:(id)arg1 ;
-(id<SVVideoSkipThresholdObserverFactory>)thresholdObserverFactory;
-(id)initWithTimeline:(id)arg1 thresholdObserverFactory:(id)arg2 ;
@end
