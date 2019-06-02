/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BrightnessSystemClient, CBBlueLightClient, CBAdaptationClient;

@interface CBClient : NSObject {

	BrightnessSystemClient* bsc;
	CBBlueLightClient* _blueLightClient;
	CBAdaptationClient* _adaptationClient;

}

@property (readonly) CBBlueLightClient * blueLightClient;                //@synthesize blueLightClient=_blueLightClient - In the implementation block
@property (readonly) CBAdaptationClient * adaptationClient;              //@synthesize adaptationClient=_adaptationClient - In the implementation block
+(BOOL)supportsBlueLightReduction;
+(BOOL)supportsAdaptation;
-(CBAdaptationClient *)adaptationClient;
-(CBBlueLightClient *)blueLightClient;
-(id)init;
-(void)dealloc;
@end

