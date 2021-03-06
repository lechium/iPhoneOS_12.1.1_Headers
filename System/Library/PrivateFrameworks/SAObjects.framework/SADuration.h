/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSNumber;

@interface SADuration : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * unit; 
@property (nonatomic,copy) NSNumber * value; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)durationWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)duration;
-(id)encodedClassName;
-(id)groupIdentifier;
-(NSString *)unit;
-(void)setUnit:(NSString *)arg1 ;
-(NSNumber *)value;
-(void)setValue:(NSNumber *)arg1 ;
@end

