/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXActionFactory.h>

@protocol SXDateParser;
@class NSString;

@interface SXCalendarEventActionFactory : NSObject <SXActionFactory> {

	id<SXDateParser> _dateParser;

}

@property (nonatomic,readonly) id<SXDateParser> dateParser;              //@synthesize dateParser=_dateParser - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)actionForURL:(id)arg1 ;
-(id)actionForAddition:(id)arg1 ;
-(id)actionForStartDate:(id)arg1 endDate:(id)arg2 ;
-(id<SXDateParser>)dateParser;
-(id)initWithDateParser:(id)arg1 ;
@end
