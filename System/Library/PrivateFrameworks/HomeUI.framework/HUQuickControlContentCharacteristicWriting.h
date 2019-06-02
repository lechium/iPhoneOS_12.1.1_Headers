/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSSet;


@protocol HUQuickControlContentCharacteristicWriting <NSObject>
@property (assign,nonatomic,__weak) id<HUQuickControlContentCharacteristicWritingDelegate> characteristicWritingDelegate; 
@property (nonatomic,copy,readonly) NSSet * affectedCharacteristics; 
@required
-(id)overrideValueForCharacteristic:(id)arg1;
-(NSSet *)affectedCharacteristics;
-(void)setCharacteristicWritingDelegate:(id)arg1;
-(id<HUQuickControlContentCharacteristicWritingDelegate>)characteristicWritingDelegate;

@end

