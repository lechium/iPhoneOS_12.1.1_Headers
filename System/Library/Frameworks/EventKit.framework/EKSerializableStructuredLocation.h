/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKSerializableObject.h>

@class CalLocation;

@interface EKSerializableStructuredLocation : EKSerializableObject {

	CalLocation* _calLocation;

}

@property (nonatomic,copy) CalLocation * calLocation;              //@synthesize calLocation=_calLocation - In the implementation block
+(id)classesForKey;
-(id)initWithStructuredLocation:(id)arg1 ;
-(id)createStructuredLocation;
-(void)setCalLocation:(CalLocation *)arg1 ;
-(CalLocation *)calLocation;
@end

