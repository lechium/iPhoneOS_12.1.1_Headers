/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItem.h>
#import <libobjc.A.dylib/HFConditionItem.h>

@class HFCondition, NSString;

@interface HFUnknownConditionItem : HFItem <HFConditionItem> {

	HFCondition* _condition;

}

@property (nonatomic,readonly) HFCondition * condition;              //@synthesize condition=_condition - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)init;
-(id)initWithCondition:(id)arg1 ;
-(HFCondition *)condition;
@end

