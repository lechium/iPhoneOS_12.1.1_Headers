/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSPObject.h>

@class TSKAnnotationAuthor, NSDate;

@interface TSWPChangeSession : TSPObject {

	unsigned _sessionUID;
	TSKAnnotationAuthor* _author;
	NSDate* _date;

}

@property (assign,nonatomic) unsigned sessionUID; 
@property (nonatomic,retain) TSKAnnotationAuthor * author; 
@property (nonatomic,retain) NSDate * date; 
-(TSKAnnotationAuthor *)author;
-(void)setAuthor:(TSKAnnotationAuthor *)arg1 ;
-(void)setSessionUID:(unsigned)arg1 ;
-(unsigned)sessionUID;
-(BOOL)isEqualToSession:(id)arg1 ;
-(void)dealloc;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
@end

