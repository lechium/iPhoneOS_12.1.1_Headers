/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSExpression, NSString;

@interface NSPropertyTransform : NSObject <NSSecureCoding> {

	NSExpression* _valueExpression;
	NSString* _propertyName;
	NSPropertyTransform* _prerequisiteTransform;
	BOOL _replaceMissingValueOnly;

}

@property (nonatomic,retain) NSString * propertyName;                                  //@synthesize propertyName=_propertyName - In the implementation block
@property (nonatomic,retain) NSExpression * valueExpression;                           //@synthesize valueExpression=_valueExpression - In the implementation block
@property (nonatomic,retain) NSPropertyTransform * prerequisiteTransform;              //@synthesize prerequisiteTransform=_prerequisiteTransform - In the implementation block
@property (assign) BOOL replaceMissingValueOnly;                                       //@synthesize replaceMissingValueOnly=_replaceMissingValueOnly - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithPropertyName:(id)arg1 valueExpression:(id)arg2 ;
-(void)setPrerequisiteTransform:(NSPropertyTransform *)arg1 ;
-(void)setReplaceMissingValueOnly:(BOOL)arg1 ;
-(void)setValueExpression:(NSExpression *)arg1 ;
-(NSExpression *)valueExpression;
-(void)setPropertyName:(NSString *)arg1 ;
-(NSPropertyTransform *)prerequisiteTransform;
-(BOOL)replaceMissingValueOnly;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)propertyName;
@end

