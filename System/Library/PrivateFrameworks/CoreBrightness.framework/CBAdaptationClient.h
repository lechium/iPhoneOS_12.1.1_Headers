/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BrightnessSystemClient;

@interface CBAdaptationClient : NSObject {

	BrightnessSystemClient* bsc;
	BOOL ownsClient;
	int _mode;
	BOOL _modeSet;
	BOOL _supported;

}

@property (assign) BOOL supported;              //@synthesize supported=_supported - In the implementation block
+(BOOL)supportsAdaptation;
-(id)initWithClientObj:(id)arg1 ;
-(BOOL)setWeakestAdaptationModeFromArray:(int*)arg1 withLength:(int)arg2 andPeriod:(float)arg3 ;
-(int)getAdaptationMode;
-(BOOL)animateFromWeakestAdaptationModeInArray:(int*)arg1 withLength:(int)arg2 toWeakestInArray:(int*)arg3 withLength:(int)arg4 withProgress:(float)arg5 andPeriod:(float)arg6 ;
-(BOOL)setAdaptationMode:(int)arg1 withPeriod:(float)arg2 ;
-(BOOL)overrideStrengths:(float*)arg1 forModes:(int*)arg2 nModes:(int)arg3 ;
-(BOOL)getStrengths:(float*)arg1 nStrengths:(int)arg2 ;
-(BOOL)getEnabled;
-(void)setSupported:(BOOL)arg1 ;
-(BOOL)supported;
-(id)init;
-(void)dealloc;
-(BOOL)setEnabled:(BOOL)arg1 ;
@end

