/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFControlItem.h>
#import <libobjc.A.dylib/HFTogglableControlItem.h>

@protocol HFMediaValueSource;
@class NSString;

@interface HFMediaControlItem : HFControlItem <HFTogglableControlItem> {

	id<HFMediaValueSource> _mediaValueSource;

}

@property (nonatomic,readonly) id<HFMediaValueSource> mediaValueSource;              //@synthesize mediaValueSource=_mediaValueSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)valueClass;
-(long long)sortPriority;
-(id)initWithValueSource:(id)arg1 displayResults:(id)arg2 ;
-(id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3 ;
-(id)readValueAndPopulateStandardResults;
-(id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2 ;
-(id)valueForCharacteristicValues:(id)arg1 ;
-(id<HFMediaValueSource>)mediaValueSource;
-(id)toggleValue;
-(id)writePrimaryState:(long long)arg1 ;
-(id)togglePrimaryState;
-(id)normalizedValueForValue:(id)arg1 ;
-(id)characteristicValuesForValue:(id)arg1 ;
-(id)writeValue:(id)arg1 ;
@end

