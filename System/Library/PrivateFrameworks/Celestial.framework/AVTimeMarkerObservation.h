/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface AVTimeMarkerObservation : NSObject {

	id _observer;
	NSArray* _times;
	id _context;
	int _currentIndex;

}
-(id)initWithObserver:(id)arg1 times:(id)arg2 context:(id)arg3 currentIndex:(int)arg4 ;
-(BOOL)gotoTime:(double)arg1 ;
-(double)nextInterestingTime;
-(double)prevInterestingTime;
-(void)dealloc;
-(id)context;
-(id)observer;
-(int)currentIndex;
@end

