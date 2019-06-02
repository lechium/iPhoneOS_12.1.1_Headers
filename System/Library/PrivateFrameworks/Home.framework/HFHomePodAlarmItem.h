/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItem.h>
#import <libobjc.A.dylib/NAIdentifiable.h>

@protocol HFMediaProfileContainer;
@class MTAlarm, NSString;

@interface HFHomePodAlarmItem : HFItem <NAIdentifiable> {

	id<HFMediaProfileContainer> _mediaProfileContainer;
	MTAlarm* _alarm;
	NSString* _alarmIdentifier;

}

@property (nonatomic,copy) NSString * alarmIdentifier;                                         //@synthesize alarmIdentifier=_alarmIdentifier - In the implementation block
@property (nonatomic,copy) MTAlarm * alarm;                                                    //@synthesize alarm=_alarm - In the implementation block
@property (nonatomic,readonly) id<HFMediaProfileContainer> mediaProfileContainer;              //@synthesize mediaProfileContainer=_mediaProfileContainer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)na_identity;
-(unsigned long long)_effectiveLoadingStateForSuggestedLoadingState:(unsigned long long)arg1 ;
-(id)initWithMediaProfileContainer:(id)arg1 alarm:(id)arg2 ;
-(NSString *)alarmIdentifier;
-(void)setAlarmIdentifier:(NSString *)arg1 ;
-(MTAlarm *)alarm;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id<HFMediaProfileContainer>)mediaProfileContainer;
-(void)setAlarm:(MTAlarm *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)compare:(id)arg1 ;
@end

