/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVVisibilityMonitorFactory.h>

@protocol SVVideoVisiblePercentageManager;
@class NSString;

@interface SVVideoVisibilityMonitorFactory : NSObject <SVVisibilityMonitorFactory> {

	id<SVVideoVisiblePercentageManager> _videoVisiblePercentageManager;

}

@property (nonatomic,readonly) id<SVVideoVisiblePercentageManager> videoVisiblePercentageManager;              //@synthesize videoVisiblePercentageManager=_videoVisiblePercentageManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)createVisibilityMonitorForVideo:(id)arg1 ;
-(id)initWithVideoVisiblePercentageManager:(id)arg1 ;
-(id<SVVideoVisiblePercentageManager>)videoVisiblePercentageManager;
@end
