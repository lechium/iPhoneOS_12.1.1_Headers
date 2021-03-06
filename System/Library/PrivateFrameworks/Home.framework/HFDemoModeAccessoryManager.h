/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HFCharacteristicValueSource;
@class NSArray;

@interface HFDemoModeAccessoryManager : NSObject {

	id<HFCharacteristicValueSource> _valueSource;
	NSArray* _demoAccessories;

}

@property (nonatomic,retain) NSArray * demoAccessories;                                  //@synthesize demoAccessories=_demoAccessories - In the implementation block
@property (nonatomic,readonly) id<HFCharacteristicValueSource> valueSource;              //@synthesize valueSource=_valueSource - In the implementation block
+(id)accessoryProfileName:(id)arg1 ;
+(BOOL)isInternalAccessoryType:(id)arg1 ;
+(BOOL)isValidExternalType:(id)arg1 ;
+(id)profileURLForDemoModeAccessoryName:(id)arg1 ;
+(id)configurationProfileFromAccessoryType:(id)arg1 ;
+(id)accessoryWithContentsOfDictionary:(id)arg1 forHome:(id)arg2 ;
+(id)demoModeDirectoryURL;
+(id)imageIconDescriptorFromDictionary:(id)arg1 ;
+(BOOL)isPressDemoModeEnabled;
+(id)sharedManager;
-(id)initWithNullValueSource:(id)arg1 ;
-(void)saveAccessories;
-(void)dispatchUpdateMessageForAccessory:(id)arg1 ;
-(id<HFCharacteristicValueSource>)valueSource;
-(NSArray *)demoAccessories;
-(id)accessories;
-(void)setDemoAccessories:(NSArray *)arg1 ;
@end

