/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenReaderCore/ScreenReaderCore-Structs.h>
#import <ScreenReaderCore/SCRCGestureFinger.h>

@interface SCRCGestureStylus : SCRCGestureFinger {

	double _altitude;
	double _azimuth;

}
-(double)altitude;
-(double)azimuth;
-(id)initWithIdentifier:(unsigned long long)arg1 location:(CGPoint)arg2 pressure:(double)arg3 altitude:(double)arg4 azimuth:(double)arg5 ;
-(unsigned long long)type;
@end
