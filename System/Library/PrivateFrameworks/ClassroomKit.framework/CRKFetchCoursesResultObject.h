/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSArray;

@interface CRKFetchCoursesResultObject : CATTaskResultObject {

	NSArray* _courses;

}

@property (nonatomic,copy) NSArray * courses;              //@synthesize courses=_courses - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)courses;
-(void)setCourses:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

