/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class SACalendar, NSString;

@interface SACalendarRange : AceObject <SAAceSerializable>

@property (nonatomic,retain) SACalendar * end; 
@property (nonatomic,retain) SACalendar * start; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)calendarRange;
+(id)calendarRangeWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(id)groupIdentifier;
-(SACalendar *)start;
-(void)setStart:(SACalendar *)arg1 ;
-(SACalendar *)end;
-(void)setEnd:(SACalendar *)arg1 ;
@end

