/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WeatherUI.framework/WeatherUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, CALayer;

@interface WUIDynamicWeatherBackgroundInteractiveTransaction : NSObject {

	double _progress;
	NSArray* _layers;
	CALayer* _toLayer;
	long long _swipeDirection;

}

@property (assign,nonatomic) double progress;                       //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) NSArray * layers;                      //@synthesize layers=_layers - In the implementation block
@property (assign,nonatomic) CALayer * toLayer;                     //@synthesize toLayer=_toLayer - In the implementation block
@property (assign,nonatomic) long long swipeDirection;              //@synthesize swipeDirection=_swipeDirection - In the implementation block
-(void)setLayers:(NSArray *)arg1 ;
-(long long)swipeDirection;
-(CALayer *)toLayer;
-(void)setToLayer:(CALayer *)arg1 ;
-(void)setSwipeDirection:(long long)arg1 ;
-(void)setProgress:(double)arg1 ;
-(double)progress;
-(NSArray *)layers;
@end

