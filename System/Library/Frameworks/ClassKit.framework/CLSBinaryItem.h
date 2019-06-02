/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassKit/CLSActivityItem.h>

@interface CLSBinaryItem : CLSActivityItem {

	BOOL _value;
	long long _valueType;

}

@property (assign,nonatomic) long long valueType;              //@synthesize valueType=_valueType - In the implementation block
@property (assign,nonatomic) BOOL value; 
+(BOOL)supportsSecureCoding;
-(long long)valueType;
-(void)setValueType:(long long)arg1 ;
-(id)initWithIdentifier:(id)arg1 title:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 title:(id)arg2 type:(long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)value;
-(void)setValue:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(id)_init;
@end
