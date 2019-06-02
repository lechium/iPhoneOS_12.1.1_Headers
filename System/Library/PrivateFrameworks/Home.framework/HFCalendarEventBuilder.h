/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFEventBuilder.h>
#import <libobjc.A.dylib/HFTimeEventBuilder.h>

@class NSDate, NSDateComponents, NSString;

@interface HFCalendarEventBuilder : HFEventBuilder <HFTimeEventBuilder> {

	NSDate* _fireDate;
	NSDateComponents* _fireTimeComponents;

}

@property (nonatomic,copy) NSDate * fireDate;                                  //@synthesize fireDate=_fireDate - In the implementation block
@property (nonatomic,copy) NSDateComponents * fireTimeComponents;              //@synthesize fireTimeComponents=_fireTimeComponents - In the implementation block
@property (nonatomic,readonly) NSDate * effectiveFireDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithEvent:(id)arg1 ;
-(id)performValidation;
-(NSDate *)effectiveFireDate;
-(void)updateBaseFireDateForTrigger;
-(id)naturalLanguageNameOfType:(unsigned long long)arg1 withHome:(id)arg2 recurrences:(id)arg3 ;
-(id)buildNewEventFromCurrentState;
-(void)setFireTimeComponents:(NSDateComponents *)arg1 ;
-(id)effectiveFireTimeComponents;
-(NSDateComponents *)fireTimeComponents;
-(id)_fireDateForTimeComponents:(id)arg1 ;
-(NSString *)description;
-(void)setFireDate:(NSDate *)arg1 ;
-(NSDate *)fireDate;
@end

