/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVVideoViewControllerSizeObserverFactory.h>

@protocol SVVideoViewControllerSizeObserverFactory <NSObject>
@required
-(id)createViewControllerSizeObserver;

@end


@protocol SVVideoViewControllerProviding;
@class NSString;

@interface SVVideoViewControllerSizeObserverFactory : NSObject <SVVideoViewControllerSizeObserverFactory> {

	id<SVVideoViewControllerProviding> _videoViewControllerProvider;

}

@property (nonatomic,readonly) id<SVVideoViewControllerProviding> videoViewControllerProvider;              //@synthesize videoViewControllerProvider=_videoViewControllerProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SVVideoViewControllerProviding>)videoViewControllerProvider;
-(id)initWithVideoViewControllerProvider:(id)arg1 ;
-(id)createViewControllerSizeObserver;
@end

