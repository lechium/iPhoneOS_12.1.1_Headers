/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSSMutablePropertySet;

@interface TSSPropertySetChangeDetails : NSObject {

	TSSMutablePropertySet* mChangedProperties;

}
-(id)initWithChangedProperties:(id)arg1 ;
-(void)addChangedProperty:(int)arg1 ;
-(void)addChangedProperties:(id)arg1 ;
-(id)changedProperties;
-(id)init;
-(void)dealloc;
@end
