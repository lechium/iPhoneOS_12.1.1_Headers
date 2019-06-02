/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ARSensor <NSObject>
@property (assign,nonatomic,__weak) id<ARSensorDelegate> delegate; 
@property (assign,nonatomic) unsigned long long powerUsage; 
@optional
-(unsigned long long)powerUsage;
-(void)setPowerUsage:(unsigned long long)arg1;

@required
-(unsigned long long)providedDataTypes;
-(void)setDelegate:(id)arg1;
-(id<ARSensorDelegate>)delegate;
-(void)stop;
-(void)start;

@end

