/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <Foundation/NSSortDescriptor.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CLLocation;

@interface CKLocationSortDescriptor : NSSortDescriptor <NSSecureCoding> {

	CLLocation* _relativeLocation;

}

@property (nonatomic,copy) CLLocation * relativeLocation;              //@synthesize relativeLocation=_relativeLocation - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)compareObject:(id)arg1 toObject:(id)arg2 ;
-(void)setRelativeLocation:(CLLocation *)arg1 ;
-(id)initWithKey:(id)arg1 relativeLocation:(id)arg2 ;
-(id)CKPropertiesDescription;
-(CLLocation *)relativeLocation;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

